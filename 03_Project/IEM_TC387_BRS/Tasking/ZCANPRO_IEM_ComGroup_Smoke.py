# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO Com signal-group RX smoke (阶段5 组信号观测)

用法：
  1. 刷 FwStamp 0x260B0536；ACAN 500k；UDE watches Appl_ComGroup_*
  2. 运行本脚本；看 Trace 0x76/0x56/0x84
  3. UDE：AnyOk=1 OkCnt↑；VehSpdLgtCntr / VehModCntr / TqAllwdCntr 变化

帧（DBC ID）：
  0x76 VddmPropFr05  igVehSpdLgt
  0x56 VddmPropFr18  igVehModMngtGlbSafe1
  0x84 EcmPropFr05   igWhlMotSysTqAllwd

Payload 为观测用简化填充（cntr 递增）；不校验 E2E checksum。
"""

from __future__ import print_function

import time
import zcanpro

VEHSPD_ID = 0x76
VEHMOD_ID = 0x56
TQALLWD_ID = 0x84

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


def tx(bus_id, can_id, data, tag):
    frm = [{"can_id": can_id, "is_canfd": 0, "canfd_brs": 0, "data": list(data)}]
    ok = zcanpro.transmit(bus_id, frm)
    zcanpro.write_log("Tx 0x%03X %s %s ret=%s" % (can_id, tag, _hex_list(data), str(ok)))
    return ok


def pack_cycle(n):
    """Build 3 frames; match Com bit positions + set UpdateBits (else Com keeps init)."""
    c = n & 0x0F
    # 0x84 EcmPropFr05 / igWhlMotSysTqAllwd
    #   Cntr @bit0 len4 (low nibble b0), TqAllwd @bit4 len2, UB @bit6
    tq = [0x40 | 0x30 | c, 0xA5, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00]
    # 0x56 VddmPropFr18 / igVehModMngtGlbSafe1 (already worked: UB@bit32 via data[4] bit0)
    #   Cntr high nibble b1, UsgModSts low nibble b1
    mod = [0x5A, ((c & 0x0F) << 4) | 0x05, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66]
    # 0x76 VddmPropFr05 / igVehSpdLgt
    #   UB @bit39 = data[4] bit7; Cntr @bits63..60 = data[7] high nibble; Qf @bits59..58
    spd = [0x00, 0x00, 0x00, 0x00, 0x80, 0x34, 0x56, ((c & 0x0F) << 4) | 0x0C]
    return spd, mod, tq


def burst(bus_id, seconds=2.5, period_s=0.1):
    deadline = time.time() + seconds
    n = 0
    while time.time() < deadline and not stopTask:
        spd, mod, tq = pack_cycle(n)
        if not tx(bus_id, VEHSPD_ID, spd, "VehSpdLgt"):
            return False
        if not tx(bus_id, VEHMOD_ID, mod, "VehMod"):
            return False
        if not tx(bus_id, TQALLWD_ID, tq, "TqAllwd"):
            return False
        n += 1
        time.sleep(period_s)
    zcanpro.write_log("burst done: %d cycles" % n)
    return n > 0


def run_cases(bus_id):
    global pass_cnt, fail_cnt
    pass_cnt = 0
    fail_cnt = 0

    zcanpro.write_log("=== ComGroup RX TX 0x76/0x56/0x84 ===")
    zcanpro.write_log("WATCH: Appl_ComGroup_AnyOk==1 OkCnt↑ Cntrs change; FwStamp=0x260B0536")
    if not burst(bus_id):
        fail_cnt += 1
        zcanpro.write_log("FAIL  TX burst")
        return False
    pass_cnt += 1
    zcanpro.write_log("PASS  TX burst (confirm UDE Appl_ComGroup_*)")
    zcanpro.write_log("=== DONE pass=%d fail=%d ===" % (pass_cnt, fail_cnt))
    return fail_cnt == 0


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_ComGroup_Smoke start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
