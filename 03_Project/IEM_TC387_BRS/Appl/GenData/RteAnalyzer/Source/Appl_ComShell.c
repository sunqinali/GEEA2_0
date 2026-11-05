/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Appl_ComShell.c
 *           Config:  IEM_TC387_BRS.dpa
 *        SW-C Type:  Appl_ComShell
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  C-Code implementation template for SW-C <Appl_ComShell>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_Rule5.1, MD_MSR_Rule5.2 */
/* PRQA S 0857 EOF */ /* MD_MSR_Dir1.1 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2982 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2983 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2880 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3203 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3205 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3206 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3218 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3229 EOF */ /* MD_Rte_TestCode */
/* PRQA S 2002 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3334 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3417 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3426 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3453 EOF */ /* MD_Rte_TestCode */

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of version logging area >>                  DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "Rte_Appl_ComShell.h"
#include "TSC_Appl_ComShell.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void Appl_ComShell_TestDefines(void);


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 *
 * Used AUTOSAR Data Types
 *
 **********************************************************************************************************************
 *
 * Primitive Types:
 * ================
 * sint16: Integer in interval [-32768...32767] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 * Enumeration Types:
 * ==================
 * uint8: Enumeration of integer in interval [0...255] with enumerators
 *   FltIndcn_NoFlt (0U)
 *   FltLvl_NoFlt (0U)
 *   FrntHeatModEnad_Heatg (0U)
 *   GearLvrIndcn2_ParkIndcn (0U)
 *   HvCoolg1_NoRequestForMoreCoolantPower (0U)
 *   ImobSts_ImobUndefd (0U)
 *   OnBdChrgrHndlSts1_Disconnected (0U)
 *   OnBdChrgrHndlSts_Disconnected (0U)
 *   OnOff1_Off (0U)
 *   PLockParkRequest_NoReq (0U)
 *   ParkSts_Init (0U)
 *   WhlMotSysActvDampgModCodSts_NoDampg (0U)
 *   WhlMotSysHeatFdBck_On (0U)
 *   WhlMotSysModStsTyp1_Inin (0U)
 *   WhlMotSysModStsTyp2_Inin (0U)
 *   FltIndcn_ComFlt (1U)
 *   FltLvl_FltLvl1 (1U)
 *   FrntHeatModEnad_PwrLoss (1U)
 *   GearLvrIndcn2_RvsIndcn (1U)
 *   HvCoolg1_IncreaseLevel1ForMoreCoolantPower (1U)
 *   ImobSts_ImobImobn (1U)
 *   OnBdChrgrHndlSts1_ConnectedWithoutPower (1U)
 *   OnBdChrgrHndlSts_ConnectedWithoutPower (1U)
 *   OnOff1_On (1U)
 *   PLockParkRequest_ReqApply (1U)
 *   ParkSts_Parked (1U)
 *   WhlMotSysActvDampgModCodSts_LoDampg (1U)
 *   WhlMotSysHeatFdBck_Off (1U)
 *   WhlMotSysModStsTyp1_Stb (1U)
 *   WhlMotSysModStsTyp2_Stb (1U)
 *   FltIndcn_ActrFlt (2U)
 *   FltLvl_FltLvl2 (2U)
 *   FrntHeatModEnad_Off (2U)
 *   GearLvrIndcn2_NeutIndcn (2U)
 *   HvCoolg1_IncreaseLevel2ForMoreCoolantPower (2U)
 *   ImobSts_ImobMtn (2U)
 *   OnBdChrgrHndlSts1_PowerAvailableButNotActivated (2U)
 *   OnBdChrgrHndlSts_PowerAvailableButNotActivated (2U)
 *   PLockParkRequest_ReqRels (2U)
 *   ParkSts_Parking (2U)
 *   WhlMotSysActvDampgModCodSts_MedDampg (2U)
 *   WhlMotSysHeatFdBck_Inhibt (2U)
 *   WhlMotSysModStsTyp1_TqCtrl (2U)
 *   WhlMotSysModStsTyp2_TqCtrl (2U)
 *   FltIndcn_SnsrFlt (3U)
 *   FrntHeatModEnad_Reserved (3U)
 *   GearLvrIndcn2_DrvIndcn (3U)
 *   HvCoolg1_MaxCoolingPower (3U)
 *   ImobSts_ImobNoMtn (3U)
 *   OnBdChrgrHndlSts1_ConnectedWithPower (3U)
 *   OnBdChrgrHndlSts_ConnectedWithPower (3U)
 *   PLockParkRequest_Reserved (3U)
 *   ParkSts_StuckInParked (3U)
 *   WhlMotSysActvDampgModCodSts_HiDampg (3U)
 *   WhlMotSysHeatFdBck_Reserved (3U)
 *   WhlMotSysModStsTyp1_SpdCtrlIdle (3U)
 *   WhlMotSysModStsTyp2_SpdCtrlIdle (3U)
 *   FltIndcn_RdmFlt (4U)
 *   GearLvrIndcn2_ManModeIndcn (4U)
 *   HvCoolg1_NotDefined (4U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar (4U)
 *   OnBdChrgrHndlSts_Init (4U)
 *   ParkSts_StuckInUnparked (4U)
 *   WhlMotSysModStsTyp1_CluOper (4U)
 *   WhlMotSysModStsTyp2_CluOper (4U)
 *   GearLvrIndcn2_Resd1 (5U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar (5U)
 *   OnBdChrgrHndlSts_Fault (5U)
 *   ParkSts_Unparking (5U)
 *   WhlMotSysModStsTyp1_PreChrg (5U)
 *   WhlMotSysModStsTyp2_PreChrg (5U)
 *   GearLvrIndcn2_Resd2 (6U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithpowerincar (6U)
 *   ParkSts_Unparked (6U)
 *   WhlMotSysModStsTyp1_PwrDwn (6U)
 *   WhlMotSysModStsTyp2_PwrDwn (6U)
 *   GearLvrIndcn2_Undefd (7U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar (7U)
 *   ParkSts_Unknown (7U)
 *   WhlMotSysModStsTyp1_Flt (7U)
 *   WhlMotSysModStsTyp2_Flt (7U)
 *   OnBdChrgrHndlSts1_Init (8U)
 *   ParkSts_Off (8U)
 *   WhlMotSysModStsTyp2_TcsCtrl (8U)
 *   OnBdChrgrHndlSts1_Fault (9U)
 *   OnBdChrgrHndlSts1_NotCompleteConnnected (10U)
 *   OnBdChrgrHndlSts1_Reserved0 (11U)
 *   OnBdChrgrHndlSts1_Reserved1 (12U)
 *   OnBdChrgrHndlSts1_Reserved2 (13U)
 *
 *********************************************************************************************************************/


#define Appl_ComShell_START_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Appl_ComShell_Step
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(uint32 *data)
 *   Std_ReturnType Rte_Read_CarTiGlb_CarTiGlb(uint32 *data)
 *   Std_ReturnType Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec(uint16 *data)
 *   Std_ReturnType Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec(uint16 *data)
 *   Std_ReturnType Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvgCyc_DrvgCyc(uint8 *data)
 *   Std_ReturnType Rte_Read_GearLvrIndcn_GearLvrIndcn(uint8 *data)
 *   Std_ReturnType Rte_Read_HvBattSoc_HvBattSoc(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDc_HvBattUDc(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(uint16 *data)
 *   Std_ReturnType Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(uint8 *data)
 *   Std_ReturnType Rte_Read_PLockParkReq_PLockParkReq(uint8 *data)
 *   Std_ReturnType Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(uint8 *data)
 *   Std_ReturnType Rte_Read_RearHeatModEnad_RearHeatModEnad(uint8 *data)
 *   Std_ReturnType Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(uint8 *data)
 *   Std_ReturnType Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysModReq_WhlMotSysModReq(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_ImobEngSts2_ImobEngSts2(uint8 data)
 *   Std_ReturnType Rte_Write_PLockFltIndcRe_PLockFltIndcRe(uint8 data)
 *   Std_ReturnType Rte_Write_PLockFltLvlRe_PLockFltLvlRe(uint8 data)
 *   Std_ReturnType Rte_Write_PLockParkStsRe_PLockParkStsRe(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotClrRdyReq_WhlMotClrRdyReq(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq(uint16 data)
 *   Std_ReturnType Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysIdc_WhlMotSysIdc(uint16 data)
 *   Std_ReturnType Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(uint16 data)
 *   Std_ReturnType Rte_Write_WhlMotSysModSts_WhlMotSysModSts(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysMotT_WhlMotSysMotT(uint8 data)
 *   Std_ReturnType Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(sint16 data)
 *   Std_ReturnType Rte_Write_WhlMotSysUdc_WhlMotSysUdc(uint16 data)
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_ComShell_Step_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, Appl_ComShell_CODE) Appl_ComShell_Step(void) /* PRQA S 0624, 3206 */ /* MD_Rte_0624, MD_Rte_3206 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Appl_ComShell_Step
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error;

  uint32 Read_BkpOfDstTrvld_BkpOfDstTrvld;
  uint32 Read_CarTiGlb_CarTiGlb;
  uint16 Read_CooltFlowForDtElec_CooltFlowForDtElec;
  uint16 Read_CooltTSigForDtElec_CooltTSigForDtElec;
  uint8 Read_DCChrgnHndlSts_DCChrgnHndlSts;
  uint8 Read_DrvgCyc_DrvgCyc;
  uint8 Read_GearLvrIndcn_GearLvrIndcn;
  uint16 Read_HvBattSoc_HvBattSoc;
  uint16 Read_HvBattUDc_HvBattUDc;
  uint16 Read_HvBattUDynMaxLim_HvBattUDynMaxLim;
  uint16 Read_HvBattUDynMinLim_HvBattUDynMinLim;
  uint8 Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1;
  uint8 Read_PLockParkReq_PLockParkReq;
  uint8 Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn;
  uint8 Read_RearHeatModEnad_RearHeatModEnad;
  uint8 Read_RearHeatPwrAllwd_RearHeatPwrAllwd;
  uint16 Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe;
  uint8 Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq;
  uint8 Read_WhlMotSysModReq_WhlMotSysModReq;
  uint16 Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax;
  uint16 Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin;
  uint16 Read_WhlMotSysTqReq_WhlMotSysTqReq;

  uint8 Write_WhlMotSysCooltT_WhlMotSysCooltT;
  uint16 Write_WhlMotSysIdc_WhlMotSysIdc;
  uint8 Write_WhlMotSysInvrT_WhlMotSysInvrT;
  uint8 Write_WhlMotSysMotT_WhlMotSysMotT;
  sint16 Write_WhlMotSysSpdAct_WhlMotSysSpdAct;

  /*************************************************
  * Direct Function Accesses
  *************************************************/

  fct_status = TSC_Appl_ComShell_Rte_Read_BkpOfDstTrvld_BkpOfDstTrvld(&Read_BkpOfDstTrvld_BkpOfDstTrvld); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_CarTiGlb_CarTiGlb(&Read_CarTiGlb_CarTiGlb); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_CooltFlowForDtElec_CooltFlowForDtElec(&Read_CooltFlowForDtElec_CooltFlowForDtElec); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_CooltTSigForDtElec_CooltTSigForDtElec(&Read_CooltTSigForDtElec_CooltTSigForDtElec); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(&Read_DCChrgnHndlSts_DCChrgnHndlSts); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_DrvgCyc_DrvgCyc(&Read_DrvgCyc_DrvgCyc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_GearLvrIndcn_GearLvrIndcn(&Read_GearLvrIndcn_GearLvrIndcn); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_HvBattSoc_HvBattSoc(&Read_HvBattSoc_HvBattSoc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_HvBattUDc_HvBattUDc(&Read_HvBattUDc_HvBattUDc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(&Read_HvBattUDynMaxLim_HvBattUDynMaxLim); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(&Read_HvBattUDynMinLim_HvBattUDynMinLim); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(&Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_PLockParkReq_PLockParkReq(&Read_PLockParkReq_PLockParkReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(&Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_RearHeatModEnad_RearHeatModEnad(&Read_RearHeatModEnad_RearHeatModEnad); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(&Read_RearHeatPwrAllwd_RearHeatPwrAllwd); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(&Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(&Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysModReq_WhlMotSysModReq(&Read_WhlMotSysModReq_WhlMotSysModReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(&Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(&Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(&Read_WhlMotSysTqReq_WhlMotSysTqReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = TRUE;
      break;
    case RTE_E_NEVER_RECEIVED:
      fct_error = TRUE;
      break;
    case RTE_E_INVALID:
      fct_error = TRUE;
      break;
    case RTE_E_MAX_AGE_EXCEEDED:
      fct_error = TRUE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_ImobEngSts2_ImobEngSts2(Rte_InitValue_ImobEngSts2_ImobEngSts2); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_PLockFltIndcRe_PLockFltIndcRe(Rte_InitValue_PLockFltIndcRe_PLockFltIndcRe); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_PLockFltLvlRe_PLockFltLvlRe(Rte_InitValue_PLockFltLvlRe_PLockFltLvlRe); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_PLockParkStsRe_PLockParkStsRe(Rte_InitValue_PLockParkStsRe_PLockParkStsRe); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotClrRdyReq_WhlMotClrRdyReq(Rte_InitValue_WhlMotClrRdyReq_WhlMotClrRdyReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq(Rte_InitValue_WhlMotCooltFlowMinReq_WhlMotCooltFlowMinReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysCoolgReq_WhlMotSysCoolgReq(Rte_InitValue_WhlMotSysCoolgReq_WhlMotSysCoolgReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysCooltT_WhlMotSysCooltT, 0, sizeof(Write_WhlMotSysCooltT_WhlMotSysCooltT)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysCooltT_WhlMotSysCooltT(Write_WhlMotSysCooltT_WhlMotSysCooltT); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq(Rte_InitValue_WhlMotSysErrIndcnReq_WhlMotSysErrIndcnReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck(Rte_InitValue_WhlMotSysHeatFdBck_WhlMotSysHeatFdBck); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct(Rte_InitValue_WhlMotSysHeatPwrAct_WhlMotSysHeatPwrAct); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax(Rte_InitValue_WhlMotSysHeatPwrMax_WhlMotSysHeatPwrMax); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysIdc_WhlMotSysIdc, 0, sizeof(Write_WhlMotSysIdc_WhlMotSysIdc)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysIdc_WhlMotSysIdc(Write_WhlMotSysIdc_WhlMotSysIdc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysInvrT_WhlMotSysInvrT, 0, sizeof(Write_WhlMotSysInvrT_WhlMotSysInvrT)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysInvrT_WhlMotSysInvrT(Write_WhlMotSysInvrT_WhlMotSysInvrT); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn(Rte_InitValue_WhlMotSysLimnIndcn_WhlMotSysLimnIndcn); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysModSts_WhlMotSysModSts(Rte_InitValue_WhlMotSysModSts_WhlMotSysModSts); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysMotT_WhlMotSysMotT, 0, sizeof(Write_WhlMotSysMotT_WhlMotSysMotT)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysMotT_WhlMotSysMotT(Write_WhlMotSysMotT_WhlMotSysMotT); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysSpdAct_WhlMotSysSpdAct, 0, sizeof(Write_WhlMotSysSpdAct_WhlMotSysSpdAct)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysSpdAct_WhlMotSysSpdAct(Write_WhlMotSysSpdAct_WhlMotSysSpdAct); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysUdc_WhlMotSysUdc(Rte_InitValue_WhlMotSysUdc_WhlMotSysUdc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  Appl_ComShell_TestDefines(); /* PRQA S 2987 */ /* MD_Rte_2987 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define Appl_ComShell_STOP_SEC_CODE
#include "Appl_ComShell_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void Appl_ComShell_TestDefines(void)
{
  /* Primitive Types */

  sint16 Test_sint16_LL_1 = IsgSpdWSgnTyp_2_LowerLimit;
  sint16 Test_sint16_UL_1 = IsgSpdWSgnTyp_2_UpperLimit;

  uint16 Test_uint16_LL_1 = Ampr1_1_LowerLimit;
  uint16 Test_uint16_UL_1 = Ampr1_1_UpperLimit;
  uint16 Test_uint16_LL_2 = CooltFlow2_2_LowerLimit;
  uint16 Test_uint16_UL_2 = CooltFlow2_2_UpperLimit;
  uint16 Test_uint16_LL_3 = CooltFlowForDtElec1_2_LowerLimit;
  uint16 Test_uint16_UL_3 = CooltFlowForDtElec1_2_UpperLimit;
  uint16 Test_uint16_LL_4 = CooltTHiResl_2_LowerLimit;
  uint16 Test_uint16_UL_4 = CooltTHiResl_2_UpperLimit;
  uint16 Test_uint16_LL_5 = HvTq1_2_LowerLimit;
  uint16 Test_uint16_UL_5 = HvTq1_2_UpperLimit;
  uint16 Test_uint16_LL_6 = HvU1_2_LowerLimit;
  uint16 Test_uint16_UL_6 = HvU1_2_UpperLimit;
  uint16 Test_uint16_LL_7 = N1_2_LowerLimit;
  uint16 Test_uint16_UL_7 = N1_2_UpperLimit;
  uint16 Test_uint16_LL_8 = Perc7_2_LowerLimit;
  uint16 Test_uint16_UL_8 = Perc7_2_UpperLimit;
  uint16 Test_uint16_LL_9 = PrpsnPwrLimMax_2_LowerLimit;
  uint16 Test_uint16_UL_9 = PrpsnPwrLimMax_2_UpperLimit;
  uint16 Test_uint16_LL_10 = PrpsnPwrLimMin_2_LowerLimit;
  uint16 Test_uint16_UL_10 = PrpsnPwrLimMin_2_UpperLimit;
  uint16 Test_uint16_LL_11 = UInt16_2_LowerLimit;
  uint16 Test_uint16_UL_11 = UInt16_2_UpperLimit;

  uint32 Test_uint32_LL_1 = CarTiGlb_2_LowerLimit;
  uint32 Test_uint32_UL_1 = CarTiGlb_2_UpperLimit;
  uint32 Test_uint32_LL_2 = Len31_2_LowerLimit;
  uint32 Test_uint32_UL_2 = Len31_2_UpperLimit;

  /* Enumeration Data Types */

  uint8 Test_uint8_LL_1 = FltIndcn_1_LowerLimit;
  uint8 Test_uint8_UL_1 = FltIndcn_1_UpperLimit;
  uint8 Test_uint8_LL_2 = FltLvl_1_LowerLimit;
  uint8 Test_uint8_UL_2 = FltLvl_1_UpperLimit;
  uint8 Test_uint8_LL_3 = FrntHeatModEnad_1_LowerLimit;
  uint8 Test_uint8_UL_3 = FrntHeatModEnad_1_UpperLimit;
  uint8 Test_uint8_LL_4 = GearLvrIndcn2_2_LowerLimit;
  uint8 Test_uint8_UL_4 = GearLvrIndcn2_2_UpperLimit;
  uint8 Test_uint8_LL_5 = HvCoolg1_2_LowerLimit;
  uint8 Test_uint8_UL_5 = HvCoolg1_2_UpperLimit;
  uint8 Test_uint8_LL_6 = HvT1_3_LowerLimit;
  uint8 Test_uint8_UL_6 = HvT1_3_UpperLimit;
  uint8 Test_uint8_LL_7 = ImobSts_2_LowerLimit;
  uint8 Test_uint8_UL_7 = ImobSts_2_UpperLimit;
  uint8 Test_uint8_LL_8 = IsgHeatPwr_1_LowerLimit;
  uint8 Test_uint8_UL_8 = IsgHeatPwr_1_UpperLimit;
  uint8 Test_uint8_LL_9 = OnBdChrgrHndlSts1_2_LowerLimit;
  uint8 Test_uint8_UL_9 = OnBdChrgrHndlSts1_2_UpperLimit;
  uint8 Test_uint8_LL_10 = OnBdChrgrHndlSts_2_LowerLimit;
  uint8 Test_uint8_UL_10 = OnBdChrgrHndlSts_2_UpperLimit;
  uint8 Test_uint8_LL_11 = OnOff1_2_LowerLimit;
  uint8 Test_uint8_UL_11 = OnOff1_2_UpperLimit;
  uint8 Test_uint8_LL_12 = PLockParkRequest_1_LowerLimit;
  uint8 Test_uint8_UL_12 = PLockParkRequest_1_UpperLimit;
  uint8 Test_uint8_LL_13 = ParkSts_1_LowerLimit;
  uint8 Test_uint8_UL_13 = ParkSts_1_UpperLimit;
  uint8 Test_uint8_LL_14 = T3_2_LowerLimit;
  uint8 Test_uint8_UL_14 = T3_2_UpperLimit;
  uint8 Test_uint8_LL_15 = UInt4_2_LowerLimit;
  uint8 Test_uint8_UL_15 = UInt4_2_UpperLimit;
  uint8 Test_uint8_LL_16 = WhlMotSysActvDampgModCodSts_2_LowerLimit;
  uint8 Test_uint8_UL_16 = WhlMotSysActvDampgModCodSts_2_UpperLimit;
  uint8 Test_uint8_LL_17 = WhlMotSysHeatFdBck_1_LowerLimit;
  uint8 Test_uint8_UL_17 = WhlMotSysHeatFdBck_1_UpperLimit;
  uint8 Test_uint8_LL_18 = WhlMotSysModStsTyp1_2_LowerLimit;
  uint8 Test_uint8_UL_18 = WhlMotSysModStsTyp1_2_UpperLimit;
  uint8 Test_uint8_LL_19 = WhlMotSysModStsTyp2_2_LowerLimit;
  uint8 Test_uint8_UL_19 = WhlMotSysModStsTyp2_2_UpperLimit;
  uint8 Test_uint8_V_1 = FltIndcn_NoFlt;
  uint8 Test_uint8_V_2 = FltLvl_NoFlt;
  uint8 Test_uint8_V_3 = FrntHeatModEnad_Heatg;
  uint8 Test_uint8_V_4 = GearLvrIndcn2_ParkIndcn;
  uint8 Test_uint8_V_5 = HvCoolg1_NoRequestForMoreCoolantPower;
  uint8 Test_uint8_V_6 = ImobSts_ImobUndefd;
  uint8 Test_uint8_V_7 = OnBdChrgrHndlSts1_Disconnected;
  uint8 Test_uint8_V_8 = OnBdChrgrHndlSts_Disconnected;
  uint8 Test_uint8_V_9 = OnOff1_Off;
  uint8 Test_uint8_V_10 = PLockParkRequest_NoReq;
  uint8 Test_uint8_V_11 = ParkSts_Init;
  uint8 Test_uint8_V_12 = WhlMotSysActvDampgModCodSts_NoDampg;
  uint8 Test_uint8_V_13 = WhlMotSysHeatFdBck_On;
  uint8 Test_uint8_V_14 = WhlMotSysModStsTyp1_Inin;
  uint8 Test_uint8_V_15 = WhlMotSysModStsTyp2_Inin;
  uint8 Test_uint8_V_16 = FltIndcn_ComFlt;
  uint8 Test_uint8_V_17 = FltLvl_FltLvl1;
  uint8 Test_uint8_V_18 = FrntHeatModEnad_PwrLoss;
  uint8 Test_uint8_V_19 = GearLvrIndcn2_RvsIndcn;
  uint8 Test_uint8_V_20 = HvCoolg1_IncreaseLevel1ForMoreCoolantPower;
  uint8 Test_uint8_V_21 = ImobSts_ImobImobn;
  uint8 Test_uint8_V_22 = OnBdChrgrHndlSts1_ConnectedWithoutPower;
  uint8 Test_uint8_V_23 = OnBdChrgrHndlSts_ConnectedWithoutPower;
  uint8 Test_uint8_V_24 = OnOff1_On;
  uint8 Test_uint8_V_25 = PLockParkRequest_ReqApply;
  uint8 Test_uint8_V_26 = ParkSts_Parked;
  uint8 Test_uint8_V_27 = WhlMotSysActvDampgModCodSts_LoDampg;
  uint8 Test_uint8_V_28 = WhlMotSysHeatFdBck_Off;
  uint8 Test_uint8_V_29 = WhlMotSysModStsTyp1_Stb;
  uint8 Test_uint8_V_30 = WhlMotSysModStsTyp2_Stb;
  uint8 Test_uint8_V_31 = FltIndcn_ActrFlt;
  uint8 Test_uint8_V_32 = FltLvl_FltLvl2;
  uint8 Test_uint8_V_33 = FrntHeatModEnad_Off;
  uint8 Test_uint8_V_34 = GearLvrIndcn2_NeutIndcn;
  uint8 Test_uint8_V_35 = HvCoolg1_IncreaseLevel2ForMoreCoolantPower;
  uint8 Test_uint8_V_36 = ImobSts_ImobMtn;
  uint8 Test_uint8_V_37 = OnBdChrgrHndlSts1_PowerAvailableButNotActivated;
  uint8 Test_uint8_V_38 = OnBdChrgrHndlSts_PowerAvailableButNotActivated;
  uint8 Test_uint8_V_39 = PLockParkRequest_ReqRels;
  uint8 Test_uint8_V_40 = ParkSts_Parking;
  uint8 Test_uint8_V_41 = WhlMotSysActvDampgModCodSts_MedDampg;
  uint8 Test_uint8_V_42 = WhlMotSysHeatFdBck_Inhibt;
  uint8 Test_uint8_V_43 = WhlMotSysModStsTyp1_TqCtrl;
  uint8 Test_uint8_V_44 = WhlMotSysModStsTyp2_TqCtrl;
  uint8 Test_uint8_V_45 = FltIndcn_SnsrFlt;
  uint8 Test_uint8_V_46 = FrntHeatModEnad_Reserved;
  uint8 Test_uint8_V_47 = GearLvrIndcn2_DrvIndcn;
  uint8 Test_uint8_V_48 = HvCoolg1_MaxCoolingPower;
  uint8 Test_uint8_V_49 = ImobSts_ImobNoMtn;
  uint8 Test_uint8_V_50 = OnBdChrgrHndlSts1_ConnectedWithPower;
  uint8 Test_uint8_V_51 = OnBdChrgrHndlSts_ConnectedWithPower;
  uint8 Test_uint8_V_52 = PLockParkRequest_Reserved;
  uint8 Test_uint8_V_53 = ParkSts_StuckInParked;
  uint8 Test_uint8_V_54 = WhlMotSysActvDampgModCodSts_HiDampg;
  uint8 Test_uint8_V_55 = WhlMotSysHeatFdBck_Reserved;
  uint8 Test_uint8_V_56 = WhlMotSysModStsTyp1_SpdCtrlIdle;
  uint8 Test_uint8_V_57 = WhlMotSysModStsTyp2_SpdCtrlIdle;
  uint8 Test_uint8_V_58 = FltIndcn_RdmFlt;
  uint8 Test_uint8_V_59 = GearLvrIndcn2_ManModeIndcn;
  uint8 Test_uint8_V_60 = HvCoolg1_NotDefined;
  uint8 Test_uint8_V_61 = OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar;
  uint8 Test_uint8_V_62 = OnBdChrgrHndlSts_Init;
  uint8 Test_uint8_V_63 = ParkSts_StuckInUnparked;
  uint8 Test_uint8_V_64 = WhlMotSysModStsTyp1_CluOper;
  uint8 Test_uint8_V_65 = WhlMotSysModStsTyp2_CluOper;
  uint8 Test_uint8_V_66 = GearLvrIndcn2_Resd1;
  uint8 Test_uint8_V_67 = OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar;
  uint8 Test_uint8_V_68 = OnBdChrgrHndlSts_Fault;
  uint8 Test_uint8_V_69 = ParkSts_Unparking;
  uint8 Test_uint8_V_70 = WhlMotSysModStsTyp1_PreChrg;
  uint8 Test_uint8_V_71 = WhlMotSysModStsTyp2_PreChrg;
  uint8 Test_uint8_V_72 = GearLvrIndcn2_Resd2;
  uint8 Test_uint8_V_73 = OnBdChrgrHndlSts1_DischargeConnectwithpowerincar;
  uint8 Test_uint8_V_74 = ParkSts_Unparked;
  uint8 Test_uint8_V_75 = WhlMotSysModStsTyp1_PwrDwn;
  uint8 Test_uint8_V_76 = WhlMotSysModStsTyp2_PwrDwn;
  uint8 Test_uint8_V_77 = GearLvrIndcn2_Undefd;
  uint8 Test_uint8_V_78 = OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar;
  uint8 Test_uint8_V_79 = ParkSts_Unknown;
  uint8 Test_uint8_V_80 = WhlMotSysModStsTyp1_Flt;
  uint8 Test_uint8_V_81 = WhlMotSysModStsTyp2_Flt;
  uint8 Test_uint8_V_82 = OnBdChrgrHndlSts1_Init;
  uint8 Test_uint8_V_83 = ParkSts_Off;
  uint8 Test_uint8_V_84 = WhlMotSysModStsTyp2_TcsCtrl;
  uint8 Test_uint8_V_85 = OnBdChrgrHndlSts1_Fault;
  uint8 Test_uint8_V_86 = OnBdChrgrHndlSts1_NotCompleteConnnected;
  uint8 Test_uint8_V_87 = OnBdChrgrHndlSts1_Reserved0;
  uint8 Test_uint8_V_88 = OnBdChrgrHndlSts1_Reserved1;
  uint8 Test_uint8_V_89 = OnBdChrgrHndlSts1_Reserved2;
}

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of function definition area >>              DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of removed code area >>                   DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of removed code area >>                     DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_0315:  MISRA rule: Dir1.1
     Reason:     Pointer cast to void because generic access is necessary.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_0624:  MISRA rule: Rule8.3
     Reason:     This MISRA violation is a consequence from the RTE requirements [SWS_Rte_01007] [SWS_Rte_01150].
                 The typedefs are never used in the same context.
     Risk:       No functional risk. Only a cast to uint8* is performed.
     Prevention: Not required.

   MD_Rte_2987:  MISRA rule: Rule2.2
     Reason:     Used to simplify code generation.
     Risk:       No functional risk. There is no side effect.
     Prevention: Not required.

   MD_Rte_3206:  MISRA rule: Rule2.7
     Reason:     The parameter are not used by the code in all possible code variants.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3226:  MISRA rule: Rule13.4
     Reason:     Needed for function like macro to do arithmetic operations in sub macros
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_TestCode:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
