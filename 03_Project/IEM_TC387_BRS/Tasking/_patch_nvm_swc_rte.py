"""Insert NvM_EcuSwComposition + FlatExtract NvM_swc SD entries."""
from __future__ import annotations

import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
RTE = ROOT / "Config" / "ECUC" / "IEM_TC387_BRS_Rte_ecuc.arxml"
FLAT = ROOT / "Config" / "System" / "FlatExtract.arxml"

NVM_SWC_SDS = [
    ("a7c3e1f2-9b4d-4e6a-8c2f-1d5e7a9b0c3d", "/MICROSAR/NvM_swc"),
    ("c9e5a314-1d6f-408c-ae41-3f709c1d2e5f", "/MICROSAR/NvM_swc/ComponentTypes/NvM"),
    ("daf6b425-2e70-419d-bf52-4081ad2e3f60", "/MICROSAR/NvM_swc/ComponentTypes/NvM/NvMInternalBehavior"),
    ("fc18d647-4092-43bf-d174-62a3cf405182", "/MICROSAR/NvM_swc/ComponentTypes/NvM/NvMInternalBehavior/NvM_MainFunction"),
    ("eb07c536-3f81-42ae-c063-5192be3f4071", "/MICROSAR/NvM_swc/ComponentTypes/NvM/NvMInternalBehavior/Timer_NvM_MainFunction"),
    ("0d29e758-51a3-44c0-e285-73b4d0516293", "/MICROSAR/NvM_swc/ComponentTypes/NvMImplementation"),
]


def main() -> None:
    flat = FLAT.read_text(encoding="utf-8")
    if "/MICROSAR/NvM_swc/ComponentTypes/NvM/NvMInternalBehavior/Timer_NvM_MainFunction" not in flat:
        lines = []
        for gid, path in NVM_SWC_SDS:
            lines.append(f'                                    <SD GID="{gid}">{path}</SD>')
        insert = "\n".join(lines) + "\n"
        anchor = '                                    <SD GID="a01e00a0-0b55-4711-ac1a-74ac1c45f7da">/MICROSAR/BswM_swc/ComponentTypes/BswM/BswMInternalBehavior/Timer_BswM_MainFunction</SD>\n'
        if anchor not in flat:
            raise SystemExit("FlatExtract BswM_swc SD anchor missing")
        flat = flat.replace(anchor, anchor + insert, 1)
        FLAT.write_text(flat, encoding="utf-8", newline="\n")
        print("FlatExtract NvM_swc SD entries inserted")
    else:
        print("FlatExtract NvM_swc SD entries already present")

    text = RTE.read_text(encoding="utf-8")
    if "NvM_EcuSwComposition" in text:
        print("NvM_EcuSwComposition already present")
    else:
        u1, u2 = uuid.uuid4(), uuid.uuid4()
        block = f"""            <ECUC-CONTAINER-VALUE UUID="{u1}">
              <SHORT-NAME>NvM_EcuSwComposition</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteSoftwareComponentInstanceRef</DEFINITION-REF>
                  <VALUE-REF DEST="SW-COMPONENT-PROTOTYPE">/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/NvM</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE UUID="{u2}">
                  <SHORT-NAME>Timer_NvM_MainFunction</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RtePositionInTask</DEFINITION-REF>
                      <VALUE>21</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteCyclicTriggerImplementation</DEFINITION-REF>
                      <VALUE>None</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="TIMING-EVENT">/MICROSAR/NvM_swc/ComponentTypes/NvM/NvMInternalBehavior/Timer_NvM_MainFunction</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteMappedToTaskRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Task_Bsw_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteUsedOsAlarmRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Alarm_Bsw_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>

"""
        anchor = (
            '<ECUC-CONTAINER-VALUE UUID="c837f6d6-85c6-4401-8abe-e202acc64661">\n'
            "              <SHORT-NAME>NvM</SHORT-NAME>\n"
            '              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">'
            "/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>"
        )
        if anchor not in text:
            raise SystemExit("NvM BSW anchor missing")
        text = text.replace(anchor, block + anchor, 1)
        RTE.write_text(text, encoding="utf-8", newline="\n")
        print("inserted NvM_EcuSwComposition")

    t2 = RTE.read_text(encoding="utf-8")
    print("EA present", "NVM_EXCLUSIVE_AREA_0" in t2)
    print("SWC present", "NvM_EcuSwComposition" in t2)
    print("proto present", "COMPOSITIONTYPE/NvM" in FLAT.read_text(encoding="utf-8"))


if __name__ == "__main__":
    main()
