# AfterGenerate: keep CanIf CanTp RxIndication as CanTp_RxIndication (no Appl wrapper).
# 0532 wrapper proved RX (Rx737Cnt) but coincided with missing 0x637 — left out for 0533+.
from __future__ import print_function
import os
import sys

ROOT = os.path.abspath(os.path.join(os.path.dirname(__file__), ".."))
PATH = os.path.join(ROOT, "Appl", "GenData", "CanIf_Lcfg.c")

def main():
    with open(PATH, "r", encoding="utf-8", errors="replace") as f:
        text = f.read()
    changed = False
    if "Appl_Diag_CanTp_RxIndication" in text:
        text = text.replace(
            "(CanIf_SimpleRxIndicationFctType)Appl_Diag_CanTp_RxIndication",
            "(CanIf_SimpleRxIndicationFctType)CanTp_RxIndication",
        )
        changed = True
    if '#include "Appl_Diag_RxProbe.h"' in text:
        text = text.replace('\n#include "Appl_Diag_RxProbe.h"', "")
        changed = True
    if changed:
        with open(PATH, "w", encoding="utf-8", newline="\n") as f:
            f.write(text)
        print("CanIf_Lcfg.c: restored direct CanTp_RxIndication")
    else:
        print("CanIf_Lcfg.c: already direct CanTp_RxIndication")
    return 0

if __name__ == "__main__":
    sys.exit(main())
