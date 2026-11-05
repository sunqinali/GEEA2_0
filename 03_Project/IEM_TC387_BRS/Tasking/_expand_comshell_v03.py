"""Expand Appl_ComShell to v0.3: +ModReq RX, +MotT/InvrT/CooltT TX; patch FlatExtract; rewrite Appl C/H."""
from __future__ import annotations

import uuid
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
ARXML = ROOT / "Config" / "ApplicationComponents" / "Appl_ComShell.arxml"
DEV = ROOT / "Config" / "Developer" / "ComponentTypes" / "Appl_ComShell.arxml"
FLAT = ROOT / "Config" / "System" / "FlatExtract.arxml"
SRC = ROOT / "Appl" / "Source" / "Appl_ComShell.c"
HDR = ROOT / "Appl" / "Include" / "Appl_ComShell.h"

PROTO = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/COMPOSITIONTYPE/Appl_ComShell"
ROOT_COMP = "/COM/VECTOR/CFG/WORKFLOW/SYSDESC/SYNC/SYSTEM/COMPOSITIONTYPE"
SWC = "/Appl_ComShell/ComponentTypes/Appl_ComShell"

# direction, port, iface, app_type, impl_type, signal
PORTS = [
    ("R", "CarTiGlb", "CarTiGlb_5", "CarTiGlb_2", "uint32", "CarTiGlb"),
    ("R", "BkpOfDstTrvld", "BkpOfDstTrvld_7", "Len31_2", "uint32", "BkpOfDstTrvld"),
    ("R", "WhlMotSysModReq", "WhlMotSysModReq_2", "WhlMotSysModStsTyp1_2", "uint8", "WhlMotSysModReq"),
    ("P", "WhlMotSysModSts", "WhlMotSysModSts_5", "WhlMotSysModStsTyp2_2", "uint8", "WhlMotSysModSts"),
    ("P", "WhlMotSysSpdAct", "WhlMotSysSpdAct_4", "IsgSpdWSgnTyp_2", "sint16", "WhlMotSysSpdAct"),
    ("P", "WhlMotSysUdc", "WhlMotSysUdc_3", "HvU1_2", "uint16", "WhlMotSysUdc"),
    ("P", "WhlMotSysMotT", "WhlMotSysMotT_3", "T3_2", "uint8", "WhlMotSysMotT"),
    ("P", "WhlMotSysInvrT", "WhlMotSysInvrT_4", "T3_2", "uint8", "WhlMotSysInvrT"),
    ("P", "WhlMotSysCooltT", "WhlMotSysCooltT_4", "HvT1_3", "uint8", "WhlMotSysCooltT"),
]


def uid() -> str:
    return str(uuid.uuid4())


def write_arxml() -> None:
    dt_maps = []
    seen_types: set[tuple[str, str]] = set()
    for _d, _p, _i, app, impl, _s in PORTS:
        key = (app, impl)
        if key in seen_types:
            continue
        seen_types.add(key)
        dt_maps.append(
            f"""                <DATA-TYPE-MAP>
                  <APPLICATION-DATA-TYPE-REF DEST="APPLICATION-PRIMITIVE-DATA-TYPE">/ApplicationDataTypes/{app}</APPLICATION-DATA-TYPE-REF>
                  <IMPLEMENTATION-DATA-TYPE-REF DEST="IMPLEMENTATION-DATA-TYPE">/AUTOSAR_Platform/ImplementationDataTypes/{impl}</IMPLEMENTATION-DATA-TYPE-REF>
                </DATA-TYPE-MAP>"""
        )

    port_xml = []
    dra = []
    dsp = []
    for direction, port, iface, _app, _impl, _sig in PORTS:
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

    text = f"""<?xml version="1.0" encoding="utf-8"?>
<!-- Appl_ComShell v0.3: 3 RX + 6 TX primitives ↔ COM -->
<AUTOSAR xmlns="http://autosar.org/schema/r4.0" xmlns:xsi="http://www.w3.org/2001/XMLSchema-instance" xsi:schemaLocation="http://autosar.org/schema/r4.0 AUTOSAR_00046.xsd">
  <AR-PACKAGES>
    <AR-PACKAGE UUID="{uid()}">
      <SHORT-NAME>Appl_ComShell</SHORT-NAME>
      <AR-PACKAGES>
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
              <SW-VERSION>0.3.0</SW-VERSION>
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
    print("wrote ARXML ports", len(PORTS))


def patch_flat() -> None:
    flat = FLAT.read_text(encoding="utf-8")
    start = flat.find("<DATA-MAPPINGS>")
    end = flat.find("</DATA-MAPPINGS>")
    if start < 0 or end < 0:
        raise SystemExit("DATA-MAPPINGS missing")
    blocks = []
    for direction, port, iface, _a, _i, sig in PORTS:
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
    new_dm = "<DATA-MAPPINGS>\n" + "".join(blocks) + "                                  </DATA-MAPPINGS>"
    flat = flat[:start] + new_dm + flat[end + len("</DATA-MAPPINGS>") :]
    FLAT.write_text(flat, encoding="utf-8", newline="\n")
    print("FlatExtract mappings", len(PORTS))


def write_appl() -> None:
    HDR.write_text(
        """#ifndef APPL_COMSHELL_H
#define APPL_COMSHELL_H

#include "Std_Types.h"

/*! Appl_ComShell v0.3 — 3 RX + 6 TX primitives via Rte↔COM */
void Appl_ComShell_Init(void);
void Appl_ComShell_Step(void);

extern volatile uint8 Appl_ComShell_InitDone;
extern volatile uint16 Appl_ComShell_StepCnt;
extern volatile uint16 Appl_ComShell_RxOkCnt;
extern volatile uint16 Appl_ComShell_TxOkCnt;
extern volatile uint32 Appl_ComShell_CarTiGlb;
extern volatile uint32 Appl_ComShell_BkpOfDstTrvld;
extern volatile uint8 Appl_ComShell_ModReq;
extern volatile uint8 Appl_ComShell_ModSts;
extern volatile sint16 Appl_ComShell_SpdAct;
extern volatile uint16 Appl_ComShell_Udc;
extern volatile uint8 Appl_ComShell_MotT;
extern volatile uint8 Appl_ComShell_InvrT;
extern volatile uint8 Appl_ComShell_CooltT;

#endif /* APPL_COMSHELL_H */
""",
        encoding="utf-8",
        newline="\n",
    )
    SRC.write_text(
        """/**********************************************************************************************************************
 * Appl_ComShell.c v0.3 — Task_Bsw_10ms, Rte↔COM
 *********************************************************************************************************************/
#include "Rte_Appl_ComShell.h"
#include "Appl_ComShell.h"

volatile uint8 Appl_ComShell_InitDone = 0u;
volatile uint16 Appl_ComShell_StepCnt = 0u;
volatile uint16 Appl_ComShell_RxOkCnt = 0u;
volatile uint16 Appl_ComShell_TxOkCnt = 0u;
volatile uint32 Appl_ComShell_CarTiGlb = 0u;
volatile uint32 Appl_ComShell_BkpOfDstTrvld = 0u;
volatile uint8 Appl_ComShell_ModReq = 0u;
volatile uint8 Appl_ComShell_ModSts = 0u;
volatile sint16 Appl_ComShell_SpdAct = 0;
volatile uint16 Appl_ComShell_Udc = 0u;
volatile uint8 Appl_ComShell_MotT = 0u;
volatile uint8 Appl_ComShell_InvrT = 0u;
volatile uint8 Appl_ComShell_CooltT = 0u;

void Appl_ComShell_Init(void)
{
  Appl_ComShell_InitDone = 1u;
}

#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  uint32 carTi = 0u;
  uint32 bkp = 0u;
  uint8 modReq = 0u;
  uint8 modSts;
  sint16 spd;
  uint16 udc;
  uint8 motT;
  uint8 invrT;
  uint8 cooltT;

  if (Appl_ComShell_InitDone == 0u)
  {
    Appl_ComShell_Init();
  }
  Appl_ComShell_StepCnt++;

  if (Rte_Read_CarTiGlb_CarTiGlb(&carTi) == RTE_E_OK)
  {
    Appl_ComShell_CarTiGlb = carTi;
    Appl_ComShell_RxOkCnt++;
  }
  if (Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(&bkp) == RTE_E_OK)
  {
    Appl_ComShell_BkpOfDstTrvld = bkp;
  }
  if (Rte_Read_WhlMotSysModReq_WhlMotSysModReq(&modReq) == RTE_E_OK)
  {
    Appl_ComShell_ModReq = modReq;
  }

  modSts = (uint8)((Appl_ComShell_StepCnt >> 4) & 0x0Fu);
  Appl_ComShell_ModSts = modSts;
  if (Rte_Write_WhlMotSysModSts_WhlMotSysModSts(modSts) == RTE_E_OK)
  {
    Appl_ComShell_TxOkCnt++;
  }

  spd = (sint16)((Appl_ComShell_StepCnt & 0x00FFu) - 128);
  Appl_ComShell_SpdAct = spd;
  (void)Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(spd);

  udc = (uint16)(400u + (Appl_ComShell_StepCnt & 0x1Fu));
  Appl_ComShell_Udc = udc;
  (void)Rte_Write_WhlMotSysUdc_WhlMotSysUdc(udc);

  motT = (uint8)(40u + (Appl_ComShell_StepCnt & 0x0Fu));
  invrT = (uint8)(35u + ((Appl_ComShell_StepCnt >> 1) & 0x0Fu));
  cooltT = (uint8)(30u + ((Appl_ComShell_StepCnt >> 2) & 0x0Fu));
  Appl_ComShell_MotT = motT;
  Appl_ComShell_InvrT = invrT;
  Appl_ComShell_CooltT = cooltT;
  (void)Rte_Write_WhlMotSysMotT_WhlMotSysMotT(motT);
  (void)Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(invrT);
  (void)Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(cooltT);
}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
""",
        encoding="utf-8",
        newline="\n",
    )
    print("wrote Appl C/H")


def main() -> None:
    write_arxml()
    patch_flat()
    write_appl()
    print("ok v0.3")


if __name__ == "__main__":
    main()
