"""Fix regen14 NvM/Fee/Rte blockers for IEM_TC387_BRS.

- Rename Fee consecutive block to Vector MemAb pattern: {master}_cons0
- Drop Fls RteBswModuleInstance (Fee polls Fls; Fls EA/Main map not needed)
- Add NvM NVM_EXCLUSIVE_AREA_0 Rte mapping (ALL_INTERRUPT_BLOCKING)
"""
from __future__ import annotations

import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC")
FEE = ROOT / "IEM_TC387_BRS_Fee_ecuc.arxml"
RTE = ROOT / "IEM_TC387_BRS_Rte_ecuc.arxml"


def main() -> None:
    fee = FEE.read_text(encoding="utf-8")
    if "FeeBlock_DemAdmin_R" in fee:
        fee = fee.replace("FeeBlock_DemAdmin_R", "FeeBlock_DemAdmin_cons0")
        FEE.write_text(fee, encoding="utf-8", newline="\n")
        print("Fee: FeeBlock_DemAdmin_R -> FeeBlock_DemAdmin_cons0")
    elif "FeeBlock_DemAdmin_cons0" in fee:
        print("Fee: cons0 name already OK")
    else:
        raise SystemExit("Fee consecutive block not found")

    rte = RTE.read_text(encoding="utf-8")

    fls_pat = re.compile(
        r"\s*<ECUC-CONTAINER-VALUE UUID=\"[^\"]+\">\s*"
        r"<SHORT-NAME>Fls</SHORT-NAME>\s*"
        r"<DEFINITION-REF DEST=\"ECUC-PARAM-CONF-CONTAINER-DEF\">"
        r"/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>[\s\S]*?"
        r"/ActiveEcuC/Fls</VALUE-REF>[\s\S]*?</REFERENCE-VALUES>\s*"
        r"</ECUC-CONTAINER-VALUE>",
        re.M,
    )
    rte2, n_fls = fls_pat.subn("\n", rte, count=1)
    print(f"Rte: removed Fls instance count={n_fls}")

    if "NVM_EXCLUSIVE_AREA_0" not in rte2:
        ea_uuid = str(uuid.uuid4())
        ea_block = f"""
                <ECUC-CONTAINER-VALUE UUID="{ea_uuid}">
                  <SHORT-NAME>NVM_EXCLUSIVE_AREA_0</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswExclusiveAreaImpl</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswExclusiveAreaImpl/RteExclusiveAreaImplMechanism</DEFINITION-REF>
                      <VALUE>ALL_INTERRUPT_BLOCKING</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswExclusiveAreaImpl/RteBswExclusiveAreaRef</DEFINITION-REF>
                      <VALUE-REF DEST="EXCLUSIVE-AREA">/MICROSAR/NvM_ib_bswmd/BswModuleDescriptions/NvM/NvMBehavior/NVM_EXCLUSIVE_AREA_0</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
"""
        # Insert EA as sibling before NvM_MainFunctionTimingEvent0 under NvM instance
        anchor = (
            '              <SUB-CONTAINERS>\n'
            '                <ECUC-CONTAINER-VALUE UUID="9345c6db-1668-4e17-838c-657807f48d75">\n'
            '                  <SHORT-NAME>NvM_MainFunctionTimingEvent0</SHORT-NAME>'
        )
        if anchor not in rte2:
            raise SystemExit("NvM MainFunction mapping anchor not found")
        rte2 = rte2.replace(
            anchor,
            "              <SUB-CONTAINERS>\n" + ea_block +
            '                <ECUC-CONTAINER-VALUE UUID="9345c6db-1668-4e17-838c-657807f48d75">\n'
            '                  <SHORT-NAME>NvM_MainFunctionTimingEvent0</SHORT-NAME>',
            1,
        )
        print("Rte: inserted NVM_EXCLUSIVE_AREA_0")
    else:
        print("Rte: NVM_EXCLUSIVE_AREA_0 already present")

    RTE.write_text(rte2, encoding="utf-8", newline="\n")
    print("done")


if __name__ == "__main__":
    main()
