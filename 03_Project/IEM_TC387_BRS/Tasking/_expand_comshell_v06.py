# -*- coding: utf-8 -*-
"""Expand Appl_ComShell to v0.6: v0.5 scalars + 21 COM groups (excl. VehCfg*)."""
from __future__ import annotations

import importlib.util
import re
import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
BASE = ROOT / "Tasking" / "_expand_comshell_v05.py"
V03 = ROOT / "Tasking" / "_expand_comshell_v03.py"

spec05 = importlib.util.spec_from_file_location("comshell_v05", BASE)
mod05 = importlib.util.module_from_spec(spec05)
assert spec05.loader is not None
spec05.loader.exec_module(mod05)

spec03 = importlib.util.spec_from_file_location("comshell_v03", V03)
mod03 = importlib.util.module_from_spec(spec03)
assert spec03.loader is not None
spec03.loader.exec_module(mod03)

# reuse scalar PORTS from v0.5
SCALAR_PORTS = list(mod05.mod.PORTS)  # type: ignore[attr-defined]

PI = (ROOT / "Config/Developer/PortInterfaces.arxml").read_text(encoding="utf-8")
HOST = (ROOT / "Config/Developer/ComponentTypes/IEMHOST.arxml").read_text(encoding="utf-8")
DTCS = (ROOT / "Config/Developer/ComponentTypes/IEMDTCS.arxml").read_text(encoding="utf-8")
DT = (ROOT / "Config/Developer/DataTypes.arxml").read_text(encoding="utf-8")
SYSX = (ROOT / "Config/System/SystemExtract.arxml").read_text(encoding="utf-8")
COM_ECUC = (ROOT / "Config/ECUC/IEM_TC387_BRS_Com_ecuc.arxml").read_text(encoding="utf-8")

ARXML = ROOT / "Config/ApplicationComponents/Appl_ComShell.arxml"
DEV = ROOT / "Config/Developer/ComponentTypes/Appl_ComShell.arxml"
FLAT = ROOT / "Config/System/FlatExtract.arxml"
SRC = ROOT / "Appl/Source/Appl_ComShell.c"
HDR = ROOT / "Appl/Include/Appl_ComShell.h"

PROTO = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Appl_ComShell"
ROOT_COMP = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM/COMPOSITIONTYPE"
SWC = "/Appl_ComShell/ComponentTypes/Appl_ComShell"
IDT_PKG = "/Appl_ComShell/ImplementationDataTypes"

EXCLUDE = {"VehCfgPrm", "VehCfgPrmExt"}

# direction hint, port name (iface resolved from host/dtcs)
GROUP_PORTS = [
    ("R", "CrashStsSafe"),
    ("R", "EngSt1WdSts"),
    ("R", "EscVariantToDmc"),
    ("R", "HvSysRlySts"),
    ("R", "PtTqAtAxleMaxReq"),
    ("R", "StcStsToDmc"),
    ("R", "VehModMngtGlbSafe1"),
    ("R", "VehMtnSt"),
    ("R", "VehSpdLgt"),
    ("R", "WhlMotSysTqAllwd"),
    ("R", "ImobEngMgrReq2"),
    ("R", "VehBattU"),
    ("P", "DmcStsRearToEsc"),
    ("P", "WhlMotSysSpdActSafe"),
    ("P", "WhlMotSysTqEst"),
    ("P", "IEMTestFr1"),
    ("P", "IEMTestFr2"),
    ("P", "IEMTestFr3"),
    ("P", "IemGeneric"),
    ("P", "ImobEngChk2"),
    ("P", "WhlMotSysTqAvl"),
]

COM_TO_IMPL = {
    "BOOLEAN": "boolean",
    "UINT8": "uint8",
    "UINT16": "uint16",
    "UINT32": "uint32",
    "SINT8": "sint8",
    "SINT16": "sint16",
    "SINT32": "sint32",
    "UINT8_N": "uint8",
}


def uid() -> str:
    return str(uuid.uuid4())


def port_iface(port: str):
    for src in (HOST, DTCS):
        for kind in ("P", "R"):
            for m in re.finditer(rf"<SHORT-NAME>{re.escape(port)}</SHORT-NAME>", src):
                open_lt = src.rfind("-PORT-PROTOTYPE", 0, m.start())
                if open_lt < 0:
                    continue
                open_lt = src.rfind("<", 0, open_lt)
                tag = src[open_lt : src.find(">", open_lt) + 1]
                if f"{kind}-PORT-PROTOTYPE" not in tag:
                    continue
                end = src.find(f"</{kind}-PORT-PROTOTYPE>", m.end())
                blk = src[open_lt:end]
                if f"<SHORT-NAME>{port}</SHORT-NAME>" not in blk:
                    continue
                im = re.search(
                    r"/PortInterfaces/([^<]+)</(?:REQUIRED|PROVIDED)-INTERFACE-TREF>",
                    blk,
                )
                if im:
                    return kind, im.group(1)
    raise SystemExit(f"port iface missing: {port}")


def iface_info(iface: str):
    m = re.search(
        rf"<SENDER-RECEIVER-INTERFACE[\s\S]*?<SHORT-NAME>{re.escape(iface)}</SHORT-NAME>"
        rf"([\s\S]*?)</SENDER-RECEIVER-INTERFACE>",
        PI,
    )
    if not m:
        raise SystemExit(f"iface missing: {iface}")
    body = m.group(1)
    de = re.search(
        r"<VARIABLE-DATA-PROTOTYPE[\s\S]*?<SHORT-NAME>([^<]+)</SHORT-NAME>", body
    )
    tm = re.search(r'<TYPE-TREF DEST="([^"]+)">([^<]+)</TYPE-TREF>', body)
    if not de or not tm:
        raise SystemExit(f"iface incomplete: {iface}")
    return de.group(1), tm.group(1), tm.group(2).rsplit("/", 1)[-1]


def record_elems(adt: str):
    m = re.search(
        rf"<APPLICATION-RECORD-DATA-TYPE[\s\S]*?<SHORT-NAME>{re.escape(adt)}</SHORT-NAME>"
        rf"([\s\S]*?)</APPLICATION-RECORD-DATA-TYPE>",
        DT,
    )
    if not m:
        raise SystemExit(f"record ADT missing: {adt}")
    out = []
    for em in re.finditer(
        r"<APPLICATION-RECORD-ELEMENT UUID=\"[^\"]+\">\s*<SHORT-NAME>([^<]+)</SHORT-NAME>"
        r"[\s\S]*?<TYPE-TREF DEST=\"([^\"]+)\">([^<]+)</TYPE-TREF>",
        m.group(1),
    ):
        out.append((em.group(1), em.group(3).rsplit("/", 1)[-1]))
    return out


def sys_group_type_mapping(port: str) -> tuple[str, list[tuple[str, str]]]:
    """Return (signal_group, [(record_elem, system_signal), ...]) from SystemExtract IEM map."""
    for m in re.finditer(
        r"<SENDER-RECEIVER-TO-SIGNAL-GROUP-MAPPING>([\s\S]*?)</SENDER-RECEIVER-TO-SIGNAL-GROUP-MAPPING>",
        SYSX,
    ):
        blk = m.group(1)
        if f"/IEM/{port}</CONTEXT-PORT-REF>" not in blk:
            continue
        sg = re.search(r"/SignalGroup/([^<]+)</", blk)
        pairs = re.findall(
            r"/ApplicationDataTypes/[^/]+/([^<]+)</APPLICATION-RECORD-ELEMENT-REF>\s*"
            r"<SYSTEM-SIGNAL-REF[^>]*>/Signal/([^<]+)</SYSTEM-SIGNAL-REF>",
            blk,
        )
        if sg and pairs:
            return sg.group(1), pairs
    raise SystemExit(f"SystemExtract group map missing: {port}")


def build_com_signal_types() -> dict[str, str]:
    """Map short signal leaf name -> platform impl via Com ECUC ComSignalType."""
    out: dict[str, str] = {}
    # containers named isXxx_hash_Rx/Tx
    for m in re.finditer(
        r"<SHORT-NAME>(is[A-Za-z0-9]+)_([0-9a-f]+)_(Rx|Tx)</SHORT-NAME>([\s\S]*?)</ECUC-CONTAINER-VALUE>",
        COM_ECUC,
    ):
        name, body = m.group(1), m.group(4)
        if "ComSignalType" not in body:
            continue
        tm = re.search(
            r"ComSignalType</DEFINITION-REF>\s*<VALUE>([A-Z0-9_]+)</VALUE>",
            body,
        )
        if not tm:
            continue
        impl = COM_TO_IMPL.get(tm.group(1))
        if not impl:
            continue
        # strip leading 'is'
        leaf = name[2:] if name.startswith("is") else name
        out.setdefault(leaf, impl)
        out.setdefault(name, impl)
    return out


COM_TYPES = build_com_signal_types()


def resolve_impl_for_elem(port: str, elem: str, syssig: str, eadt: str) -> str:
    # try exact system signal / group-signal leaf matches
    for key in (
        syssig,
        f"{port}{elem}",
        f"{port}{syssig}",
        elem,
        eadt,
    ):
        if key in COM_TYPES:
            return COM_TYPES[key]
    # fuzzy: any com key ending with elem or syssig
    for k, v in COM_TYPES.items():
        if k.endswith(elem) or k.endswith(syssig) or syssig in k:
            return v
    # known overrides from v0.5 / name
    if eadt in ("IsgSpdWSgnTyp_2",):
        return "sint16"
    if eadt in ("HvTq1_2", "UInt16_2", "Spd1_2", "Tq2_2", "Tq34_1", "Tq35_1", "U1_2", "N1_2"):
        return "uint16"
    if "Sgn" in eadt or "Sint" in eadt:
        return "sint16"
    return "uint8"


def collect_groups():
    """Return list of group descriptors."""
    groups = []
    for _hint, port in GROUP_PORTS:
        if port in EXCLUDE:
            continue
        kind, iface = port_iface(port)
        de, _dest, adt = iface_info(iface)
        elems = record_elems(adt)
        sg, pairs = sys_group_type_mapping(port)
        pair_map = dict(pairs)
        elem_impls = []
        for ename, eadt in elems:
            syssig = pair_map.get(ename)
            if not syssig:
                raise SystemExit(f"{port}.{ename}: no syssig in TYPE-MAPPING")
            impl = resolve_impl_for_elem(port, ename, syssig, eadt)
            elem_impls.append((ename, eadt, impl, syssig))
        groups.append(
            {
                "dir": kind,
                "port": port,
                "iface": iface,
                "de": de,
                "adt": adt,
                "sg": sg,
                "elems": elem_impls,
            }
        )
    return groups


def cntr_field(elems: list[tuple[str, str, str, str]]) -> str | None:
    for ename, _a, _i, _s in elems:
        if ename.endswith("Cntr") or ename == "Cntr" or "Cntr" in ename:
            return ename
    return None


def write_arxml(groups) -> None:
    # primitive maps: scalars + group nested
    prim_maps: dict[str, str] = {}
    for _d, _p, _i, app, impl, _s in SCALAR_PORTS:
        prim_maps[app] = impl
    for g in groups:
        for _ename, eadt, impl, _sys in g["elems"]:
            prim_maps.setdefault(eadt, impl)

    dt_maps = []
    for app, impl in sorted(prim_maps.items()):
        dt_maps.append(
            f"""                <DATA-TYPE-MAP>
                  <APPLICATION-DATA-TYPE-REF DEST="APPLICATION-PRIMITIVE-DATA-TYPE">/ApplicationDataTypes/{app}</APPLICATION-DATA-TYPE-REF>
                  <IMPLEMENTATION-DATA-TYPE-REF DEST="IMPLEMENTATION-DATA-TYPE">/AUTOSAR_Platform/ImplementationDataTypes/{impl}</IMPLEMENTATION-DATA-TYPE-REF>
                </DATA-TYPE-MAP>"""
        )

    # record IDTs + maps
    idt_xml = []
    seen_adt: set[str] = set()
    for g in groups:
        adt = g["adt"]
        if adt in seen_adt:
            continue
        seen_adt.add(adt)
        sub = []
        for ename, _eadt, impl, _sys in g["elems"]:
            sub.append(
                f"""              <IMPLEMENTATION-DATA-TYPE-ELEMENT UUID="{uid()}">
                <SHORT-NAME>{ename}</SHORT-NAME>
                <CATEGORY>TYPE_REFERENCE</CATEGORY>
                <SW-DATA-DEF-PROPS>
                  <SW-DATA-DEF-PROPS-VARIANTS>
                    <SW-DATA-DEF-PROPS-CONDITIONAL>
                      <IMPLEMENTATION-DATA-TYPE-REF DEST="IMPLEMENTATION-DATA-TYPE">/AUTOSAR_Platform/ImplementationDataTypes/{impl}</IMPLEMENTATION-DATA-TYPE-REF>
                    </SW-DATA-DEF-PROPS-CONDITIONAL>
                  </SW-DATA-DEF-PROPS-VARIANTS>
                </SW-DATA-DEF-PROPS>
              </IMPLEMENTATION-DATA-TYPE-ELEMENT>"""
            )
        idt_xml.append(
            f"""            <IMPLEMENTATION-DATA-TYPE UUID="{uid()}">
              <SHORT-NAME>{adt}</SHORT-NAME>
              <CATEGORY>STRUCTURE</CATEGORY>
              <SUB-ELEMENTS>
{chr(10).join(sub)}
              </SUB-ELEMENTS>
            </IMPLEMENTATION-DATA-TYPE>"""
        )
        dt_maps.append(
            f"""                <DATA-TYPE-MAP>
                  <APPLICATION-DATA-TYPE-REF DEST="APPLICATION-RECORD-DATA-TYPE">/ApplicationDataTypes/{adt}</APPLICATION-DATA-TYPE-REF>
                  <IMPLEMENTATION-DATA-TYPE-REF DEST="IMPLEMENTATION-DATA-TYPE">{IDT_PKG}/{adt}</IMPLEMENTATION-DATA-TYPE-REF>
                </DATA-TYPE-MAP>"""
        )

    port_xml = []
    dra = []
    dsp = []

    def add_scalar(direction, port, iface, _app, _impl, _sig):
        if direction == "R":
            port_xml.append(
                f"""                <R-PORT-PROTOTYPE UUID="{uid()}">
                  <SHORT-NAME>{port}</SHORT-NAME>
                  <REQUIRED-COM-SPECS>
                    <NONQUEUED-RECEIVER-COM-SPEC>
                      <DATA-ELEMENT-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</DATA-ELEMENT-REF>
                      <ALIVE-TIMEOUT>0</ALIVE-TIMEOUT>
                      <ENABLE-UPDATE>false</ENABLE-UPDATE>
                      <HANDLE-NEVER-RECEIVED>false</HANDLE-NEVER-RECEIVED>
                      <INIT-VALUE>
                        <NUMERICAL-VALUE-SPECIFICATION>
                          <SHORT-LABEL>Init</SHORT-LABEL>
                          <VALUE>0</VALUE>
                        </NUMERICAL-VALUE-SPECIFICATION>
                      </INIT-VALUE>
                    </NONQUEUED-RECEIVER-COM-SPEC>
                  </REQUIRED-COM-SPECS>
                  <REQUIRED-INTERFACE-TREF DEST="SENDER-RECEIVER-INTERFACE">/PortInterfaces/{iface}</REQUIRED-INTERFACE-TREF>
                </R-PORT-PROTOTYPE>"""
            )
            dra.append(
                f"""                        <VARIABLE-ACCESS UUID="{uid()}">
                          <SHORT-NAME>DRA_{port}</SHORT-NAME>
                          <ACCESSED-VARIABLE>
                            <AUTOSAR-VARIABLE-IREF>
                              <PORT-PROTOTYPE-REF DEST="R-PORT-PROTOTYPE">{SWC}/{port}</PORT-PROTOTYPE-REF>
                              <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</TARGET-DATA-PROTOTYPE-REF>
                            </AUTOSAR-VARIABLE-IREF>
                          </ACCESSED-VARIABLE>
                        </VARIABLE-ACCESS>"""
            )
        else:
            port_xml.append(
                f"""                <P-PORT-PROTOTYPE UUID="{uid()}">
                  <SHORT-NAME>{port}</SHORT-NAME>
                  <PROVIDED-COM-SPECS>
                    <NONQUEUED-SENDER-COM-SPEC>
                      <DATA-ELEMENT-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</DATA-ELEMENT-REF>
                      <INIT-VALUE>
                        <NUMERICAL-VALUE-SPECIFICATION>
                          <SHORT-LABEL>Init</SHORT-LABEL>
                          <VALUE>0</VALUE>
                        </NUMERICAL-VALUE-SPECIFICATION>
                      </INIT-VALUE>
                    </NONQUEUED-SENDER-COM-SPEC>
                  </PROVIDED-COM-SPECS>
                  <PROVIDED-INTERFACE-TREF DEST="SENDER-RECEIVER-INTERFACE">/PortInterfaces/{iface}</PROVIDED-INTERFACE-TREF>
                </P-PORT-PROTOTYPE>"""
            )
            dsp.append(
                f"""                        <VARIABLE-ACCESS UUID="{uid()}">
                          <SHORT-NAME>DSP_{port}</SHORT-NAME>
                          <ACCESSED-VARIABLE>
                            <AUTOSAR-VARIABLE-IREF>
                              <PORT-PROTOTYPE-REF DEST="P-PORT-PROTOTYPE">{SWC}/{port}</PORT-PROTOTYPE-REF>
                              <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</TARGET-DATA-PROTOTYPE-REF>
                            </AUTOSAR-VARIABLE-IREF>
                          </ACCESSED-VARIABLE>
                        </VARIABLE-ACCESS>"""
            )

    for row in SCALAR_PORTS:
        add_scalar(*row)

    def record_init_xml(elems) -> str:
        fields = []
        for ename, _eadt, _impl, _sys in elems:
            fields.append(
                f"""                        <NUMERICAL-VALUE-SPECIFICATION>
                          <SHORT-LABEL>{ename}</SHORT-LABEL>
                          <VALUE>0</VALUE>
                        </NUMERICAL-VALUE-SPECIFICATION>"""
            )
        return (
            "                      <INIT-VALUE>\n"
            "                        <RECORD-VALUE-SPECIFICATION>\n"
            "                          <FIELDS>\n"
            + "\n".join(fields)
            + "\n                          </FIELDS>\n"
            "                        </RECORD-VALUE-SPECIFICATION>\n"
            "                      </INIT-VALUE>"
        )

    for g in groups:
        direction, port, iface, de = g["dir"], g["port"], g["iface"], g["de"]
        init_blk = record_init_xml(g["elems"])
        if direction == "R":
            port_xml.append(
                f"""                <R-PORT-PROTOTYPE UUID="{uid()}">
                  <SHORT-NAME>{port}</SHORT-NAME>
                  <REQUIRED-COM-SPECS>
                    <NONQUEUED-RECEIVER-COM-SPEC>
                      <DATA-ELEMENT-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{de}</DATA-ELEMENT-REF>
                      <ALIVE-TIMEOUT>0</ALIVE-TIMEOUT>
                      <ENABLE-UPDATE>false</ENABLE-UPDATE>
                      <HANDLE-NEVER-RECEIVED>false</HANDLE-NEVER-RECEIVED>
{init_blk}
                    </NONQUEUED-RECEIVER-COM-SPEC>
                  </REQUIRED-COM-SPECS>
                  <REQUIRED-INTERFACE-TREF DEST="SENDER-RECEIVER-INTERFACE">/PortInterfaces/{iface}</REQUIRED-INTERFACE-TREF>
                </R-PORT-PROTOTYPE>"""
            )
            dra.append(
                f"""                        <VARIABLE-ACCESS UUID="{uid()}">
                          <SHORT-NAME>DRA_{port}</SHORT-NAME>
                          <ACCESSED-VARIABLE>
                            <AUTOSAR-VARIABLE-IREF>
                              <PORT-PROTOTYPE-REF DEST="R-PORT-PROTOTYPE">{SWC}/{port}</PORT-PROTOTYPE-REF>
                              <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{de}</TARGET-DATA-PROTOTYPE-REF>
                            </AUTOSAR-VARIABLE-IREF>
                          </ACCESSED-VARIABLE>
                        </VARIABLE-ACCESS>"""
            )
        else:
            port_xml.append(
                f"""                <P-PORT-PROTOTYPE UUID="{uid()}">
                  <SHORT-NAME>{port}</SHORT-NAME>
                  <PROVIDED-COM-SPECS>
                    <NONQUEUED-SENDER-COM-SPEC>
                      <DATA-ELEMENT-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{de}</DATA-ELEMENT-REF>
{init_blk}
                    </NONQUEUED-SENDER-COM-SPEC>
                  </PROVIDED-COM-SPECS>
                  <PROVIDED-INTERFACE-TREF DEST="SENDER-RECEIVER-INTERFACE">/PortInterfaces/{iface}</PROVIDED-INTERFACE-TREF>
                </P-PORT-PROTOTYPE>"""
            )
            dsp.append(
                f"""                        <VARIABLE-ACCESS UUID="{uid()}">
                          <SHORT-NAME>DSP_{port}</SHORT-NAME>
                          <ACCESSED-VARIABLE>
                            <AUTOSAR-VARIABLE-IREF>
                              <PORT-PROTOTYPE-REF DEST="P-PORT-PROTOTYPE">{SWC}/{port}</PORT-PROTOTYPE-REF>
                              <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{de}</TARGET-DATA-PROTOTYPE-REF>
                            </AUTOSAR-VARIABLE-IREF>
                          </ACCESSED-VARIABLE>
                        </VARIABLE-ACCESS>"""
            )

    n_rx = sum(1 for d, *_ in SCALAR_PORTS if d == "R") + sum(1 for g in groups if g["dir"] == "R")
    n_tx = sum(1 for d, *_ in SCALAR_PORTS if d == "P") + sum(1 for g in groups if g["dir"] == "P")

    text = f"""<?xml version="1.0" encoding="utf-8"?>
<!-- Appl_ComShell v0.6: {n_rx} RX + {n_tx} TX (scalars + groups excl VehCfg) -->
<AUTOSAR xmlns="http://autosar.org/schema/r4.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://autosar.org/schema/r4.0 AUTOSAR_00046.xsd">
  <AR-PACKAGES>
    <AR-PACKAGE UUID="{uid()}">
      <SHORT-NAME>Appl_ComShell</SHORT-NAME>
      <AR-PACKAGES>
        <AR-PACKAGE UUID="{uid()}">
          <SHORT-NAME>ImplementationDataTypes</SHORT-NAME>
          <ELEMENTS>
{chr(10).join(idt_xml)}
          </ELEMENTS>
        </AR-PACKAGE>
        <AR-PACKAGE UUID="{uid()}">
          <SHORT-NAME>DataTypeMappingSets</SHORT-NAME>
          <ELEMENTS>
            <DATA-TYPE-MAPPING-SET UUID="{uid()}">
              <SHORT-NAME>Appl_ComShell_DTMap</SHORT-NAME>
              <DATA-TYPE-MAPS>
{chr(10).join(dt_maps)}
              </DATA-TYPE-MAPS>
            </DATA-TYPE-MAPPING-SET>
          </ELEMENTS>
        </AR-PACKAGE>
        <AR-PACKAGE UUID="{uid()}">
          <SHORT-NAME>ComponentTypes</SHORT-NAME>
          <ELEMENTS>
            <APPLICATION-SW-COMPONENT-TYPE UUID="{uid()}">
              <SHORT-NAME>Appl_ComShell</SHORT-NAME>
              <PORTS>
{chr(10).join(port_xml)}
              </PORTS>
              <INTERNAL-BEHAVIORS>
                <SWC-INTERNAL-BEHAVIOR UUID="{uid()}">
                  <SHORT-NAME>Appl_ComShellInternalBehavior</SHORT-NAME>
                  <DATA-TYPE-MAPPING-REFS>
                    <DATA-TYPE-MAPPING-REF DEST="DATA-TYPE-MAPPING-SET">/Appl_ComShell/DataTypeMappingSets/Appl_ComShell_DTMap</DATA-TYPE-MAPPING-REF>
                  </DATA-TYPE-MAPPING-REFS>
                  <EVENTS>
                    <TIMING-EVENT UUID="{uid()}">
                      <SHORT-NAME>RE_Appl_ComShell_Step</SHORT-NAME>
                      <START-ON-EVENT-REF DEST="RUNNABLE-ENTITY">{SWC}/Appl_ComShellInternalBehavior/Appl_ComShell_Step</START-ON-EVENT-REF>
                      <PERIOD>0.01</PERIOD>
                    </TIMING-EVENT>
                  </EVENTS>
                  <HANDLE-TERMINATION-AND-RESTART>NO-SUPPORT</HANDLE-TERMINATION-AND-RESTART>
                  <RUNNABLES>
                    <RUNNABLE-ENTITY UUID="{uid()}">
                      <SHORT-NAME>Appl_ComShell_Step</SHORT-NAME>
                      <MINIMUM-START-INTERVAL>0</MINIMUM-START-INTERVAL>
                      <CAN-BE-INVOKED-CONCURRENTLY>false</CAN-BE-INVOKED-CONCURRENTLY>
                      <DATA-RECEIVE-POINT-BY-ARGUMENTS>
{chr(10).join(dra)}
                      </DATA-RECEIVE-POINT-BY-ARGUMENTS>
                      <DATA-SEND-POINTS>
{chr(10).join(dsp)}
                      </DATA-SEND-POINTS>
                      <SYMBOL>Appl_ComShell_Step</SYMBOL>
                    </RUNNABLE-ENTITY>
                  </RUNNABLES>
                  <SUPPORTS-MULTIPLE-INSTANTIATION>false</SUPPORTS-MULTIPLE-INSTANTIATION>
                </SWC-INTERNAL-BEHAVIOR>
              </INTERNAL-BEHAVIORS>
            </APPLICATION-SW-COMPONENT-TYPE>
            <SWC-IMPLEMENTATION UUID="{uid()}">
              <SHORT-NAME>Appl_ComShellImplementation</SHORT-NAME>
              <PROGRAMMING-LANGUAGE>C</PROGRAMMING-LANGUAGE>
              <SW-VERSION>0.6.0</SW-VERSION>
              <BEHAVIOR-REF DEST="SWC-INTERNAL-BEHAVIOR">{SWC}/Appl_ComShellInternalBehavior</BEHAVIOR-REF>
            </SWC-IMPLEMENTATION>
          </ELEMENTS>
        </AR-PACKAGE>
      </AR-PACKAGES>
    </AR-PACKAGE>
  </AR-PACKAGES>
</AUTOSAR>
"""
    ARXML.write_text(text, encoding="utf-8", newline="\n")
    DEV.write_text(text, encoding="utf-8", newline="\n")
    print("wrote ARXML ports", len(SCALAR_PORTS) + len(groups), "records", len(seen_adt))


def patch_flat(groups) -> None:
    flat = FLAT.read_text(encoding="utf-8")
    start = flat.find("<DATA-MAPPINGS>")
    end = flat.find("</DATA-MAPPINGS>")
    if start < 0 or end < 0:
        raise SystemExit("DATA-MAPPINGS missing")
    blocks = []
    for direction, port, iface, _a, _i, sig in SCALAR_PORTS:
        dest = "R-PORT-PROTOTYPE" if direction == "R" else "P-PORT-PROTOTYPE"
        blocks.append(
            f"""                                    <SENDER-RECEIVER-TO-SIGNAL-MAPPING>
                                      <DATA-ELEMENT-IREF>
                                        <CONTEXT-COMPONENT-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO}</CONTEXT-COMPONENT-REF>
                                        <CONTEXT-COMPOSITION-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">{ROOT_COMP}</CONTEXT-COMPOSITION-REF>
                                        <CONTEXT-PORT-REF DEST="{dest}">{SWC}/{port}</CONTEXT-PORT-REF>
                                        <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{port}</TARGET-DATA-PROTOTYPE-REF>
                                      </DATA-ELEMENT-IREF>
                                      <SYSTEM-SIGNAL-REF DEST="SYSTEM-SIGNAL">/Signal/{sig}</SYSTEM-SIGNAL-REF>
                                    </SENDER-RECEIVER-TO-SIGNAL-MAPPING>
"""
        )
    for g in groups:
        dest = "R-PORT-PROTOTYPE" if g["dir"] == "R" else "P-PORT-PROTOTYPE"
        port, iface, de, sg = g["port"], g["iface"], g["de"], g["sg"]
        elem_maps = []
        for ename, _eadt, _impl, syssig in g["elems"]:
            elem_maps.append(
                f"""                            <SENDER-REC-RECORD-ELEMENT-MAPPING>
                              <APPLICATION-RECORD-ELEMENT-REF DEST="APPLICATION-RECORD-ELEMENT">/ApplicationDataTypes/{g['adt']}/{ename}</APPLICATION-RECORD-ELEMENT-REF>
                              <SYSTEM-SIGNAL-REF DEST="SYSTEM-SIGNAL">/Signal/{syssig}</SYSTEM-SIGNAL-REF>
                            </SENDER-REC-RECORD-ELEMENT-MAPPING>"""
            )
        blocks.append(
            f"""                                    <SENDER-RECEIVER-TO-SIGNAL-GROUP-MAPPING>
                                      <DATA-ELEMENT-IREF>
                                        <CONTEXT-COMPONENT-REF DEST="SW-COMPONENT-PROTOTYPE">{PROTO}</CONTEXT-COMPONENT-REF>
                                        <CONTEXT-COMPOSITION-REF DEST="ROOT-SW-COMPOSITION-PROTOTYPE">{ROOT_COMP}</CONTEXT-COMPOSITION-REF>
                                        <CONTEXT-PORT-REF DEST="{dest}">{SWC}/{port}</CONTEXT-PORT-REF>
                                        <TARGET-DATA-PROTOTYPE-REF DEST="VARIABLE-DATA-PROTOTYPE">/PortInterfaces/{iface}/{de}</TARGET-DATA-PROTOTYPE-REF>
                                      </DATA-ELEMENT-IREF>
                                      <SIGNAL-GROUP-REF DEST="SYSTEM-SIGNAL-GROUP">/SignalGroup/{sg}</SIGNAL-GROUP-REF>
                                      <TYPE-MAPPING>
                                        <SENDER-REC-RECORD-TYPE-MAPPING>
                                          <RECORD-ELEMENT-MAPPINGS>
{chr(10).join(elem_maps)}
                                          </RECORD-ELEMENT-MAPPINGS>
                                        </SENDER-REC-RECORD-TYPE-MAPPING>
                                      </TYPE-MAPPING>
                                    </SENDER-RECEIVER-TO-SIGNAL-GROUP-MAPPING>
"""
        )
    new_dm = "<DATA-MAPPINGS>\n" + "".join(blocks) + "                                  </DATA-MAPPINGS>"
    flat = flat[:start] + new_dm + flat[end + len("</DATA-MAPPINGS>") :]
    FLAT.write_text(flat, encoding="utf-8", newline="\n")
    print("FlatExtract mappings", len(SCALAR_PORTS), "scalar +", len(groups), "group")


def alias_scalar(port: str) -> str:
    return mod05.ALIAS.get(port, port)


def write_appl(groups) -> None:
    rx_s = [(d, p, i, a, impl, s) for d, p, i, a, impl, s in SCALAR_PORTS if d == "R"]
    tx_s = [(d, p, i, a, impl, s) for d, p, i, a, impl, s in SCALAR_PORTS if d == "P"]
    rx_g = [g for g in groups if g["dir"] == "R"]
    tx_g = [g for g in groups if g["dir"] == "P"]

    hdr = [
        "#ifndef APPL_COMSHELL_H",
        "#define APPL_COMSHELL_H",
        "",
        '#include "Std_Types.h"',
        '#include "Rte_Type.h"',
        "",
        f"/*! Appl_ComShell v0.6 — {len(rx_s)}+{len(rx_g)} RX / {len(tx_s)}+{len(tx_g)} TX (scalars+groups, VehCfg excluded) */",
        "void Appl_ComShell_Init(void);",
        "void Appl_ComShell_Step(void);",
        "",
        "extern volatile uint8 Appl_ComShell_InitDone;",
        "extern volatile uint16 Appl_ComShell_StepCnt;",
        "extern volatile uint16 Appl_ComShell_RxOkCnt;",
        "extern volatile uint16 Appl_ComShell_TxOkCnt;",
        "extern volatile uint16 Appl_ComShell_GrpRxOkCnt;",
        "extern volatile uint16 Appl_ComShell_GrpTxOkCnt;",
        "",
    ]
    for _d, port, _i, _a, impl, _s in SCALAR_PORTS:
        hdr.append(f"extern volatile {impl} Appl_ComShell_{alias_scalar(port)};")
    hdr.append("")
    for g in groups:
        adt = g["adt"]
        port = g["port"]
        hdr.append(f"extern volatile {adt} Appl_ComShell_{port};")
        cf = cntr_field(g["elems"])
        if cf:
            # find impl of cntr
            impl = next(i for e, _a, i, _s in g["elems"] if e == cf)
            hdr.append(f"extern volatile {impl} Appl_ComShell_{port}_Cntr;")
    hdr += ["", "#endif /* APPL_COMSHELL_H */", ""]

    src_defs = [
        "volatile uint8 Appl_ComShell_InitDone = 0u;",
        "volatile uint16 Appl_ComShell_StepCnt = 0u;",
        "volatile uint16 Appl_ComShell_RxOkCnt = 0u;",
        "volatile uint16 Appl_ComShell_TxOkCnt = 0u;",
        "volatile uint16 Appl_ComShell_GrpRxOkCnt = 0u;",
        "volatile uint16 Appl_ComShell_GrpTxOkCnt = 0u;",
    ]
    for _d, port, _i, _a, impl, _s in SCALAR_PORTS:
        z = "0" if impl.startswith("sint") else "0u"
        src_defs.append(f"volatile {impl} Appl_ComShell_{alias_scalar(port)} = {z};")
    for g in groups:
        src_defs.append(f"volatile {g['adt']} Appl_ComShell_{g['port']};")
        cf = cntr_field(g["elems"])
        if cf:
            impl = next(i for e, _a, i, _s in g["elems"] if e == cf)
            src_defs.append(f"volatile {impl} Appl_ComShell_{g['port']}_Cntr = 0u;")

    # locals for scalar RX
    need = sorted({impl for d, _p, _i, _a, impl, _s in SCALAR_PORTS if d == "R"})
    local_decls = [f"  {t} tmp_{t};" for t in need]
    for g in rx_g:
        local_decls.append(f"  {g['adt']} tmp_{g['port']};")

    rx_body = []
    for idx, (_d, port, _i, _a, impl, _s) in enumerate(rx_s):
        al = alias_scalar(port)
        tmp = f"tmp_{impl}"
        extra = "\n    Appl_ComShell_RxOkCnt++;" if idx == 0 else ""
        rx_body.append(
            f"""  if (Rte_Read_{port}_{port}(&{tmp}) == RTE_E_OK)
  {{
    Appl_ComShell_{al} = {tmp};{extra}
  }}"""
        )
    for idx, g in enumerate(rx_g):
        port, de = g["port"], g["de"]
        tmp = f"tmp_{port}"
        cf = cntr_field(g["elems"])
        cntr_line = ""
        if cf:
            cntr_line = f"\n    Appl_ComShell_{port}_Cntr = {tmp}.{cf};"
        extra = "\n    Appl_ComShell_GrpRxOkCnt++;" if idx == 0 else ""
        rx_body.append(
            f"""  if (Rte_Read_{port}_{de}(&{tmp}) == RTE_E_OK)
  {{
    Appl_ComShell_{port} = {tmp};{cntr_line}{extra}
  }}"""
        )

    # TX scalars — keep v0.5 stimulus for original set
    tx_body = []
    for idx, (_d, port, _i, _a, impl, _s) in enumerate(tx_s):
        al = alias_scalar(port)
        prep = {
            "WhlMotSysModSts": f"  Appl_ComShell_{al} = (uint8)((Appl_ComShell_StepCnt >> 4) & 0x0Fu);",
            "WhlMotSysSpdAct": f"  Appl_ComShell_{al} = (sint16)((Appl_ComShell_StepCnt & 0x00FFu) - 128);",
            "WhlMotSysUdc": f"  Appl_ComShell_{al} = (uint16)(400u + (Appl_ComShell_StepCnt & 0x1Fu));",
            "WhlMotSysMotT": f"  Appl_ComShell_{al} = (uint8)(40u + (Appl_ComShell_StepCnt & 0x0Fu));",
            "WhlMotSysInvrT": f"  Appl_ComShell_{al} = (uint8)(35u + ((Appl_ComShell_StepCnt >> 1) & 0x0Fu));",
            "WhlMotSysCooltT": f"  Appl_ComShell_{al} = (uint8)(30u + ((Appl_ComShell_StepCnt >> 2) & 0x0Fu));",
            "WhlMotSysIdc": f"  Appl_ComShell_{al} = (uint16)(100u + (Appl_ComShell_StepCnt & 0x3Fu));",
            "WhlMotSysLimnIndcn": f"  Appl_ComShell_{al} = (uint16)(Appl_ComShell_StepCnt & 0x00FFu);",
            "WhlMotSysCoolgReq": f"  Appl_ComShell_{al} = (uint8)((Appl_ComShell_StepCnt >> 3) & 0x03u);",
            "WhlMotSysErrIndcnReq": f"  Appl_ComShell_{al} = 0u;",
        }.get(port)
        if prep:
            tx_body.append(prep)
        if idx == 0:
            tx_body.append(
                f"""  if (Rte_Write_{port}_{port}(Appl_ComShell_{al}) == RTE_E_OK)
  {{
    Appl_ComShell_TxOkCnt++;
  }}"""
            )
        else:
            tx_body.append(f"  (void)Rte_Write_{port}_{port}(Appl_ComShell_{al});")

    for idx, g in enumerate(tx_g):
        port, de, adt = g["port"], g["de"], g["adt"]
        cf = cntr_field(g["elems"])
        prep_lines = []
        if cf:
            prep_lines.append(
                f"  Appl_ComShell_{port}.{cf} = (uint8)(Appl_ComShell_StepCnt & 0x0Fu);"
            )
            prep_lines.append(f"  Appl_ComShell_{port}_Cntr = Appl_ComShell_{port}.{cf};")
        prep_lines.append(f"  {{")
        prep_lines.append(f"    {adt} tx_{port} = Appl_ComShell_{port};")
        tx_body.extend(prep_lines)
        if idx == 0:
            tx_body.append(
                f"""    if (Rte_Write_{port}_{de}(&tx_{port}) == RTE_E_OK)
    {{
      Appl_ComShell_GrpTxOkCnt++;
    }}
  }}"""
            )
        else:
            tx_body.append(f"    (void)Rte_Write_{port}_{de}(&tx_{port});\n  }}")

    src = f"""/**********************************************************************************************************************
 * Appl_ComShell.c v0.6 — Task_Bsw_10ms, Rte↔COM (scalars + groups)
 *********************************************************************************************************************/
#include "Rte_Appl_ComShell.h"
#include "Appl_ComShell.h"

{chr(10).join(src_defs)}

void Appl_ComShell_Init(void)
{{
  Appl_ComShell_InitDone = 1u;
}}

#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{{
{chr(10).join(local_decls)}

  if (Appl_ComShell_InitDone == 0u)
  {{
    Appl_ComShell_Init();
  }}
  Appl_ComShell_StepCnt++;

{chr(10).join(rx_body)}

{chr(10).join(tx_body)}
}}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
"""
    HDR.write_text("\n".join(hdr), encoding="utf-8", newline="\n")
    SRC.write_text(src, encoding="utf-8", newline="\n")
    print("wrote Appl C/H", len(rx_s), "+", len(rx_g), "RX /", len(tx_s), "+", len(tx_g), "TX")


def write_inventory(groups) -> None:
    rx_s = [p for d, p, *_ in SCALAR_PORTS if d == "R"]
    tx_s = [p for d, p, *_ in SCALAR_PORTS if d == "P"]
    lines = [
        "# Developer SWC ↔ COM 清单（阶段5）",
        "",
        "## 现状",
        "",
        "- `Config/Developer`：`IEM` 组合 = `IEMHOST` + `IEMDTCS`（仅端口壳，无原子 runnable）",
        f"- `Appl_ComShell` v0.6：**{len(SCALAR_PORTS)}** 标量 + **{len(groups)}** 组（VehCfg* 仍 CarConfig 直连）",
        "",
        f"## 壳标量（v0.5 保留，{len(SCALAR_PORTS)}）",
        "",
        f"- RX **{len(rx_s)}** / TX **{len(tx_s)}**",
        "",
        f"## 壳组端口（v0.6，{len(groups)}；VehCfg 除外）",
        "",
        "| 方向 | Port | SignalGroup | ADT |",
        "|------|------|-------------|-----|",
    ]
    for g in groups:
        lines.append(
            f"| {'RX' if g['dir'] == 'R' else 'TX'} | {g['port']} | {g['sg']} | {g['adt']} |"
        )
    lines += [
        "",
        "## 观测",
        "",
        "- 标量：`Appl_ComShell_*` / `RxOkCnt` / `TxOkCnt`",
        "- 组：`Appl_ComShell_<Port>` 整包 + `Appl_ComShell_<Port>_Cntr`（有 Cntr 时）",
        "- `GrpRxOkCnt` / `GrpTxOkCnt`",
        "",
        "## 后续",
        "",
        "1. DVCfgCmd generate + amk；板测组壳 Cntr vs 0538/053F",
        "2. 正式 CCP DB；T3/T5 仪测",
        "",
    ]
    (ROOT / "Tasking/Developer_Swc_Com_Inventory.md").write_text(
        "\n".join(lines), encoding="utf-8", newline="\n"
    )
    print("wrote inventory")


def main() -> None:
    groups = collect_groups()
    print("groups", len(groups))
    for g in groups:
        print(f"  {g['dir']} {g['port']:28s} adt={g['adt']} elems={len(g['elems'])}")
    write_arxml(groups)
    patch_flat(groups)
    write_appl(groups)
    write_inventory(groups)
    print("ok v0.6")


def z_notify(type, obj):  # ZCANPRO mistakenly loads this build script
    pass


def z_main():
    """Not a ZCANPRO smoke — deflect accidental load."""
    try:
        import zcanpro

        zcanpro.write_log(
            "WRONG FILE: _expand_comshell_v06.py is a DaVinci build helper, not a bus smoke. "
            "Use ZCANPRO_IEM_ComGroup_Smoke.py (RX Cntr) or ZCANPRO_IEM_ComShell_TxSmoke.py (TX). "
            "UDE: FwStamp=0x260B0541; Appl_ComShell_GrpRxOkCnt / GrpTxOkCnt / *_Cntr"
        )
    except ImportError:
        print("not a ZCANPRO script — run: python Tasking/_expand_comshell_v06.py")


if __name__ == "__main__":
    main()
