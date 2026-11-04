# -*- coding: utf-8 -*-
from pathlib import Path
import re
import uuid


def uid():
    return str(uuid.uuid4())


nvm = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_NvM_ecuc.arxml")
t = nvm.read_text(encoding="utf-8")
t2 = re.sub(
    r"(NvMDatasetSelectionBits</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
    r"\g<1>1\g<2>",
    t,
    count=1,
)
nvm.write_text(t2, encoding="utf-8")
print("NvMDatasetSelectionBits -> 1")

fee = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_Fee_ecuc.arxml")
ft = fee.read_text(encoding="utf-8")


def set_block_num(text, name, num):
    pat = (
        rf"(<SHORT-NAME>{re.escape(name)}</SHORT-NAME>[\s\S]*?"
        rf"FeeBlockNumber</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)"
    )
    return re.sub(pat, rf"\g<1>{num}\g<2>", text, count=1)


ft = set_block_num(ft, "FeeBlock_ProgRequest", 4)
ft = set_block_num(ft, "FeeBlock_DemAdmin", 2)
ft = set_block_num(ft, "FeeBlock_DemStatus", 6)

if "FeeBlock_DemAdmin_R" not in ft:
    m = re.search(
        r'(<ECUC-CONTAINER-VALUE UUID="[^"]+">\s*'
        r"<SHORT-NAME>FeeBlock_DemAdmin</SHORT-NAME>[\s\S]*?</ECUC-CONTAINER-VALUE>)",
        ft,
    )
    if not m:
        raise SystemExit("DemAdmin block not found")
    clone = m.group(1)
    clone = re.sub(r'UUID="[^"]+"', f'UUID="{uid()}"', clone, count=1)
    clone = clone.replace("FeeBlock_DemAdmin", "FeeBlock_DemAdmin_R")
    clone = re.sub(
        r"(FeeBlockNumber</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        r"\g<1>3\g<2>",
        clone,
        count=1,
    )
    ft = ft.replace(m.group(1), m.group(1) + "\n            " + clone)
    print("added FeeBlock_DemAdmin_R=3")

ft = re.sub(
    r"(FeeMaxBlockCount</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
    r"\g<1>4\g<2>",
    ft,
    count=1,
)
fee.write_text(ft, encoding="utf-8")
print("Fee numbers: DemAdmin=2, R=3, Prog=4, Status=6")

rte = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC\IEM_TC387_BRS_Rte_ecuc.arxml")
rt = rte.read_text(encoding="utf-8")

if "/ActiveEcuC/NvM</VALUE-REF>" not in rt:
    nvm_inst = f"""
            <ECUC-CONTAINER-VALUE UUID="{uid()}">
              <SHORT-NAME>NvM</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteBswModuleInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswImplementationRef</DEFINITION-REF>
                  <VALUE-REF DEST="BSW-IMPLEMENTATION">/MICROSAR/NvM_Impl</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswModuleConfigurationRef</DEFINITION-REF>
                  <VALUE-REF DEST="ECUC-MODULE-CONFIGURATION-VALUES">/ActiveEcuC/NvM</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE UUID="{uid()}">
                  <SHORT-NAME>NvM_MainFunctionTimingEvent0</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswPositionInTask</DEFINITION-REF>
                      <VALUE>21</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteCyclicTriggerImplementation</DEFINITION-REF>
                      <VALUE>None</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="BSW-TIMING-EVENT">/MICROSAR/NvM_ib_bswmd/BswModuleDescriptions/NvM/NvMBehavior/NvM_MainFunctionTimingEvent0</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswMappedToTaskRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Task_Bsw_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-REFERENCE-DEF">/MICROSAR/Rte/RteBswModuleInstance/RteBswEventToTaskMapping/RteBswUsedOsAlarmRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Os/Alarm_Bsw_10ms</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>
"""
    pos = rt.find("Fee_MainFunctionTimingEvent0")
    pos2 = rt.find("</ECUC-CONTAINER-VALUE>", rt.find("Alarm_Bsw_10ms", pos))
    pos2 = rt.find("</ECUC-CONTAINER-VALUE>", pos2 + 1)
    insert_at = pos2 + len("</ECUC-CONTAINER-VALUE>")
    rt = rt[:insert_at] + "\n" + nvm_inst + rt[insert_at:]
    print("Rte NvM instance inserted")
else:
    print("Rte NvM already present")

if 'VALUE-REF DEST="ECUC-MODULE-CONFIGURATION-VALUES">/ActiveEcuC/Fls</VALUE-REF>' not in rt:
    fls_inst = f"""
            <ECUC-CONTAINER-VALUE UUID="{uid()}">
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
            </ECUC-CONTAINER-VALUE>
"""
    idx = rt.find("<SHORT-NAME>NvM</SHORT-NAME>")
    if idx < 0:
        raise SystemExit("NvM marker missing for Fls insert")
    inst_start = rt.rfind("<ECUC-CONTAINER-VALUE", 0, idx)
    rt = rt[:inst_start] + fls_inst + "\n" + rt[inst_start:]
    print("Rte Fls instance inserted")
else:
    print("Rte Fls already present")

rte.write_text(rt, encoding="utf-8")
print("done")
