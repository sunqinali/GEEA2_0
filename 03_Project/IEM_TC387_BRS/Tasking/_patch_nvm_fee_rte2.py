"""regen15 follow-up: Fee Dem + Fls Rte with ExclusiveAreas + MainFunction."""
from __future__ import annotations

import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC")
FEE = ROOT / "IEM_TC387_BRS_Fee_ecuc.arxml"
RTE = ROOT / "IEM_TC387_BRS_Rte_ecuc.arxml"

FLS_EAS = ["Init", "Erase", "Write", "Main", "ResumeErase", "UserContentCount"]
FLS_EA_BASE = "/AURIX2G/EcucDefs/Fls_ib_bswmd/BswModuleDescriptions/Fls/FlsBehavior"


def main() -> None:
    fee = FEE.read_text(encoding="utf-8")
    fee2, n = re.subn(
        r"(FeeSafetyEnable</DEFINITION-REF>\s*<VALUE>)true(</VALUE>)",
        r"\1false\2",
        fee,
        count=1,
    )
    print(f"FeeSafetyEnable->false n={n}")
    if "FeeDemEventParameterRefs" not in fee2:
        insert = (
            f'            <ECUC-CONTAINER-VALUE UUID="{uuid.uuid4()}">\n'
            "              <SHORT-NAME>FeeDemEventParameterRefs</SHORT-NAME>\n"
            '              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">'
            "/AURIX2G/EcucDefs/Fee/FeeDemEventParameterRefs</DEFINITION-REF>\n"
            "            </ECUC-CONTAINER-VALUE>\n"
        )
        fee2 = fee2.replace(
            "          </CONTAINERS>\n        </ECUC-MODULE-CONFIGURATION-VALUES>",
            insert + "          </CONTAINERS>\n        </ECUC-MODULE-CONFIGURATION-VALUES>",
            1,
        )
        print("FeeDemEventParameterRefs inserted")
    else:
        print("FeeDemEventParameterRefs already present")
    FEE.write_text(fee2, encoding="utf-8", newline="\n")

    rte = RTE.read_text(encoding="utf-8")
    if re.search(
        r"<SHORT-NAME>Fls</SHORT-NAME>\s*"
        r'<DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">'
        r"/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>",
        rte,
    ):
        print("Fls Rte instance already present — skip insert")
        return

    ea_parts = []
    for name in FLS_EAS:
        ea_parts.append(
            f"""                <ECUC-CONTAINER-VALUE UUID="{uuid.uuid4()}">
                  <SHORT-NAME>{name}</SHORT-NAME>
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
                      <VALUE-REF DEST="EXCLUSIVE-AREA">{FLS_EA_BASE}/{name}</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>"""
        )
    ea_joined = "\n".join(ea_parts)
    fls_block = f"""
            <ECUC-CONTAINER-VALUE UUID="{uuid.uuid4()}">
              <SHORT-NAME>Fls</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswImplementationRef</DEFINITION-REF>
                  <VALUE-REF DEST="BSW-IMPLEMENTATION">/AURIX2G/EcucDefs/Fls_Impl</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswModuleConfigurationRef</DEFINITION-REF>
                  <VALUE-REF DEST="ECUC-MODULE-CONFIGURATION-VALUES">/ActiveEcuC/Fls</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
{ea_joined}
                <ECUC-CONTAINER-VALUE UUID="{uuid.uuid4()}">
                  <SHORT-NAME>Fls_17_Dmu_MainFunctionTimingEvent0</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswPositionInTask</DEFINITION-REF>
                      <VALUE>19</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteCyclicTriggerImplementation</DEFINITION-REF>
                      <VALUE>None</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="BSW-TIMING-EVENT">/AURIX2G/EcucDefs/Fls_ib_bswmd/BswModuleDescriptions/Fls/FlsBehavior/Fls_17_Dmu_MainFunctionTimingEvent0</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswMappedToTaskRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Task_Com_5ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswUsedOsAlarmRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Alarm_Com_5ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>
"""
    m = re.search(
        r'<ECUC-CONTAINER-VALUE UUID="[^"]+">\s*'
        r"<SHORT-NAME>NvM</SHORT-NAME>\s*"
        r'<DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">'
        r"/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>",
        rte,
    )
    if not m:
        raise SystemExit("NvM Rte anchor not found")
    rte = rte[: m.start()] + fls_block + "\n" + rte[m.start() :]
    RTE.write_text(rte, encoding="utf-8", newline="\n")
    print("Fls Rte instance with EA+Main inserted")
    print("cons0 present:", "FeeBlock_DemAdmin_cons0" in FEE.read_text(encoding="utf-8"))
    print("done")


if __name__ == "__main__":
    main()
