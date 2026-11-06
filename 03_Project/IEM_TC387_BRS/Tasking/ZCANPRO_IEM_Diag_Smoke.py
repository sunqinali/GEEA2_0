# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO UDS smoke (里程碑 E)

用法（ZCANPRO）：
  1. 打开设备通道，ACAN 经典 CAN 500 kbit/s，已能看到 ECU TX（含 0x51C）
  2. 菜单：扩展脚本 / 脚本 → 打开本文件 → 运行
  3. 看日志输出 PASS/FAIL；点停止会触发 z_notify("stop")

地址（CanIf）：
  物理请求 0x737  VddmToIemPropDiagReq
  物理响应 0x637  IemToVddmPropDiagRes

用例：
  0x3E 00 TesterPresent
  0x10 01 DefaultSession
  0x10 03 ExtendedSession
  0x22 F120 PartNumber
  0x22 E103 CarConfig fault list
"""

from __future__ import print_function

import time
import zcanpro

# --- IEM PropulsionCAN physical diagnostic ---
PHYS_REQ = 0x737
PHYS_RES = 0x637

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


def uds_req(bus_id, sid, data, suppress=0):
    req = {
        "src_addr": PHYS_REQ,
        "dst_addr": PHYS_RES,
        "suppress_response": suppress,
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


def expect_positive(name, payload, pos_sid):
    global pass_cnt, fail_cnt
    if payload is None:
        fail_cnt += 1
        zcanpro.write_log("FAIL  %s (timeout/no resp)" % name)
        return False
    if len(payload) >= 1 and payload[0] == (pos_sid + 0x40):
        pass_cnt += 1
        zcanpro.write_log("PASS  %s" % name)
        return True
    if len(payload) >= 3 and payload[0] == 0x7F:
        fail_cnt += 1
        zcanpro.write_log("FAIL  %s NRC=0x%02X for SID=0x%02X" % (name, payload[2], payload[1]))
        return False
    fail_cnt += 1
    zcanpro.write_log("FAIL  %s unexpected: %s" % (name, _hex_list(payload)))
    return False


def raw_probe(bus_id):
    """Send ISO-TP SF TesterPresent padded to DLC=8; expect 0x637 response.
    CanIf diag Rx has DLC-Check=8 — unpadded short frames are dropped by ECU.
    """
    # Drain RX so we only count frames after our TX
    for _ in range(5):
        zcanpro.receive(bus_id)

    tx = [{
        "can_id": PHYS_REQ,
        "is_canfd": 0,
        "canfd_brs": 0,
        "data": [0x02, 0x3E, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00],
    }]
    zcanpro.write_log("RAW Tx 0x%03X: %s" % (PHYS_REQ, _hex_list(tx[0]["data"])))
    tx_ret = zcanpro.transmit(bus_id, tx)
    zcanpro.write_log("transmit()=%s (1=ok) — NOW check Trace for TX 0x737" % str(tx_ret))
    if not tx_ret:
        zcanpro.write_log("FAIL  raw transmit()")
        return False

    deadline = time.time() + 1.0
    saw_any = 0
    saw_nm = 0
    saw_echo = 0
    id_sample = []
    while time.time() < deadline and not stopTask:
        ok, frms = zcanpro.receive(bus_id)
        if not ok:
            time.sleep(0.01)
            continue
        for f in frms:
            saw_any += 1
            cid = f.get("can_id", 0) & 0x7FF
            if len(id_sample) < 12 and cid not in id_sample:
                id_sample.append(cid)
            if cid == PHYS_RES:
                zcanpro.write_log("RAW Rx 0x%03X: %s" % (cid, _hex_list(f.get("data") or [])))
                return True
            if cid == PHYS_REQ:
                saw_echo += 1
            if cid == 0x51C:
                saw_nm += 1
        time.sleep(0.01)
    zcanpro.write_log(
        "FAIL  raw probe: no 0x%03X within 1s (rx_any=%d echo737=%d nm51C=%d ids=%s)"
        % (PHYS_RES, saw_any, saw_echo, saw_nm, ",".join("0x%03X" % i for i in id_sample))
    )
    zcanpro.write_log(
        "HINT: ECU(0534): FwStamp=0x260B0534; Appl_Diag_DcmInited=1; "
        "Appl_Diag_DcmComMFullNotified=1; DcmConfCnt rises if Dcm built a response."
    )
    return False


def run_cases(bus_id):
    global pass_cnt, fail_cnt, stopTask
    pass_cnt = 0
    fail_cnt = 0

    zcanpro.write_log("=== RAW probe (DLC=8 SF) ===")
    if not raw_probe(bus_id):
        zcanpro.write_log("HINT: In Trace, confirm 0x737 appears when script runs.")
        zcanpro.write_log("HINT: CanIf requires DLC=8 on diag; UDS fill_mode must pad.")

    # Classic CAN ISO-TP — MUST pad to 8 (CanIf DLC-Check)
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
        "fill_mode": 1,  # pad <8 to 8 bytes
    }
    zcanpro.uds_init(uds_cfg)
    zcanpro.write_log("=== IEM UDS smoke req=0x%03X res=0x%03X fill_mode=1 ===" % (PHYS_REQ, PHYS_RES))

    cases = [
        ("TesterPresent 0x3E 00", 0x3E, [0x00], 0x3E),
        ("DefaultSession 0x10 01", 0x10, [0x01], 0x10),
        ("ExtendedSession 0x10 03", 0x10, [0x03], 0x10),
        ("ReadDID F120", 0x22, [0xF1, 0x20], 0x22),
        ("ReadDID E103", 0x22, [0xE1, 0x03], 0x22),
    ]

    for name, sid, data, pos in cases:
        if stopTask:
            break
        payload = uds_req(bus_id, sid, data)
        expect_positive(name, payload, pos)
        time.sleep(0.05)

    zcanpro.write_log("=== DONE pass=%d fail=%d ===" % (pass_cnt, fail_cnt))
    zcanpro.uds_deinit()
    return fail_cnt == 0


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_Diag_Smoke start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus — start USBCAN channel first (ACAN 500k)")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
