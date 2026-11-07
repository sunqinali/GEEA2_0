/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  CanIf.c
 *           Config:  IEM_TC387_BRS.dpa
 *       BSW Module:  CanIf
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  C-Code implementation template for BSW Module <CanIf>
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

#include "SchM_CanIf.h"
#include "TSC_SchM_CanIf.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"


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
 * ComM_InhibitionStatusType: Integer in interval [0...255]
 * ComM_UserHandleType: Integer in interval [0...65535]
 * CounterType: Integer in interval [0...255]
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * EcuM_TimeType: Integer in interval [0...4294967295]
 * NetworkHandleType: Integer in interval [0...255]
 * TimeInMicrosecondsType: Integer in interval [0...4294967295]
 * boolean: Boolean (standard type)
 * sint16: Integer in interval [-32768...32767] (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 *
 * Enumeration Types:
 * ==================
 * ComM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_CommunicationModeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_ConfirmationStatusType: Enumeration of integer in interval [0...3] with enumerators
 * Dcm_DiagnosticSessionControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_EcuResetType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_NegativeResponseCodeType: Enumeration of integer in interval [0...255] with enumerators
 * Dcm_OpStatusType: Enumeration of integer in interval [0...64] with enumerators
 * Dcm_ProtocolType: Enumeration of integer in interval [0...254] with enumerators
 * Dcm_RequestKindType: Enumeration of integer in interval [0...2] with enumerators
 * Dcm_SecLevelType: Enumeration of integer in interval [0...9] with enumerators
 * Dcm_SesCtrlType: Enumeration of integer in interval [0...3] with enumerators
 * Dem_DTCFormatType: Enumeration of integer in interval [0...2] with enumerators
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTCOriginType: Enumeration of integer in interval [1...511] with enumerators
 * Dem_DTCSeverityType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DTRControlType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...7] with enumerators
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [1...4] with enumerators
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_IumprReadinessGroupType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_MonitorStatusType: Enumeration of integer in interval [0...255] with enumerators
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...1] with enumerators
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 * EcuM_BootTargetType: Enumeration of integer in interval [0...2] with enumerators
 * EcuM_ModeType: Enumeration of integer in interval [0...3] with enumerators
 * EcuM_ShutdownCauseType: Enumeration of integer in interval [0...3] with enumerators
 * EcuM_StateType: Enumeration of integer in interval [0...144] with enumerators
 * EcuM_UserType: Enumeration of integer in interval [0...255] with enumerators
 * uint8: Enumeration of integer in interval [0...255] with enumerators
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * DataArrayType_uint8_4: Array with 4 element(s) of type uint8
 * Dcm_Data10ByteType: Array with 10 element(s) of type uint8
 * Dcm_Data1ByteType: Array with 1 element(s) of type uint8
 * Dcm_Data22ByteType: Array with 22 element(s) of type uint8
 * Dcm_Data24ByteType: Array with 24 element(s) of type uint8
 * Dcm_Data2ByteType: Array with 2 element(s) of type uint8
 * Dcm_Data32ByteType: Array with 32 element(s) of type uint8
 * Dcm_Data3ByteType: Array with 3 element(s) of type uint8
 * Dcm_Data40ByteType: Array with 40 element(s) of type uint8
 * Dcm_Data4ByteType: Array with 4 element(s) of type uint8
 * Dcm_Data5ByteType: Array with 5 element(s) of type uint8
 * Dcm_Data7ByteType: Array with 7 element(s) of type uint8
 * Dcm_Data8ByteType: Array with 8 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 8 element(s) of type uint8
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


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/


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
   MD_Rte_TestCode:
     Reason:     This justification is used as summary justification for all deviations caused by wrong analysis tool results.
                 The used analysis tool QAC 9.0 sometimes creates wrong messages. Those deviations are no issues in the RTE code.
     Risk:       No functional risk.
     Prevention: Not required.

*/
