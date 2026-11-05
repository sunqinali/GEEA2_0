# -*- coding: utf-8 -*-
"""Add Fee/NvM block for CarConfig state shell (Bulk/Valid/Error + BlkID)."""
from __future__ import annotations

import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC")
FEE = ROOT / "IEM_TC387_BRS_Fee_ecuc.arxml"
NVM = ROOT / "IEM_TC387_BRS_NvM_ecuc.arxml"

FEE_NAME = "FeeBlock_CarConfig"
NVM_NAME = "NvMBlock_CarConfig"
FEE_NUM = 26  # after DemPrimary7=24; DatasetSelectionBits=1 → even
NVM_ID = 13   # after DemPrimary7=12
LENGTH = 16
RAM = "Appl_CarConfig_NvMRam"


def uid() -> str:
    return str(uuid.uuid4())


def fee_block() -> str:
    return f"""            <ECUC-CONTAINER-VALUE UUID="{uid()}">
              <SHORT-NAME>{FEE_NAME}</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration</DEFINITION-REF>
              <PARAMETER-VALUES>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeBlockNumber</DEFINITION-REF>
                  <VALUE>{FEE_NUM}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeQsBlockInstances</DEFINITION-REF>
                  <VALUE>0</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeQsBlockAddress</DEFINITION-REF>
                  <VALUE>0</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeQuasiStaticManager</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeBlockSize</DEFINITION-REF>
                  <VALUE>{LENGTH}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeImmediateData</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeNumberOfWriteCycles</DEFINITION-REF>
                  <VALUE>0</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
              </PARAMETER-VALUES>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-SYMBOLIC-NAME-REFERENCE-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeDeviceIndex</DEFINITION-REF>
                  <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Fls/FlsGeneral</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
            </ECUC-CONTAINER-VALUE>
"""


def nvm_block() -> str:
    return f"""            <ECUC-CONTAINER-VALUE UUID="{uid()}">
              <SHORT-NAME>{NVM_NAME}</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/NvM/NvMBlockDescriptor</DEFINITION-REF>
              <PARAMETER-VALUES>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockCrcType</DEFINITION-REF>
                  <VALUE>NVM_CRC16</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockManagementType</DEFINITION-REF>
                  <VALUE>NVM_BLOCK_NATIVE</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-FUNCTION-NAME-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMInitBlockCallback</DEFINITION-REF>
                  <VALUE>NULL_PTR</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMResistantToChangedSw</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMSelectBlockForReadAll</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMSelectBlockForWriteAll</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMUseInitCallback</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMUseJobendCallback</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-FUNCTION-NAME-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMSingleBlockCallback</DEFINITION-REF>
                  <VALUE>NULL_PTR</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBswMBlockStatusInformation</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockUseCrc</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockUseSyncMechanism</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMCalcRamBlockCrc</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockJobPriority</DEFINITION-REF>
                  <VALUE>1</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockWriteProt</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvBlockLength</DEFINITION-REF>
                  <VALUE>{LENGTH}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvBlockNum</DEFINITION-REF>
                  <VALUE>1</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvramBlockIdentifier</DEFINITION-REF>
                  <VALUE>{NVM_ID}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMWriteBlockOnce</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMUseServicePorts</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockUseCRCCompMechanism</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockUseSetRamBlockStatus</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMInvokeCallbacksForReadAll</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMInvokeCallbacksForWriteAll</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-STRING-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMRamBlockDataAddress</DEFINITION-REF>
                  <VALUE>{RAM}</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
              </PARAMETER-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE UUID="{uid()}">
                  <SHORT-NAME>NvMTargetBlockReference</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-CHOICE-CONTAINER-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMTargetBlockReference</DEFINITION-REF>
                  <SUB-CONTAINERS>
                    <ECUC-CONTAINER-VALUE UUID="{uid()}">
                      <SHORT-NAME>NvMFeeRef</SHORT-NAME>
                      <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMTargetBlockReference/NvMFeeRef</DEFINITION-REF>
                      <REFERENCE-VALUES>
                        <ECUC-REFERENCE-VALUE>
                          <DEFINITION-REF DEST="ECUC-SYMBOLIC-NAME-REFERENCE-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMTargetBlockReference/NvMFeeRef/NvMNameOfFeeBlock</DEFINITION-REF>
                          <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Fee/{FEE_NAME}</VALUE-REF>
                        </ECUC-REFERENCE-VALUE>
                      </REFERENCE-VALUES>
                    </ECUC-CONTAINER-VALUE>
                  </SUB-CONTAINERS>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>
"""


def insert_before_closing_containers(path: Path, short_name: str, block: str) -> None:
    t = path.read_text(encoding="utf-8")
    if f"<SHORT-NAME>{short_name}</SHORT-NAME>" in t:
        print(f"{short_name} already present")
        return
    # Insert before last </CONTAINERS> of module (Fee/NvM module config)
    # Use FeeBlock_DemPrimary7 / last Dem block as anchor for Fee
    anchors = [
        f"<SHORT-NAME>FeeBlock_DemPrimary7</SHORT-NAME>",
        f"<SHORT-NAME>NvMBlock_ProgRequest</SHORT-NAME>",
        f"<SHORT-NAME>DemPrimaryDataBlock7</SHORT-NAME>",
    ]
    # Prefer append after last known block by finding end of that container
    if short_name.startswith("Fee"):
        marker = "<SHORT-NAME>FeeBlock_DemPrimary7</SHORT-NAME>"
    else:
        marker = "<SHORT-NAME>DemPrimaryDataBlock7</SHORT-NAME>"
        if marker not in t:
            marker = "<SHORT-NAME>NvMBlock_ProgRequest</SHORT-NAME>"

    i = t.find(marker)
    if i < 0:
        raise SystemExit(f"anchor {marker} not in {path.name}")
    # find end of this ECUC-CONTAINER-VALUE: naive depth from container start
    start = t.rfind("<ECUC-CONTAINER-VALUE", 0, i)
    depth = 0
    j = start
    while j < len(t):
        if t.startswith("<ECUC-CONTAINER-VALUE", j):
            depth += 1
            j += len("<ECUC-CONTAINER-VALUE")
            continue
        if t.startswith("</ECUC-CONTAINER-VALUE>", j):
            depth -= 1
            j += len("</ECUC-CONTAINER-VALUE>")
            if depth == 0:
                break
            continue
        j += 1
    else:
        raise SystemExit("container end not found")
    t = t[:j] + "\n" + block + t[j:]
    path.write_text(t, encoding="utf-8", newline="\n")
    print(f"added {short_name} to {path.name}")


def main() -> None:
    insert_before_closing_containers(FEE, FEE_NAME, fee_block())
    insert_before_closing_containers(NVM, NVM_NAME, nvm_block())
    print("done — DVCfgCmd generate Fee+NvM next")


if __name__ == "__main__":
    main()
