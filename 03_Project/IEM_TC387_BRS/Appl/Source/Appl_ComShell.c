/**********************************************************************************************************************
 * Appl_ComShell.c v0.6 — Task_Bsw_10ms, Rte↔COM (scalars + groups)
 *********************************************************************************************************************/
#include "Rte_Appl_ComShell.h"
#include "Appl_ComShell.h"

volatile uint8 Appl_ComShell_InitDone = 0u;
volatile uint16 Appl_ComShell_StepCnt = 0u;
volatile uint16 Appl_ComShell_RxOkCnt = 0u;
volatile uint16 Appl_ComShell_TxOkCnt = 0u;
volatile uint16 Appl_ComShell_GrpRxOkCnt = 0u;
volatile uint16 Appl_ComShell_GrpTxOkCnt = 0u;
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
volatile uint8 Appl_ComShell_DCChrgnHndlSts = 0u;
volatile uint8 Appl_ComShell_DrvgCyc = 0u;
volatile uint8 Appl_ComShell_GearLvrIndcn = 0u;
volatile uint16 Appl_ComShell_HvBattSoc = 0u;
volatile uint16 Appl_ComShell_HvBattUDc = 0u;
volatile uint16 Appl_ComShell_HvBattUDynMaxLim = 0u;
volatile uint16 Appl_ComShell_HvBattUDynMinLim = 0u;
volatile uint8 Appl_ComShell_ImobEngSts2 = 0u;
volatile uint8 Appl_ComShell_OnBdChrgrHndlSts1 = 0u;
volatile uint8 Appl_ComShell_PLockFltIndcRe = 0u;
volatile uint8 Appl_ComShell_PLockFltLvlRe = 0u;
volatile uint8 Appl_ComShell_PLockParkReq = 0u;
volatile uint8 Appl_ComShell_PLockParkStsRe = 0u;
volatile uint8 Appl_ComShell_PrpsnFbLimnIndcn = 0u;
volatile uint8 Appl_ComShell_RearHeatModEnad = 0u;
volatile uint8 Appl_ComShell_RearHeatPwrAllwd = 0u;
volatile uint8 Appl_ComShell_ClrRdyReq = 0u;
volatile uint16 Appl_ComShell_CooltFlowMinReq = 0u;
volatile uint8 Appl_ComShell_ActvDampgModReq = 0u;
volatile uint8 Appl_ComShell_HeatFdBck = 0u;
volatile uint8 Appl_ComShell_HeatPwrAct = 0u;
volatile uint8 Appl_ComShell_HeatPwrMax = 0u;
volatile CrashStsSafe_1 Appl_ComShell_CrashStsSafe;
volatile uint8 Appl_ComShell_CrashStsSafe_Cntr = 0u;
volatile EngSt1WdSts_1 Appl_ComShell_EngSt1WdSts;
volatile uint8 Appl_ComShell_EngSt1WdSts_Cntr = 0u;
volatile EscVariantToDmc_1 Appl_ComShell_EscVariantToDmc;
volatile uint8 Appl_ComShell_EscVariantToDmc_Cntr = 0u;
volatile HvSysRlySts_1 Appl_ComShell_HvSysRlySts;
volatile uint8 Appl_ComShell_HvSysRlySts_Cntr = 0u;
volatile PtTqAtAxleReq_1 Appl_ComShell_PtTqAtAxleMaxReq;
volatile uint8 Appl_ComShell_PtTqAtAxleMaxReq_Cntr = 0u;
volatile StcStsToDmc_1 Appl_ComShell_StcStsToDmc;
volatile uint8 Appl_ComShell_StcStsToDmc_Cntr = 0u;
volatile VehModMngtGlbSafe1_2 Appl_ComShell_VehModMngtGlbSafe1;
volatile uint8 Appl_ComShell_VehModMngtGlbSafe1_Cntr = 0u;
volatile VehMtnStSafe1_2 Appl_ComShell_VehMtnSt;
volatile uint8 Appl_ComShell_VehMtnSt_Cntr = 0u;
volatile VehSpdLgtSafe1_3 Appl_ComShell_VehSpdLgt;
volatile uint8 Appl_ComShell_VehSpdLgt_Cntr = 0u;
volatile WhlMotSysTqAllwd_3 Appl_ComShell_WhlMotSysTqAllwd;
volatile uint8 Appl_ComShell_WhlMotSysTqAllwd_Cntr = 0u;
volatile ImobEngMgrReq_2 Appl_ComShell_ImobEngMgrReq2;
volatile SysU_4 Appl_ComShell_VehBattU;
volatile DmcStsToEsc_1 Appl_ComShell_DmcStsRearToEsc;
volatile uint8 Appl_ComShell_DmcStsRearToEsc_Cntr = 0u;
volatile SpdSgnSafe_1 Appl_ComShell_WhlMotSysSpdActSafe;
volatile uint8 Appl_ComShell_WhlMotSysSpdActSafe_Cntr = 0u;
volatile IsgTqActSafe2_4 Appl_ComShell_WhlMotSysTqEst;
volatile uint8 Appl_ComShell_WhlMotSysTqEst_Cntr = 0u;
volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr1;
volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr2;
volatile DevDataTyp64_2 Appl_ComShell_IEMTestFr3;
volatile ElecDrvGen_4 Appl_ComShell_IemGeneric;
volatile ImobEngChk_2 Appl_ComShell_ImobEngChk2;
volatile WhlMotSysTqAvl_2 Appl_ComShell_WhlMotSysTqAvl;

void Appl_ComShell_Init(void)
{
  Appl_ComShell_InitDone = 1u;
}

#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
  uint16 tmp_uint16;
  uint32 tmp_uint32;
  uint8 tmp_uint8;
  CrashStsSafe_1 tmp_CrashStsSafe;
  EngSt1WdSts_1 tmp_EngSt1WdSts;
  EscVariantToDmc_1 tmp_EscVariantToDmc;
  HvSysRlySts_1 tmp_HvSysRlySts;
  PtTqAtAxleReq_1 tmp_PtTqAtAxleMaxReq;
  StcStsToDmc_1 tmp_StcStsToDmc;
  VehModMngtGlbSafe1_2 tmp_VehModMngtGlbSafe1;
  VehMtnStSafe1_2 tmp_VehMtnSt;
  VehSpdLgtSafe1_3 tmp_VehSpdLgt;
  WhlMotSysTqAllwd_3 tmp_WhlMotSysTqAllwd;
  ImobEngMgrReq_2 tmp_ImobEngMgrReq2;
  SysU_4 tmp_VehBattU;

  if (Appl_ComShell_InitDone == 0u)
  {
    Appl_ComShell_Init();
  }
  Appl_ComShell_StepCnt++;

  if (Rte_Read_CarTiGlb_CarTiGlb(&tmp_uint32) == RTE_E_OK)
  {
    Appl_ComShell_CarTiGlb = tmp_uint32;
    Appl_ComShell_RxOkCnt++;
  }
  if (Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(&tmp_uint32) == RTE_E_OK)
  {
    Appl_ComShell_BkpOfDstTrvld = tmp_uint32;
  }
  if (Rte_Read_WhlMotSysModReq_WhlMotSysModReq(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_ModReq = tmp_uint8;
  }
  if (Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_TqReq = tmp_uint16;
  }
  if (Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_CooltTSig = tmp_uint16;
  }
  if (Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_CooltFlow = tmp_uint16;
  }
  if (Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_SpdRotlRe = tmp_uint16;
  }
  if (Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_PwrLimMax = tmp_uint16;
  }
  if (Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_PwrLimMin = tmp_uint16;
  }
  if (Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_DCChrgnHndlSts = tmp_uint8;
  }
  if (Rte_Read_DrvgCyc_DrvgCyc(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_DrvgCyc = tmp_uint8;
  }
  if (Rte_Read_GearLvrIndcn_GearLvrIndcn(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_GearLvrIndcn = tmp_uint8;
  }
  if (Rte_Read_HvBattSoc_HvBattSoc(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_HvBattSoc = tmp_uint16;
  }
  if (Rte_Read_HvBattUDc_HvBattUDc(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_HvBattUDc = tmp_uint16;
  }
  if (Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_HvBattUDynMaxLim = tmp_uint16;
  }
  if (Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(&tmp_uint16) == RTE_E_OK)
  {
    Appl_ComShell_HvBattUDynMinLim = tmp_uint16;
  }
  if (Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_OnBdChrgrHndlSts1 = tmp_uint8;
  }
  if (Rte_Read_PLockParkReq_PLockParkReq(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_PLockParkReq = tmp_uint8;
  }
  if (Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_PrpsnFbLimnIndcn = tmp_uint8;
  }
  if (Rte_Read_RearHeatModEnad_RearHeatModEnad(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_RearHeatModEnad = tmp_uint8;
  }
  if (Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_RearHeatPwrAllwd = tmp_uint8;
  }
  if (Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(&tmp_uint8) == RTE_E_OK)
  {
    Appl_ComShell_ActvDampgModReq = tmp_uint8;
  }
  if (Rte_Read_CrashStsSafe_CrashStsSafe(&tmp_CrashStsSafe) == RTE_E_OK)
  {
    Appl_ComShell_CrashStsSafe = tmp_CrashStsSafe;
    Appl_ComShell_CrashStsSafe_Cntr = tmp_CrashStsSafe.Cntr;
    Appl_ComShell_GrpRxOkCnt++;
  }
  if (Rte_Read_EngSt1WdSts_EngSt1WdSts(&tmp_EngSt1WdSts) == RTE_E_OK)
  {
    Appl_ComShell_EngSt1WdSts = tmp_EngSt1WdSts;
    Appl_ComShell_EngSt1WdSts_Cntr = tmp_EngSt1WdSts.Cntr;
  }
  if (Rte_Read_EscVariantToDmc_EscVariantToDmc(&tmp_EscVariantToDmc) == RTE_E_OK)
  {
    Appl_ComShell_EscVariantToDmc = tmp_EscVariantToDmc;
    Appl_ComShell_EscVariantToDmc_Cntr = tmp_EscVariantToDmc.Cntr;
  }
  if (Rte_Read_HvSysRlySts_HvSysRlySts(&tmp_HvSysRlySts) == RTE_E_OK)
  {
    Appl_ComShell_HvSysRlySts = tmp_HvSysRlySts;
    Appl_ComShell_HvSysRlySts_Cntr = tmp_HvSysRlySts.Cntr;
  }
  if (Rte_Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq(&tmp_PtTqAtAxleMaxReq) == RTE_E_OK)
  {
    Appl_ComShell_PtTqAtAxleMaxReq = tmp_PtTqAtAxleMaxReq;
    Appl_ComShell_PtTqAtAxleMaxReq_Cntr = tmp_PtTqAtAxleMaxReq.Cntr;
  }
  if (Rte_Read_StcStsToDmc_StcStsToDmc(&tmp_StcStsToDmc) == RTE_E_OK)
  {
    Appl_ComShell_StcStsToDmc = tmp_StcStsToDmc;
    Appl_ComShell_StcStsToDmc_Cntr = tmp_StcStsToDmc.Cntr;
  }
  if (Rte_Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1(&tmp_VehModMngtGlbSafe1) == RTE_E_OK)
  {
    Appl_ComShell_VehModMngtGlbSafe1 = tmp_VehModMngtGlbSafe1;
    Appl_ComShell_VehModMngtGlbSafe1_Cntr = tmp_VehModMngtGlbSafe1.Cntr;
  }
  if (Rte_Read_VehMtnSt_VehMtnSt(&tmp_VehMtnSt) == RTE_E_OK)
  {
    Appl_ComShell_VehMtnSt = tmp_VehMtnSt;
    Appl_ComShell_VehMtnSt_Cntr = tmp_VehMtnSt.VehMtnStCntr;
  }
  if (Rte_Read_VehSpdLgt_VehSpdLgt(&tmp_VehSpdLgt) == RTE_E_OK)
  {
    Appl_ComShell_VehSpdLgt = tmp_VehSpdLgt;
    Appl_ComShell_VehSpdLgt_Cntr = tmp_VehSpdLgt.VehSpdLgtCntr;
  }
  if (Rte_Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd(&tmp_WhlMotSysTqAllwd) == RTE_E_OK)
  {
    Appl_ComShell_WhlMotSysTqAllwd = tmp_WhlMotSysTqAllwd;
    Appl_ComShell_WhlMotSysTqAllwd_Cntr = tmp_WhlMotSysTqAllwd.Cntr;
  }
  if (Rte_Read_ImobEngMgrReq2_ImobEngMgrReq2(&tmp_ImobEngMgrReq2) == RTE_E_OK)
  {
    Appl_ComShell_ImobEngMgrReq2 = tmp_ImobEngMgrReq2;
  }
  if (Rte_Read_VehBattU_VehBattU(&tmp_VehBattU) == RTE_E_OK)
  {
    Appl_ComShell_VehBattU = tmp_VehBattU;
  }

  Appl_ComShell_ModSts = (uint8)((Appl_ComShell_StepCnt >> 4) & 0x0Fu);
  if (Rte_Write_WhlMotSysModSts_WhlMotSysModSts(Appl_ComShell_ModSts) == RTE_E_OK)
  {
    Appl_ComShell_TxOkCnt++;
  }
  Appl_ComShell_SpdAct = (sint16)((Appl_ComShell_StepCnt & 0x00FFu) - 128);
  (void)Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(Appl_ComShell_SpdAct);
  Appl_ComShell_Udc = (uint16)(400u + (Appl_ComShell_StepCnt & 0x1Fu));
  (void)Rte_Write_WhlMotSysUdc_WhlMotSysUdc(Appl_ComShell_Udc);
  Appl_ComShell_MotT = (uint8)(40u + (Appl_ComShell_StepCnt & 0x0Fu));
  (void)Rte_Write_WhlMotSysMotT_WhlMotSysMotT(Appl_ComShell_MotT);
  Appl_ComShell_InvrT = (uint8)(35u + ((Appl_ComShell_StepCnt >> 1) & 0x0Fu));
  (void)Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(Appl_ComShell_InvrT);
  Appl_ComShell_CooltT = (uint8)(30u + ((Appl_ComShell_StepCnt >> 2) & 0x0Fu));
  (void)Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(Appl_ComShell_CooltT);
  Appl_ComShell_Idc = (uint16)(100u + (Appl_ComShell_StepCnt & 0x3Fu));
  (void)Rte_Write_WhlMotSysIdc_WhlMotSysIdc(Appl_ComShell_Idc);
  Appl_ComShell_LimnIndcn = (uint16)(Appl_ComShell_StepCnt & 0x00FFu);
  (void)Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(Appl_ComShell_LimnIndcn);
  Appl_ComShell_CoolgReq = (uint8)((Appl_ComShell_StepCnt >> 3) & 0x03u);
  (void)Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq(Appl_ComShell_CoolgReq);
  Appl_ComShell_ErrIndcnReq = 0u;
  (void)Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(Appl_ComShell_ErrIndcnReq);
  (void)Rte_Write_ImobEngSts2_ImobEngSts2(Appl_ComShell_ImobEngSts2);
  (void)Rte_Write_PLockFltIndcRe_PLockFltIndcRe(Appl_ComShell_PLockFltIndcRe);
  (void)Rte_Write_PLockFltLvlRe_PLockFltLvlRe(Appl_ComShell_PLockFltLvlRe);
  (void)Rte_Write_PLockParkStsRe_PLockParkStsRe(Appl_ComShell_PLockParkStsRe);
  (void)Rte_Write_WhlMotClrRdyReq_WhlMotClrRdyReq(Appl_ComShell_ClrRdyReq);
  (void)Rte_Write_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq(Appl_ComShell_CooltFlowMinReq);
  (void)Rte_Write_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck(Appl_ComShell_HeatFdBck);
  (void)Rte_Write_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct(Appl_ComShell_HeatPwrAct);
  (void)Rte_Write_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax(Appl_ComShell_HeatPwrMax);
  Appl_ComShell_DmcStsRearToEsc.Cntr = (uint8)(Appl_ComShell_StepCnt & 0x0Fu);
  Appl_ComShell_DmcStsRearToEsc_Cntr = Appl_ComShell_DmcStsRearToEsc.Cntr;
  {
    DmcStsToEsc_1 tx_DmcStsRearToEsc = Appl_ComShell_DmcStsRearToEsc;
    if (Rte_Write_DmcStsRearToEsc_DmcStsRearToEsc(&tx_DmcStsRearToEsc) == RTE_E_OK)
    {
      Appl_ComShell_GrpTxOkCnt++;
    }
  }
  Appl_ComShell_WhlMotSysSpdActSafe.Cntr = (uint8)(Appl_ComShell_StepCnt & 0x0Fu);
  Appl_ComShell_WhlMotSysSpdActSafe_Cntr = Appl_ComShell_WhlMotSysSpdActSafe.Cntr;
  {
    SpdSgnSafe_1 tx_WhlMotSysSpdActSafe = Appl_ComShell_WhlMotSysSpdActSafe;
    (void)Rte_Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe(&tx_WhlMotSysSpdActSafe);
  }
  Appl_ComShell_WhlMotSysTqEst.Cntr = (uint8)(Appl_ComShell_StepCnt & 0x0Fu);
  Appl_ComShell_WhlMotSysTqEst_Cntr = Appl_ComShell_WhlMotSysTqEst.Cntr;
  {
    IsgTqActSafe2_4 tx_WhlMotSysTqEst = Appl_ComShell_WhlMotSysTqEst;
    (void)Rte_Write_WhlMotSysTqEst_WhlMotSysTqEst(&tx_WhlMotSysTqEst);
  }
  {
    DevDataTyp64_2 tx_IEMTestFr1 = Appl_ComShell_IEMTestFr1;
    (void)Rte_Write_IEMTestFr1_IEMTestFr1(&tx_IEMTestFr1);
  }
  {
    DevDataTyp64_2 tx_IEMTestFr2 = Appl_ComShell_IEMTestFr2;
    (void)Rte_Write_IEMTestFr2_IEMTestFr2(&tx_IEMTestFr2);
  }
  {
    DevDataTyp64_2 tx_IEMTestFr3 = Appl_ComShell_IEMTestFr3;
    (void)Rte_Write_IEMTestFr3_IEMTestFr3(&tx_IEMTestFr3);
  }
  {
    ElecDrvGen_4 tx_IemGeneric = Appl_ComShell_IemGeneric;
    (void)Rte_Write_IemGeneric_IemGeneric(&tx_IemGeneric);
  }
  {
    ImobEngChk_2 tx_ImobEngChk2 = Appl_ComShell_ImobEngChk2;
    (void)Rte_Write_ImobEngChk2_ImobEngChk2(&tx_ImobEngChk2);
  }
  {
    WhlMotSysTqAvl_2 tx_WhlMotSysTqAvl = Appl_ComShell_WhlMotSysTqAvl;
    (void)Rte_Write_WhlMotSysTqAvl_WhlMotSysTqAvl(&tx_WhlMotSysTqAvl);
  }
}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
