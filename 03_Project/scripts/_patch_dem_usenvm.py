# -*- coding: utf-8 -*-
"""Wire DemUseNvm + Dem Admin/Status/Primary NvM/Fee blocks for IEM_TC387_BRS."""
from __future__ import annotations

import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS\Config\ECUC")
FEE = ROOT / "IEM_TC387_BRS_Fee_ecuc.arxml"
NVM = ROOT / "IEM_TC387_BRS_NvM_ecuc.arxml"
DEM = ROOT / "IEM_TC387_BRS_Dem_ecuc.arxml"

# sizeof estimates for current Dem_Lcfg types (Tasking / 4-byte align)
ADMIN_LEN = 10
STATUS_LEN = 422  # 8 + 2*207
PRIMARY_LEN = 232
# DatasetSelectionBits=1 => Fee base numbers even, stride 2 per native block
FEE_NUMS = {
    "FeeBlock_NvMConfig": 2,
    "FeeBlock_NvMConfig_cons0": 3,
    "FeeBlock_ProgRequest": 4,
    "FeeBlock_DemAdmin": 6,
    "FeeBlock_DemStatus": 8,
}
for _i in range(8):
    FEE_NUMS[f"FeeBlock_DemPrimary{_i}"] = 10 + _i * 2


def uid() -> str:
    return str(uuid.uuid4())


def fee_block(name: str, number: int, size: int) -> str:
    return f"""            <ECUC-CONTAINER-VALUE UUID="{uid()}">
              <SHORT-NAME>{name}</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration</DEFINITION-REF>
              <PARAMETER-VALUES>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/AURIX2G/EcucDefs/Fee/FeeBlockConfiguration/FeeBlockNumber</DEFINITION-REF>
                  <VALUE>{number}</VALUE>
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
                  <VALUE>{size}</VALUE>
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


def nvm_block(
    name: str,
    block_id: int,
    length: int,
    fee_name: str,
    ram: str,
    *,
    rom: str = "NULL_PTR",
    init_cb: str = "NULL_PTR",
    use_init: bool = False,
    job_cb: str = "Dem_NvM_JobFinished",
    use_job: bool = True,
    use_crc: bool = False,
    resistant: bool = True,
) -> str:
    return f"""            <ECUC-CONTAINER-VALUE UUID="{uid()}">
              <SHORT-NAME>{name}</SHORT-NAME>
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
                  <VALUE>{init_cb}</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMResistantToChangedSw</DEFINITION-REF>
                  <VALUE>{"true" if resistant else "false"}</VALUE>
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
                  <VALUE>{"true" if use_init else "false"}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMUseJobendCallback</DEFINITION-REF>
                  <VALUE>{"true" if use_job else "false"}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-FUNCTION-NAME-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMSingleBlockCallback</DEFINITION-REF>
                  <VALUE>{job_cb}</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBswMBlockStatusInformation</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockUseCrc</DEFINITION-REF>
                  <VALUE>{"true" if use_crc else "false"}</VALUE>
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
                  <VALUE>127</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMBlockWriteProt</DEFINITION-REF>
                  <VALUE>false</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvBlockLength</DEFINITION-REF>
                  <VALUE>{length}</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvBlockNum</DEFINITION-REF>
                  <VALUE>1</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-NUMERICAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMNvramBlockIdentifier</DEFINITION-REF>
                  <VALUE>{block_id}</VALUE>
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
                  <VALUE>{ram}</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-STRING-PARAM-DEF">/MICROSAR/NvM/NvMBlockDescriptor/NvMRomBlockDataAddress</DEFINITION-REF>
                  <VALUE>{rom}</VALUE>
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
                          <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/Fee/{fee_name}</VALUE-REF>
                        </ECUC-REFERENCE-VALUE>
                      </REFERENCE-VALUES>
                    </ECUC-CONTAINER-VALUE>
                  </SUB-CONTAINERS>
                </ECUC-CONTAINER-VALUE>
              </SUB-CONTAINERS>
            </ECUC-CONTAINER-VALUE>
"""


def dem_nvram(name: str, typ: str, nvm_name: str, index: int | None = None) -> str:
    params = f"""                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Dem/DemGeneral/DemNvRamBlockId/DemNvRamBlockIdType</DEFINITION-REF>
                      <VALUE>{typ}</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
"""
    if index is not None:
        params += f"""                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Dem/DemGeneral/DemNvRamBlockId/DemNvRamBlockIdIndex</DEFINITION-REF>
                      <VALUE>{index}</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
"""
    return f"""                <ECUC-CONTAINER-VALUE UUID="{uid()}">
                  <SHORT-NAME>{name}</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Dem/DemGeneral/DemNvRamBlockId</DEFINITION-REF>
                  <PARAMETER-VALUES>
{params}                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-SYMBOLIC-NAME-REFERENCE-DEF">/MICROSAR/Dem/DemGeneral/DemNvRamBlockId/DemNvRamBlockIdRef</DEFINITION-REF>
                      <VALUE-REF DEST="ECUC-CONTAINER-VALUE">/ActiveEcuC/NvM/{nvm_name}</VALUE-REF>
                    </ECUC-REFERENCE-VALUE>
                  </REFERENCE-VALUES>
                </ECUC-CONTAINER-VALUE>
"""


def patch_fee() -> None:
    t = FEE.read_text(encoding="utf-8")
    if "FeeBlock_NvMConfig" not in t:
        t = t.replace("FeeBlock_DemAdmin_cons0", "FeeBlock_NvMConfig_cons0")
        t = t.replace("FeeBlock_DemAdmin", "FeeBlock_NvMConfig")
        # restore DemAdmin name that was part of cons0 rename path already handled
        # FeeBlock_NvMConfig was DemAdmin; add real DemAdmin below
        print("renamed FeeBlock_DemAdmin(+cons0) -> FeeBlock_NvMConfig(+cons0)")
    # sizes for NvMConfig pair stay small (NvMConfigBlock length=2)
    t = re.sub(
        r"(<SHORT-NAME>FeeBlock_NvMConfig</SHORT-NAME>[\s\S]*?FeeBlockSize</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        rf"\g<1>4\g<2>",
        t,
        count=1,
    )
    t = re.sub(
        r"(<SHORT-NAME>FeeBlock_NvMConfig_cons0</SHORT-NAME>[\s\S]*?FeeBlockSize</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        rf"\g<1>4\g<2>",
        t,
        count=1,
    )

    extras = []
    # After rename, DemAdmin short-name is gone; add DemAdmin + resize Status + Primaries
    if "<SHORT-NAME>FeeBlock_DemAdmin</SHORT-NAME>" not in t:
        extras.append(fee_block("FeeBlock_DemAdmin", FEE_NUMS["FeeBlock_DemAdmin"], ADMIN_LEN))
        print("add FeeBlock_DemAdmin")
    else:
        t = re.sub(
            r"(<SHORT-NAME>FeeBlock_DemAdmin</SHORT-NAME>[\s\S]*?FeeBlockSize</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
            rf"\g<1>{ADMIN_LEN}\g<2>",
            t,
            count=1,
        )

    t = re.sub(
        r"(<SHORT-NAME>FeeBlock_DemStatus</SHORT-NAME>[\s\S]*?FeeBlockSize</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        rf"\g<1>{STATUS_LEN}\g<2>",
        t,
        count=1,
    )

    for i in range(8):
        name = f"FeeBlock_DemPrimary{i}"
        if f"<SHORT-NAME>{name}</SHORT-NAME>" not in t:
            extras.append(fee_block(name, FEE_NUMS[name], PRIMARY_LEN))
    if extras:
        print(f"add {len(extras)} Fee Dem blocks")
        marker = '              <SHORT-NAME>FeeDemEventParameterRefs</SHORT-NAME>'
        if marker not in t:
            raise SystemExit("FeeDemEventParameterRefs missing")
        idx = t.find(marker)
        start = t.rfind("<ECUC-CONTAINER-VALUE", 0, idx)
        t = t[:start] + "".join(extras) + t[start:]

    for name, num in FEE_NUMS.items():
        t = re.sub(
            rf"(<SHORT-NAME>{re.escape(name)}</SHORT-NAME>[\s\S]*?"
            rf"FeeBlockNumber</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
            rf"\g<1>{num}\g<2>",
            t,
            count=1,
        )

    t = re.sub(
        r"(FeeMaxBlockCount</DEFINITION-REF>\s*<VALUE>)\d+(</VALUE>)",
        r"\g<1>24\g<2>",
        t,
        count=1,
    )
    FEE.write_text(t, encoding="utf-8")
    print("Fee patched")


def patch_nvm() -> None:
    t = NVM.read_text(encoding="utf-8")
    t = t.replace(
        "/ActiveEcuC/Fee/FeeBlock_DemAdmin</VALUE-REF>",
        "/ActiveEcuC/Fee/FeeBlock_NvMConfig</VALUE-REF>",
    )
    if "NvMCfgCbkIncludeList" not in t:
        t = t.replace(
            """                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMCommonVendorParams/NvMKillWriteAllApi</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
              </PARAMETER-VALUES>
            </ECUC-CONTAINER-VALUE>
            <ECUC-CONTAINER-VALUE UUID="7bc80059-66e9-411e-856a-53a2d7ccd405">
              <SHORT-NAME>NvMBlock_ProgRequest</SHORT-NAME>""",
            """                  <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/NvM/NvMCommonVendorParams/NvMKillWriteAllApi</DEFINITION-REF>
                  <VALUE>true</VALUE>
                </ECUC-NUMERICAL-PARAM-VALUE>
                <ECUC-TEXTUAL-PARAM-VALUE>
                  <DEFINITION-REF DEST="ECUC-STRING-PARAM-DEF">/MICROSAR/NvM/NvMCommonVendorParams/NvMCfgCbkIncludeList</DEFINITION-REF>
                  <VALUE>Dem_Cbk.h</VALUE>
                </ECUC-TEXTUAL-PARAM-VALUE>
              </PARAMETER-VALUES>
            </ECUC-CONTAINER-VALUE>
            <ECUC-CONTAINER-VALUE UUID="7bc80059-66e9-411e-856a-53a2d7ccd405">
              <SHORT-NAME>NvMBlock_ProgRequest</SHORT-NAME>""",
            1,
        )
        print("NvMCfgCbkIncludeList=Dem_Cbk.h")
    if "DemAdminDataBlock" not in t:
        blocks = [
            nvm_block(
                "DemAdminDataBlock",
                3,
                ADMIN_LEN,
                "FeeBlock_DemAdmin",
                "Dem_Cfg_AdminData",
                init_cb="Dem_NvM_InitAdminData",
                use_init=True,
            ),
            nvm_block(
                "DemStatusDataBlock",
                4,
                STATUS_LEN,
                "FeeBlock_DemStatus",
                "Dem_Cfg_StatusData",
                init_cb="Dem_NvM_InitStatusData",
                use_init=True,
            ),
        ]
        for i in range(8):
            blocks.append(
                nvm_block(
                    f"DemPrimaryDataBlock{i}",
                    5 + i,
                    PRIMARY_LEN,
                    f"FeeBlock_DemPrimary{i}",
                    f"Dem_Cfg_PrimaryEntry_{i}",
                    rom="Dem_Cfg_MemoryEntryInit",
                    use_init=False,
                )
            )
        # insert before closing CONTAINERS of NvM module
        anchor = "          </CONTAINERS>\n        </ECUC-MODULE-CONFIGURATION-VALUES>"
        if anchor not in t:
            raise SystemExit("NvM CONTAINERS close not found")
        t = t.replace(anchor, "".join(blocks) + anchor, 1)
        print("added Dem NvM blocks Admin/Status/Primary0-7")
    NVM.write_text(t, encoding="utf-8")
    print("NvM patched")


def patch_dem() -> None:
    t = DEM.read_text(encoding="utf-8")
    t2, n = re.subn(
        r"(DemUseNvm</DEFINITION-REF>\s*<VALUE>)false(</VALUE>)",
        r"\g<1>true\g<2>",
        t,
        count=1,
    )
    if n != 1:
        raise SystemExit(f"DemUseNvm replace failed n={n}")
    t = t2
    print("DemUseNvm -> true")

    if "DemNvRamBlockId" not in t or "DEM_NVBLOCK_ADMIN" not in t:
        parts = [
            dem_nvram("Dem_AdminData", "DEM_NVBLOCK_ADMIN", "DemAdminDataBlock"),
            dem_nvram("Dem_StatusData", "DEM_NVBLOCK_STATUS", "DemStatusDataBlock"),
        ]
        for i in range(8):
            parts.append(
                dem_nvram(
                    f"Dem_PrimaryEntry{i}",
                    "DEM_NVBLOCK_PRIMARY",
                    f"DemPrimaryDataBlock{i}",
                    index=i,
                )
            )
        anchor = "              </SUB-CONTAINERS>\n            </ECUC-CONTAINER-VALUE>\n          </CONTAINERS>\n        </ECUC-MODULE-CONFIGURATION-VALUES>"
        # DemGeneral is last module container — match last SUB-CONTAINERS close of DemGeneral
        # Use DemClient_Dcm as nearby unique marker
        marker = '                  <SHORT-NAME>DemClient_Dcm</SHORT-NAME>'
        if marker not in t:
            raise SystemExit("DemClient_Dcm not found")
        # find end of DemClient_Dcm container then insert after it, before </SUB-CONTAINERS>
        m = re.search(
            r'(<ECUC-CONTAINER-VALUE UUID="[^"]+">\s*'
            r"<SHORT-NAME>DemClient_Dcm</SHORT-NAME>[\s\S]*?</ECUC-CONTAINER-VALUE>)",
            t,
        )
        if not m:
            raise SystemExit("DemClient_Dcm container not matched")
        t = t[: m.end()] + "\n" + "".join(parts) + t[m.end() :]
        print("added DemNvRamBlockId Admin/Status/Primary0-7")
    DEM.write_text(t, encoding="utf-8")
    print("Dem patched")


def main() -> None:
    patch_fee()
    patch_nvm()
    patch_dem()
    print("OK")


if __name__ == "__main__":
    main()
