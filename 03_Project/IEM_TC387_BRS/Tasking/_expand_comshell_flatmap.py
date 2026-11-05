"""Add BkpOfDstTrvld / WhlMotSysSpdAct / WhlMotSysUdc DATA-MAPPINGS into FlatExtract."""
from __future__ import annotations

import re
import uuid
from pathlib import Path

FLAT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\System\FlatExtract.arxml")
PROTO = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Appl_ComShell"
ROOT = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM/COMPOSITIONTYPE"
SWC = "/Appl_ComShell/ComponentTypes/Appl_ComShell"

EXTRA = [
    ("R", "BkpOfDstTrvld", "BkpOfDstTrvld_7", "BkpOfDstTrvld"),
    ("P", "WhlMotSysSpdAct", "WhlMotSysSpdAct_4", "WhlMotSysSpdAct"),
    ("P", "WhlMotSysUdc", "WhlMotSysUdc_3", "WhlMotSysUdc"),
]


def mapping_xml(direction: str, port: str, iface: str, sig: str) -> str:
    dest = "R-PORT-PROTOTYPE" if direction == "R" else "P-PORT-PROTOTYPE"
    return f"""                                    <SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                      <DATA-ELEMENT-IREF>
                                        <CONTEXT-COMPONENT-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO}</CONTEXT-COMPONENT-REF>
                                        <CONTEXT-COMPOSITION-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">{ROOT}</CONTEXT-COMPOSITION-REF>
                                        <CONTEXT-PORT-REF DEST="{dest}">{SWC}/{port}</CONTEXT-PORT-REF>
                                        <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</TARGET-DATA-PROTOTYPE-REF>
                                      </DATA-ELEMENT-IREF>
                                      <SYSTEM-SIGNAL-REF DEST="SYSTEM-SIGNAL">/Signal/{sig}</SYSTEM-SIGNAL-REF>
                                    </SENDER-RECEIVER-TO-SIGNAL-MAPPING>
"""


def main() -> None:
    flat = FLAT.read_text(encoding="utf-8")
    # Fix invalid UUIDs that may have been written with non-hex chars
    for bad in re.findall(r'UUID="([^"]*[g-zG-Z][^"]*)"', flat):
        if "Appl_ComShell" in flat[max(0, flat.find(bad) - 200) : flat.find(bad) + 200]:
            pass
    inserted = 0
    for direction, port, iface, sig in EXTRA:
        if f"{SWC}/{port}" in flat and f"/Signal/{sig}" in flat[
            flat.find("DATA-MAPPINGS") : flat.find("</DATA-MAPPINGS>") + 20
            if "</DATA-MAPPINGS>" in flat
            else len(flat)
        ]:
            # already mapped if port appears inside DATA-MAPPINGS block
            dm = flat[flat.find("<DATA-MAPPINGS>") : flat.find("</DATA-MAPPINGS>")]
            if f"{SWC}/{port}" in dm:
                print("mapping present", port)
                continue
        block = mapping_xml(direction, port, iface, sig)
        if "</DATA-MAPPINGS>" not in flat:
            raise SystemExit("DATA-MAPPINGS missing")
        flat = flat.replace("</DATA-MAPPINGS>", block + "                                  </DATA-MAPPINGS>", 1)
        inserted += 1
        print("inserted mapping", port)

    # Fix any non-hex UUIDs in ApplicationComponents file separately handled
    FLAT.write_text(flat, encoding="utf-8", newline="\n")
    print("done inserted", inserted)


if __name__ == "__main__":
    main()
