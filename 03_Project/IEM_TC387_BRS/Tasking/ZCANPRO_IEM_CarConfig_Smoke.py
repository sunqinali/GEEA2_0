# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO CarConfig BlkID smoke (阶段5 CCP 壳)

用法（ZCANPRO）：
  1. ACAN 经典 CAN 500 kbit/s，ECU 已跑（建议 FwStamp=0x260B0535）
  2. UDE 加 watches：Appl_CarConfig_LastBlkId / State / PassedOnce / RxCnt
  3. 扩展脚本打开本文件 → 运行；看 Trace 0x235/0x236 与日志 PASS

帧（DBC Motorola 整字节，data[0]=BlkID）：
  0x235 VddmPropFr06  igVehCfgPrm     BlkID=0x01
  0x236 VddmPropFr26  igVehCfgPrmExt  BlkID=0x02

验收（UDE）：
  LastBlkId=0x01, LastExtBlkId=0x02, State=1(VALID), PassedOnce=1, RxCnt>=1
  0x22 E103 仍正响应且 count=0（未 InjectError）
"""

from __future__ import print_function

import time
import zcanpro

PHYS_REQ = 0x737
PHYS_RES = 0x637
VEHCFG_ID = 0x235
VEHCFG_EXT_ID = 0x236
BLK_ID = 0x01
EXT_BLK_ID = 0x02

stopTask = False
pass_cnt = 0
fail_cnt = 0


def z_notify(type, obj):
    zcanpro.write_log("Notify " + str(type) + " " + str(obj))
    if type == "stop":
        global stopTask
        stopTask = True


def _hex_list(data):
    return " ".join("{:02X}".format(a) for a in data)


def tx_vehcfg(bus_id, can_id, blk_id, tag):
    # data[0]=BlkID; bytes 1..7 = CCP placeholders (ignored until CcpTable filled)
    data = [blk_id, 0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70]
    frm = [{
        "can_id": can_id,
        "is_canfd": 0,
        "canfd_brs": 0,
        "data": data,
    }]
    ok = zcanpro.transmit(bus_id, frm)
    zcanpro.write_log("Tx 0x%03X %s BlkID=0x%02X data=%s ret=%s" % (
        can_id, tag, blk_id, _hex_list(data), str(ok)))
    return ok


def burst_vehcfg(bus_id, seconds=2.0, period_s=0.1):
    """Periodic TX so deferred Com MainFunctionRx + CanStack sample catch it."""
    deadline = time.time() + seconds
    n = 0
    while time.time() < deadline and not stopTask:
        if not tx_vehcfg(bus_id, VEHCFG_ID, BLK_ID, "VehCfgPrm"):
            return False
        if not tx_vehcfg(bus_id, VEHCFG_EXT_ID, EXT_BLK_ID, "VehCfgPrmExt"):
            return False
        n += 1
        time.sleep(period_s)
    zcanpro.write_log("burst done: %d cycles (~%.1fs)" % (n, seconds))
    return n > 0


def uds_req(bus_id, sid, data):
    req = {
        "src_addr": PHYS_REQ,
        "dst_addr": PHYS_RES,
        "suppress_response": 0,
        "sid": sid,
        "data": list(data),
    }
    zcanpro.write_log("[UDS Tx] %02X %s" % (sid, _hex_list(data)))
    resp = zcanpro.uds_request(bus_id, req)
    if not resp.get("result"):
        zcanpro.write_log("  !! no response: " + str(resp.get("result_msg")))
        return None
    payload = list(resp.get("data") or [])
    zcanpro.write_log("[UDS Rx] " + _hex_list(payload))
    return payload


def expect_e103_zero_faults(bus_id):
    global pass_cnt, fail_cnt
    payload = uds_req(bus_id, 0x22, [0xE1, 0x03])
    if payload is None or len(payload) < 4 or payload[0] != 0x62:
        fail_cnt += 1
        zcanpro.write_log("FAIL  ReadDID E103 (no positive)")
        return False
    # 62 E1 03 | count | ...
    count = payload[3] if len(payload) > 3 else 0xFF
    if count == 0:
        pass_cnt += 1
        zcanpro.write_log("PASS  E103 fault count=0")
        return True
    fail_cnt += 1
    zcanpro.write_log("FAIL  E103 fault count=%d (expected 0 before InjectError)" % count)
    return False


def run_cases(bus_id):
    global pass_cnt, fail_cnt
    pass_cnt = 0
    fail_cnt = 0

    zcanpro.write_log("=== CarConfig BlkID TX 0x235/0x236 ===")
    zcanpro.write_log("WATCH: Appl_CarConfig_LastBlkId==0x01 LastExtBlkId==0x02 State==1 PassedOnce==1")
    if not burst_vehcfg(bus_id):
        fail_cnt += 1
        zcanpro.write_log("FAIL  VehCfg TX burst")
        return False
    pass_cnt += 1
    zcanpro.write_log("PASS  VehCfg TX burst (confirm Trace + UDE watches)")

    uds_cfg = {
        "response_timeout_ms": 3000,
        "use_canfd": 0,
        "canfd_brs": 0,
        "trans_ver": 0,
        "fill_byte": 0x00,
        "frame_type": 0,
        "trans_stmin_valid": 0,
        "trans_stmin": 0,
        "enhanced_timeout_ms": 5000,
        "fc_timeout_ms": 1000,
        "fill_mode": 1,
    }
    zcanpro.uds_init(uds_cfg)
    zcanpro.write_log("=== E103 after BlkID (count should stay 0) ===")
    expect_e103_zero_faults(bus_id)
    zcanpro.uds_deinit()

    zcanpro.write_log("HINT: manual InjectError() → Appl_Dem_CarConfigErrActive=1; ClearFaults() restore")
    zcanpro.write_log("=== DONE pass=%d fail=%d ===" % (pass_cnt, fail_cnt))
    return fail_cnt == 0


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_CarConfig_Smoke start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus — start USBCAN channel first (ACAN 500k)")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
