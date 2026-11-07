# -*- coding: utf-8 -*-
"""Post-generate: fix BswM UserCallout statements and inject Appl headers."""
from pathlib import Path

path = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Appl\GenData\BswM_Lcfg.c")
if not path.exists():
    raise SystemExit(f"missing {path}")

t = path.read_text(encoding="utf-8", errors="replace")
orig = t

# Vector sometimes emits "Appl_Foo;" instead of "Appl_Foo();"
replacements = [
    ("  Appl_BswM_ProgRequest;\n", "  Appl_BswM_ProgRequest();\n"),
    ("  Appl_BswM_OnComMFull;\n", "  Appl_BswM_OnComMFull();\n"),
    ("  Appl_Com_StartIpduGroups_ForBswM;\n", "  Appl_Com_StartIpduGroups_ForBswM();\n"),
]
for a, b in replacements:
    t = t.replace(a, b)

include_block = (
    '#include "BswM_Private_Cfg.h"\n'
    '#include "Appl_Com_Bringup.h"\n'
    '#include "Appl_BswM_ProgRequest.h"\n'
    '#include "Appl_BswM_OnComMFull.h"\n'
)
if '#include "Appl_BswM_OnComMFull.h"' not in t:
    needle = '#include "BswM_Private_Cfg.h"\n'
    if needle not in t:
        raise SystemExit("BswM_Private_Cfg include not found")
    # Prefer rewrite of known include block; else inject after Private_Cfg.
    if '#include "Appl_Com_Bringup.h"' in t and '#include "Appl_BswM_ProgRequest.h"' in t:
        t = t.replace(
            '#include "Appl_BswM_ProgRequest.h"\n',
            '#include "Appl_BswM_ProgRequest.h"\n#include "Appl_BswM_OnComMFull.h"\n',
            1,
        )
    else:
        t = t.replace(needle, include_block, 1)

if t == orig:
    print("BswM_Lcfg: no callout patch needed (or already patched)")
else:
    path.write_text(t, encoding="utf-8", newline="\n")
    print("BswM_Lcfg: UserCallout/includes patched")
