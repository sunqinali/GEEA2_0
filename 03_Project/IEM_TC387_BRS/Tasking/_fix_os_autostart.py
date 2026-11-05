#!/usr/bin/env python3
"""Set OsCore1/2/3 OsCoreIsAutostart=false (AURIX slaves need StartCore/Hal_CoreStart)."""
from pathlib import Path
import re

ROOT = Path(__file__).resolve().parents[1]

ecuc = ROOT / "Config" / "ECUC" / "IEM_TC387_BRS_Os_ecuc.arxml"
text = ecuc.read_text(encoding="utf-8")


def flip_core(name: str, s: str) -> str:
    pat = (
        rf'(<SHORT-NAME>{name}</SHORT-NAME>.*?'
        rf'<DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">'
        rf'/MICROSAR/Os/OsCore/OsCoreIsAutostart</DEFINITION-REF>\s*<VALUE>)true(</VALUE>)'
    )
    ns, n = re.subn(pat, r"\1false\2", s, count=1, flags=re.S)
    print(f"{name}: ECUC replacements={n}")
    if n != 1:
        raise SystemExit(f"expected 1 replacement for {name}")
    return ns


for core in ("OsCore1", "OsCore2", "OsCore3"):
    text = flip_core(core, text)

ecuc.write_text(text, encoding="utf-8")
print(f"wrote {ecuc}")

lcfg = ROOT / "Appl" / "GenData" / "Os_Core_Lcfg.c"
ltext = lcfg.read_text(encoding="utf-8")

# Patch IsAutostart under OsCfg_Core_OsCore1/2/3 only (leave OsCore0 TRUE).
for core in ("OsCore1", "OsCore2", "OsCore3"):
    pat = (
        rf'(CONST\(Os_CoreAsrConfigType, OS_CONST\) OsCfg_Core_{core}\s*=\s*\{{.*?'
        rf'/\* \.IsAutostart\s+= \*/ )TRUE(,*)'
    )
    ltext, n = re.subn(pat, r"\1FALSE\2", ltext, count=1, flags=re.S)
    print(f"{core}: Lcfg replacements={n}")
    if n != 1:
        raise SystemExit(f"expected 1 Lcfg replacement for {core}")

lcfg.write_text(ltext, encoding="utf-8")
print(f"wrote {lcfg}")
print("done")
