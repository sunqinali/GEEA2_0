"""Expand Appl_ComShell to v0.4 (19 scalar ports)."""
from __future__ import annotations

import importlib.util
from pathlib import Path

ROOT = Path(r"c:\wk_manu\xinyu\03_Project\IEM_TC387_BRS")
BASE = ROOT / "Tasking" / "_expand_comshell_v03.py"

spec = importlib.util.spec_from_file_location("comshell_v03", BASE)
mod = importlib.util.module_from_spec(spec)
assert spec.loader is not None
spec.loader.exec_module(mod)

# direction, port, iface, app_type, impl_type, signal
mod.PORTS = [
    ("R", "CarTiGlb", "CarTiGlb_5", "CarTiGlb_2", "uint32", "CarTiGlb"),
    ("R", "BkpOfDstTrvld", "BkpOfDstTrvld_7", "Len31_2", "uint32", "BkpOfDstTrvld"),
    ("R", "WhlMotSysModReq", "WhlMotSysModReq_2", "WhlMotSysModStsTyp1_2", "uint8", "WhlMotSysModReq"),
    ("R", "WhlMotSysTqReq", "WhlMotSysTqReq_2", "HvTq1_2", "uint16", "WhlMotSysTqReq"),
    ("R", "CooltTSigForDtElec", "CooltTSigForDtElec_5", "CooltTHiResl_2", "uint16", "CooltTSigForDtElec"),
    ("R", "CooltFlowForDtElec", "CooltFlowForDtElec_5", "CooltFlow2_2", "uint16", "CooltFlowForDtElec"),
    ("R", "SpdRotlForWhlsAtAxleRe", "SpdRotlForWhlsAtAxleRe_7", "N1_2", "uint16", "SpdRotlForWhlsAtAxleRe"),
    ("R", "WhlMotSysPwrLimMax", "WhlMotSysPwrLimMax_2", "PrpsnPwrLimMax_2", "uint16", "WhlMotSysPwrLimMax"),
    ("R", "WhlMotSysPwrLimMin", "WhlMotSysPwrLimMin_2", "PrpsnPwrLimMin_2", "uint16", "WhlMotSysPwrLimMin"),
    ("P", "WhlMotSysModSts", "WhlMotSysModSts_5", "WhlMotSysModStsTyp2_2", "uint8", "WhlMotSysModSts"),
    ("P", "WhlMotSysSpdAct", "WhlMotSysSpdAct_4", "IsgSpdWSgnTyp_2", "sint16", "WhlMotSysSpdAct"),
    ("P", "WhlMotSysUdc", "WhlMotSysUdc_3", "HvU1_2", "uint16", "WhlMotSysUdc"),
    ("P", "WhlMotSysMotT", "WhlMotSysMotT_3", "T3_2", "uint8", "WhlMotSysMotT"),
    ("P", "WhlMotSysInvrT", "WhlMotSysInvrT_4", "T3_2", "uint8", "WhlMotSysInvrT"),
    ("P", "WhlMotSysCooltT", "WhlMotSysCooltT_4", "HvT1_3", "uint8", "WhlMotSysCooltT"),
    ("P", "WhlMotSysIdc", "WhlMotSysIdc_5", "Ampr1_1", "uint16", "WhlMotSysIdc"),
    ("P", "WhlMotSysLimnIndcn", "WhlMotSysLimnIndcn_3", "UInt16_2", "uint16", "WhlMotSysLimnIndcn"),
    ("P", "WhlMotSysCoolgReq", "WhlMotSysCoolgReq_4", "HvCoolg1_2", "uint8", "WhlMotSysCoolgReq"),
    ("P", "WhlMotSysErrIndcnReq", "WhlMotSysErrIndcnReq_4", "OnOff1_2", "uint8", "WhlMotSysErrIndcnReq"),
]


def write_appl_v04() -> None:
    (ROOT / "Appl/Include/Appl_ComShell.h").write_text(
        """#ifndef APPL_COMSHELL_H
#define APPL_COMSHELL_H

#include "Std_Types.h"

/*! Appl_ComShell v0.4 — 9 RX + 10 TX primitives via Rte↔COM */
void Appl_ComShell_Init(void);
void Appl_ComShell_Step(void);

extern volatile uint8 Appl_ComShell_InitDone;
extern volatile uint16 Appl_ComShell_StepCnt;
extern volatile uint16 Appl_ComShell_RxOkCnt;
extern volatile uint16 Appl_ComShell_TxOkCnt;

extern volatile uint32 Appl_ComShell_CarTiGlb;
extern volatile uint32 Appl_ComShell_BkpOfDstTrvld;
extern volatile uint8 Appl_ComShell_ModReq;
extern volatile uint16 Appl_ComShell_TqReq;
extern volatile uint16 Appl_ComShell_CooltTSig;
extern volatile uint16 Appl_ComShell_CooltFlow;
extern volatile uint16 Appl_ComShell_SpdRotlRe;
extern volatile uint16 Appl_ComShell_PwrLimMax;
extern volatile uint16 Appl_ComShell_PwrLimMin;

extern volatile uint8 Appl_ComShell_ModSts;
extern volatile sint16 Appl_ComShell_SpdAct;
extern volatile uint16 Appl_ComShell_Udc;
extern volatile uint8 Appl_ComShell_MotT;
extern volatile uint8 Appl_ComShell_InvrT;
extern volatile uint8 Appl_ComShell_CooltT;
extern volatile uint16 Appl_ComShell_Idc;
extern volatile uint16 Appl_ComShell_LimnIndcn;
extern volatile uint8 Appl_ComShell_CoolgReq;
extern volatile uint8 Appl_ComShell_ErrIndcnReq;

#endif /* APPL_COMSHELL_H */
""",
        encoding="utf-8",
        newline="\n",
    )
    (ROOT / "Appl/Source/Appl_ComShell.c").write_text(
        """/**********************************************************************************************************************
 * Appl_ComShell.c v0.4 — Task_Bsw_10ms, Rte↔COM (9 RX + 10 TX)
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
volatile uint16 Appl_ComShell_TqReq = 0u;
volatile uint16 Appl_ComShell_CooltTSig = 0u;
volatile uint16 Appl_ComShell_CooltFlow = 0u;
volatile uint16 Appl_ComShell_SpdRotlRe = 0u;
volatile uint16 Appl_ComShell_PwrLimMax = 0u;
volatile uint16 Appl_ComShell_PwrLimMin = 0u;

volatile uint8 Appl_ComShell_ModSts = 0u;
volatile sint16 Appl_ComShell_SpdAct = 0;
volatile uint16 Appl_ComShell_Udc = 0u;
volatile uint8 Appl_ComShell_MotT = 0u;
volatile uint8 Appl_ComShell_InvrT = 0u;
volatile uint8 Appl_ComShell_CooltT = 0u;
volatile uint16 Appl_ComShell_Idc = 0u;
volatile uint16 Appl_ComShell_LimnIndcn = 0u;
volatile uint8 Appl_ComShell_CoolgReq = 0u;
volatile uint8 Appl_ComShell_ErrIndcnReq = 0u;

void Appl_ComShell_Init(void)
{
  Appl_ComShell_InitDone = 1u;
}

#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  uint32 u32;
  uint16 u16;
  uint8 u8;
  sint16 s16;

  if (Appl_ComShell_InitDone == 0u)
  {
    Appl_ComShell_Init();
  }
  Appl_ComShell_StepCnt++;

  if (Rte_Read_CarTiGlb_CarTiGlb(&u32) == RTE_E_OK)
  {
    Appl_ComShell_CarTiGlb = u32;
    Appl_ComShell_RxOkCnt++;
  }
  if (Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(&u32) == RTE_E_OK)
  {
    Appl_ComShell_BkpOfDstTrvld = u32;
  }
  if (Rte_Read_WhlMotSysModReq_WhlMotSysModReq(&u8) == RTE_E_OK)
  {
    Appl_ComShell_ModReq = u8;
  }
  if (Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(&u16) == RTE_E_OK)
  {
    Appl_ComShell_TqReq = u16;
  }
  if (Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec(&u16) == RTE_E_OK)
  {
    Appl_ComShell_CooltTSig = u16;
  }
  if (Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec(&u16) == RTE_E_OK)
  {
    Appl_ComShell_CooltFlow = u16;
  }
  if (Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(&u16) == RTE_E_OK)
  {
    Appl_ComShell_SpdRotlRe = u16;
  }
  if (Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(&u16) == RTE_E_OK)
  {
    Appl_ComShell_PwrLimMax = u16;
  }
  if (Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(&u16) == RTE_E_OK)
  {
    Appl_ComShell_PwrLimMin = u16;
  }

  u8 = (uint8)((Appl_ComShell_StepCnt >> 4) & 0x0Fu);
  Appl_ComShell_ModSts = u8;
  if (Rte_Write_WhlMotSysModSts_WhlMotSysModSts(u8) == RTE_E_OK)
  {
    Appl_ComShell_TxOkCnt++;
  }

  s16 = (sint16)((Appl_ComShell_StepCnt & 0x00FFu) - 128);
  Appl_ComShell_SpdAct = s16;
  (void)Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(s16);

  u16 = (uint16)(400u + (Appl_ComShell_StepCnt & 0x1Fu));
  Appl_ComShell_Udc = u16;
  (void)Rte_Write_WhlMotSysUdc_WhlMotSysUdc(u16);

  Appl_ComShell_MotT = (uint8)(40u + (Appl_ComShell_StepCnt & 0x0Fu));
  Appl_ComShell_InvrT = (uint8)(35u + ((Appl_ComShell_StepCnt >> 1) & 0x0Fu));
  Appl_ComShell_CooltT = (uint8)(30u + ((Appl_ComShell_StepCnt >> 2) & 0x0Fu));
  (void)Rte_Write_WhlMotSysMotT_WhlMotSysMotT(Appl_ComShell_MotT);
  (void)Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(Appl_ComShell_InvrT);
  (void)Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(Appl_ComShell_CooltT);

  Appl_ComShell_Idc = (uint16)(100u + (Appl_ComShell_StepCnt & 0x3Fu));
  Appl_ComShell_LimnIndcn = (uint16)(Appl_ComShell_StepCnt & 0x00FFu);
  Appl_ComShell_CoolgReq = (uint8)((Appl_ComShell_StepCnt >> 3) & 0x03u);
  Appl_ComShell_ErrIndcnReq = 0u;
  (void)Rte_Write_WhlMotSysIdc_WhlMotSysIdc(Appl_ComShell_Idc);
  (void)Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(Appl_ComShell_LimnIndcn);
  (void)Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq(Appl_ComShell_CoolgReq);
  (void)Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(Appl_ComShell_ErrIndcnReq);
}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
""",
        encoding="utf-8",
        newline="\n",
    )


def main() -> None:
    # bump version comment via write_arxml using patched PORTS
    orig_write_arxml = mod.write_arxml

    def write_arxml_v04() -> None:
        orig_write_arxml()
        # patch SW-VERSION in generated file
        for p in (mod.ARXML, mod.DEV):
            t = p.read_text(encoding="utf-8")
            t = t.replace("0.3.0", "0.4.0").replace("3 RX + 6 TX", "9 RX + 10 TX")
            p.write_text(t, encoding="utf-8", newline="\n")

    write_arxml_v04()
    mod.patch_flat()
    write_appl_v04()
    print("ok v0.4 ports", len(mod.PORTS))


if __name__ == "__main__":
    main()
