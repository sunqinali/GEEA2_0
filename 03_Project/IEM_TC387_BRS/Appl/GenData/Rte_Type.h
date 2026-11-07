/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *             File:  Rte_Type.h
 *           Config:  IEM_TC387_BRS.dpa
 *      ECU-Project:  IEM_TC387_BRS
 *
 *        Generator:  MICROSAR RTE Generator Version 4.23.0
 *                    RTE Core Version 1.23.0
 *          License:  CBD2000642
 *
 *      Description:  Header file containing user defined AUTOSAR types and RTE structures
 *********************************************************************************************************************/

/* double include prevention */
#ifndef RTE_TYPE_H
# define RTE_TYPE_H

# include "Rte.h"

/* PRQA S 1039 EOF */ /* MD_Rte_1039 */

/**********************************************************************************************************************
 * Data type definitions
 *********************************************************************************************************************/

# define Rte_TypeDef_DataArrayType_uint8_1
typedef uint8 DataArrayType_uint8_1[1];

# define Rte_TypeDef_DataArrayType_uint8_2
typedef uint8 DataArrayType_uint8_2[2];

# define Rte_TypeDef_DataArrayType_uint8_3
typedef uint8 DataArrayType_uint8_3[3];

# define Rte_TypeDef_DataArrayType_uint8_4
typedef uint8 DataArrayType_uint8_4[4];

# define Rte_TypeDef_Dcm_Data10ByteType
typedef uint8 Dcm_Data10ByteType[10];

# define Rte_TypeDef_Dcm_Data1ByteType
typedef uint8 Dcm_Data1ByteType[1];

# define Rte_TypeDef_Dcm_Data22ByteType
typedef uint8 Dcm_Data22ByteType[22];

# define Rte_TypeDef_Dcm_Data24ByteType
typedef uint8 Dcm_Data24ByteType[24];

# define Rte_TypeDef_Dcm_Data2ByteType
typedef uint8 Dcm_Data2ByteType[2];

# define Rte_TypeDef_Dcm_Data32ByteType
typedef uint8 Dcm_Data32ByteType[32];

# define Rte_TypeDef_Dcm_Data3ByteType
typedef uint8 Dcm_Data3ByteType[3];

# define Rte_TypeDef_Dcm_Data40ByteType
typedef uint8 Dcm_Data40ByteType[40];

# define Rte_TypeDef_Dcm_Data4ByteType
typedef uint8 Dcm_Data4ByteType[4];

# define Rte_TypeDef_Dcm_Data5ByteType
typedef uint8 Dcm_Data5ByteType[5];

# define Rte_TypeDef_Dcm_Data7ByteType
typedef uint8 Dcm_Data7ByteType[7];

# define Rte_TypeDef_Dcm_Data8ByteType
typedef uint8 Dcm_Data8ByteType[8];

# define Rte_TypeDef_Dem_MaxDataValueType
typedef uint8 Dem_MaxDataValueType[8];

# define Rte_TypeDef_CrashStsSafe_1
typedef struct
{
  uint8 Sts;
  uint8 Chks;
  uint8 Cntr;
} CrashStsSafe_1;

# define Rte_TypeDef_DevDataTyp64_2
typedef struct
{
  uint8 Byte0;
  uint8 Byte1;
  uint8 Byte2;
  uint8 Byte3;
  uint8 Byte4;
  uint8 Byte5;
  uint8 Byte6;
  uint8 Byte7;
} DevDataTyp64_2;

# define Rte_TypeDef_DmcStsToEsc_1
typedef struct
{
  uint8 DmcSts;
  sint16 DmcActAppTarTq;
  uint8 Cntr;
  uint8 Chks;
  uint16 DmcSWInfo;
} DmcStsToEsc_1;

# define Rte_TypeDef_ElecDrvGen_4
typedef struct
{
  uint8 EMQnty;
  uint8 EMSeqNr;
  uint8 DTCSts;
  uint8 DTCLow;
  uint8 DTCMid;
  uint8 DTCHig;
  uint8 TypeInfo;
  uint8 MotTAlrmSt;
  uint8 InvrtTAlrmSt;
  uint8 FltAlrmSt;
  uint8 SpdAlrmSt;
  uint8 IacAlrmSt;
  uint8 UDcAlrmSt;
  uint8 RslAlrmSt;
  uint8 ADAlrmSt;
  uint8 ModStatusRms;
} ElecDrvGen_4;

# define Rte_TypeDef_EngSt1WdSts_1
typedef struct
{
  uint8 EngSt1WdSts;
  uint8 Chks;
  uint8 Cntr;
} EngSt1WdSts_1;

# define Rte_TypeDef_EscVariantToDmc_1
typedef struct
{
  uint8 EscVariantToDmc;
  uint8 Chks;
  uint8 Cntr;
} EscVariantToDmc_1;

# define Rte_TypeDef_HvSysRlySts_1
typedef struct
{
  uint8 HvSysRlySts;
  uint8 Cntr;
  uint8 Chks;
} HvSysRlySts_1;

# define Rte_TypeDef_ImobEngChk_2
typedef struct
{
  uint8 ImobEngChkSts;
  uint8 ImobEngDataChk0;
  uint8 ImobEngDataChk1;
  uint8 ImobEngDataChk2;
  uint8 ImobEngDataChk3;
  uint8 ImobEngDataChk4;
  uint8 ImobEngDataChk5;
  uint8 ImobEngDataChk6;
} ImobEngChk_2;

# define Rte_TypeDef_ImobEngMgrReq_2
typedef struct
{
  uint8 ImobEngMgrCmdTar1;
  uint8 ImobEngDataMgrReq0;
  uint8 ImobEngDataMgrReq1;
  uint8 ImobEngDataMgrReq2;
  uint8 ImobEngDataMgrReq3;
  uint8 ImobEngDataMgrReq4;
  uint8 ImobEngDataMgrReq5;
  uint8 ImobEngDataMgrReq6;
} ImobEngMgrReq_2;

# define Rte_TypeDef_IsgTqActSafe2_4
typedef struct
{
  uint8 Cntr;
  uint8 Chks;
  uint8 QualityFactor;
  uint16 IsgTqAct;
} IsgTqActSafe2_4;

# define Rte_TypeDef_PtTqAtAxleReq_1
typedef struct
{
  sint16 PtTqAtAxleFrntReq;
  sint16 PtTqAtAxleReReq;
  uint8 Chks;
  uint8 Cntr;
} PtTqAtAxleReq_1;

# define Rte_TypeDef_SpdSgnSafe_1
typedef struct
{
  sint16 IsgSpdWSgnTyp;
  uint8 Chks;
  uint8 Cntr;
  uint8 Qf;
} SpdSgnSafe_1;

# define Rte_TypeDef_StcStsToDmc_1
typedef struct
{
  uint8 StcStsToDmcFrnt;
  uint8 StcStsToDmcRear;
  uint16 EngRotTarSpdDMCFrnt;
  uint16 EngRotTarSpdDMCRear;
  uint8 Chks;
  uint8 Cntr;
} StcStsToDmc_1;

# define Rte_TypeDef_SysU_4
typedef struct
{
  uint8 SysU;
  uint8 SysUQf;
} SysU_4;

# define Rte_TypeDef_VehModMngtGlbSafe1_2
typedef struct
{
  uint8 UsgModSts;
  uint8 CarModSts1;
  uint8 CarModSubtypWdCarModSubtyp;
  uint8 EgyLvlElecMai;
  uint8 EgyLvlElecSubtyp;
  uint8 PwrLvlElecMai;
  uint8 PwrLvlElecSubtyp;
  uint8 FltEgyCnsWdSts;
  uint8 Chks;
  uint8 Cntr;
} VehModMngtGlbSafe1_2;

# define Rte_TypeDef_VehMtnStSafe1_2
typedef struct
{
  uint8 VehMtnSt;
  uint8 VehMtnStChks;
  uint8 VehMtnStCntr;
} VehMtnStSafe1_2;

# define Rte_TypeDef_VehSpdLgtSafe1_3
typedef struct
{
  uint16 VehSpdLgtA;
  uint8 VehSpdLgtQf;
  uint8 VehSpdLgtCntr;
  uint8 VehSpdLgtChks;
} VehSpdLgtSafe1_3;

# define Rte_TypeDef_WhlMotSysTqAllwd_3
typedef struct
{
  uint8 WhlMotSysTqAllwd;
  uint8 Chks;
  uint8 Cntr;
} WhlMotSysTqAllwd_3;

# define Rte_TypeDef_WhlMotSysTqAvl_2
typedef struct
{
  uint16 TqAvlMax;
  uint16 TqAvlMin;
} WhlMotSysTqAvl_2;

# define Rte_TypeDef_ComM_InhibitionStatusType
typedef uint8 ComM_InhibitionStatusType;

# define Rte_TypeDef_ComM_UserHandleType
typedef uint16 ComM_UserHandleType;

# define Rte_TypeDef_Dem_DTCGroupType
typedef uint32 Dem_DTCGroupType;

# define Rte_TypeDef_Dem_DTCStatusMaskType
typedef uint8 Dem_DTCStatusMaskType;

# define Rte_TypeDef_Dem_EventIdType
typedef uint16 Dem_EventIdType;

# define Rte_TypeDef_Dem_RatioIdType
typedef uint16 Dem_RatioIdType;

# define Rte_TypeDef_EcuM_TimeType
typedef uint32 EcuM_TimeType;

# define Rte_TypeDef_TimeInMicrosecondsType
typedef uint32 TimeInMicrosecondsType;

# define Rte_TypeDef_ComM_ModeType
typedef uint8 ComM_ModeType;

# define Rte_TypeDef_Dcm_CommunicationModeType
typedef uint8 Dcm_CommunicationModeType;

# define Rte_TypeDef_Dcm_ConfirmationStatusType
typedef uint8 Dcm_ConfirmationStatusType;

# define Rte_TypeDef_Dcm_DiagnosticSessionControlType
typedef uint8 Dcm_DiagnosticSessionControlType;

# define Rte_TypeDef_Dcm_EcuResetType
typedef uint8 Dcm_EcuResetType;

# define Rte_TypeDef_Dcm_NegativeResponseCodeType
typedef uint8 Dcm_NegativeResponseCodeType;

# define Rte_TypeDef_Dcm_OpStatusType
typedef uint8 Dcm_OpStatusType;

# define Rte_TypeDef_Dcm_ProtocolType
typedef uint8 Dcm_ProtocolType;

# define Rte_TypeDef_Dcm_RequestKindType
typedef uint8 Dcm_RequestKindType;

# define Rte_TypeDef_Dcm_SecLevelType
typedef uint8 Dcm_SecLevelType;

# define Rte_TypeDef_Dcm_SesCtrlType
typedef uint8 Dcm_SesCtrlType;

# define Rte_TypeDef_Dem_DTCFormatType
typedef uint8 Dem_DTCFormatType;

# define Rte_TypeDef_Dem_DTCKindType
typedef uint8 Dem_DTCKindType;

# define Rte_TypeDef_Dem_DTCOriginType
typedef uint16 Dem_DTCOriginType;

# define Rte_TypeDef_Dem_DTCSeverityType
typedef uint8 Dem_DTCSeverityType;

# define Rte_TypeDef_Dem_DTRControlType
typedef uint8 Dem_DTRControlType;

# define Rte_TypeDef_Dem_DebounceResetStatusType
typedef uint8 Dem_DebounceResetStatusType;

# define Rte_TypeDef_Dem_DebouncingStateType
typedef uint8 Dem_DebouncingStateType;

# define Rte_TypeDef_Dem_EventStatusType
typedef uint8 Dem_EventStatusType;

# define Rte_TypeDef_Dem_IndicatorStatusType
typedef uint8 Dem_IndicatorStatusType;

# define Rte_TypeDef_Dem_InitMonitorReasonType
typedef uint8 Dem_InitMonitorReasonType;

# define Rte_TypeDef_Dem_IumprDenomCondIdType
typedef uint8 Dem_IumprDenomCondIdType;

# define Rte_TypeDef_Dem_IumprDenomCondStatusType
typedef uint8 Dem_IumprDenomCondStatusType;

# define Rte_TypeDef_Dem_IumprReadinessGroupType
typedef uint8 Dem_IumprReadinessGroupType;

# define Rte_TypeDef_Dem_MonitorStatusType
typedef uint8 Dem_MonitorStatusType;

# define Rte_TypeDef_Dem_OperationCycleStateType
typedef uint8 Dem_OperationCycleStateType;

# define Rte_TypeDef_Dem_UdsStatusByteType
typedef uint8 Dem_UdsStatusByteType;

# define Rte_TypeDef_EcuM_BootTargetType
typedef uint8 EcuM_BootTargetType;

# define Rte_TypeDef_EcuM_ModeType
typedef uint8 EcuM_ModeType;

# define Rte_TypeDef_EcuM_ShutdownCauseType
typedef uint8 EcuM_ShutdownCauseType;

# define Rte_TypeDef_EcuM_StateType
typedef uint8 EcuM_StateType;

# define Rte_TypeDef_EcuM_UserType
typedef uint8 EcuM_UserType;


# ifndef RTE_SUPPRESS_UNUSED_DATATYPES
/**********************************************************************************************************************
 * Unused Data type definitions
 *********************************************************************************************************************/

#  define Rte_TypeDef_dtRef_VOID
typedef void * dtRef_VOID;

#  define Rte_TypeDef_dtRef_const_VOID
typedef const void * dtRef_const_VOID;

#  define Rte_TypeDef_Dem_OperationCycleIdType
typedef uint8 Dem_OperationCycleIdType;

#  define Rte_TypeDef_NvM_BlockIdType
typedef uint16 NvM_BlockIdType;

#  define Rte_TypeDef_NvM_RequestResultType
typedef uint8 NvM_RequestResultType;

#  define Rte_TypeDef_NvM_ServiceIdType
typedef uint8 NvM_ServiceIdType;

# endif


/**********************************************************************************************************************
 * Constant value definitions
 *********************************************************************************************************************/

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern CONST(CrashStsSafe_1, RTE_CONST) Rte_C_CrashStsSafe_1_0;

extern CONST(EngSt1WdSts_1, RTE_CONST) Rte_C_EngSt1WdSts_1_0;

extern CONST(EscVariantToDmc_1, RTE_CONST) Rte_C_EscVariantToDmc_1_0;

extern CONST(HvSysRlySts_1, RTE_CONST) Rte_C_HvSysRlySts_1_0;

extern CONST(ImobEngMgrReq_2, RTE_CONST) Rte_C_ImobEngMgrReq_2_0;

extern CONST(PtTqAtAxleReq_1, RTE_CONST) Rte_C_PtTqAtAxleReq_1_0;

extern CONST(StcStsToDmc_1, RTE_CONST) Rte_C_StcStsToDmc_1_0;

extern CONST(SysU_4, RTE_CONST) Rte_C_SysU_4_0;

extern CONST(VehModMngtGlbSafe1_2, RTE_CONST) Rte_C_VehModMngtGlbSafe1_2_0;

extern CONST(VehMtnStSafe1_2, RTE_CONST) Rte_C_VehMtnStSafe1_2_0;

extern CONST(VehSpdLgtSafe1_3, RTE_CONST) Rte_C_VehSpdLgtSafe1_3_0;

extern CONST(WhlMotSysTqAllwd_3, RTE_CONST) Rte_C_WhlMotSysTqAllwd_3_0;

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */
# include "Rte_DataHandleType.h"

/**********************************************************************************************************************
 *  LOCAL DATA TYPES AND STRUCTURES
 *********************************************************************************************************************/

typedef unsigned int Rte_BitType;
/**********************************************************************************************************************
 * type and extern declarations of RTE internal variables
 *********************************************************************************************************************/

/**********************************************************************************************************************
 * Rte Init State Variable
 *********************************************************************************************************************/

# define RTE_STATE_UNINIT    (0U)
# define RTE_STATE_SCHM_INIT (1U)
# define RTE_STATE_INIT      (2U)

# define RTE_START_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState; /* PRQA S 3408 */ /* MD_Rte_3408 */
extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_StartTiming_InitState; /* PRQA S 0850, 3408 */ /* MD_MSR_MacroArgumentEmpty, MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_1; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_2; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# define RTE_START_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern volatile VAR(uint8, RTE_VAR_ZERO_INIT_NOCACHE) Rte_InitState_3; /* PRQA S 3408 */ /* MD_Rte_3408 */

# define RTE_STOP_SEC_VAR_GLOBALSHARED_NOCACHE_ZERO_INIT_8BIT
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

# ifdef RTE_CORE

/**********************************************************************************************************************
 * Buffers for Basic Tasks triggered by OS Schedule Table
 *********************************************************************************************************************/

#  define RTE_START_SEC_VAR_OsApplication_Core2_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint32, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_Appl_10ms_Step;

#  define RTE_STOP_SEC_VAR_OsApplication_Core2_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint32, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_Bsw_10ms_Step;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint32, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_Com_5ms_Step;

#  define RTE_STOP_SEC_VAR_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_OsApplication_Core1_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint32, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_EcuM_Core1_Step;

#  define RTE_STOP_SEC_VAR_OsApplication_Core1_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

#  define RTE_START_SEC_VAR_OsApplication_Core3_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */

extern VAR(uint32, RTE_VAR_ZERO_INIT) Rte_ScheduleTable_Task_EcuM_Core3_Step;

#  define RTE_STOP_SEC_VAR_OsApplication_Core3_ZERO_INIT_UNSPECIFIED
#  include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_MemMap */



# endif /* defined(RTE_CORE) */

#endif /* RTE_TYPE_H */

/**********************************************************************************************************************
 MISRA 2012 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1039:  MISRA rule: Rule1.2
     Reason:     Same macro and function names are required to meet AUTOSAR spec.
     Risk:       No functional risk. Macro will be undefined before function definition.
     Prevention: Not required.

   MD_Rte_3408:  MISRA rule: Rule8.4
     Reason:     For the purpose of monitoring during calibration or debugging it is necessary to use non-static declarations.
                 This is covered in the MISRA C compliance section of the Rte specification.
     Risk:       No functional risk.
     Prevention: Not required.

*/
