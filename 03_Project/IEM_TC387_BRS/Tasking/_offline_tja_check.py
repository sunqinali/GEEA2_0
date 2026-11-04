# -*- coding: utf-8 -*-
"""Offline static checks for TJA1145 / QSPI3 / Port bring-up (no board)."""
from __future__ import annotations

import re
import sys
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
fail = 0


def ok(msg: str) -> None:
    print(f"  OK  {msg}")


def bad(msg: str) -> None:
    global fail
    fail += 1
    print(f" FAIL {msg}")


def read(rel: str) -> str:
    return (ROOT / rel).read_text(encoding="utf-8", errors="replace")


def main() -> int:
    print("=== Offline TJA1145 / QSPI3 checks ===")

    spi = read("Appl/GenData/src/Spi_PBcfg.c")
    cfg = read("Appl/GenData/inc/Spi_Cfg.h")
    port = read("Appl/GenData/src/Port_PBcfg.c")
    trcv_h = read("Appl/GenData/CanTrcv_30_Tja1145_Cfg.h")
    trcv_c = read("Appl/GenData/CanTrcv_30_Tja1145_Cfg.c")
    canif = read("Appl/GenData/CanIf_Cfg.h")
    det_h = read("Appl/GenData/Det_Cfg.h")

    # SPI HW
    if "SPI_HW_QSPI3_USED" in cfg and "(STD_ON)" in cfg.split("SPI_HW_QSPI3_USED")[1][:40]:
        ok("QSPI3 used")
    else:
        bad("QSPI3 not enabled")

    if "SPI_QSPI3_HWTYPE" in cfg and "SPI_SYNC_BUS" in cfg.split("SPI_QSPI3_HWTYPE")[1][:60]:
        ok("QSPI3 sync bus")
    else:
        bad("QSPI3 not sync")

    # Sequences / jobs / CS
    for name in (
        "SpiSequence_TJA1145_L",
        "SpiSequence_TJA1145_M",
        "SpiSequence_TJA1145_N",
        "SpiJob_TJA1145_REG0",
        "SpiChannel_TJA1145_REG0",
    ):
        if name in spi or name in cfg:
            ok(f"present {name}")
        else:
            bad(f"missing {name}")

    cs_hits = len(re.findall(r"SPI_QSPI_CHANNEL8\s*<<\s*4U\)\s*\|\s*SPI_QSPI3_INDEX", spi))
    if cs_hits >= 4:
        ok(f"TJA jobs CS=CHANNEL8/QSPI3 ({cs_hits})")
    else:
        bad(f"CS CHANNEL8/QSPI3 count={cs_hits} (want >=4)")

    # Mode 1: CPH=1 CPOL=0, baud comment 2MHz
    if "Baudrate = 2000000.0Hz" in spi:
        ok("TJA baud 2 MHz")
    else:
        bad("TJA baud not 2 MHz")
    if re.search(r"/\*\s*CPH\s*,\s*CPOL\s*\*/\s*\n\s*\(0x01U\),\s*\(0x00U\)", spi):
        ok("SPI mode CPH=1 CPOL=0 (mode 1)")
    else:
        # looser
        if "(0x01U), (0x00U),          /*  CPH , CPOL   */" in spi:
            ok("SPI mode CPH=1 CPOL=0 (mode 1)")
        else:
            bad("SPI CPH/CPOL not mode 1")

    if "0x88U,            /* MSB[7], DataWidth=8" in spi:
        ok("TJA channels 8-bit MSB EB")
    else:
        bad("TJA channel width/MSB unexpected")

    # Port32 EN/NSTB
    m = re.search(r"/\*\s+Port32\s+\*/(.*?)/\*\s+Port33", port, re.S)
    if not m:
        bad("Port32 block missing")
    else:
        blk = m.group(1)
        if "PORT_PIN_OUT | PORT_PIN_OUT_PUSHPULL | PORT_PIN_MODE_GPIO),/*Pin 4*/" in blk.replace(" ", ""):
            # spaces vary
            pass
        if "PORT_PIN_LEVEL_HIGH,/* Pin 4 */" in blk and "PORT_PIN_LEVEL_HIGH,/* Pin 5 */" in blk:
            ok("P32.4/P32.5 init HIGH")
        else:
            bad("P32.4/P32.5 not HIGH")
        if "PORT_PIN_OUT" in blk and "Pin 4*/" in blk and "Pin 5*/" in blk:
            ok("P32.4/P32.5 OUT")
        else:
            # fallback count
            if blk.count("PORT_PIN_OUT") >= 2:
                ok("P32 has OUT pins (EN/NSTB)")
            else:
                bad("P32.4/P32.5 not OUT")

    # Port10 QSPI
    m10 = re.search(r"/\*\s+Port10\s+\*/(.*?)/\*\s+Port11", port, re.S)
    if not m10:
        bad("Port10 block missing")
    else:
        b = m10.group(1)
        if b.count("PORT_PIN_MODE_ALT3") >= 3:
            ok("P10 ALT3 for CS/SCLK/MOSI")
        else:
            bad(f"P10 ALT3 count={b.count('PORT_PIN_MODE_ALT3')}")

    # CanTrcv
    if "CANTRCV_30_TJA1145_SPI_ACCESS_SYNCHRONOUS" in trcv_h and "STD_ON" in trcv_h.split(
        "CANTRCV_30_TJA1145_SPI_ACCESS_SYNCHRONOUS"
    )[1][:40]:
        ok("CanTrcv SPI sync")
    else:
        bad("CanTrcv SPI not sync")

    if "CANTRCV_30_TJA1145_DEV_ERROR_DETECT" in trcv_h and "STD_ON" in trcv_h.split(
        "CANTRCV_30_TJA1145_DEV_ERROR_DETECT"
    )[1][:40]:
        ok("CanTrcv DET ON")
    else:
        bad("CanTrcv DET still OFF (regen needed?)")

    if "SpiSequence_TJA1145_L" in trcv_c and "SpiSequence_TJA1145_N" in trcv_c:
        ok("CanTrcv seq L/M/N wired")
    else:
        bad("CanTrcv seq not wired")

    if "CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_Tja1145" in canif:
        ok("CanIf Trcv cfg id present")
    else:
        bad("CanIf Trcv cfg missing")

    if "DET_LOGBUFFERSIZE" in det_h:
        m = re.search(r"#define\s+DET_LOGBUFFERSIZE\s+(\d+)", det_h)
        if m and int(m.group(1)) > 0:
            ok(f"Det log buffer size={m.group(1)}")
        else:
            bad("Det log buffer still 0 (regen needed?)")

    if "DET_DEBUG_ENABLED" in det_h and "STD_ON" in det_h.split("DET_DEBUG_ENABLED")[1][:40]:
        ok("Det debug enabled")
    else:
        bad("Det debug still OFF")

    # Smoke / restore artifacts
    if (ROOT / "Appl/Source/Appl_CanTrcv_Smoke.c").exists():
        ok("Appl_CanTrcv_Smoke.c present")
    else:
        bad("smoke source missing")
    if (ROOT / "Tasking/_restore_cantrcv_tasking.py").exists():
        ok("restore script present")
    else:
        bad("restore script missing")

    stubs = read("Appl/Source/Appl_Link_Stubs.c")
    if "Appl_CanStack_Status_Sample" in stubs and "Spi_MainFunction_Handling" in stubs:
        ok("Core0 sample hook in Spi_MainFunction_Handling")
    else:
        bad("Core0 sample hook missing from Appl_Link_Stubs")
    if "Appl_Core2_Tick100ms" in stubs:
        ok("Core2 heartbeat present")
    else:
        bad("Core2 heartbeat missing")

    ecum = read("Appl/GenData/EcuM_Cfg.h")
    m = re.search(r"#define\s+ECUM_NUMBER_OF_CORES\s+\((\d+)u\)", ecum)
    if m and m.group(1) == "4":
        ok("ECUM_NUMBER_OF_CORES=4")
    else:
        bad(f"ECUM_NUMBER_OF_CORES unexpected: {m.group(1) if m else '?'}")

    brs = read("Appl/Include/BrsCfg_BoardOverride.h")
    if "BRS_CPU_CORE_AMOUNT 4" in brs.replace("\t", " "):
        ok("BRS_CPU_CORE_AMOUNT=4")
    else:
        bad("BRS_CPU_CORE_AMOUNT not 4")

    if (ROOT / "Tasking/AfterGenerate.bat").exists():
        ok("AfterGenerate.bat present")
    else:
        bad("AfterGenerate.bat missing")
    if (ROOT / "Tasking/BoardArrival_Watchlist.txt").exists():
        ok("BoardArrival_Watchlist.txt present")
    else:
        bad("watchlist missing")

    com_b = read("Appl/Source/Appl_Com_Bringup.c")
    if "ComConf_ComIPduGroup_RxMPG_PropulsionCAN" in com_b and "Com_EnableReceptionDM" in com_b:
        ok("Com baseline MPG/SPG + ReceptionDM")
    else:
        bad("Com baseline IPDU start missing")
    if "Appl_Com_StartIpduGroups_ForBswM" in read("Appl/Source/EcuM_Callout_Stubs.c"):
        ok("Com IPDU start hooked after Com_Init")
    else:
        bad("Com IPDU start not in DriverInitOne")
    if "Appl_Can_PduMode" in read("Appl/Source/Appl_CanStack_Status.c"):
        ok("CanIf PduMode sampled")
    else:
        bad("CanIf PduMode missing")
    groovy = Path(r"c:\wk_manu\xinyu\03_Project\scripts\AddComIpduStartToEnterRun.dvgroovy")
    if groovy.exists():
        ok("BswM Com IPDU groovy present")
    else:
        bad("BswM Com IPDU groovy missing")

    print("===", "PASS" if fail == 0 else f"{fail} FAIL(s)", "===")
    return 1 if fail else 0


if __name__ == "__main__":
    sys.exit(main())
