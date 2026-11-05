"""Insert Appl_ComShell into FlatExtract COMPOSITIONTYPE + DATA-MAPPINGS + Rte instance."""
from __future__ import annotations

import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
FLAT = ROOT / "Config" / "System" / "FlatExtract.arxml"
RTE = ROOT / "Config" / "ECUC" / "IEM_TC387_BRS_Rte_ecuc.arxml"
SYSEX = ROOT / "Config" / "System" / "SystemExtract.arxml"
INV = ROOT / "Tasking" / "Developer_Swc_Com_Inventory.md"

PROTO_UUID = "c0a1b2c3-d4e5-4678-9abc-def012345678"
SWC_TYPE = "/Appl_ComShell/ComponentTypes/Appl_ComShell"
PROTO_REF = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Appl_ComShell"
ROOT_COMP = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM/COMPOSITIONTYPE"
PORT_CAR = f"{SWC_TYPE}/CarTiGlb"
PORT_MOD = f"{SWC_TYPE}/WhlMotSysModSts"
EVT_STEP = f"{SWC_TYPE}/Appl_ComShellInternalBehavior/RE_Appl_ComShell_Step"
EVT_INIT = f"{SWC_TYPE}/Appl_ComShellInternalBehavior/RE_Appl_ComShell_Init"

SD_ENTRIES = [
    ("c0a1b2c3-d4e5-4678-9abc-def012345601", "/Appl_ComShell"),
    ("c0a1b2c3-d4e5-4678-9abc-def012345602", SWC_TYPE),
    ("c0a1b2c3-d4e5-4678-9abc-def012345603", f"{SWC_TYPE}/Appl_ComShellInternalBehavior"),
    ("c0a1b2c3-d4e5-4678-9abc-def012345604", f"{SWC_TYPE}/Appl_ComShellInternalBehavior/Appl_ComShell_Init"),
    ("c0a1b2c3-d4e5-4678-9abc-def012345605", f"{SWC_TYPE}/Appl_ComShellInternalBehavior/Appl_ComShell_Step"),
    ("c0a1b2c3-d4e5-4678-9abc-def012345606", EVT_INIT),
    ("c0a1b2c3-d4e5-4678-9abc-def012345607", EVT_STEP),
    ("c0a1b2c3-d4e5-4678-9abc-def012345608", "/Appl_ComShell/ComponentTypes/Appl_ComShellImplementation"),
    ("c0a1b2c3-d4e5-4678-9abc-def012345609", PROTO_REF),
]


def write_inventory() -> None:
    text = SYSEX.read_text(encoding="utf-8")
    # Port short-name + system signal from each SENDER-RECEIVER-TO-SIGNAL-MAPPING under IEM
    blocks = re.findall(
        r"<SENDER-RECEIVER-TO-SIGNAL-MAPPING>\s*"
        r"<DATA-ELEMENT-IREF>.*?"
        r"<CONTEXT-PORT-REF[^>]*>/SwComponentType/IEM/([^<]+)</CONTEXT-PORT-REF>.*?"
        r"</DATA-ELEMENT-IREF>\s*"
        r"<SYSTEM-SIGNAL-REF[^>]*>/Signal/([^<]+)</SYSTEM-SIGNAL-REF>",
        text,
        flags=re.S,
    )
    groups = re.findall(
        r"<SENDER-RECEIVER-TO-SIGNAL-GROUP-MAPPING>\s*"
        r"<DATA-ELEMENT-IREF>.*?"
        r"<CONTEXT-PORT-REF[^>]*>/SwComponentType/IEM/([^<]+)</CONTEXT-PORT-REF>.*?"
        r"</DATA-ELEMENT-IREF>\s*"
        r"<SIGNAL-GROUP-REF[^>]*>/SignalGroup/([^<]+)</SIGNAL-GROUP-REF>",
        text,
        flags=re.S,
    )
    host = (ROOT / "Config/Developer/ComponentTypes/IEMHOST.arxml").read_text(encoding="utf-8")
    p_ports = re.findall(r"<P-PORT-PROTOTYPE[\s\S]*?<SHORT-NAME>([^<]+)</SHORT-NAME>", host)
    r_ports = re.findall(r"<R-PORT-PROTOTYPE[\s\S]*?<SHORT-NAME>([^<]+)</SHORT-NAME>", host)

    lines = [
        "# Developer SWC ↔ COM 清单（阶段5）",
        "",
        "## 现状",
        "",
        "- `Config/Developer`：`IEM` 组合 = `IEMHOST` + `IEMDTCS`（仅端口壳，无原子 runnable）",
        f"- IEMHOST：P-Port **{len(p_ports)}** / R-Port **{len(r_ports)}**",
        "- `SystemExtract`：已有 IEM 端口 → SystemSignal / SignalGroup 的 DATA-MAPPING",
        "- `FlatExtract` COMPOSITIONTYPE：原先只有 BSW Service SWC；本补丁加入最小应用壳 `Appl_ComShell`",
        "- ECU Projects `ECU_Composition`：空（未同步 System Extract 应用到 Flat）",
        "",
        "## 最小壳 `Appl_ComShell`",
        "",
        "| 方向 | Port | PortInterface | SystemSignal | Com 句柄 |",
        "|------|------|---------------|--------------|----------|",
        "| RX | CarTiGlb | CarTiGlb_5 | CarTiGlb | `ComConf_ComSignal_isCarTiGlb_7a3bdc75_Rx` |",
        "| TX | WhlMotSysModSts | WhlMotSysModSts_5 | WhlMotSysModSts | `ComConf_ComSignal_isWhlMotSysModSts_bd46c3f5_Tx` |",
        "",
        "## SystemExtract 标量映射（IEM → /Signal/*）",
        "",
        f"共 **{len(blocks)}** 条：",
        "",
        "| IEM Port | SystemSignal |",
        "|----------|--------------|",
    ]
    for port, sig in sorted(set(blocks), key=lambda x: x[0]):
        lines.append(f"| {port} | {sig} |")
    lines += [
        "",
        "## SystemExtract 组映射（IEM → /SignalGroup/*）",
        "",
        f"共 **{len(groups)}** 条：",
        "",
        "| IEM Port | SignalGroup |",
        "|----------|-------------|",
    ]
    for port, grp in sorted(set(groups), key=lambda x: x[0]):
        lines.append(f"| {port} | {grp} |")
    lines += [
        "",
        "## 后续",
        "",
        "1. 在 DaVinci 中把更多 IEMHOST 端口落到原子 SWC（或扩展 `Appl_ComShell`）",
        "2. `DVCfgCmd --generate --modulesToGenerate` Rte 后改用 `Rte_Read`/`Rte_Write`",
        "3. 当前运行时桥：`Appl_ComShell_Step` 直接 Com 收发（与 DATA-MAPPING 同信号）",
        "",
    ]
    INV.write_text("\n".join(lines) + "\n", encoding="utf-8", newline="\n")
    print("wrote", INV, "scalar", len(blocks), "group", len(groups))


def patch_flat() -> None:
    flat = FLAT.read_text(encoding="utf-8")
    if "COMPOSITIONTYPE/Appl_ComShell" not in flat:
        proto = f"""                                <SW-COMPONENT-PROTOTYPE UUID="{PROTO_UUID}">
                                  <SHORT-NAME>Appl_ComShell</SHORT-NAME>
                                  <TYPE-TREF DEST="APPLICATION-SW-COMPONENT-TYPE">{SWC_TYPE}</TYPE-TREF>
                                </SW-COMPONENT-PROTOTYPE>
"""
        anchor = (
            '                                <SW-COMPONENT-PROTOTYPE UUID="a1b2c3d4-e5f6-4789-ab01-23456789cdef">\n'
            "                                  <SHORT-NAME>NvM</SHORT-NAME>\n"
        )
        if anchor not in flat:
            raise SystemExit("FlatExtract NvM prototype anchor missing")
        flat = flat.replace(anchor, proto + anchor, 1)
        print("FlatExtract: Appl_ComShell prototype inserted")
    else:
        print("FlatExtract: Appl_ComShell prototype already present")

    if "Appl_ComShell/CarTiGlb" not in flat:
        mapping = f"""                                  <DATA-MAPPINGS>
                                    <SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                      <DATA-ELEMENT-IREF>
                                        <CONTEXT-COMPONENT-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO_REF}</CONTEXT-COMPONENT-REF>
                                        <CONTEXT-COMPOSITION-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">{ROOT_COMP}</CONTEXT-COMPOSITION-REF>
                                        <CONTEXT-PORT-REF DEST="R-PORT-PROTOTYPE">{PORT_CAR}</CONTEXT-PORT-REF>
                                        <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/CarTiGlb_5/CarTiGlb</TARGET-DATA-PROTOTYPE-REF>
                                      </DATA-ELEMENT-IREF>
                                      <SYSTEM-SIGNAL-REF DEST="SYSTEM-SIGNAL">/Signal/CarTiGlb</SYSTEM-SIGNAL-REF>
                                    </SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                    <SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                      <DATA-ELEMENT-IREF>
                                        <CONTEXT-COMPONENT-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO_REF}</CONTEXT-COMPONENT-REF>
                                        <CONTEXT-COMPOSITION-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">{ROOT_COMP}</CONTEXT-COMPOSITION-REF>
                                        <CONTEXT-PORT-REF DEST="P-PORT-PROTOTYPE">{PORT_MOD}</CONTEXT-PORT-REF>
                                        <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/WhlMotSysModSts_5/WhlMotSysModSts</TARGET-DATA-PROTOTYPE-REF>
                                      </DATA-ELEMENT-IREF>
                                      <SYSTEM-SIGNAL-REF DEST="SYSTEM-SIGNAL">/Signal/WhlMotSysModSts</SYSTEM-SIGNAL-REF>
                                    </SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                  </DATA-MAPPINGS>
"""
        # SYSTEM-MAPPING currently empty — inject DATA-MAPPINGS before closing
        empty = (
            '                                <SYSTEM-MAPPING UUID="b22b89ba-a5ae-47a5-a341-43069ba97e94">\n'
            "                                  <SHORT-NAME>MAPPINGS</SHORT-NAME>\n"
            "                                </SYSTEM-MAPPING>"
        )
        filled = (
            '                                <SYSTEM-MAPPING UUID="b22b89ba-a5ae-47a5-a341-43069ba97e94">\n'
            "                                  <SHORT-NAME>MAPPINGS</SHORT-NAME>\n"
            + mapping
            + "                                </SYSTEM-MAPPING>"
        )
        if empty not in flat:
            raise SystemExit("FlatExtract empty SYSTEM-MAPPING anchor missing")
        flat = flat.replace(empty, filled, 1)
        print("FlatExtract: DATA-MAPPINGS inserted")
    else:
        print("FlatExtract: DATA-MAPPINGS already present")

    if "/Appl_ComShell/ComponentTypes/Appl_ComShell/Appl_ComShellInternalBehavior/Appl_ComShell_Step" not in flat:
        # Insert SD entries after NvM Implementation SD (same block as _patch_nvm_swc_rte)
        lines = "\n".join(f'                                    <SD GID="{gid}">{path}</SD>' for gid, path in SD_ENTRIES) + "\n"
        anchor = (
            '                                    <SD GID="0d29e758-51a3-44c0-e285-73b4d0516293">'
            "/MICROSAR/NvM_swc/ComponentTypes/NvMImplementation</SD>\n"
        )
        if anchor not in flat:
            # fallback: after NvM prototype SD
            anchor = (
                '                                    <SD GID="a1b2c3d4-e5f6-4789-ab01-23456789cdef">'
                "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/NvM</SD>\n"
            )
        if anchor not in flat:
            raise SystemExit("FlatExtract SD anchor for Appl_ComShell missing")
        flat = flat.replace(anchor, anchor + lines, 1)
        print("FlatExtract: Appl_ComShell SD entries inserted")
    else:
        print("FlatExtract: Appl_ComShell SD entries already present")

    FLAT.write_text(flat, encoding="utf-8", newline="\n")


def patch_rte() -> None:
    text = RTE.read_text(encoding="utf-8")
    if "Appl_ComShell_EcuSwComposition" in text:
        print("Rte: Appl_ComShell_EcuSwComposition already present")
        return

    u1, u3 = uuid.uuid4(), uuid.uuid4()
    block = f"""            <ECUC-CONTAINER-VALUE UUID="{u1}">
              <SHORT-NAME>Appl_ComShell_EcuSwComposition</SHORT-NAME>
              <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance</DEFINITION-REF>
              <REFERENCE-VALUES>
                <ECUC-REFERENCE-VALUE>
                  <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteSoftwareComponentInstanceRef</DEFINITION-REF>
                  <VALUE-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO_REF}</VALUE-REF>
                </ECUC-REFERENCE-VALUE>
              </REFERENCE-VALUES>
              <SUB-CONTAINERS>
                <ECUC-CONTAINER-VALUE UUID="{u3}">
                  <SHORT-NAME>RE_Appl_ComShell_Step</SHORT-NAME>
                  <DEFINITION-REF DEST="ECUC-PARAM-CONF-CONTAINER-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping</DEFINITION-REF>
                  <PARAMETER-VALUES>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-BOOLEAN-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteImmediateRestart</DEFINITION-REF>
                      <VALUE>false</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-NUMERICAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-INTEGER-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RtePositionInTask</DEFINITION-REF>
                      <VALUE>30</VALUE>
                    </ECUC-NUMERICAL-PARAM-VALUE>
                    <ECUC-TEXTUAL-PARAM-VALUE>
                      <DEFINITION-REF DEST="ECUC-ENUMERATION-PARAM-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteCyclicTriggerImplementation</DEFINITION-REF>
                      <VALUE>None</VALUE>
                    </ECUC-TEXTUAL-PARAM-VALUE>
                  </PARAMETER-VALUES>
                  <REFERENCE-VALUES>
                    <ECUC-REFERENCE-VALUE>
                      <DEFINITION-REF DEST="ECUC-FOREIGN-REFERENCE-DEF">/MICROSAR/Rte/RteSwComponentInstance/RteEventToTaskMapping/RteEventRef</DEFINITION-REF>
                      <VALUE-REF DEST="TIMING-EVENT">{EVT_STEP}</VALUE-REF>
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
        '<ECUC-CONTAINER-VALUE UUID="a1b2c3d4-e5f6-4789-ab01-23456789cdef">\n'
        if False
        else None
    )
    # Insert before NvM_EcuSwComposition
    nvm = "              <SHORT-NAME>NvM_EcuSwComposition</SHORT-NAME>"
    idx = text.find(nvm)
    if idx < 0:
        raise SystemExit("NvM_EcuSwComposition anchor missing")
    # back up to container start
    start = text.rfind("<ECUC-CONTAINER-VALUE", 0, idx)
    text = text[:start] + block + text[start:]
    RTE.write_text(text, encoding="utf-8", newline="\n")
    print("Rte: Appl_ComShell_EcuSwComposition inserted")


def main() -> None:
    write_inventory()
    patch_flat()
    patch_rte()
    print("ok Appl_ComShell wiring")


if __name__ == "__main__":
    main()
