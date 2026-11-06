# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO bench slice T2 / T4 / T6

T2: 0x3E 正响应；UDE 看 Appl_Diag_ReadyApproxMs << 2500
T4: 提示 Trace 确认 NM 0x51C；UDE Appl_Can_NmOk=1
T6: 物理 0x737/0x637 + OBD 0x7E3/0x7EB 各一条 0x3E

用法：ACAN 500k；扩展脚本打开本文件运行。
"""

from __future__ import print_function

import zcanpro

PHYS_REQ = 0x737
PHYS_RES = 0x637
OBD_REQ = 0x7E3
OBD_RES = 0x7EB

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


def uds_req(bus_id, src, dst, sid, data):
    req = {
        "src_addr": src,
        "dst_addr": dst,
        "suppress_response": 0,
        "sid": sid,
        "data": list(data),
    }
    zcanpro.write_log("[UDS Tx] %03X→%03X %02X %s" % (src, dst, sid, _hex_list(data)))
    resp = zcanpro.uds_request(bus_id, req)
    if not resp.get("result"):
        zcanpro.write_log("  !! no response: " + str(resp.get("result_msg")))
        return None
    payload = list(resp.get("data") or [])
    zcanpro.write_log("[UDS Rx] " + _hex_list(payload))
    return payload


def expect_pos(name, payload, pos_sid):
    global pass_cnt, fail_cnt
    if payload is None:
        fail_cnt += 1
        zcanpro.write_log("FAIL  %s (no resp)" % name)
        return False
    if len(payload) >= 1 and payload[0] == (pos_sid + 0x40):
        pass_cnt += 1
        zcanpro.write_log("PASS  %s" % name)
        return True
    fail_cnt += 1
    zcanpro.write_log("FAIL  %s unexpected: %s" % (name, _hex_list(payload)))
    return False


def run_cases(bus_id):
    global pass_cnt, fail_cnt
    pass_cnt = 0
    fail_cnt = 0

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

    zcanpro.write_log("=== T2 / T6 phys: 0x3E on 0x737/0x637 ===")
    zcanpro.write_log("WATCH: Appl_Diag_ReadyApproxMs << 2500 (board already ~500)")
    expect_pos("T2/T6-phys TesterPresent",
               uds_req(bus_id, PHYS_REQ, PHYS_RES, 0x3E, [0x00]), 0x3E)

    zcanpro.write_log("=== T6 OBD: 0x3E on 0x7E3/0x7EB ===")
    expect_pos("T6-OBD TesterPresent",
               uds_req(bus_id, OBD_REQ, OBD_RES, 0x3E, [0x00]), 0x3E)

    zcanpro.uds_deinit()

    zcanpro.write_log("=== T4 NM (manual Trace / UDE) ===")
    zcanpro.write_log("CONFIRM Trace: ECU TX 0x51C periodic")
    zcanpro.write_log("CONFIRM UDE: Appl_Can_NmOk=1 Appl_Can_NmState=NORMAL_OPERATION")
    zcanpro.write_log("OPTIONAL: inject foreign NM in 0x500..0x53F; CanNm RX path alive")
    pass_cnt += 1
    zcanpro.write_log("PASS  T4 checklist logged (confirm Trace/UDE manually)")

    zcanpro.write_log("=== DONE pass=%d fail=%d ===" % (pass_cnt, fail_cnt))
    return fail_cnt == 0


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_Bench_T246 start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus — ACAN 500k first")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
