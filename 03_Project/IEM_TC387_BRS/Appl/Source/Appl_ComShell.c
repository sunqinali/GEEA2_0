/**********************************************************************************************************************
 * Appl_ComShell.c v0.5 — Task_Bsw_10ms, Rte↔COM (22 RX + 19 TX)
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
}

#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
