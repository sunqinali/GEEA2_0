from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
com = (ROOT / "Config/ECUC/IEM_TC387_BRS_Com_ecuc.arxml").read_text(encoding="utf-8")
pi = (ROOT / "Config/Developer/PortInterfaces.arxml").read_text(encoding="utf-8")
dt = (ROOT / "Config/Developer/DataTypes.arxml").read_text(encoding="utf-8")

# existing v0.4 PORTS for ADT->impl pattern learning
KNOWN = {
    "CarTiGlb_2": "uint32",
    "Len31_2": "uint32",
    "WhlMotSysModStsTyp1_2": "uint8",
    "HvTq1_2": "uint16",
    "CooltTHiResl_2": "uint16",
    "CooltFlow2_2": "uint16",
    "N1_2": "uint16",
    "PrpsnPwrLimMax_2": "uint16",
    "PrpsnPwrLimMin_2": "uint16",
    "WhlMotSysModStsTyp2_2": "uint8",
    "IsgSpdWSgnTyp_2": "sint16",
    "HvU1_2": "uint16",
    "T3_2": "uint8",
    "HvT1_3": "uint8",
    "Ampr1_1": "uint16",
    "UInt16_2": "uint16",
    "HvCoolg1_2": "uint8",
    "OnOff1_2": "uint8",
}

COM_TO_IMPL = {
    "UINT8": "uint8",
    "UINT16": "uint16",
    "UINT32": "uint32",
    "SINT8": "sint8",
    "SINT16": "sint16",
    "SINT32": "sint32",
    "BOOLEAN": "boolean",
}

rem = [
    "DCChrgnHndlSts",
    "DrvgCyc",
    "GearLvrIndcn",
    "HvBattSoc",
    "HvBattUDc",
    "HvBattUDynMaxLim",
    "HvBattUDynMinLim",
    "ImobEngSts2",
    "OnBdChrgrHndlSts1",
    "PLockFltIndcRe",
    "PLockFltLvlRe",
    "PLockParkReq",
    "PLockParkStsRe",
    "PrpsnFbLimnIndcn",
    "RearHeatModEnad",
    "RearHeatPwrAllwd",
    "WhlMotClrRdyReq",
    "WhlMotCooltFlowMinReq",
    "WhlMotSysActvDampgModReq",
    "WhlMotSysHeatFdBck",
    "WhlMotSysHeatPwrAct",
    "WhlMotSysHeatPwrMax",
]


def find_iface(port: str):
    m = re.search(
        rf"<SHORT-NAME>({re.escape(port)}_\d+)</SHORT-NAME>(.*?)</SENDER-RECEIVER-INTERFACE>",
        pi,
        re.S,
    )
    if not m:
        return None, None, None
    iface = m.group(1)
    tm = re.search(r'<TYPE-TREF DEST="([^"]+)">([^<]+)</TYPE-TREF>', m.group(2))
    if not tm:
        return iface, None, None
    return iface, tm.group(1), tm.group(2).rsplit("/", 1)[-1]


def find_dir_and_com(port: str):
    for cand in ("Rx", "Tx"):
        m = re.search(
            rf"<SHORT-NAME>is{re.escape(port)}_[0-9a-f]+_{cand}</SHORT-NAME>(.*?)</ECUC-CONTAINER-VALUE>",
            com,
            re.S,
        )
        if m:
            st = re.search(
                r"ComSignalType</DEFINITION-REF>\s*<VALUE>([^<]+)</VALUE>", m.group(1)
            )
            return cand, (st.group(1) if st else None)
    return None, None


def adt_category(app: str) -> str:
    m = re.search(
        rf"<SHORT-NAME>{re.escape(app)}</SHORT-NAME>(.*?)</APPLICATION-PRIMITIVE-DATA-TYPE>",
        dt,
        re.S,
    )
    if m:
        return "PRIMITIVE"
    m = re.search(
        rf"<SHORT-NAME>{re.escape(app)}</SHORT-NAME>(.*?)</APPLICATION-RECORD-DATA-TYPE>",
        dt,
        re.S,
    )
    if m:
        return "RECORD"
    return "?"


rows = []
for port in rem:
    d, ctype = find_dir_and_com(port)
    iface, dest, app = find_iface(port)
    cat = adt_category(app) if app else "?"
    impl = KNOWN.get(app or "", None) or COM_TO_IMPL.get(ctype or "", "?")
    ok = cat == "PRIMITIVE" and impl != "?"
    print(
        f"{d or '??':2} {port:28} iface={iface or '?':32} "
        f"app={app or '?':28} com={ctype or '?':8} cat={cat:9} impl={impl:8} ok={ok}"
    )
    rows.append((d, port, iface, app, impl, ctype, cat, ok))

bad = [r for r in rows if not r[-1]]
print("---")
print("ok", len(rows) - len(bad), "bad", len(bad))
for r in bad:
    print("BAD", r)
