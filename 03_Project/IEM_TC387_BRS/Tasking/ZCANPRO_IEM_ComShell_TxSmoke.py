# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ComShell TX presence smoke (标量壳已在总线上)

FwStamp >= 0x260B053E. ACAN 500k.
UDE: Appl_ComShell_StepCnt / TxOkCnt / ModSts / Udc 应随时间变
Trace: 至少见到 NM 0x51C + IEM TX 0x4C (IemEduPropFr01 / WhlMotSysModSts)

本脚本不强制 RX 解析（ZCANPRO 扩展脚本以 TX/UDS 为主）；
PASS 条件：能发 TesterPresent + 日志提示 Trace/UDE 确认 TX 存活。
"""

from __future__ import print_function

import time
import zcanpro

PHYS_REQ = 0x737
PHYS_RES = 0x637

# Key IEM TX IDs (11-bit) for Trace checklist
TX_EXPECT = [
    (0x51C, "NM IemPropNMFr"),
    (0x04C, "IemEduPropFr01 ModSts+TqEst group (053F+ Cntr poke)"),
    (0x060, "IemEduPropFr02"),
    (0x110, "IemPropdTCFr16 DmcStsRear Cntr (053F+)"),
    (0x189, "IemPropFr12 SpdActSafe Cntr (053F+)"),
    (0x457, "IemPropFr01"),
    (0x465, "IemPropFr02"),
]

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


def uds_3e(bus_id):
    global pass_cnt, fail_cnt
    req = {
        "src_addr": PHYS_REQ,
        "dst_addr": PHYS_RES,
        "suppress_response": 0,
        "sid": 0x3E,
        "data": [0x00],
    }
    zcanpro.uds_init({
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
    })
    resp = zcanpro.uds_request(bus_id, req)
    zcanpro.uds_deinit()
    if not resp.get("result"):
        fail_cnt += 1
        zcanpro.write_log("FAIL  0x3E (bus/stack down)")
        return False
    payload = list(resp.get("data") or [])
    zcanpro.write_log("[UDS Rx] " + _hex_list(payload))
    if payload and payload[0] == 0x7E:
        pass_cnt += 1
        zcanpro.write_log("PASS  phys 0x3E — stack alive for TX window")
        return True
    fail_cnt += 1
    zcanpro.write_log("FAIL  unexpected 0x3E resp")
    return False


def run_cases(bus_id):
    global pass_cnt, fail_cnt
    pass_cnt = 0
    fail_cnt = 0

    zcanpro.write_log("=== ComShell TX smoke ===")
    zcanpro.write_log("WATCH: Appl_ComShell_StepCnt↑ TxOkCnt↑ ModSts/Udc living")
    zcanpro.write_log("TRACE expect (confirm manually):")
    for can_id, tag in TX_EXPECT:
        zcanpro.write_log("  0x%03X  %s" % (can_id, tag))

    if not uds_3e(bus_id):
        return False

    zcanpro.write_log("Hold 2s — watch Trace for 0x51C + 0x4C while StepCnt rises")
    t0 = time.time()
    while (time.time() - t0) < 2.0 and not stopTask:
        time.sleep(0.2)

    pass_cnt += 1
    zcanpro.write_log("PASS  TX checklist logged — confirm Trace 0x51C/0x4C + UDE TxOkCnt")
    zcanpro.write_log("=== DONE pass=%d fail=%d ===" % (pass_cnt, fail_cnt))
    return fail_cnt == 0


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_ComShell_TxSmoke start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
