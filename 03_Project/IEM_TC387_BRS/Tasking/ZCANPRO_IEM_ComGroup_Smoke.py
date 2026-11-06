# -*- coding: utf-8 -*-
"""IEM TC387 BRS — ZCANPRO Com RX signal-group smoke (10 Cntr groups)

FwStamp 0x260B0536+: Appl_ComGroup_HitMask expect 0x3FF after burst.
UDE: Appl_ComGroup_HitMask, Appl_ComGroup_Cntr[0..9], AnyOk, OkCnt
"""

from __future__ import print_function

import time
import zcanpro

stopTask = False


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
    if (can_id & 0xF) == 0 or tag.startswith("*"):
        zcanpro.write_log("Tx 0x%03X %s %s ret=%s" % (can_id, tag, _hex_list(data), str(ok)))
    return ok


def pack_all(n):
    """Best-effort Motorola packs: set UB + living Cntr (ignore E2E chks)."""
    c = n & 0x0F
    frames = []
    # 0x35 Crash: UB@5, Cntr@3..0
    frames.append((0x035, [0x20 | c, 0xA5, 0, 0, 0, 0, 0, 0], "Crash"))
    # 0x4B EngSt1: UB@31=b3bit7, Cntr@47..44=b5 high nibble (Com bit44)
    frames.append((0x04B, [0, 0, 0, 0x80, 0xA5, (c << 4), 0, 0], "EngSt1"))
    # 0x12E Esc: UB@4, Cntr@3..0
    frames.append((0x12E, [0x10 | c, 0xA5, 0x11, 0, 0, 0, 0, 0], "Esc"))
    # 0x141 HvRly: Cntr@b0 low; UB@bit22 = data[2] bit6 (Com UbMask 0x40 @ byte2)
    frames.append((0x141, [c, 0xA5, 0x40, 0, 0, 0, 0, 0], "HvRly"))
    # 0x41 PtTq: UB@20, Cntr@19..16 → byte2
    frames.append((0x041, [0, 0, 0x10 | c, 0xA5, 0, 0, 0, 0], "PtTq"))
    # 0x11A Stc: UB@4, Cntr@3..0
    frames.append((0x11A, [0x10 | c, 0xA5, 0, 0, 0, 0, 0, 0], "Stc"))
    # 0x56 VehMod: UB@32 via data[4] bit0; Cntr high nibble b1
    frames.append((0x056, [0x5A, (c << 4) | 0x05, 0x11, 0x22, 0x33, 0x44, 0x55, 0x66], "VehMod"))
    # 0x76: Spd UB@39=b4.7 Cntr@b7 hi; Mtn Cntr@b2 low Com@19, UB@57=b7.1
    frames.append((0x076, [0, 0, c & 0x0F, 0, 0x80, 0x34, 0x56, ((c & 0x0F) << 4) | 0x0C | 0x02], "Spd+Mtn"))
    # 0x84 TqAllwd: UB@6, Tq@5..4, Cntr@3..0
    frames.append((0x084, [0x40 | 0x30 | c, 0xA5, 0, 0, 0, 0, 0, 0], "TqAllwd"))
    return frames


def burst(bus_id, seconds=3.0, period_s=0.1):
    deadline = time.time() + seconds
    n = 0
    while time.time() < deadline and not stopTask:
        for can_id, data, tag in pack_all(n):
            if not tx(bus_id, can_id, data, tag if n == 0 else tag):
                return False
        n += 1
        time.sleep(period_s)
    zcanpro.write_log("burst done: %d cycles (9 PDUs / cycle)" % n)
    return n > 0


def run_cases(bus_id):
    zcanpro.write_log("=== ComGroup RX full Cntr set ===")
    zcanpro.write_log("WATCH: HitMask==0x3FF; Cntr[3]/[7] also live; FwStamp=0x260B0538")
    if not burst(bus_id):
        zcanpro.write_log("FAIL  TX burst")
        return False
    zcanpro.write_log("PASS  TX burst — confirm UDE Appl_ComGroup_HitMask=0x3FF")
    return True


def z_main():
    zcanpro.write_log("IEM_TC387_BRS ZCANPRO_IEM_ComGroup_Smoke start")
    buses = zcanpro.get_buses()
    zcanpro.write_log("buses=" + str(buses))
    if not buses:
        zcanpro.write_log("FAIL  no bus")
        return
    ok = run_cases(buses[0]["busID"])
    zcanpro.write_log("RESULT: " + ("ALL PASS" if ok else "HAS FAIL"))
