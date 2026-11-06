# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO CarConfig CCP smoke (0539+)

用法（ZCANPRO）：
  1. ACAN 500k；FwStamp=0x260B0539
  2. UDE: LastBlkId/LastBytes/LastCcpNum/ValidateOkCnt/FaultCount/State
  3. 本脚本：先合法 CCP → E103 count=0；再 CCP#1=0xFF → FaultCount>=1

帧：
  0x235 VehCfgPrm    BlkID=0x01 → CCP#1..7 = data[1..7]
  0x236 VehCfgPrmExt BlkID=0x02 → CCP#8..14（demo 表白名单未订，只影子）
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


def tx_vehcfg(bus_id, can_id, blk_id, ccp_bytes, tag):
    data = [blk_id] + list(ccp_bytes)
    while len(data) < 8:
        data.append(0x00)
    frm = [{"can_id": can_id, "is_canfd": 0, "canfd_brs": 0, "data": data[:8]}]
    ok = zcanpro.transmit(bus_id, frm)
    zcanpro.write_log("Tx 0x%03X %s BlkID=0x%02X data=%s ret=%s" % (
        can_id, tag, blk_id, _hex_list(data[:8]), str(ok)))
    return ok


def burst(bus_id, prm_bytes, ext_bytes, seconds=2.0, period_s=0.1, tag=""):
    deadline = time.time() + seconds
    n = 0
    while time.time() < deadline and not stopTask:
        if not tx_vehcfg(bus_id, VEHCFG_ID, BLK_ID, prm_bytes, "Prm" + tag):
            return False
        if not tx_vehcfg(bus_id, VEHCFG_EXT_ID, EXT_BLK_ID, ext_bytes, "Ext" + tag):
            return False
        n += 1
        time.sleep(period_s)
    zcanpro.write_log("burst %s done: %d cycles" % (tag, n))
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


def expect_e103(bus_id, expect_count_min, expect_count_max, label):
    global pass_cnt, fail_cnt
    payload = uds_req(bus_id, 0x22, [0xE1, 0x03])
    if payload is None or len(payload) < 4 or payload[0] != 0x62:
        fail_cnt += 1
        zcanpro.write_log("FAIL  %s ReadDID E103" % label)
        return False
    count = payload[3]
    if expect_count_min <= count <= expect_count_max:
        pass_cnt += 1
        zcanpro.write_log("PASS  %s E103 count=%d" % (label, count))
        return True
    fail_cnt += 1
    zcanpro.write_log("FAIL  %s E103 count=%d (expect %d..%d)" % (
        label, count, expect_count_min, expect_count_max))
    return False


def run_cases(bus_id):
    global pass_cnt, fail_cnt
    pass_cnt = 0
    fail_cnt = 0

    good = [0x10, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70]
    ext = [0x11, 0x22, 0x33, 0x44, 0x55, 0x66, 0x77]
    bad = [0xFF, 0x20, 0x30, 0x40, 0x50, 0x60, 0x70]

    zcanpro.write_log("=== CarConfig CCP good (CCP#1..7 in 0..0x7F) ===")
    zcanpro.write_log("WATCH: LastBytes=10..70 LastCcpNum=1..7 ValidateOkCnt↑ State=1")
    if not burst(bus_id, good, ext, tag="-good"):
        fail_cnt += 1
        zcanpro.write_log("FAIL  good burst")
        return False
    pass_cnt += 1
    zcanpro.write_log("PASS  good burst — confirm UDE LastBytes / ValidateOkCnt")

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
    expect_e103(bus_id, 0, 0, "after-good")

    zcanpro.write_log("=== CarConfig CCP bad (CCP#1=0xFF) ===")
    zcanpro.write_log("WATCH: FaultCount>=1 State=2 ValidateFailCnt↑")
    if not burst(bus_id, bad, ext, seconds=1.5, tag="-bad"):
        fail_cnt += 1
        zcanpro.write_log("FAIL  bad burst")
        zcanpro.uds_deinit()
        return False
    pass_cnt += 1
    zcanpro.write_log("PASS  bad burst — confirm UDE FaultCount / State=2")
    expect_e103(bus_id, 1, 10, "after-bad")
    zcanpro.uds_deinit()

    zcanpro.write_log("HINT: ClearFaults() then re-run good to restore State=1")
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
