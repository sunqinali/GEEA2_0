from __future__ import annotations

import re
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
com = (ROOT / "Config/ECUC/IEM_TC387_BRS_Com_ecuc.arxml").read_text(encoding="utf-8")
pi = (ROOT / "Config/Developer/PortInterfaces.arxml").read_text(encoding="utf-8")

cands = [
    ("WhlMotSysIdc", "Tx"),
    ("WhlMotSysLimnIndcn", "Tx"),
    ("WhlMotSysCoolgReq", "Tx"),
    ("WhlMotSysErrIndcnReq", "Tx"),
    ("WhlMotSysTqReq", "Rx"),
    ("CooltTSigForDtElec", "Rx"),
    ("SpdRotlForWhlsAtAxleRe", "Rx"),
    ("WhlMotSysPwrLimMax", "Rx"),
    ("WhlMotSysPwrLimMin", "Rx"),
    ("CooltFlowForDtElec", "Rx"),
]

for port, d in cands:
    m = re.search(
        rf"<SHORT-NAME>({re.escape(port)}_\d+)</SHORT-NAME>\s*"
        rf"<ADMIN-DATA>.*?<TYPE-TREF DEST=\"([^\"]+)\">([^<]+)</TYPE-TREF>",
        pi,
        re.S,
    )
    cm = re.search(
        rf"<SHORT-NAME>is{re.escape(port)}_[0-9a-f]+_{d}</SHORT-NAME>(.*?)</ECUC-CONTAINER-VALUE>",
        com,
        re.S,
    )
    st = (
        re.search(r"ComSignalType</DEFINITION-REF>\s*<VALUE>([^<]+)</VALUE>", cm.group(1))
        if cm
        else None
    )
    dest = m.group(2) if m else "?"
    app = m.group(3).rsplit("/", 1)[-1] if m else "?"
    iface = m.group(1) if m else "?"
    ctype = st.group(1) if st else "?"
    ok = "PRIMITIVE" in dest
    print(f"{d:2} {port:28} iface={iface:28} app={app:28} com={ctype:8} prim={ok}")
