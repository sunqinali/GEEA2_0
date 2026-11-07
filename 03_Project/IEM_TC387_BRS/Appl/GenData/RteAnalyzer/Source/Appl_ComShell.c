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
 *   AlrmSt_Disarmd (0U)
 *   AvlSts2_NotAvl (0U)
 *   CarModSts1_CarModNorm (0U)
 *   CrashSts2_NoCrash (0U)
 *   DMC_Init (0U)
 *   EngSt1_Ini (0U)
 *   FltEgyCns1_NoFlt (0U)
 *   FltIndcn_NoFlt (0U)
 *   FltLvl_NoFlt (0U)
 *   FrntHeatModEnad_Heatg (0U)
 *   GearLvrIndcn2_ParkIndcn (0U)
 *   GenQf1_UndefindDataAccur (0U)
 *   HvActvnSts_Open (0U)
 *   HvCoolg1_NoRequestForMoreCoolantPower (0U)
 *   ImobEngMgrReqCmd_ImobEngCmdTarIdle (0U)
 *   ImobSts_ImobUndefd (0U)
 *   ModStatusRms_Invalid (0U)
 *   ModeDMC_Off (0U)
 *   OnBdChrgrHndlSts1_Disconnected (0U)
 *   OnBdChrgrHndlSts_Disconnected (0U)
 *   OnOff1_Off (0U)
 *   PLockParkRequest_NoReq (0U)
 *   ParkSts_Init (0U)
 *   QualityFactor_QfUndefd (0U)
 *   UsgModSts1_UsgModAbdnd (0U)
 *   VehMtnSt2_Ukwn (0U)
 *   WhlMotSysActvDampgModCodSts_NoDampg (0U)
 *   WhlMotSysHeatFdBck_On (0U)
 *   WhlMotSysModStsTyp1_Inin (0U)
 *   WhlMotSysModStsTyp2_Inin (0U)
 *   AlrmSt_Armd (1U)
 *   AvlSts2_Avl (1U)
 *   CarModSts1_CarModTrnsp (1U)
 *   CrashSts2_Crash (1U)
 *   DMC_On (1U)
 *   EngSt1_Awake (1U)
 *   FltEgyCns1_Flt (1U)
 *   FltIndcn_ComFlt (1U)
 *   FltLvl_FltLvl1 (1U)
 *   FrntHeatModEnad_PwrLoss (1U)
 *   GearLvrIndcn2_RvsIndcn (1U)
 *   GenQf1_TmpUndefdData (1U)
 *   HvActvnSts_Clsd (1U)
 *   HvCoolg1_IncreaseLevel1ForMoreCoolantPower (1U)
 *   ImobEngMgrReqCmd_ImobEngMtnStrtReqCmd (1U)
 *   ImobSts_ImobImobn (1U)
 *   ModeDMC_Rpm (1U)
 *   OnBdChrgrHndlSts1_ConnectedWithoutPower (1U)
 *   OnBdChrgrHndlSts_ConnectedWithoutPower (1U)
 *   OnOff1_On (1U)
 *   PLockParkRequest_ReqApply (1U)
 *   PModStatusRms_wrCns (1U)
 *   ParkSts_Parked (1U)
 *   QualityFactor_QfInProgs (1U)
 *   UsgModSts1_UsgModInActv (1U)
 *   VehMtnSt2_StandStillVal1 (1U)
 *   WhlMotSysActvDampgModCodSts_LoDampg (1U)
 *   WhlMotSysHeatFdBck_Off (1U)
 *   WhlMotSysModStsTyp1_Stb (1U)
 *   WhlMotSysModStsTyp2_Stb (1U)
 *   AlrmSt_Actv (2U)
 *   CarModSts1_CarModFcy (2U)
 *   DMC_Off (2U)
 *   EngSt1_Rdy (2U)
 *   FltIndcn_ActrFlt (2U)
 *   FltLvl_FltLvl2 (2U)
 *   FrntHeatModEnad_Off (2U)
 *   GearLvrIndcn2_NeutIndcn (2U)
 *   GenQf1_DataAccurNotWithinSpcn (2U)
 *   HvActvnSts_KeepSt (2U)
 *   HvCoolg1_IncreaseLevel2ForMoreCoolantPower (2U)
 *   ImobEngMgrReqCmd_ImobEngNoMtnStrtReqCmd (2U)
 *   ImobSts_ImobMtn (2U)
 *   ModStatusRms_PwrGen (2U)
 *   ModeDMC_Trq (2U)
 *   OnBdChrgrHndlSts1_PowerAvailableButNotActivated (2U)
 *   OnBdChrgrHndlSts_PowerAvailableButNotActivated (2U)
 *   PLockParkRequest_ReqRels (2U)
 *   ParkSts_Parking (2U)
 *   QualityFactor_QfNotSpc (2U)
 *   UsgModSts1_UsgModCnvinc (2U)
 *   VehMtnSt2_StandStillVal2 (2U)
 *   WhlMotSysActvDampgModCodSts_MedDampg (2U)
 *   WhlMotSysHeatFdBck_Inhibt (2U)
 *   WhlMotSysModStsTyp1_TqCtrl (2U)
 *   WhlMotSysModStsTyp2_TqCtrl (2U)
 *   CarModSts1_CarModCrash (3U)
 *   DMC_Fault (3U)
 *   EngSt1_PreStrtg (3U)
 *   FltIndcn_SnsrFlt (3U)
 *   FrntHeatModEnad_Reserved (3U)
 *   GearLvrIndcn2_DrvIndcn (3U)
 *   GenQf1_AccurData (3U)
 *   HvActvnSts_OpenAndReqActvDcha (3U)
 *   HvCoolg1_MaxCoolingPower (3U)
 *   ImobEngMgrReqCmd_ImobEngTurnOffCmd (3U)
 *   ImobSts_ImobNoMtn (3U)
 *   ModStatusRms_OffSts (3U)
 *   OnBdChrgrHndlSts1_ConnectedWithPower (3U)
 *   OnBdChrgrHndlSts_ConnectedWithPower (3U)
 *   PLockParkRequest_Reserved (3U)
 *   ParkSts_StuckInParked (3U)
 *   QualityFactor_QfSnsrDataOk (3U)
 *   UsgModSts1_UsgModActv (11U)
 *   VehMtnSt2_StandStillVal3 (3U)
 *   WhlMotSysActvDampgModCodSts_HiDampg (3U)
 *   WhlMotSysHeatFdBck_Reserved (3U)
 *   WhlMotSysModStsTyp1_SpdCtrlIdle (3U)
 *   WhlMotSysModStsTyp2_SpdCtrlIdle (3U)
 *   CarModSts1_CarModDyno (5U)
 *   EngSt1_StrtgInProgs (4U)
 *   FltIndcn_RdmFlt (4U)
 *   GearLvrIndcn2_ManModeIndcn (4U)
 *   HvCoolg1_NotDefined (4U)
 *   ModStatusRms_RdySts (4U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar (4U)
 *   OnBdChrgrHndlSts_Init (4U)
 *   ParkSts_StuckInUnparked (4U)
 *   UsgModSts1_UsgModDrvg (13U)
 *   VehMtnSt2_RollgFwdVal1 (4U)
 *   WhlMotSysModStsTyp1_CluOper (4U)
 *   WhlMotSysModStsTyp2_CluOper (4U)
 *   EngSt1_RunngRunng (5U)
 *   GearLvrIndcn2_Resd1 (5U)
 *   ModStatusRms_Abnormal (5U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar (5U)
 *   OnBdChrgrHndlSts_Fault (5U)
 *   ParkSts_Unparking (5U)
 *   VehMtnSt2_RollgFwdVal2 (5U)
 *   WhlMotSysModStsTyp1_PreChrg (5U)
 *   WhlMotSysModStsTyp2_PreChrg (5U)
 *   EngSt1_RunngStb (6U)
 *   GearLvrIndcn2_Resd2 (6U)
 *   ModStatusRms_Invalid1 (6U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithpowerincar (6U)
 *   ParkSts_Unparked (6U)
 *   VehMtnSt2_RollgBackwVal1 (6U)
 *   WhlMotSysModStsTyp1_PwrDwn (6U)
 *   WhlMotSysModStsTyp2_PwrDwn (6U)
 *   EngSt1_RunngStrtgInProgs (7U)
 *   GearLvrIndcn2_Undefd (7U)
 *   ModStatusRms_Invalid2 (7U)
 *   OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar (7U)
 *   ParkSts_Unknown (7U)
 *   VehMtnSt2_RollgBackwVal2 (7U)
 *   WhlMotSysModStsTyp1_Flt (7U)
 *   WhlMotSysModStsTyp2_Flt (7U)
 *   EngSt1_RunngRemStrtd (8U)
 *   ModStatusRms_Invalid3 (8U)
 *   OnBdChrgrHndlSts1_Init (8U)
 *   ParkSts_Off (8U)
 *   WhlMotSysModStsTyp2_TcsCtrl (8U)
 *   EngSt1_AftRun (9U)
 *   ModStatusRms_Invalid4 (9U)
 *   OnBdChrgrHndlSts1_Fault (9U)
 *   ModStatusRms_Invalid5 (10U)
 *   OnBdChrgrHndlSts1_NotCompleteConnnected (10U)
 *   ModStatusRms_Invalid6 (11U)
 *   OnBdChrgrHndlSts1_Reserved0 (11U)
 *   ModStatusRms_Invalid7 (12U)
 *   OnBdChrgrHndlSts1_Reserved1 (12U)
 *   ModStatusRms_Invalid8 (13U)
 *   OnBdChrgrHndlSts1_Reserved2 (13U)
 *   ModStatusRms_Invalid9 (14U)
 *   ModStatusRms_Invalid10 (15U)
 *
 * Record Types:
 * =============
 * CrashStsSafe_1: Record with elements
 *   Sts of type uint8
 *   Chks of type uint8
 *   Cntr of type uint8
 * DevDataTyp64_2: Record with elements
 *   Byte0 of type uint8
 *   Byte1 of type uint8
 *   Byte2 of type uint8
 *   Byte3 of type uint8
 *   Byte4 of type uint8
 *   Byte5 of type uint8
 *   Byte6 of type uint8
 *   Byte7 of type uint8
 * DmcStsToEsc_1: Record with elements
 *   DmcSts of type uint8
 *   DmcActAppTarTq of type sint16
 *   Cntr of type uint8
 *   Chks of type uint8
 *   DmcSWInfo of type uint16
 * ElecDrvGen_4: Record with elements
 *   EMQnty of type uint8
 *   EMSeqNr of type uint8
 *   DTCSts of type uint8
 *   DTCLow of type uint8
 *   DTCMid of type uint8
 *   DTCHig of type uint8
 *   TypeInfo of type uint8
 *   MotTAlrmSt of type uint8
 *   InvrtTAlrmSt of type uint8
 *   FltAlrmSt of type uint8
 *   SpdAlrmSt of type uint8
 *   IacAlrmSt of type uint8
 *   UDcAlrmSt of type uint8
 *   RslAlrmSt of type uint8
 *   ADAlrmSt of type uint8
 *   ModStatusRms of type uint8
 * EngSt1WdSts_1: Record with elements
 *   EngSt1WdSts of type uint8
 *   Chks of type uint8
 *   Cntr of type uint8
 * EscVariantToDmc_1: Record with elements
 *   EscVariantToDmc of type uint8
 *   Chks of type uint8
 *   Cntr of type uint8
 * HvSysRlySts_1: Record with elements
 *   HvSysRlySts of type uint8
 *   Cntr of type uint8
 *   Chks of type uint8
 * ImobEngChk_2: Record with elements
 *   ImobEngChkSts of type uint8
 *   ImobEngDataChk0 of type uint8
 *   ImobEngDataChk1 of type uint8
 *   ImobEngDataChk2 of type uint8
 *   ImobEngDataChk3 of type uint8
 *   ImobEngDataChk4 of type uint8
 *   ImobEngDataChk5 of type uint8
 *   ImobEngDataChk6 of type uint8
 * ImobEngMgrReq_2: Record with elements
 *   ImobEngMgrCmdTar1 of type uint8
 *   ImobEngDataMgrReq0 of type uint8
 *   ImobEngDataMgrReq1 of type uint8
 *   ImobEngDataMgrReq2 of type uint8
 *   ImobEngDataMgrReq3 of type uint8
 *   ImobEngDataMgrReq4 of type uint8
 *   ImobEngDataMgrReq5 of type uint8
 *   ImobEngDataMgrReq6 of type uint8
 * IsgTqActSafe2_4: Record with elements
 *   Cntr of type uint8
 *   Chks of type uint8
 *   QualityFactor of type uint8
 *   IsgTqAct of type uint16
 * PtTqAtAxleReq_1: Record with elements
 *   PtTqAtAxleFrntReq of type sint16
 *   PtTqAtAxleReReq of type sint16
 *   Chks of type uint8
 *   Cntr of type uint8
 * SpdSgnSafe_1: Record with elements
 *   IsgSpdWSgnTyp of type sint16
 *   Chks of type uint8
 *   Cntr of type uint8
 *   Qf of type uint8
 * StcStsToDmc_1: Record with elements
 *   StcStsToDmcFrnt of type uint8
 *   StcStsToDmcRear of type uint8
 *   EngRotTarSpdDMCFrnt of type uint16
 *   EngRotTarSpdDMCRear of type uint16
 *   Chks of type uint8
 *   Cntr of type uint8
 * SysU_4: Record with elements
 *   SysU of type uint8
 *   SysUQf of type uint8
 * VehModMngtGlbSafe1_2: Record with elements
 *   UsgModSts of type uint8
 *   CarModSts1 of type uint8
 *   CarModSubtypWdCarModSubtyp of type uint8
 *   EgyLvlElecMai of type uint8
 *   EgyLvlElecSubtyp of type uint8
 *   PwrLvlElecMai of type uint8
 *   PwrLvlElecSubtyp of type uint8
 *   FltEgyCnsWdSts of type uint8
 *   Chks of type uint8
 *   Cntr of type uint8
 * VehMtnStSafe1_2: Record with elements
 *   VehMtnSt of type uint8
 *   VehMtnStChks of type uint8
 *   VehMtnStCntr of type uint8
 * VehSpdLgtSafe1_3: Record with elements
 *   VehSpdLgtA of type uint16
 *   VehSpdLgtQf of type uint8
 *   VehSpdLgtCntr of type uint8
 *   VehSpdLgtChks of type uint8
 * WhlMotSysTqAllwd_3: Record with elements
 *   WhlMotSysTqAllwd of type uint8
 *   Chks of type uint8
 *   Cntr of type uint8
 * WhlMotSysTqAvl_2: Record with elements
 *   TqAvlMax of type uint16
 *   TqAvlMin of type uint16
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
 *   Std_ReturnType Rte_Read_CrashStsSafe_CrashStsSafe(CrashStsSafe_1 *data)
 *   Std_ReturnType Rte_Read_DCChrgnHndlSts_DCChrgnHndlSts(uint8 *data)
 *   Std_ReturnType Rte_Read_DrvgCyc_DrvgCyc(uint8 *data)
 *   Std_ReturnType Rte_Read_EngSt1WdSts_EngSt1WdSts(EngSt1WdSts_1 *data)
 *   Std_ReturnType Rte_Read_EscVariantToDmc_EscVariantToDmc(EscVariantToDmc_1 *data)
 *   Std_ReturnType Rte_Read_GearLvrIndcn_GearLvrIndcn(uint8 *data)
 *   Std_ReturnType Rte_Read_HvBattSoc_HvBattSoc(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDc_HvBattUDc(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDynMaxLim_HvBattUDynMaxLim(uint16 *data)
 *   Std_ReturnType Rte_Read_HvBattUDynMinLim_HvBattUDynMinLim(uint16 *data)
 *   Std_ReturnType Rte_Read_HvSysRlySts_HvSysRlySts(HvSysRlySts_1 *data)
 *   Std_ReturnType Rte_Read_ImobEngMgrReq2_ImobEngMgrReq2(ImobEngMgrReq_2 *data)
 *   Std_ReturnType Rte_Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1(uint8 *data)
 *   Std_ReturnType Rte_Read_PLockParkReq_PLockParkReq(uint8 *data)
 *   Std_ReturnType Rte_Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn(uint8 *data)
 *   Std_ReturnType Rte_Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq(PtTqAtAxleReq_1 *data)
 *   Std_ReturnType Rte_Read_RearHeatModEnad_RearHeatModEnad(uint8 *data)
 *   Std_ReturnType Rte_Read_RearHeatPwrAllwd_RearHeatPwrAllwd(uint8 *data)
 *   Std_ReturnType Rte_Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe(uint16 *data)
 *   Std_ReturnType Rte_Read_StcStsToDmc_StcStsToDmc(StcStsToDmc_1 *data)
 *   Std_ReturnType Rte_Read_VehBattU_VehBattU(SysU_4 *data)
 *   Std_ReturnType Rte_Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1(VehModMngtGlbSafe1_2 *data)
 *   Std_ReturnType Rte_Read_VehMtnSt_VehMtnSt(VehMtnStSafe1_2 *data)
 *   Std_ReturnType Rte_Read_VehSpdLgt_VehSpdLgt(VehSpdLgtSafe1_3 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysModReq_WhlMotSysModReq(uint8 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin(uint16 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd(WhlMotSysTqAllwd_3 *data)
 *   Std_ReturnType Rte_Read_WhlMotSysTqReq_WhlMotSysTqReq(uint16 *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_DmcStsRearToEsc_DmcStsRearToEsc(const DmcStsToEsc_1 *data)
 *   Std_ReturnType Rte_Write_IEMTestFr1_IEMTestFr1(const DevDataTyp64_2 *data)
 *   Std_ReturnType Rte_Write_IEMTestFr2_IEMTestFr2(const DevDataTyp64_2 *data)
 *   Std_ReturnType Rte_Write_IEMTestFr3_IEMTestFr3(const DevDataTyp64_2 *data)
 *   Std_ReturnType Rte_Write_IemGeneric_IemGeneric(const ElecDrvGen_4 *data)
 *   Std_ReturnType Rte_Write_ImobEngChk2_ImobEngChk2(const ImobEngChk_2 *data)
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
 *   Std_ReturnType Rte_Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe(const SpdSgnSafe_1 *data)
 *   Std_ReturnType Rte_Write_WhlMotSysTqAvl_WhlMotSysTqAvl(const WhlMotSysTqAvl_2 *data)
 *   Std_ReturnType Rte_Write_WhlMotSysTqEst_WhlMotSysTqEst(const IsgTqActSafe2_4 *data)
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
  CrashStsSafe_1 Read_CrashStsSafe_CrashStsSafe;
  uint8 Read_DCChrgnHndlSts_DCChrgnHndlSts;
  uint8 Read_DrvgCyc_DrvgCyc;
  EngSt1WdSts_1 Read_EngSt1WdSts_EngSt1WdSts;
  EscVariantToDmc_1 Read_EscVariantToDmc_EscVariantToDmc;
  uint8 Read_GearLvrIndcn_GearLvrIndcn;
  uint16 Read_HvBattSoc_HvBattSoc;
  uint16 Read_HvBattUDc_HvBattUDc;
  uint16 Read_HvBattUDynMaxLim_HvBattUDynMaxLim;
  uint16 Read_HvBattUDynMinLim_HvBattUDynMinLim;
  HvSysRlySts_1 Read_HvSysRlySts_HvSysRlySts;
  ImobEngMgrReq_2 Read_ImobEngMgrReq2_ImobEngMgrReq2;
  uint8 Read_OnBdChrgrHndlSts1_OnBdChrgrHndlSts1;
  uint8 Read_PLockParkReq_PLockParkReq;
  uint8 Read_PrpsnFbLimnIndcn_PrpsnFbLimnIndcn;
  PtTqAtAxleReq_1 Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq;
  uint8 Read_RearHeatModEnad_RearHeatModEnad;
  uint8 Read_RearHeatPwrAllwd_RearHeatPwrAllwd;
  uint16 Read_SpdRotlForWhlsAtAxleRe_SpdRotlForWhlsAtAxleRe;
  StcStsToDmc_1 Read_StcStsToDmc_StcStsToDmc;
  SysU_4 Read_VehBattU_VehBattU;
  VehModMngtGlbSafe1_2 Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1;
  VehMtnStSafe1_2 Read_VehMtnSt_VehMtnSt;
  VehSpdLgtSafe1_3 Read_VehSpdLgt_VehSpdLgt;
  uint8 Read_WhlMotSysActvDampgModReq_WhlMotSysActvDampgModReq;
  uint8 Read_WhlMotSysModReq_WhlMotSysModReq;
  uint16 Read_WhlMotSysPwrLimMax_WhlMotSysPwrLimMax;
  uint16 Read_WhlMotSysPwrLimMin_WhlMotSysPwrLimMin;
  WhlMotSysTqAllwd_3 Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd;
  uint16 Read_WhlMotSysTqReq_WhlMotSysTqReq;

  DmcStsToEsc_1 Write_DmcStsRearToEsc_DmcStsRearToEsc;
  DevDataTyp64_2 Write_IEMTestFr1_IEMTestFr1;
  DevDataTyp64_2 Write_IEMTestFr2_IEMTestFr2;
  DevDataTyp64_2 Write_IEMTestFr3_IEMTestFr3;
  ElecDrvGen_4 Write_IemGeneric_IemGeneric;
  ImobEngChk_2 Write_ImobEngChk2_ImobEngChk2;
  uint8 Write_WhlMotSysCooltT_WhlMotSysCooltT;
  uint16 Write_WhlMotSysIdc_WhlMotSysIdc;
  uint8 Write_WhlMotSysInvrT_WhlMotSysInvrT;
  uint8 Write_WhlMotSysMotT_WhlMotSysMotT;
  sint16 Write_WhlMotSysSpdAct_WhlMotSysSpdAct;
  SpdSgnSafe_1 Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe;
  WhlMotSysTqAvl_2 Write_WhlMotSysTqAvl_WhlMotSysTqAvl;
  IsgTqActSafe2_4 Write_WhlMotSysTqEst_WhlMotSysTqEst;

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

  fct_status = TSC_Appl_ComShell_Rte_Read_CrashStsSafe_CrashStsSafe(&Read_CrashStsSafe_CrashStsSafe); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_EngSt1WdSts_EngSt1WdSts(&Read_EngSt1WdSts_EngSt1WdSts); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_EscVariantToDmc_EscVariantToDmc(&Read_EscVariantToDmc_EscVariantToDmc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_HvSysRlySts_HvSysRlySts(&Read_HvSysRlySts_HvSysRlySts); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_ImobEngMgrReq2_ImobEngMgrReq2(&Read_ImobEngMgrReq2_ImobEngMgrReq2); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq(&Read_PtTqAtAxleMaxReq_PtTqAtAxleMaxReq); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_StcStsToDmc_StcStsToDmc(&Read_StcStsToDmc_StcStsToDmc); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_VehBattU_VehBattU(&Read_VehBattU_VehBattU); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1(&Read_VehModMngtGlbSafe1_VehModMngtGlbSafe1); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_VehMtnSt_VehMtnSt(&Read_VehMtnSt_VehMtnSt); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_VehSpdLgt_VehSpdLgt(&Read_VehSpdLgt_VehSpdLgt); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  fct_status = TSC_Appl_ComShell_Rte_Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd(&Read_WhlMotSysTqAllwd_WhlMotSysTqAllwd); /* PRQA S 3226, 0315 */ /* MD_Rte_3226, MD_Rte_0315 */
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

  (void)memset(&Write_DmcStsRearToEsc_DmcStsRearToEsc, 0, sizeof(Write_DmcStsRearToEsc_DmcStsRearToEsc)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_DmcStsRearToEsc_DmcStsRearToEsc(&Write_DmcStsRearToEsc_DmcStsRearToEsc); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_IEMTestFr1_IEMTestFr1, 0, sizeof(Write_IEMTestFr1_IEMTestFr1)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_IEMTestFr1_IEMTestFr1(&Write_IEMTestFr1_IEMTestFr1); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_IEMTestFr2_IEMTestFr2, 0, sizeof(Write_IEMTestFr2_IEMTestFr2)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_IEMTestFr2_IEMTestFr2(&Write_IEMTestFr2_IEMTestFr2); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_IEMTestFr3_IEMTestFr3, 0, sizeof(Write_IEMTestFr3_IEMTestFr3)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_IEMTestFr3_IEMTestFr3(&Write_IEMTestFr3_IEMTestFr3); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_IemGeneric_IemGeneric, 0, sizeof(Write_IemGeneric_IemGeneric)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_IemGeneric_IemGeneric(&Write_IemGeneric_IemGeneric); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_ImobEngChk2_ImobEngChk2, 0, sizeof(Write_ImobEngChk2_ImobEngChk2)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_ImobEngChk2_ImobEngChk2(&Write_ImobEngChk2_ImobEngChk2); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
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

  (void)memset(&Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe, 0, sizeof(Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe(&Write_WhlMotSysSpdActSafe_WhlMotSysSpdActSafe); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysTqAvl_WhlMotSysTqAvl, 0, sizeof(Write_WhlMotSysTqAvl_WhlMotSysTqAvl)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysTqAvl_WhlMotSysTqAvl(&Write_WhlMotSysTqAvl_WhlMotSysTqAvl); /* PRQA S 3226 */ /* MD_Rte_3226 */
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = FALSE;
      break;
  }

  (void)memset(&Write_WhlMotSysTqEst_WhlMotSysTqEst, 0, sizeof(Write_WhlMotSysTqEst_WhlMotSysTqEst)); /* PRQA S 0315 */ /* MD_Rte_0315 */
  fct_status = TSC_Appl_ComShell_Rte_Write_WhlMotSysTqEst_WhlMotSysTqEst(&Write_WhlMotSysTqEst_WhlMotSysTqEst); /* PRQA S 3226 */ /* MD_Rte_3226 */
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
  sint16 Test_sint16_LL_2 = Tq2_2_LowerLimit;
  sint16 Test_sint16_UL_2 = Tq2_2_UpperLimit;
  sint16 Test_sint16_LL_3 = Tq35_1_LowerLimit;
  sint16 Test_sint16_UL_3 = Tq35_1_UpperLimit;

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
  uint16 Test_uint16_LL_11 = Spd1_2_LowerLimit;
  uint16 Test_uint16_UL_11 = Spd1_2_UpperLimit;
  uint16 Test_uint16_LL_12 = Tq34_1_LowerLimit;
  uint16 Test_uint16_UL_12 = Tq34_1_UpperLimit;
  uint16 Test_uint16_LL_13 = UInt16_2_LowerLimit;
  uint16 Test_uint16_UL_13 = UInt16_2_UpperLimit;

  uint32 Test_uint32_LL_1 = CarTiGlb_2_LowerLimit;
  uint32 Test_uint32_UL_1 = CarTiGlb_2_UpperLimit;
  uint32 Test_uint32_LL_2 = Len31_2_LowerLimit;
  uint32 Test_uint32_UL_2 = Len31_2_UpperLimit;

  /* Enumeration Data Types */

  uint8 Test_uint8_LL_1 = AlrmSt_2_LowerLimit;
  uint8 Test_uint8_UL_1 = AlrmSt_2_UpperLimit;
  uint8 Test_uint8_LL_2 = AvlSts2_2_LowerLimit;
  uint8 Test_uint8_UL_2 = AvlSts2_2_UpperLimit;
  uint8 Test_uint8_LL_3 = CarModSts1_2_LowerLimit;
  uint8 Test_uint8_UL_3 = CarModSts1_2_UpperLimit;
  uint8 Test_uint8_LL_4 = CrashSts2_2_LowerLimit;
  uint8 Test_uint8_UL_4 = CrashSts2_2_UpperLimit;
  uint8 Test_uint8_LL_5 = DMC_1_LowerLimit;
  uint8 Test_uint8_UL_5 = DMC_1_UpperLimit;
  uint8 Test_uint8_LL_6 = EngSt1_2_LowerLimit;
  uint8 Test_uint8_UL_6 = EngSt1_2_UpperLimit;
  uint8 Test_uint8_LL_7 = FltEgyCns1_2_LowerLimit;
  uint8 Test_uint8_UL_7 = FltEgyCns1_2_UpperLimit;
  uint8 Test_uint8_LL_8 = FltIndcn_1_LowerLimit;
  uint8 Test_uint8_UL_8 = FltIndcn_1_UpperLimit;
  uint8 Test_uint8_LL_9 = FltLvl_1_LowerLimit;
  uint8 Test_uint8_UL_9 = FltLvl_1_UpperLimit;
  uint8 Test_uint8_LL_10 = FrntHeatModEnad_1_LowerLimit;
  uint8 Test_uint8_UL_10 = FrntHeatModEnad_1_UpperLimit;
  uint8 Test_uint8_LL_11 = GearLvrIndcn2_2_LowerLimit;
  uint8 Test_uint8_UL_11 = GearLvrIndcn2_2_UpperLimit;
  uint8 Test_uint8_LL_12 = GenQf1_2_LowerLimit;
  uint8 Test_uint8_UL_12 = GenQf1_2_UpperLimit;
  uint8 Test_uint8_LL_13 = HvActvnSts_2_LowerLimit;
  uint8 Test_uint8_UL_13 = HvActvnSts_2_UpperLimit;
  uint8 Test_uint8_LL_14 = HvCoolg1_2_LowerLimit;
  uint8 Test_uint8_UL_14 = HvCoolg1_2_UpperLimit;
  uint8 Test_uint8_LL_15 = HvT1_3_LowerLimit;
  uint8 Test_uint8_UL_15 = HvT1_3_UpperLimit;
  uint8 Test_uint8_LL_16 = ImobEngMgrReqCmd_2_LowerLimit;
  uint8 Test_uint8_UL_16 = ImobEngMgrReqCmd_2_UpperLimit;
  uint8 Test_uint8_LL_17 = ImobSts_2_LowerLimit;
  uint8 Test_uint8_UL_17 = ImobSts_2_UpperLimit;
  uint8 Test_uint8_LL_18 = IsgHeatPwr_1_LowerLimit;
  uint8 Test_uint8_UL_18 = IsgHeatPwr_1_UpperLimit;
  uint8 Test_uint8_LL_19 = ModStatusRms_2_LowerLimit;
  uint8 Test_uint8_UL_19 = ModStatusRms_2_UpperLimit;
  uint8 Test_uint8_LL_20 = ModeDMC_1_LowerLimit;
  uint8 Test_uint8_UL_20 = ModeDMC_1_UpperLimit;
  uint8 Test_uint8_LL_21 = Nr5_2_LowerLimit;
  uint8 Test_uint8_UL_21 = Nr5_2_UpperLimit;
  uint8 Test_uint8_LL_22 = OnBdChrgrHndlSts1_2_LowerLimit;
  uint8 Test_uint8_UL_22 = OnBdChrgrHndlSts1_2_UpperLimit;
  uint8 Test_uint8_LL_23 = OnBdChrgrHndlSts_2_LowerLimit;
  uint8 Test_uint8_UL_23 = OnBdChrgrHndlSts_2_UpperLimit;
  uint8 Test_uint8_LL_24 = OnOff1_2_LowerLimit;
  uint8 Test_uint8_UL_24 = OnOff1_2_UpperLimit;
  uint8 Test_uint8_LL_25 = PLockParkRequest_1_LowerLimit;
  uint8 Test_uint8_UL_25 = PLockParkRequest_1_UpperLimit;
  uint8 Test_uint8_LL_26 = ParkSts_1_LowerLimit;
  uint8 Test_uint8_UL_26 = ParkSts_1_UpperLimit;
  uint8 Test_uint8_LL_27 = QualityFactor_2_LowerLimit;
  uint8 Test_uint8_UL_27 = QualityFactor_2_UpperLimit;
  uint8 Test_uint8_LL_28 = T3_2_LowerLimit;
  uint8 Test_uint8_UL_28 = T3_2_UpperLimit;
  uint8 Test_uint8_LL_29 = U1_2_LowerLimit;
  uint8 Test_uint8_UL_29 = U1_2_UpperLimit;
  uint8 Test_uint8_LL_30 = UInt2_2_LowerLimit;
  uint8 Test_uint8_UL_30 = UInt2_2_UpperLimit;
  uint8 Test_uint8_LL_31 = UInt4_2_LowerLimit;
  uint8 Test_uint8_UL_31 = UInt4_2_UpperLimit;
  uint8 Test_uint8_LL_32 = UInt8_2_LowerLimit;
  uint8 Test_uint8_UL_32 = UInt8_2_UpperLimit;
  uint8 Test_uint8_LL_33 = UsgModSts1_2_LowerLimit;
  uint8 Test_uint8_UL_33 = UsgModSts1_2_UpperLimit;
  uint8 Test_uint8_LL_34 = VehMtnSt2_2_LowerLimit;
  uint8 Test_uint8_UL_34 = VehMtnSt2_2_UpperLimit;
  uint8 Test_uint8_LL_35 = WhlMotSysActvDampgModCodSts_2_LowerLimit;
  uint8 Test_uint8_UL_35 = WhlMotSysActvDampgModCodSts_2_UpperLimit;
  uint8 Test_uint8_LL_36 = WhlMotSysHeatFdBck_1_LowerLimit;
  uint8 Test_uint8_UL_36 = WhlMotSysHeatFdBck_1_UpperLimit;
  uint8 Test_uint8_LL_37 = WhlMotSysModStsTyp1_2_LowerLimit;
  uint8 Test_uint8_UL_37 = WhlMotSysModStsTyp1_2_UpperLimit;
  uint8 Test_uint8_LL_38 = WhlMotSysModStsTyp2_2_LowerLimit;
  uint8 Test_uint8_UL_38 = WhlMotSysModStsTyp2_2_UpperLimit;
  uint8 Test_uint8_V_1 = AlrmSt_Disarmd;
  uint8 Test_uint8_V_2 = AvlSts2_NotAvl;
  uint8 Test_uint8_V_3 = CarModSts1_CarModNorm;
  uint8 Test_uint8_V_4 = CrashSts2_NoCrash;
  uint8 Test_uint8_V_5 = DMC_Init;
  uint8 Test_uint8_V_6 = EngSt1_Ini;
  uint8 Test_uint8_V_7 = FltEgyCns1_NoFlt;
  uint8 Test_uint8_V_8 = FltIndcn_NoFlt;
  uint8 Test_uint8_V_9 = FltLvl_NoFlt;
  uint8 Test_uint8_V_10 = FrntHeatModEnad_Heatg;
  uint8 Test_uint8_V_11 = GearLvrIndcn2_ParkIndcn;
  uint8 Test_uint8_V_12 = GenQf1_UndefindDataAccur;
  uint8 Test_uint8_V_13 = HvActvnSts_Open;
  uint8 Test_uint8_V_14 = HvCoolg1_NoRequestForMoreCoolantPower;
  uint8 Test_uint8_V_15 = ImobEngMgrReqCmd_ImobEngCmdTarIdle;
  uint8 Test_uint8_V_16 = ImobSts_ImobUndefd;
  uint8 Test_uint8_V_17 = ModStatusRms_Invalid;
  uint8 Test_uint8_V_18 = ModeDMC_Off;
  uint8 Test_uint8_V_19 = OnBdChrgrHndlSts1_Disconnected;
  uint8 Test_uint8_V_20 = OnBdChrgrHndlSts_Disconnected;
  uint8 Test_uint8_V_21 = OnOff1_Off;
  uint8 Test_uint8_V_22 = PLockParkRequest_NoReq;
  uint8 Test_uint8_V_23 = ParkSts_Init;
  uint8 Test_uint8_V_24 = QualityFactor_QfUndefd;
  uint8 Test_uint8_V_25 = UsgModSts1_UsgModAbdnd;
  uint8 Test_uint8_V_26 = VehMtnSt2_Ukwn;
  uint8 Test_uint8_V_27 = WhlMotSysActvDampgModCodSts_NoDampg;
  uint8 Test_uint8_V_28 = WhlMotSysHeatFdBck_On;
  uint8 Test_uint8_V_29 = WhlMotSysModStsTyp1_Inin;
  uint8 Test_uint8_V_30 = WhlMotSysModStsTyp2_Inin;
  uint8 Test_uint8_V_31 = AlrmSt_Armd;
  uint8 Test_uint8_V_32 = AvlSts2_Avl;
  uint8 Test_uint8_V_33 = CarModSts1_CarModTrnsp;
  uint8 Test_uint8_V_34 = CrashSts2_Crash;
  uint8 Test_uint8_V_35 = DMC_On;
  uint8 Test_uint8_V_36 = EngSt1_Awake;
  uint8 Test_uint8_V_37 = FltEgyCns1_Flt;
  uint8 Test_uint8_V_38 = FltIndcn_ComFlt;
  uint8 Test_uint8_V_39 = FltLvl_FltLvl1;
  uint8 Test_uint8_V_40 = FrntHeatModEnad_PwrLoss;
  uint8 Test_uint8_V_41 = GearLvrIndcn2_RvsIndcn;
  uint8 Test_uint8_V_42 = GenQf1_TmpUndefdData;
  uint8 Test_uint8_V_43 = HvActvnSts_Clsd;
  uint8 Test_uint8_V_44 = HvCoolg1_IncreaseLevel1ForMoreCoolantPower;
  uint8 Test_uint8_V_45 = ImobEngMgrReqCmd_ImobEngMtnStrtReqCmd;
  uint8 Test_uint8_V_46 = ImobSts_ImobImobn;
  uint8 Test_uint8_V_47 = ModeDMC_Rpm;
  uint8 Test_uint8_V_48 = OnBdChrgrHndlSts1_ConnectedWithoutPower;
  uint8 Test_uint8_V_49 = OnBdChrgrHndlSts_ConnectedWithoutPower;
  uint8 Test_uint8_V_50 = OnOff1_On;
  uint8 Test_uint8_V_51 = PLockParkRequest_ReqApply;
  uint8 Test_uint8_V_52 = PModStatusRms_wrCns;
  uint8 Test_uint8_V_53 = ParkSts_Parked;
  uint8 Test_uint8_V_54 = QualityFactor_QfInProgs;
  uint8 Test_uint8_V_55 = UsgModSts1_UsgModInActv;
  uint8 Test_uint8_V_56 = VehMtnSt2_StandStillVal1;
  uint8 Test_uint8_V_57 = WhlMotSysActvDampgModCodSts_LoDampg;
  uint8 Test_uint8_V_58 = WhlMotSysHeatFdBck_Off;
  uint8 Test_uint8_V_59 = WhlMotSysModStsTyp1_Stb;
  uint8 Test_uint8_V_60 = WhlMotSysModStsTyp2_Stb;
  uint8 Test_uint8_V_61 = AlrmSt_Actv;
  uint8 Test_uint8_V_62 = CarModSts1_CarModFcy;
  uint8 Test_uint8_V_63 = DMC_Off;
  uint8 Test_uint8_V_64 = EngSt1_Rdy;
  uint8 Test_uint8_V_65 = FltIndcn_ActrFlt;
  uint8 Test_uint8_V_66 = FltLvl_FltLvl2;
  uint8 Test_uint8_V_67 = FrntHeatModEnad_Off;
  uint8 Test_uint8_V_68 = GearLvrIndcn2_NeutIndcn;
  uint8 Test_uint8_V_69 = GenQf1_DataAccurNotWithinSpcn;
  uint8 Test_uint8_V_70 = HvActvnSts_KeepSt;
  uint8 Test_uint8_V_71 = HvCoolg1_IncreaseLevel2ForMoreCoolantPower;
  uint8 Test_uint8_V_72 = ImobEngMgrReqCmd_ImobEngNoMtnStrtReqCmd;
  uint8 Test_uint8_V_73 = ImobSts_ImobMtn;
  uint8 Test_uint8_V_74 = ModStatusRms_PwrGen;
  uint8 Test_uint8_V_75 = ModeDMC_Trq;
  uint8 Test_uint8_V_76 = OnBdChrgrHndlSts1_PowerAvailableButNotActivated;
  uint8 Test_uint8_V_77 = OnBdChrgrHndlSts_PowerAvailableButNotActivated;
  uint8 Test_uint8_V_78 = PLockParkRequest_ReqRels;
  uint8 Test_uint8_V_79 = ParkSts_Parking;
  uint8 Test_uint8_V_80 = QualityFactor_QfNotSpc;
  uint8 Test_uint8_V_81 = UsgModSts1_UsgModCnvinc;
  uint8 Test_uint8_V_82 = VehMtnSt2_StandStillVal2;
  uint8 Test_uint8_V_83 = WhlMotSysActvDampgModCodSts_MedDampg;
  uint8 Test_uint8_V_84 = WhlMotSysHeatFdBck_Inhibt;
  uint8 Test_uint8_V_85 = WhlMotSysModStsTyp1_TqCtrl;
  uint8 Test_uint8_V_86 = WhlMotSysModStsTyp2_TqCtrl;
  uint8 Test_uint8_V_87 = CarModSts1_CarModCrash;
  uint8 Test_uint8_V_88 = DMC_Fault;
  uint8 Test_uint8_V_89 = EngSt1_PreStrtg;
  uint8 Test_uint8_V_90 = FltIndcn_SnsrFlt;
  uint8 Test_uint8_V_91 = FrntHeatModEnad_Reserved;
  uint8 Test_uint8_V_92 = GearLvrIndcn2_DrvIndcn;
  uint8 Test_uint8_V_93 = GenQf1_AccurData;
  uint8 Test_uint8_V_94 = HvActvnSts_OpenAndReqActvDcha;
  uint8 Test_uint8_V_95 = HvCoolg1_MaxCoolingPower;
  uint8 Test_uint8_V_96 = ImobEngMgrReqCmd_ImobEngTurnOffCmd;
  uint8 Test_uint8_V_97 = ImobSts_ImobNoMtn;
  uint8 Test_uint8_V_98 = ModStatusRms_OffSts;
  uint8 Test_uint8_V_99 = OnBdChrgrHndlSts1_ConnectedWithPower;
  uint8 Test_uint8_V_100 = OnBdChrgrHndlSts_ConnectedWithPower;
  uint8 Test_uint8_V_101 = PLockParkRequest_Reserved;
  uint8 Test_uint8_V_102 = ParkSts_StuckInParked;
  uint8 Test_uint8_V_103 = QualityFactor_QfSnsrDataOk;
  uint8 Test_uint8_V_104 = UsgModSts1_UsgModActv;
  uint8 Test_uint8_V_105 = VehMtnSt2_StandStillVal3;
  uint8 Test_uint8_V_106 = WhlMotSysActvDampgModCodSts_HiDampg;
  uint8 Test_uint8_V_107 = WhlMotSysHeatFdBck_Reserved;
  uint8 Test_uint8_V_108 = WhlMotSysModStsTyp1_SpdCtrlIdle;
  uint8 Test_uint8_V_109 = WhlMotSysModStsTyp2_SpdCtrlIdle;
  uint8 Test_uint8_V_110 = CarModSts1_CarModDyno;
  uint8 Test_uint8_V_111 = EngSt1_StrtgInProgs;
  uint8 Test_uint8_V_112 = FltIndcn_RdmFlt;
  uint8 Test_uint8_V_113 = GearLvrIndcn2_ManModeIndcn;
  uint8 Test_uint8_V_114 = HvCoolg1_NotDefined;
  uint8 Test_uint8_V_115 = ModStatusRms_RdySts;
  uint8 Test_uint8_V_116 = OnBdChrgrHndlSts1_DischargeConnectwithoutpowerincar;
  uint8 Test_uint8_V_117 = OnBdChrgrHndlSts_Init;
  uint8 Test_uint8_V_118 = ParkSts_StuckInUnparked;
  uint8 Test_uint8_V_119 = UsgModSts1_UsgModDrvg;
  uint8 Test_uint8_V_120 = VehMtnSt2_RollgFwdVal1;
  uint8 Test_uint8_V_121 = WhlMotSysModStsTyp1_CluOper;
  uint8 Test_uint8_V_122 = WhlMotSysModStsTyp2_CluOper;
  uint8 Test_uint8_V_123 = EngSt1_RunngRunng;
  uint8 Test_uint8_V_124 = GearLvrIndcn2_Resd1;
  uint8 Test_uint8_V_125 = ModStatusRms_Abnormal;
  uint8 Test_uint8_V_126 = OnBdChrgrHndlSts1_DischargeConnectwithoutpoweroutcar;
  uint8 Test_uint8_V_127 = OnBdChrgrHndlSts_Fault;
  uint8 Test_uint8_V_128 = ParkSts_Unparking;
  uint8 Test_uint8_V_129 = VehMtnSt2_RollgFwdVal2;
  uint8 Test_uint8_V_130 = WhlMotSysModStsTyp1_PreChrg;
  uint8 Test_uint8_V_131 = WhlMotSysModStsTyp2_PreChrg;
  uint8 Test_uint8_V_132 = EngSt1_RunngStb;
  uint8 Test_uint8_V_133 = GearLvrIndcn2_Resd2;
  uint8 Test_uint8_V_134 = ModStatusRms_Invalid1;
  uint8 Test_uint8_V_135 = OnBdChrgrHndlSts1_DischargeConnectwithpowerincar;
  uint8 Test_uint8_V_136 = ParkSts_Unparked;
  uint8 Test_uint8_V_137 = VehMtnSt2_RollgBackwVal1;
  uint8 Test_uint8_V_138 = WhlMotSysModStsTyp1_PwrDwn;
  uint8 Test_uint8_V_139 = WhlMotSysModStsTyp2_PwrDwn;
  uint8 Test_uint8_V_140 = EngSt1_RunngStrtgInProgs;
  uint8 Test_uint8_V_141 = GearLvrIndcn2_Undefd;
  uint8 Test_uint8_V_142 = ModStatusRms_Invalid2;
  uint8 Test_uint8_V_143 = OnBdChrgrHndlSts1_DischargeConnectwithpoweroutcar;
  uint8 Test_uint8_V_144 = ParkSts_Unknown;
  uint8 Test_uint8_V_145 = VehMtnSt2_RollgBackwVal2;
  uint8 Test_uint8_V_146 = WhlMotSysModStsTyp1_Flt;
  uint8 Test_uint8_V_147 = WhlMotSysModStsTyp2_Flt;
  uint8 Test_uint8_V_148 = EngSt1_RunngRemStrtd;
  uint8 Test_uint8_V_149 = ModStatusRms_Invalid3;
  uint8 Test_uint8_V_150 = OnBdChrgrHndlSts1_Init;
  uint8 Test_uint8_V_151 = ParkSts_Off;
  uint8 Test_uint8_V_152 = WhlMotSysModStsTyp2_TcsCtrl;
  uint8 Test_uint8_V_153 = EngSt1_AftRun;
  uint8 Test_uint8_V_154 = ModStatusRms_Invalid4;
  uint8 Test_uint8_V_155 = OnBdChrgrHndlSts1_Fault;
  uint8 Test_uint8_V_156 = ModStatusRms_Invalid5;
  uint8 Test_uint8_V_157 = OnBdChrgrHndlSts1_NotCompleteConnnected;
  uint8 Test_uint8_V_158 = ModStatusRms_Invalid6;
  uint8 Test_uint8_V_159 = OnBdChrgrHndlSts1_Reserved0;
  uint8 Test_uint8_V_160 = ModStatusRms_Invalid7;
  uint8 Test_uint8_V_161 = OnBdChrgrHndlSts1_Reserved1;
  uint8 Test_uint8_V_162 = ModStatusRms_Invalid8;
  uint8 Test_uint8_V_163 = OnBdChrgrHndlSts1_Reserved2;
  uint8 Test_uint8_V_164 = ModStatusRms_Invalid9;
  uint8 Test_uint8_V_165 = ModStatusRms_Invalid10;
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
