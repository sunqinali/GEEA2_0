/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_Dcm.h
 *        Config:  IEM_TC387.dpa
 *   ECU-Project:  IEM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1900078
 *
 *   Description:  Application header file for SW-C <Dcm>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DCM_H
# define _RTE_DCM_H

# ifndef RTE_CORE
#  ifdef RTE_APPLICATION_HEADER_FILE
#   error Multiple application header files included.
#  endif
#  define RTE_APPLICATION_HEADER_FILE
#  ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#   define RTE_PTR2ARRAYBASETYPE_PASSING
#  endif
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_Dcm_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl(Dcm_DiagnosticSessionControlType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset(Dcm_EcuResetType nextMode); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_WriteData(P2CONST(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data22ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data7ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data32ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D0B5_SDB_version_SDB_version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D0B5_SDB_version_SDB_version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D0B5_SDB_version_SDB_version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_WriteData(P2CONST(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data8ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_WriteData(P2CONST(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data10ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_WriteData(P2CONST(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data24ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data40ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_WriteData(P2CONST(Dcm_Data40ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_WriteData(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_WriteData(P2CONST(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Data, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data2ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data4ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data5ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ReadData(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data1ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmClearDTC(uint32 DTC, Dem_DTCFormatType DTCFormat, Dem_DTCOriginType DTCOrigin); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmGetExtendedDataRecordByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 ExtendedDataNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_Dcm_DcmGetFreezeFrameDataByDTC(uint32 DTC, Dem_DTCOriginType DTCOrigin, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Check_programming_pre_conditions_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_RID_0206_Start_Pr_3_Condition_Fullfilled_To_Enter_Programming_Session, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_P_Lock_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_P_Lock_Status, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_P_Lock_Start(uint8 In_P_Lock_State_Request, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_P_Lock_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Start(uint8 In_InputData1, uint8 In_InputData2, uint8 In_InputData3, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Start(uint8 In_InputData1, uint8 In_InputData2, uint8 In_InputData3, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_03_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Start(uint8 In_InputData1, uint8 In_InputData2, uint8 In_InputData3, Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_1, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_2, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Data_01_3, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_RequestResults(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Bitfield, P2VAR(uint16, AUTOMATIC, RTE_DCM_APPL_VAR) Out_RID_4001_RequestResult_Pr_3_Calibration_result, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Start(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Bitfield, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Stop(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_Bitfield, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_CompareKey(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_CompareKey(P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_CompareKey(P2CONST(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_DATA) Key, Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_GetSeed(Dcm_OpStatusType OpStatus, P2VAR(Dcm_Data3ByteType, AUTOMATIC, RTE_DCM_APPL_VAR) Seed, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Switch_<p>_<m>
 *********************************************************************************************************************/
#  define Rte_Switch_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl Rte_Switch_Dcm_DcmDiagnosticSessionControl_DcmDiagnosticSessionControl
#  define Rte_Switch_DcmEcuReset_DcmEcuReset Rte_Switch_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Feedback_<p>_<m> (mode switch acknowledge)
 *********************************************************************************************************************/
#  define Rte_SwitchAck_DcmEcuReset_DcmEcuReset Rte_SwitchAck_Dcm_DcmEcuReset_DcmEcuReset


/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead
#  define Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData
#  define Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead
#  define Rte_Call_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData
#  define Rte_Call_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ConditionCheckRead
#  define Rte_Call_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ReadData Rte_Call_Dcm_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_ReadData
#  define Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ConditionCheckRead
#  define Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ReadData Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_ReadData
#  define Rte_Call_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_WriteData Rte_Call_Dcm_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_WriteData
#  define Rte_Call_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ReadData Rte_Call_Dcm_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_ReadData
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ReadData Rte_Call_Dcm_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_ReadData
#  define Rte_Call_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ReadData Rte_Call_Dcm_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_ReadData
#  define Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ReadData Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_ReadData
#  define Rte_Call_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_WriteData Rte_Call_Dcm_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_WriteData
#  define Rte_Call_DataServices_DID_D0B5_SDB_version_SDB_version_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D0B5_SDB_version_SDB_version_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D0B5_SDB_version_SDB_version_ReadData Rte_Call_Dcm_DataServices_DID_D0B5_SDB_version_SDB_version_ReadData
#  define Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ReadData Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_ReadData
#  define Rte_Call_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_WriteData Rte_Call_Dcm_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_WriteData
#  define Rte_Call_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ReadData Rte_Call_Dcm_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ConditionCheckRead
#  define Rte_Call_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ReadData Rte_Call_Dcm_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_ReadData
#  define Rte_Call_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ReadData Rte_Call_Dcm_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_ReadData
#  define Rte_Call_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ConditionCheckRead
#  define Rte_Call_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ReadData Rte_Call_Dcm_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_ReadData
#  define Rte_Call_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ReadData Rte_Call_Dcm_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_ReadData
#  define Rte_Call_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ConditionCheckRead
#  define Rte_Call_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ReadData Rte_Call_Dcm_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_ReadData
#  define Rte_Call_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ConditionCheckRead
#  define Rte_Call_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ReadData Rte_Call_Dcm_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData
#  define Rte_Call_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ReadData Rte_Call_Dcm_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_ReadData
#  define Rte_Call_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ConditionCheckRead
#  define Rte_Call_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ReadData Rte_Call_Dcm_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__ReadData
#  define Rte_Call_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ConditionCheckRead
#  define Rte_Call_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ReadData Rte_Call_Dcm_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__ReadData
#  define Rte_Call_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ReadData Rte_Call_Dcm_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_ReadData
#  define Rte_Call_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ReadData Rte_Call_Dcm_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_ReadData
#  define Rte_Call_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ReadData Rte_Call_Dcm_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_ReadData
#  define Rte_Call_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ReadData Rte_Call_Dcm_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_ReadData
#  define Rte_Call_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ReadData Rte_Call_Dcm_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_ReadData
#  define Rte_Call_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ReadData Rte_Call_Dcm_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_ReadData
#  define Rte_Call_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ReadData Rte_Call_Dcm_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_ReadData
#  define Rte_Call_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ReadData Rte_Call_Dcm_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_ReadData
#  define Rte_Call_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ReadData Rte_Call_Dcm_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_ReadData
#  define Rte_Call_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ReadData Rte_Call_Dcm_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_ReadData
#  define Rte_Call_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ReadData Rte_Call_Dcm_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_ReadData
#  define Rte_Call_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ReadData Rte_Call_Dcm_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_ReadData
#  define Rte_Call_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ReadData Rte_Call_Dcm_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_ReadData
#  define Rte_Call_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ReadData Rte_Call_Dcm_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_ReadData
#  define Rte_Call_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData Rte_Call_Dcm_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ReadData Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_ReadData
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ReadData Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_ReadData
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ReadData Rte_Call_Dcm_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_H_Ser_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_H_Ser_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hu_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hu_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hv_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hv_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Hw_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Hw_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_L_Ser_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_L_Ser_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lu_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lu_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lv_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lv_WriteData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_ReadData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_ReadData
#  define Rte_Call_DataServices_DID_E333_2002_State_2002_Lw_WriteData Rte_Call_Dcm_DataServices_DID_E333_2002_State_2002_Lw_WriteData
#  define Rte_Call_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ReadData Rte_Call_Dcm_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_ReadData
#  define Rte_Call_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ReadData Rte_Call_Dcm_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_ReadData
#  define Rte_Call_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ReadData Rte_Call_Dcm_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_ReadData
#  define Rte_Call_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ReadData Rte_Call_Dcm_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_ReadData
#  define Rte_Call_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ReadData Rte_Call_Dcm_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_ReadData
#  define Rte_Call_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ReadData Rte_Call_Dcm_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_ReadData
#  define Rte_Call_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ReadData Rte_Call_Dcm_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_ReadData
#  define Rte_Call_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ReadData Rte_Call_Dcm_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_ReadData
#  define Rte_Call_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ReadData Rte_Call_Dcm_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_ReadData
#  define Rte_Call_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ReadData Rte_Call_Dcm_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_ReadData
#  define Rte_Call_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ReadData Rte_Call_Dcm_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_ReadData
#  define Rte_Call_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ReadData Rte_Call_Dcm_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_ReadData
#  define Rte_Call_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ReadData Rte_Call_Dcm_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_ReadData
#  define Rte_Call_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ReadData Rte_Call_Dcm_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_ReadData
#  define Rte_Call_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ReadData Rte_Call_Dcm_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_ReadData
#  define Rte_Call_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ConditionCheckRead
#  define Rte_Call_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ReadData Rte_Call_Dcm_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ConditionCheckRead
#  define Rte_Call_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ReadData Rte_Call_Dcm_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_ReadData
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ReadData Rte_Call_Dcm_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_ReadData
#  define Rte_Call_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ReadData Rte_Call_Dcm_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_ReadData
#  define Rte_Call_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ReadData Rte_Call_Dcm_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_ReadData
#  define Rte_Call_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ReadData Rte_Call_Dcm_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_ReadData
#  define Rte_Call_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ReadData Rte_Call_Dcm_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_ReadData
#  define Rte_Call_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ReadData Rte_Call_Dcm_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_ReadData
#  define Rte_Call_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData Rte_Call_Dcm_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData
#  define Rte_Call_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ReadData Rte_Call_Dcm_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_ReadData
#  define Rte_Call_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ReadData Rte_Call_Dcm_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_ReadData
#  define Rte_Call_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ReadData Rte_Call_Dcm_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_ReadData
#  define Rte_Call_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ReadData Rte_Call_Dcm_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_ReadData
#  define Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ReadData Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_ReadData
#  define Rte_Call_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_WriteData Rte_Call_Dcm_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_WriteData
#  define Rte_Call_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ReadData Rte_Call_Dcm_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_ReadData
#  define Rte_Call_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ReadData Rte_Call_Dcm_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_ReadData
#  define Rte_Call_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ReadData Rte_Call_Dcm_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_ReadData
#  define Rte_Call_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData Rte_Call_Dcm_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData
#  define Rte_Call_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ReadData Rte_Call_Dcm_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_ReadData
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ReadData Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_ReadData
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ReadData Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_ReadData
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ReadData Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_ReadData
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ReadData Rte_Call_Dcm_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_ReadData
#  define Rte_Call_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ReadData Rte_Call_Dcm_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_ReadData
#  define Rte_Call_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ReadData Rte_Call_Dcm_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_ReadData
#  define Rte_Call_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ReadData Rte_Call_Dcm_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_ReadData
#  define Rte_Call_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ReadData Rte_Call_Dcm_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_ReadData
#  define Rte_Call_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ReadData Rte_Call_Dcm_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_ReadData
#  define Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ReadData Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_ReadData
#  define Rte_Call_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_WriteData Rte_Call_Dcm_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_WriteData
#  define Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ReadData Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_ReadData
#  define Rte_Call_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_WriteData Rte_Call_Dcm_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_WriteData
#  define Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ConditionCheckRead
#  define Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ReadData Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_ReadData
#  define Rte_Call_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_WriteData Rte_Call_Dcm_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_WriteData
#  define Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ReadData Rte_Call_Dcm_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_ReadData
#  define Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ReadData Rte_Call_Dcm_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_ReadData
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ReadData Rte_Call_Dcm_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_ReadData
#  define Rte_Call_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ReadData Rte_Call_Dcm_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_ReadData
#  define Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ReadData Rte_Call_Dcm_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_ReadData
#  define Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData Rte_Call_Dcm_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_ReadData
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ConditionCheckRead
#  define Rte_Call_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ReadData Rte_Call_Dcm_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_ReadData
#  define Rte_Call_Dcm_DcmClearDTC Rte_Call_Dcm_Dcm_DcmClearDTC
#  define Rte_Call_Dcm_DcmGetExtendedDataRecordByDTC Rte_Call_Dcm_Dcm_DcmGetExtendedDataRecordByDTC
#  define Rte_Call_Dcm_DcmGetFreezeFrameDataByDTC Rte_Call_Dcm_Dcm_DcmGetFreezeFrameDataByDTC
#  define Rte_Call_RoutineServices_Check_programming_pre_conditions_Start Rte_Call_Dcm_RoutineServices_Check_programming_pre_conditions_Start
#  define Rte_Call_RoutineServices_P_Lock_RequestResults Rte_Call_Dcm_RoutineServices_P_Lock_RequestResults
#  define Rte_Call_RoutineServices_P_Lock_Start Rte_Call_Dcm_RoutineServices_P_Lock_Start
#  define Rte_Call_RoutineServices_P_Lock_Stop Rte_Call_Dcm_RoutineServices_P_Lock_Stop
#  define Rte_Call_RoutineServices_Routine_Reserved_1_RequestResults Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_RequestResults
#  define Rte_Call_RoutineServices_Routine_Reserved_1_Start Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Start
#  define Rte_Call_RoutineServices_Routine_Reserved_1_Stop Rte_Call_Dcm_RoutineServices_Routine_Reserved_1_Stop
#  define Rte_Call_RoutineServices_Routine_Reserved_2_RequestResults Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_RequestResults
#  define Rte_Call_RoutineServices_Routine_Reserved_2_Start Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Start
#  define Rte_Call_RoutineServices_Routine_Reserved_2_Stop Rte_Call_Dcm_RoutineServices_Routine_Reserved_2_Stop
#  define Rte_Call_RoutineServices_Routine_Reserved_3_RequestResults Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_RequestResults
#  define Rte_Call_RoutineServices_Routine_Reserved_3_Start Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Start
#  define Rte_Call_RoutineServices_Routine_Reserved_3_Stop Rte_Call_Dcm_RoutineServices_Routine_Reserved_3_Stop
#  define Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_RequestResults Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_RequestResults
#  define Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Start Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Start
#  define Rte_Call_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Stop Rte_Call_Dcm_RoutineServices_Starter_Generator_Position_Sensors_Calibration_Stop
#  define Rte_Call_SecurityAccess_CommonUnlock_Level_3_CompareKey Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_CompareKey
#  define Rte_Call_SecurityAccess_CommonUnlock_Level_3_GetSeed Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_GetSeed
#  define Rte_Call_SecurityAccess_ImmoUnlocked_Level_4_CompareKey Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_CompareKey
#  define Rte_Call_SecurityAccess_ImmoUnlocked_Level_4_GetSeed Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_GetSeed


# endif /* !defined(RTE_CORE) */


# define Dcm_START_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dcm_MainFunction Dcm_MainFunction
#  define RTE_RUNNABLE_GetActiveProtocol Dcm_GetActiveProtocol
#  define RTE_RUNNABLE_GetRequestKind Dcm_GetRequestKind
#  define RTE_RUNNABLE_GetSecurityLevel Dcm_GetSecurityLevel
#  define RTE_RUNNABLE_GetSesCtrlType Dcm_GetSesCtrlType
#  define RTE_RUNNABLE_ResetToDefaultSession Dcm_ResetToDefaultSession
#  define RTE_RUNNABLE_SetActiveDiagnostic Dcm_SetActiveDiagnostic
# endif

FUNC(void, Dcm_CODE) Dcm_MainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetActiveProtocol(P2VAR(Dcm_ProtocolType, AUTOMATIC, RTE_DCM_APPL_VAR) ActiveProtocol); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetRequestKind(uint16 TesterSourceAddress, P2VAR(Dcm_RequestKindType, AUTOMATIC, RTE_DCM_APPL_VAR) RequestKind); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSecurityLevel(P2VAR(Dcm_SecLevelType, AUTOMATIC, RTE_DCM_APPL_VAR) SecLevel); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_GetSesCtrlType(P2VAR(Dcm_SesCtrlType, AUTOMATIC, RTE_DCM_APPL_VAR) SesCtrlType); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_ResetToDefaultSession(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, Dcm_CODE) Dcm_SetActiveDiagnostic(boolean active); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */

# define Dcm_STOP_SEC_CODE
# include "Dcm_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_DCMServices_E_NOT_OK (1U)

#  define RTE_E_DCMServices_E_OK (0U)

#  define RTE_E_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_E_NOT_OK (1U)

#  define RTE_E_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_0xEEC7_1_DID_EED2_SaftyTorque_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_40E0_Secret_Key_Immobilizer_Target_3_DID_40DF_Secret_Key_Immobilizer_Target_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D003_Vehicle_Speed_DID_D003_Vehicle_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_1th_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_2th_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_3th_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_4th_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Bitfield_5th_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_1st_Functionality_Activity_Level_PNC39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_2st_Functionality_Activity_Level_PNC39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_3st_Functionality_Activity_Level_PNC39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_4st_Functionality_Activity_Level_PNC39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC24_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC25_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC26_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC27_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC29_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC30_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC35_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_D005_5st_Functionality_Activity_Level_PNC39_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1_1st_System_Global_Time_the_time_when_2A73953F_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_1st_Usage_Mode_when_DID_is_triggered_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2_1st_Global_time_when_Functionality_Ac_89793B23_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Global_time_when_Functionality_Acti_75CD35A0_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_System_Global_Time_the_time_when_th_5058FD8E_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_2st_Usage_Mode_when_DID_is_triggered_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Global_time_when_Functionality_Acti_A45DA93A_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_System_Global_Time_the_time_when_th_75ED068F_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_3st_Usage_Mode_when_DID_is_triggered_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Global_time_when_Functionality_Acti_F1BD651E_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_System_Global_Time_the_time_when_th_9B810F90_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_4st_Usage_Mode_when_DID_is_triggered_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Global_time_when_Functionality_Acti_183F5278_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_System_Global_Time_the_time_when_th_C1151891_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_DID_D005_5st_Usage_Mode_when_DID_is_triggered_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_1st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_2st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_3st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_4st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_CPSR_Keep_Active_5st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD19A5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD1D66_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD24E8_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_2AFD28A9_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_DC_Bus_volta_BF51DF82_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735753_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735B14_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE735ED5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736296_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Functionality_Activity_Level_Detect_Motor_Speed_AE736657_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_1st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_2st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_3st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_4st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_Data_Field_5st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_1st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_2st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_3st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_4st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D005_High_Quiescent_Current_Fault_Identification_Data_Reserved_PNC_5st_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D03A_swAuth_Public_Key_CheckSum_DID_D03A_swAuth_Public_Key_CheckSum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D09A_High_Quiescent_Current_Function_Activation_Deactivation_DID_D09A_High_Quiescent_Current_Function_CD3E51C5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D0B5_SDB_version_SDB_version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D0B5_SDB_version_SDB_version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D12F_Security_Constant_Level_11_12_DID_D12F_Security_Constant_Level_1112_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D134_Car_Mode_DID_D134_Car_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_10_5th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_11_6th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_12_6th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_13_7th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_14_7th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_15_8th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_16_8th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_17_9th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_18_9th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_19_10th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_1_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_20_10th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_2_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_3_2nd_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_4_2nd_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_5_3rd_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_6_3rd_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_7_4th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_8_4th_Latest_State_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_D211_Network_Management_History_Propulsion_CAN_DID_D211_9_5th_Latest_State_NM_History_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD00_Global_Real_Time_DID_DD00_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD01_Total_Distance_DID_DD01_Total_Distance_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD02_Vehicle_Battery_Voltage_DID_DD02_Vehicle_Battery_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD0A_Usage_Mode_DID_DD0A_Usage_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_DD0C_Electric_Power_Level_DID_DD0C_Electric_Power_Level_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E300_HVDC_Voltage_DID_E300_HVDC_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E301_HVDC_Current_DID_E301_HVDC_Current__E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E303_Motor_Speed_DID_E303_Motor_Speed__E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E304_Actual_Torque_DID_E304_Actual_Torque_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E305_Inverter_IGBT_Junction_Temp_DID_E305_Inverter_IGBT_Junction_Temp_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E306_Motor_Temperature_DID_E306_Motor_Temperature_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E307_System_Mode_DID_E307_System_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E308_ECM_Torque_Request_DID_E308_ECM_Torque_Request_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E309_ECM_Mode_Request_DID_E309_ECM_Mode_Request_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E310_IEM_MGM_Derating_Status_DID_E310_IEMMGM_Derating_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E311_Crash_Status_DID_E311_Crash_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E312_Wheel_Speed_DID_E312_Wheel_Speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E313_Active_discharge_status_DID_E313_Active_discharge_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E314_Available_Torque_maximum_DID_E314_Available_Torque_maximum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E315_Available_Torque_minimum_DID_E315_Available_Torque_minimum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E319_Torque_Direction_DID_E319_Torque_Direction_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E320_System_Mode_Mismatch_DID_E320_System_Mode_Mismatch_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E324_Motor_Derating_reason_of_IEM_MGM_DID_E324_Motor_Derating_reason_of_IEMMGM_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_1_ASW_Software_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_2_BSW_Software_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E331_Software_Version_DID_E331_3_Calibration_Data_Software_Version_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_H_Ser_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_H_Ser_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hu_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hu_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hv_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hv_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hw_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Hw_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_L_Ser_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_L_Ser_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lu_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lu_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lv_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lv_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lw_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E333_2002_State_2002_Lw_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E335_d_axis_current_setpoint_DID_E335_d_axis_current_setpoint_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E336_d_axis_current_feedback_DID_E336_d_axis_current_feedback_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E337_q_axis_current_setpoint_DID_E337_q_axis_current_setpoint_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E338_q_axis_current_feedback_DID_E338_q_axis_current_feedback_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E339_d_axis_voltage_DID_E339_d_axis_voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E341_q_axis_voltage_DID_E341_q_axis_voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E346_ECM_Torque_Allowed_Status_DID_E346_ECM_Torque_Allowed_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E347_IGBT_Max_Temperature_DID_E347_IGBT_Max_Temperature_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E348_Phase_U_PWM_duty_DID_E348_Phase_U_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E349_Phase_V_PWM_duty_DID_E349_Phase_V_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E350_Phase_W_PWM_duty_DID_E350_Phase_W_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E353_Flux_weakening_correction_factor_DID_E353_Flux_weakening_correction_factor_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E357_Resolve_compensated_angle_DID_E357_Resolve_compensated_angle_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E358_Resolve_angle_DID_E358_Resolve_angle_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E363_Modulation_index_DID_E363_Modulation_index_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_E364_AURIX_Fault_Indication_DID_E364_AURIX_Fault_Indication_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_ASCII_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_BCD_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_ED20_Complete_set_of_ECU_part_serial_numbers_Geely_Reserved_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12A_ECU_Delivery_Assembly_Part_Number_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12B_ECU_Delivery_Assembly_Part_Number1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F12E_1_Total_number_of_ECU_Software_Part_Numbers_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_DID_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_F120_Application_Diagnostic_Database_Part_Number1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EDA0_Complete_ECU_Part_Serial_Number_s_Reserved_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE9A_Inverter_Coolant_Temperature_DID_EE9A_Inverter_Coolant_Temperature_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE9C_Transient_Phase_Current_A_DID_EE9C_Transient_Phase_Current_A_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE9D_Transient_Phase_Current_B_DID_EE9D_Transient_Phase_Current_B_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE9E_Transient_Phase_Current_C_DID_EE9E_Transient_Phase_Current_C_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EE9F_Gate_Status_DID_EE9F_Gate_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEB5_IEM_MGM_current_torque_DID_EEB5_IEMMGM_current_torque_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEB6_ECM_Power_Limitation_maximum_DID_EEB6_ECM_Power_Limitation_maximum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEB7_ECM_Power_Limitation_minimum_DID_EEB7_ECM_Power_Limitation_minimum_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEB8_HV_voltage_received_from_BECM_DID_EEB8_HV_voltage_received_from_BECM_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEBD_IEM_MGM_rotor_offset_angle_DID_EEBD_IEMMGM_rotor_offset_angle_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEBE_Offset_angle_status_DID_EEBE_Offset_angle_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEBF_HV_Main_Relay_Status_DID_EEBF_HV_Main_Relay_Status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEC3_ECU_power_supply_Voltage_DID_EEC3_ECU_power_supply_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEC4_Charging_Power_Sustain_Relay_CPSR_Voltage_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEC5_ImobEng2_node_status_DID_EEC5_ImobEng2_node_status_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_0_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_1_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_2_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED1_Safty_monitor_Fault_Indication_EED1_3_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED3_Safety_speed_DID_EED3_Safety_speed_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED4_Safty_Function_Mode_DID_EED4_Safty_Function_Mode_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EED5_Safety_Torque_QF_factor_EED5_Safety_Torque_Quality_factor_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EEFD_Sofware_Project_Version_DID_EEFD_Clutch_Control_Fault_Indication_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EF0A_Active_Discharge_Time_DID_EF0A_Active_Discharge_Time_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EF1B_EOL_config_word_A_DID_EF1B_EOL_config_word_A_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EF1C_EOL_config_word_B_DID_EF1C_EOL_config_word_B_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_EF1D_EOL_config_word_C_DID_EF1D_EOL_config_word_C_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F121_Primary_Bootloader_Diagnostic_Database_Part_Number_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F125_Primary_Bootloader_Software_Part_Number_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_10_DIAG_CLUSTER_VCC_FIM_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_11_MODEMGMT_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_12_MODEMGMT_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_13_MODEMGMT_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_14_MODEMGMT_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_15_MODEMGMT_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_16_MODEMGMT_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_17_MODEMGMT_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_18_COM_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_19_COM_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_1_DIAG_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_20_COM_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_21_COM_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_22_COM_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_23_COM_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_24_COM_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_25_CAN_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_26_CAN_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_27_CAN_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_28_CAN_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_29_CAN_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_2_DIAG_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_30_CAN_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_31_CAN_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_32_FLEXRAY_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_33_FLEXRAY_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_34_FLEXRAY_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_35_FLEXRAY_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_36_FLEXRAY_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_37_FLEXRAY_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_38_FLEXRAY_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_39_LIN_CLUSTER_VENDOR_ID_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_3_DIAG_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_40_LIN_CLUSTER_SW_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_41_LIN_CLUSTER_SW_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_42_LIN_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_43_LIN_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_44_LIN_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_45_LIN_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_4_DIAG_CLUSTER_SW_PATCH_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_5_DIAG_CLUSTER_AR_RELEASE_MAJOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_6_DIAG_CLUSTER_AR_RELEASE_MINOR_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_7_DIAG_CLUSTER_AR_RELEASE_REVISION_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_8_DIAG_CLUSTER_VCC_DEM_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F126_Autosar_BSW_Cluster_Versions_DID_F126_9_DIAG_CLUSTER_VCC_DCM_VERSION_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12A_ECU_Core_Assembly_Part_Number_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12B_ECU_Delivery_Assembly_Part_Number_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12E_ECU_Software_Part_Numbers_DID_F12E_1_ECU_Software_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_004_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_005_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_006_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_007_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_008_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_ASCII_part_009_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_004_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_005_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_006_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_007_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_008_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_BCD_part_009_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F12F_ECU_Software_Extended_Part_Numbers_DID_F12F_1_Total_number_of_ECU_Software_Part_Numbers_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F186_Active_Diagnostic_Session_DID_F186_Active_Diagnostic_Session_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F18C_ECU_Serial_Number_DID_F18C_ECU_Serial_Number_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A0_Application_Diagnostic_Database_Part_Number_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A1_Primary_Bootloader_Diagnostic_Database_Part_Number_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1A5_Primary_Bootloader_Software_Part_Number_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AA_ECU_Core_Assembly_Part_Number_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AB_ECU_Delivery_Assembly_Part_Number_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AE_ECU_Software_Part_Numbers_Geely_DID_F1AE_1_Total_number_of_ECU_Software_Part_Numbers_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_ASCII_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_001_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_002_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_BCD_part_003_E_NOT_OK (1U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_DCM_E_PENDING (10U)

#  define RTE_E_DataServices_DID_F1AF_ECU_Software_Extended_Part_Numbers_Geely_DID_F1AF_1_Total_number_of_ECU_Software_Part_Numbers_E_NOT_OK (1U)

#  define RTE_E_DcmIf_DEM_CLEAR_BUSY (5U)

#  define RTE_E_DcmIf_DEM_CLEAR_FAILED (3U)

#  define RTE_E_DcmIf_DEM_CLEAR_MEMORY_ERROR (6U)

#  define RTE_E_DcmIf_DEM_CLEAR_PENDING (4U)

#  define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_CLEAR_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_PENDING (5U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_BUFFERSIZE (4U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_GET_FFDATABYDTC_WRONG_RECORDNUMBER (3U)

#  define RTE_E_DcmIf_DEM_RECORD_PENDING (5U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_BUFFERSIZE (4U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTC (1U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_DTCORIGIN (2U)

#  define RTE_E_DcmIf_DEM_RECORD_WRONG_NUMBER (3U)

#  define RTE_E_RoutineServices_Check_programming_pre_conditions_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Check_programming_pre_conditions_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Check_programming_pre_conditions_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_P_Lock_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_P_Lock_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_P_Lock_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_Reserved_1_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_Reserved_1_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_Reserved_1_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_Reserved_2_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_Reserved_2_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_Reserved_2_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Routine_Reserved_3_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Routine_Reserved_3_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Routine_Reserved_3_E_NOT_OK (1U)

#  define RTE_E_RoutineServices_Starter_Generator_Position_Sensors_Calibration_DCM_E_FORCE_RCRRP (12U)

#  define RTE_E_RoutineServices_Starter_Generator_Position_Sensors_Calibration_DCM_E_PENDING (10U)

#  define RTE_E_RoutineServices_Starter_Generator_Position_Sensors_Calibration_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_CommonUnlock_Level_3_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_CommonUnlock_Level_3_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_CommonUnlock_Level_3_E_NOT_OK (1U)

#  define RTE_E_SecurityAccess_ImmoUnlocked_Level_4_DCM_E_COMPARE_KEY_FAILED (11U)

#  define RTE_E_SecurityAccess_ImmoUnlocked_Level_4_DCM_E_PENDING (10U)

#  define RTE_E_SecurityAccess_ImmoUnlocked_Level_4_E_NOT_OK (1U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DCM_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
