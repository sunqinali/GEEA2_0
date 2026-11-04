/**********************************************************************************************************************
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  DemSatellite_0.c
 *        Config:  IEM_TC387.dpa
 *     SW-C Type:  DemSatellite_0
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1900078
 *
 *   Description:  C-Code implementation template for SW-C <DemSatellite_0>
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of version logging area >>                DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

/* PRQA S 0777, 0779 EOF */ /* MD_MSR_5.1_777, MD_MSR_5.1_779 */
/* PRQA S 0857 EOF */ /* MD_MSR_1.1_857 */
/* PRQA S 0614 EOF */ /* MD_Rte_TestCode */

/* PRQA S 3109 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3112 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3197 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3198 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3199 EOF */ /* MD_Rte_TestCode */
/* PRQA S 3201 EOF */ /* MD_Rte_TestCode */
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

/**********************************************************************************************************************
 *
 * AUTOSAR Modelling Object Descriptions
 *
 **********************************************************************************************************************
 *
 * Data Types:
 * ===========
 * Dem_DTCFormatType
 *   
 *
 * Dem_DTCGroupType
 *   
 *
 * Dem_DTCKindType
 *   
 *
 * Dem_DTCSeverityType
 *   
 *
 * Dem_DTCStatusMaskType
 *   
 *
 * Dem_DTRControlType
 *   
 *
 * Dem_DebounceResetStatusType
 *   
 *
 * Dem_DebouncingStateType
 *   
 *
 * Dem_EventIdType
 *   
 *
 * Dem_EventStatusType
 *   
 *
 * Dem_IndicatorStatusType
 *   
 *
 * Dem_InitMonitorReasonType
 *   
 *
 * Dem_IumprDenomCondIdType
 *   
 *
 * Dem_IumprDenomCondStatusType
 *   
 *
 * Dem_IumprReadinessGroupType
 *   
 *
 * Dem_MonitorStatusType
 *   
 *
 * Dem_OperationCycleStateType
 *   
 *
 * Dem_RatioIdType
 *   
 *
 * Dem_UdsStatusByteType
 *   
 *
 *********************************************************************************************************************/

#include "Rte_DemSatellite_0.h" /* PRQA S 0857 */ /* MD_MSR_1.1_857 */
#include "TSC_DemSatellite_0.h"
#include "SchM_Dem.h"
#include "TSC_SchM_Dem.h"


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

#include "string.h"

static void DemSatellite_0_TestDefines(void);

typedef P2FUNC(Std_ReturnType, RTE_CODE, FncPtrType)(void); /* PRQA S 3448 */ /* MD_Rte_TestCode */


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
 * Dem_DTCGroupType: Integer in interval [0...16777215]
 * Dem_DTCStatusMaskType: Integer in interval [0...255]
 * Dem_EventIdType: Integer in interval [1...65535]
 * Dem_RatioIdType: Integer in interval [1...65535]
 * boolean: Boolean (standard type)
 * sint8: Integer in interval [-128...127] (standard type)
 * uint16: Integer in interval [0...65535] (standard type)
 * uint32: Integer in interval [0...4294967295] (standard type)
 * uint8: Integer in interval [0...255] (standard type)
 *
 * Enumeration Types:
 * ==================
 * Dem_DTCFormatType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_FORMAT_OBD (0U)
 *   DEM_DTC_FORMAT_UDS (1U)
 *   DEM_DTC_FORMAT_J1939 (2U)
 * Dem_DTCKindType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTC_KIND_ALL_DTCS (1U)
 *   DEM_DTC_KIND_EMISSION_REL_DTCS (2U)
 * Dem_DTCSeverityType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_SEVERITY_NO_SEVERITY (0U)
 *   DTC_NO_SEVERITY_BflMask 255U (0b11111111)
 *   DTC_NO_SEVERITY_BflPn 0
 *   DTC_NO_SEVERITY_BflLn 8
 *   DEM_SEVERITY_WWHOBD_CLASS_NO_CLASS (1U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_A (2U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_B1 (4U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_B2 (8U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_WWHOBD_CLASS_C (16U)
 *   DTC_CLASS_BflMask 31U (0b00011111)
 *   DTC_CLASS_BflPn 0
 *   DTC_CLASS_BflLn 5
 *   DEM_SEVERITY_MAINTENANCE_ONLY (32U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 *   DEM_SEVERITY_CHECK_AT_NEXT_HALT (64U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 *   DEM_SEVERITY_CHECK_IMMEDIATELY (128U)
 *   DTC_SEVERITY_BflMask 224U (0b11100000)
 *   DTC_SEVERITY_BflPn 5
 *   DTC_SEVERITY_BflLn 3
 * Dem_DTRControlType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DTR_CTL_NORMAL (0U)
 *   DEM_DTR_CTL_NO_MAX (1U)
 *   DEM_DTR_CTL_NO_MIN (2U)
 *   DEM_DTR_CTL_RESET (3U)
 *   DEM_DTR_CTL_INVISIBLE (4U)
 * Dem_DebounceResetStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_DEBOUNCE_STATUS_FREEZE (0U)
 *   DEM_DEBOUNCE_STATUS_RESET (1U)
 * Dem_DebouncingStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_TEMPORARILY_DEFECTIVE (1U)
 *   DEM_TEMPORARILY_DEFECTIVE_BflMask 1U (0b00000001)
 *   DEM_TEMPORARILY_DEFECTIVE_BflPn 0
 *   DEM_TEMPORARILY_DEFECTIVE_BflLn 1
 *   DEM_FINALLY_DEFECTIVE (2U)
 *   DEM_FINALLY_DEFECTIVE_BflMask 2U (0b00000010)
 *   DEM_FINALLY_DEFECTIVE_BflPn 1
 *   DEM_FINALLY_DEFECTIVE_BflLn 1
 *   DEM_TEMPORARILY_HEALED (4U)
 *   DEM_TEMPORARILY_HEALED_BflMask 4U (0b00000100)
 *   DEM_TEMPORARILY_HEALED_BflPn 2
 *   DEM_TEMPORARILY_HEALED_BflLn 1
 *   DEM_TEST_COMPLETE (8U)
 *   DEM_TEST_COMPLETE_BflMask 8U (0b00001000)
 *   DEM_TEST_COMPLETE_BflPn 3
 *   DEM_TEST_COMPLETE_BflLn 1
 *   DEM_DTR_UPDATE (16U)
 *   DEM_DTR_UPDATE_BflMask 16U (0b00010000)
 *   DEM_DTR_UPDATE_BflPn 4
 *   DEM_DTR_UPDATE_BflLn 1
 * Dem_EventStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_EVENT_STATUS_PASSED (0U)
 *   DEM_EVENT_STATUS_FAILED (1U)
 *   DEM_EVENT_STATUS_PREPASSED (2U)
 *   DEM_EVENT_STATUS_PREFAILED (3U)
 *   DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED (4U)
 *   DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED (5U)
 *   DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED (6U)
 *   DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED (7U)
 *   DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED (8U)
 * Dem_IndicatorStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INDICATOR_OFF (0U)
 *   DEM_INDICATOR_CONTINUOUS (1U)
 *   DEM_INDICATOR_BLINKING (2U)
 *   DEM_INDICATOR_BLINK_CONT (3U)
 *   DEM_INDICATOR_SLOW_FLASH (4U)
 *   DEM_INDICATOR_FAST_FLASH (5U)
 *   DEM_INDICATOR_ON_DEMAND (6U)
 *   DEM_INDICATOR_SHORT (7U)
 * Dem_InitMonitorReasonType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_INIT_MONITOR_CLEAR (1U)
 *   DEM_INIT_MONITOR_RESTART (2U)
 *   DEM_INIT_MONITOR_REENABLED (3U)
 *   DEM_INIT_MONITOR_STORAGE_REENABLED (4U)
 * Dem_IumprDenomCondIdType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_GENERAL_DENOMINATOR (1U)
 *   DEM_IUMPR_DEN_COND_COLDSTART (2U)
 *   DEM_IUMPR_DEN_COND_EVAP (3U)
 *   DEM_IUMPR_DEN_COND_500MI (4U)
 * Dem_IumprDenomCondStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_DEN_STATUS_NOT_REACHED (0U)
 *   DEM_IUMPR_DEN_STATUS_REACHED (1U)
 *   DEM_IUMPR_DEN_STATUS_INHIBITED (2U)
 * Dem_IumprReadinessGroupType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_IUMPR_BOOSTPRS (0U)
 *   DEM_IUMPR_CAT1 (1U)
 *   DEM_IUMPR_CAT2 (2U)
 *   DEM_IUMPR_EGR (3U)
 *   DEM_IUMPR_EGSENSOR (4U)
 *   DEM_IUMPR_EVAP (5U)
 *   DEM_IUMPR_NMHCCAT (6U)
 *   DEM_IUMPR_NOXADSORB (7U)
 *   DEM_IUMPR_NOXCAT (8U)
 *   DEM_IUMPR_OXS1 (9U)
 *   DEM_IUMPR_OXS2 (10U)
 *   DEM_IUMPR_PMFILTER (11U)
 *   DEM_IUMPR_PRIVATE (12U)
 *   DEM_IUMPR_SAIR (13U)
 *   DEM_IUMPR_SECOXS1 (14U)
 *   DEM_IUMPR_SECOXS2 (15U)
 *   DEM_IUMPR_FLSYS (16U)
 *   DEM_IUMPR_AFRI1 (17U)
 *   DEM_IUMPR_AFRI2 (18U)
 *   DEM_IUMPR_PF1 (19U)
 *   DEM_IUMPR_PF2 (20U)
 *   DEM_IUMPR_ALLGROUPS (255U)
 * Dem_MonitorStatusType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_MONITOR_STATUS_TF (1U)
 *   DEM_MONITOR_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_MONITOR_STATUS_TF_BflPn 0
 *   DEM_MONITOR_STATUS_TF_BflLn 1
 *   DEM_MONITOR_STATUS_TNCTOC (2U)
 *   DEM_MONITOR_STATUS_TNCTOC_BflMask 2U (0b00000010)
 *   DEM_MONITOR_STATUS_TNCTOC_BflPn 1
 *   DEM_MONITOR_STATUS_TNCTOC_BflLn 1
 * Dem_OperationCycleStateType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_CYCLE_STATE_START (0U)
 *   DEM_CYCLE_STATE_END (1U)
 * Dem_UdsStatusByteType: Enumeration of integer in interval [0...255] with enumerators
 *   DEM_UDS_STATUS_TF (1U)
 *   DEM_UDS_STATUS_TF_BflMask 1U (0b00000001)
 *   DEM_UDS_STATUS_TF_BflPn 0
 *   DEM_UDS_STATUS_TF_BflLn 1
 *   DEM_UDS_STATUS_TFTOC (2U)
 *   DEM_UDS_STATUS_TFTOC_BflMask 2U (0b00000010)
 *   DEM_UDS_STATUS_TFTOC_BflPn 1
 *   DEM_UDS_STATUS_TFTOC_BflLn 1
 *   DEM_UDS_STATUS_PDTC (4U)
 *   DEM_UDS_STATUS_PDTC_BflMask 4U (0b00000100)
 *   DEM_UDS_STATUS_PDTC_BflPn 2
 *   DEM_UDS_STATUS_PDTC_BflLn 1
 *   DEM_UDS_STATUS_CDTC (8U)
 *   DEM_UDS_STATUS_CDTC_BflMask 8U (0b00001000)
 *   DEM_UDS_STATUS_CDTC_BflPn 3
 *   DEM_UDS_STATUS_CDTC_BflLn 1
 *   DEM_UDS_STATUS_TNCSLC (16U)
 *   DEM_UDS_STATUS_TNCSLC_BflMask 16U (0b00010000)
 *   DEM_UDS_STATUS_TNCSLC_BflPn 4
 *   DEM_UDS_STATUS_TNCSLC_BflLn 1
 *   DEM_UDS_STATUS_TFSLC (32U)
 *   DEM_UDS_STATUS_TFSLC_BflMask 32U (0b00100000)
 *   DEM_UDS_STATUS_TFSLC_BflPn 5
 *   DEM_UDS_STATUS_TFSLC_BflLn 1
 *   DEM_UDS_STATUS_TNCTOC (64U)
 *   DEM_UDS_STATUS_TNCTOC_BflMask 64U (0b01000000)
 *   DEM_UDS_STATUS_TNCTOC_BflPn 6
 *   DEM_UDS_STATUS_TNCTOC_BflLn 1
 *   DEM_UDS_STATUS_WIR (128U)
 *   DEM_UDS_STATUS_WIR_BflMask 128U (0b10000000)
 *   DEM_UDS_STATUS_WIR_BflPn 7
 *   DEM_UDS_STATUS_WIR_BflLn 1
 *
 * Array Types:
 * ============
 * DataArrayType_uint8_1: Array with 1 element(s) of type uint8
 * DataArrayType_uint8_2: Array with 2 element(s) of type uint8
 * DataArrayType_uint8_3: Array with 3 element(s) of type uint8
 * DataArrayType_uint8_4: Array with 4 element(s) of type uint8
 * Dem_MaxDataValueType: Array with 8 element(s) of type uint8
 *
 *********************************************************************************************************************/


#define DemSatellite_0_START_SEC_CODE
#include "DemSatellite_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 *
 * Runnable Entity Name: Dem_SatelliteMainFunction
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 10ms
 *
 **********************************************************************************************************************
 *
 * Service Calls:
 * ==============
 *   Service Invocation:
 *   -------------------
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xd003_DID_D003_Vehicle_Speed_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_4
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xdd00_DID_DD00_Global_Real_Time_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_3
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xdd01_DID_DD01_Total_Distance_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xdd0a_DID_DD0A_Usage_Mode_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xdd0c_DID_DD0C_Electric_Power_Level_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe300_DID_E300_HVDC_Voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe301_DID_E301_HVDC_Current__E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe303_DID_E303_Motor_Speed__E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe304_DID_E304_Actual_Torque_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe306_DID_E306_Motor_Temperature_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe307_DID_E307_System_Mode_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe308_DID_E308_ECM_Torque_Request_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe309_DID_E309_ECM_Mode_Request_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe310_DID_E310_IEMMGM_Derating_Status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe311_DID_E311_Crash_Status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe312_DID_E312_Wheel_Speed_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe313_DID_E313_Active_discharge_status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe314_DID_E314_Available_Torque_maximum_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe315_DID_E315_Available_Torque_minimum_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe319_DID_E319_Torque_Direction_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe320_DID_E320_System_Mode_Mismatch_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_H_Ser_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Hu_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Hv_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Hw_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_L_Ser_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Lu_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Lv_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe333_2002_Lw_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe335_DID_E335_d_axis_current_setpoint_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe336_DID_E336_d_axis_current_feedback_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe337_DID_E337_q_axis_current_setpoint_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe338_DID_E338_q_axis_current_feedback_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe339_DID_E339_d_axis_voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe341_DID_E341_q_axis_voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe347_DID_E347_IGBT_Max_Temperature_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe348_DID_E348_Phase_U_PWM_duty_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe349_DID_E349_Phase_V_PWM_duty_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe350_DID_E350_Phase_W_PWM_duty_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe353_DID_E353_Flux_weakening_correction_factor_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe357_DID_E357_Resolve_compensated_angle_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe358_DID_E358_Resolve_angle_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe363_DID_E363_Modulation_index_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xe364_DID_E364_AURIX_Fault_Indication_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xee9f_DID_EE9F_Gate_Status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeebe_DID_EEBE_Offset_angle_status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed1_EED1_0_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed1_EED1_1_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed1_EED1_2_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed1_EED1_3_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed2_DID_EED2_SaftyTorque_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_2
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed3_DID_EED3_Safety_speed_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed4_DID_EED4_Safty_Function_Mode_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DID_0xeed5_EED5_Safety_Torque_Quality_factor_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_1
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DTCStatusindicator30_DTCStatusindicator30_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_4
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DTCTimeStamp20_DTCTimeStamp20_E_NOT_OK
 *   Std_ReturnType Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(uint8 *Data)
 *     Argument Data: uint8* is of type DataArrayType_uint8_4
 *     Synchronous Service Invocation. Timeout: None
 *     Returned Application Errors: RTE_E_CSDataServices_DTCTimeStamp21_DTCTimeStamp21_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SatelliteMainFunction_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(void, DemSatellite_0_CODE) Dem_SatelliteMainFunction(void) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SatelliteMainFunction
 *********************************************************************************************************************/

  Std_ReturnType fct_status;
  boolean fct_error = 0;

  DataArrayType_uint8_2 Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_4 Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData_Data = {
  0U, 0U, 0U, 0U
};
  DataArrayType_uint8_3 Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData_Data = {
  0U, 0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Hu_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Hv_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Hw_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Lu_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Lv_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe333_2002_Lw_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed1_EED1_0_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed1_EED1_1_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed1_EED1_2_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed1_EED1_3_ReadData_Data = {
  0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_2 Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData_Data = {
  0U, 0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData_Data = {
  0U
};
  DataArrayType_uint8_1 Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData_Data = {
  0U
};
  DataArrayType_uint8_4 Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData_Data = {
  0U, 0U, 0U, 0U
};
  DataArrayType_uint8_4 Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData_Data = {
  0U, 0U, 0U, 0U
};

  /**********************************************************
  * Direct Function Accesses and Take Addresses of Functions
  **********************************************************/

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xd003_DID_D003_Vehicle_Speed_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xdd00_DID_DD00_Global_Real_Time_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xdd01_DID_DD01_Total_Distance_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xdd0a_DID_DD0A_Usage_Mode_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xdd0c_DID_DD0C_Electric_Power_Level_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe300_DID_E300_HVDC_Voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe301_DID_E301_HVDC_Current__E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe303_DID_E303_Motor_Speed__E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe304_DID_E304_Actual_Torque_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe306_DID_E306_Motor_Temperature_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe307_DID_E307_System_Mode_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe308_DID_E308_ECM_Torque_Request_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe309_DID_E309_ECM_Mode_Request_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe310_DID_E310_IEMMGM_Derating_Status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe311_DID_E311_Crash_Status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe312_DID_E312_Wheel_Speed_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe313_DID_E313_Active_discharge_status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe314_DID_E314_Available_Torque_maximum_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe315_DID_E315_Available_Torque_minimum_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe319_DID_E319_Torque_Direction_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe320_DID_E320_System_Mode_Mismatch_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData(Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_H_Ser_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData(Call_CBReadData_DID_0xe333_2002_Hu_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Hu_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData(Call_CBReadData_DID_0xe333_2002_Hv_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Hv_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData(Call_CBReadData_DID_0xe333_2002_Hw_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Hw_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData(Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_L_Ser_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData(Call_CBReadData_DID_0xe333_2002_Lu_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Lu_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData(Call_CBReadData_DID_0xe333_2002_Lv_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Lv_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData(Call_CBReadData_DID_0xe333_2002_Lw_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe333_2002_Lw_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe335_DID_E335_d_axis_current_setpoint_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe336_DID_E336_d_axis_current_feedback_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe337_DID_E337_q_axis_current_setpoint_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe338_DID_E338_q_axis_current_feedback_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe339_DID_E339_d_axis_voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe341_DID_E341_q_axis_voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe347_DID_E347_IGBT_Max_Temperature_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe348_DID_E348_Phase_U_PWM_duty_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe349_DID_E349_Phase_V_PWM_duty_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe350_DID_E350_Phase_W_PWM_duty_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe353_DID_E353_Flux_weakening_correction_factor_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe357_DID_E357_Resolve_compensated_angle_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe358_DID_E358_Resolve_angle_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe363_DID_E363_Modulation_index_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xe364_DID_E364_AURIX_Fault_Indication_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xee9f_DID_EE9F_Gate_Status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeebe_DID_EEBE_Offset_angle_status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData(Call_CBReadData_DID_0xeed1_EED1_0_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed1_EED1_0_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData(Call_CBReadData_DID_0xeed1_EED1_1_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed1_EED1_1_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData(Call_CBReadData_DID_0xeed1_EED1_2_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed1_EED1_2_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData(Call_CBReadData_DID_0xeed1_EED1_3_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed1_EED1_3_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed2_DID_EED2_SaftyTorque_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed3_DID_EED3_Safety_speed_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed4_DID_EED4_Safty_Function_Mode_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DID_0xeed5_EED5_Safety_Torque_Quality_factor_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DTCStatusindicator30_DTCStatusindicator30_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DTCTimeStamp20_DTCTimeStamp20_E_NOT_OK:
      fct_error = 1;
      break;
  }

  {
    FncPtrType DemSatellite_0_FctPtr; /* PRQA S 3408 */ /* MD_Rte_TestCode */
    DemSatellite_0_FctPtr = (FncPtrType)TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData; /* PRQA S 0313 */ /* MD_Rte_TestCode */
  }
  fct_status = TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData_Data);
  switch (fct_status)
  {
    case RTE_E_OK:
      fct_error = 0;
      break;
    case RTE_E_UNCONNECTED:
      fct_error = 1;
      break;
    case RTE_E_TIMEOUT:
      fct_error = 1;
      break;
    case RTE_E_CSDataServices_DTCTimeStamp21_DTCTimeStamp21_E_NOT_OK:
      fct_error = 1;
      break;
  }

  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_0();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_1();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_2();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_2();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_3();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_3();
  TSC_Dem_SchM_Enter_Dem_DEM_EXCLUSIVE_AREA_4();
  TSC_Dem_SchM_Exit_Dem_DEM_EXCLUSIVE_AREA_4();

  DemSatellite_0_TestDefines();


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDTCOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDTCOfEvent> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDTCOfEvent(Dem_DTCFormatType DTCFormat, uint32 *DTCOfEvent)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NO_DTC_AVAILABLE
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDTCOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetDTCOfEvent(Dem_EventIdType parg0, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) DTCOfEvent) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDTCOfEvent (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetDebouncingOfEvent
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetDebouncingOfEvent> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetDebouncingOfEvent(Dem_DebouncingStateType *DebouncingState)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetDebouncingOfEvent_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetDebouncingOfEvent(Dem_EventIdType parg0, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) DebouncingState) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetDebouncingOfEvent (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventEnableCondition
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventEnableCondition> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventEnableCondition(boolean *ConditionFullfilled)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventEnableCondition_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventEnableCondition(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) ConditionFullfilled) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventEnableCondition (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventExtendedDataRecordEx
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventExtendedDataRecordEx> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventExtendedDataRecordEx(uint8 RecordNumber, uint8 *DestBuffer, uint16 *BufSize)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_BUFFER_TOO_SMALL
 *   RTE_E_DiagnosticMonitor_DEM_NO_SUCH_ELEMENT
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventExtendedDataRecordEx_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventExtendedDataRecordEx(Dem_EventIdType parg0, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventExtendedDataRecordEx (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFailed
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFailed> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFailed(boolean *EventFailed)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFailed_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventFailed(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) EventFailed) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFailed (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventFreezeFrameDataEx
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventFreezeFrameDataEx> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventFreezeFrameDataEx(uint8 RecordNumber, uint16 DataId, uint8 *DestBuffer, uint16 *BufSize)
 *     Argument DestBuffer: uint8* is of type Dem_MaxDataValueType
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_BUFFER_TOO_SMALL
 *   RTE_E_DiagnosticMonitor_DEM_NO_SUCH_ELEMENT
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventFreezeFrameDataEx_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventFreezeFrameDataEx(Dem_EventIdType parg0, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) BufSize) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventFreezeFrameDataEx (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventStatus> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventUdsStatus(Dem_UdsStatusByteType *UDSStatusByte)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventUdsStatus(Dem_EventIdType parg0, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) UDSStatusByte) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventUdsStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetEventTested
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetEventTested> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetEventTested(boolean *EventTested)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetEventTested_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetEventTested(Dem_EventIdType parg0, P2VAR(boolean, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) EventTested) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetEventTested (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetFaultDetectionCounter
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <Event_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetFaultDetectionCounter> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetFaultDetectionCounter(sint8 *FaultDetectionCounter)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_DEM_E_NO_FDC_AVAILABLE
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetFaultDetectionCounter_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetFaultDetectionCounter(Dem_EventIdType parg0, P2VAR(sint8, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) FaultDetectionCounter) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetFaultDetectionCounter (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: GetMonitorStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <EvtInfo_VcEvTsttrPlaus>
 *   - triggered by server invocation for OperationPrototype <GetMonitorStatus> of PortPrototype <GeneralEvtInfo>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_GetMonitorStatus(Dem_MonitorStatusType *MonitorStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticInfo_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: GetMonitorStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) TSC_Inline_DemSatellite_0_Dem_GetMonitorStatus(Dem_EventIdType parg0, P2VAR(Dem_MonitorStatusType, AUTOMATIC, RTE_DEMSATELLITE_0_APPL_VAR) MonitorStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_GetMonitorStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResetEventDebounceStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventDebounceStatus> of PortPrototype <Event_VcEvTsttrPlaus>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ResetEventDebounceStatus(Dem_DebounceResetStatusType DebounceResetStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ResetEventDebounceStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) Dem_ResetEventDebounceStatus(Dem_EventIdType parg0, Dem_DebounceResetStatusType DebounceResetStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ResetEventDebounceStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: ResetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <ResetEventStatus> of PortPrototype <Event_VcEvTsttrPlaus>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_ResetEventStatus(void)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: ResetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) Dem_ResetEventStatus(Dem_EventIdType parg0) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_ResetEventStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}

/**********************************************************************************************************************
 *
 * Runnable Entity Name: SetEventStatus
 *
 * This runnable can be invoked concurrently (reentrant implementation).
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_AURIX_EEPROM_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_AURIX_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_AURIX_RST_MPL>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_AURIX_RST_SNG>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_AURIX_WATHDOG_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_COM_Busoff>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_COM_CarConfigErr>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_COM_NotConfig>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CRASH_DTC>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP1_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_CU_TEMP_HW_FLT_001>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_DiagC_ClutchService>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_EXT_UC_SPI_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Eg_HallVolWrong>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_FS_MONITIOR_ASC_FW_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_GA_BLDC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_GA_BLDC_POS_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_FindEngleAngleFailed>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_GADisengageFailure>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_GAEngageFailure>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_MoveOverThd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_TmSpdSyncFailed>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_Ga_ZeroFindDistanFailure>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_ACTV_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_CONTROL_LIMIT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_COOLT_INLET_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_CU_TEMP1_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_CU_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_OVRSPD_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP2_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_EM_STATOR_TEMP_RNG_SWT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_BOT_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_GATE_DRVR_TOP_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_OC_SWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_PHA_LOSS_MPL>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_PLAUS_SUM>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_OFFS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_OFFS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_OFFS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IAC_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_U_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_V_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_GRDT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IGBT_TEMP_W_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IMMO_AUTHFAIL>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_IMMO_NOKEY>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_INTERLOCK_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_QUIESCENT_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_COS_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_FREQ_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_001>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_OC_HWP_002>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_EXCT_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_HW_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_DFT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_OFFS_OUT_RANG>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_COS_PLAUS_AMP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_ELEC_OPEN>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_RSLVR_SIN_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_SHUT_OFF_PAH_START_UP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_TEMP_DCHA_HW>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_1_ELEC_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_1_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_2_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_OV_SWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_INV_UHVDC_UV_HWP>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_MON_TQ_PLAUS_PWR_MDL>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PA_ACTION_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PA_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PA_OpenCirc>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PA_OpenCirc_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PLOCK_Current_RNG_OUT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_5V_Fault>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_BLDC_OV_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_BLDC_UV_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_DRVB_Fault>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_HIGH>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_ECUSUPPLY_LOW>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_KL15_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_KL30_BACKUP_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_KL30_PLAUS>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_KL30_RNG_HI>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_KL30_RNG_LO>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_P12_RES_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_P15_U_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_P15_V_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_P15_W_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_P5_UC_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_WhlSnsr_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PS_WhlSnsr_Vltg_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PSnsr_ELE_FLT>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PSnsr_GRADT_Flt>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_PSnsr_RNG_NOK>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCC_OverVoltage>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCC_UnderVoltage>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvBecmPropFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvBecmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02MgmFr00Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr04Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr11Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr24MgmFr01Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropFr25Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvEcmPropXevFr06Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvSrsPropFr02Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr05Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr08Tioutd_001>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr15Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr17Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr18Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VCEvVddmPropFr19Tioutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvChkSum>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvChkSumCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvChkSumHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvChkSumWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvCntr>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvCntrCrashStsSafe>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvCntrHvSysRlySts>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvCntrWhlMotSysTqAllwd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvEMPerfPlaus>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonESpd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonErrMode>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonIPH>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonISAR>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonMode>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonMode_001>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonTrqAct>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonTrqActPlaus>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvMonTrqCmp>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvNodeMisBECM>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvNodeMisECM>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvNodeMisVDDM>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvPropCANGlbTiOutd>
 *   - triggered by server invocation for OperationPrototype <SetEventStatus> of PortPrototype <Event_VcEvTsttrPlaus>
 *
 **********************************************************************************************************************
 *
 * Runnable prototype:
 * ===================
 *   Std_ReturnType Dem_SetEventStatus(Dem_EventStatusType EventStatus)
 *
 **********************************************************************************************************************
 *
 * Available Application Errors:
 * =============================
 *   RTE_E_DiagnosticMonitor_E_NOT_OK
 *
 *********************************************************************************************************************/
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of documentation area >>                  DO NOT CHANGE THIS COMMENT!
 * Symbol: SetEventStatus_doc
 *********************************************************************************************************************/


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of documentation area >>                    DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

FUNC(Std_ReturnType, DemSatellite_0_CODE) Dem_SetEventStatus(Dem_EventIdType parg0, Dem_EventStatusType EventStatus) /* PRQA S 0850 */ /* MD_MSR_19.8 */
{
/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of runnable implementation >>             DO NOT CHANGE THIS COMMENT!
 * Symbol: Dem_SetEventStatus (returns application error)
 *********************************************************************************************************************/

  return RTE_E_OK;

/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << End of runnable implementation >>               DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/
}


#define DemSatellite_0_STOP_SEC_CODE
#include "DemSatellite_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 * DO NOT CHANGE THIS COMMENT!           << Start of function definition area >>            DO NOT CHANGE THIS COMMENT!
 *********************************************************************************************************************/

static void DemSatellite_0_TestDefines(void)
{
  /* Enumeration Data Types */

  Dem_DTCFormatType Test_Dem_DTCFormatType_V_1 = DEM_DTC_FORMAT_OBD;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_2 = DEM_DTC_FORMAT_UDS;
  Dem_DTCFormatType Test_Dem_DTCFormatType_V_3 = DEM_DTC_FORMAT_J1939;

  Dem_DTCKindType Test_Dem_DTCKindType_V_1 = DEM_DTC_KIND_ALL_DTCS;
  Dem_DTCKindType Test_Dem_DTCKindType_V_2 = DEM_DTC_KIND_EMISSION_REL_DTCS;

  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1 = DEM_SEVERITY_NO_SEVERITY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflMask = DTC_NO_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflPn = DTC_NO_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_1_BflLn = DTC_NO_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2 = DEM_SEVERITY_WWHOBD_CLASS_NO_CLASS;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_2_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3 = DEM_SEVERITY_WWHOBD_CLASS_A;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_3_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4 = DEM_SEVERITY_WWHOBD_CLASS_B1;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_4_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5 = DEM_SEVERITY_WWHOBD_CLASS_B2;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_5_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6 = DEM_SEVERITY_WWHOBD_CLASS_C;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflMask = DTC_CLASS_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflPn = DTC_CLASS_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_6_BflLn = DTC_CLASS_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7 = DEM_SEVERITY_MAINTENANCE_ONLY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_7_BflLn = DTC_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8 = DEM_SEVERITY_CHECK_AT_NEXT_HALT;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_8_BflLn = DTC_SEVERITY_BflLn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9 = DEM_SEVERITY_CHECK_IMMEDIATELY;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflMask = DTC_SEVERITY_BflMask;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflPn = DTC_SEVERITY_BflPn;
  Dem_DTCSeverityType Test_Dem_DTCSeverityType_V_9_BflLn = DTC_SEVERITY_BflLn;

  Dem_DTRControlType Test_Dem_DTRControlType_V_1 = DEM_DTR_CTL_NORMAL;
  Dem_DTRControlType Test_Dem_DTRControlType_V_2 = DEM_DTR_CTL_NO_MAX;
  Dem_DTRControlType Test_Dem_DTRControlType_V_3 = DEM_DTR_CTL_NO_MIN;
  Dem_DTRControlType Test_Dem_DTRControlType_V_4 = DEM_DTR_CTL_RESET;
  Dem_DTRControlType Test_Dem_DTRControlType_V_5 = DEM_DTR_CTL_INVISIBLE;

  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_1 = DEM_DEBOUNCE_STATUS_FREEZE;
  Dem_DebounceResetStatusType Test_Dem_DebounceResetStatusType_V_2 = DEM_DEBOUNCE_STATUS_RESET;

  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1 = DEM_TEMPORARILY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflMask = DEM_TEMPORARILY_DEFECTIVE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflPn = DEM_TEMPORARILY_DEFECTIVE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_1_BflLn = DEM_TEMPORARILY_DEFECTIVE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2 = DEM_FINALLY_DEFECTIVE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflMask = DEM_FINALLY_DEFECTIVE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflPn = DEM_FINALLY_DEFECTIVE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_2_BflLn = DEM_FINALLY_DEFECTIVE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3 = DEM_TEMPORARILY_HEALED;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflMask = DEM_TEMPORARILY_HEALED_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflPn = DEM_TEMPORARILY_HEALED_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_3_BflLn = DEM_TEMPORARILY_HEALED_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4 = DEM_TEST_COMPLETE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflMask = DEM_TEST_COMPLETE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflPn = DEM_TEST_COMPLETE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_4_BflLn = DEM_TEST_COMPLETE_BflLn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5 = DEM_DTR_UPDATE;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflMask = DEM_DTR_UPDATE_BflMask;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflPn = DEM_DTR_UPDATE_BflPn;
  Dem_DebouncingStateType Test_Dem_DebouncingStateType_V_5_BflLn = DEM_DTR_UPDATE_BflLn;

  Dem_EventStatusType Test_Dem_EventStatusType_V_1 = DEM_EVENT_STATUS_PASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_2 = DEM_EVENT_STATUS_FAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_3 = DEM_EVENT_STATUS_PREPASSED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_4 = DEM_EVENT_STATUS_PREFAILED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_5 = DEM_EVENT_STATUS_FDC_THRESHOLD_REACHED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_6 = DEM_EVENT_STATUS_PASSED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_7 = DEM_EVENT_STATUS_FAILED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_8 = DEM_EVENT_STATUS_PREPASSED_CONDITIONS_NOT_FULFILLED;
  Dem_EventStatusType Test_Dem_EventStatusType_V_9 = DEM_EVENT_STATUS_PREFAILED_CONDITIONS_NOT_FULFILLED;

  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_1 = DEM_INDICATOR_OFF;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_2 = DEM_INDICATOR_CONTINUOUS;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_3 = DEM_INDICATOR_BLINKING;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_4 = DEM_INDICATOR_BLINK_CONT;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_5 = DEM_INDICATOR_SLOW_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_6 = DEM_INDICATOR_FAST_FLASH;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_7 = DEM_INDICATOR_ON_DEMAND;
  Dem_IndicatorStatusType Test_Dem_IndicatorStatusType_V_8 = DEM_INDICATOR_SHORT;

  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_1 = DEM_INIT_MONITOR_CLEAR;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_2 = DEM_INIT_MONITOR_RESTART;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_3 = DEM_INIT_MONITOR_REENABLED;
  Dem_InitMonitorReasonType Test_Dem_InitMonitorReasonType_V_4 = DEM_INIT_MONITOR_STORAGE_REENABLED;

  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_1 = DEM_IUMPR_GENERAL_DENOMINATOR;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_2 = DEM_IUMPR_DEN_COND_COLDSTART;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_3 = DEM_IUMPR_DEN_COND_EVAP;
  Dem_IumprDenomCondIdType Test_Dem_IumprDenomCondIdType_V_4 = DEM_IUMPR_DEN_COND_500MI;

  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_1 = DEM_IUMPR_DEN_STATUS_NOT_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_2 = DEM_IUMPR_DEN_STATUS_REACHED;
  Dem_IumprDenomCondStatusType Test_Dem_IumprDenomCondStatusType_V_3 = DEM_IUMPR_DEN_STATUS_INHIBITED;

  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_1 = DEM_IUMPR_BOOSTPRS;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_2 = DEM_IUMPR_CAT1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_3 = DEM_IUMPR_CAT2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_4 = DEM_IUMPR_EGR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_5 = DEM_IUMPR_EGSENSOR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_6 = DEM_IUMPR_EVAP;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_7 = DEM_IUMPR_NMHCCAT;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_8 = DEM_IUMPR_NOXADSORB;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_9 = DEM_IUMPR_NOXCAT;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_10 = DEM_IUMPR_OXS1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_11 = DEM_IUMPR_OXS2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_12 = DEM_IUMPR_PMFILTER;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_13 = DEM_IUMPR_PRIVATE;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_14 = DEM_IUMPR_SAIR;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_15 = DEM_IUMPR_SECOXS1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_16 = DEM_IUMPR_SECOXS2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_17 = DEM_IUMPR_FLSYS;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_18 = DEM_IUMPR_AFRI1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_19 = DEM_IUMPR_AFRI2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_20 = DEM_IUMPR_PF1;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_21 = DEM_IUMPR_PF2;
  Dem_IumprReadinessGroupType Test_Dem_IumprReadinessGroupType_V_22 = DEM_IUMPR_ALLGROUPS;

  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1 = DEM_MONITOR_STATUS_TF;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflMask = DEM_MONITOR_STATUS_TF_BflMask;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflPn = DEM_MONITOR_STATUS_TF_BflPn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_1_BflLn = DEM_MONITOR_STATUS_TF_BflLn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2 = DEM_MONITOR_STATUS_TNCTOC;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflMask = DEM_MONITOR_STATUS_TNCTOC_BflMask;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflPn = DEM_MONITOR_STATUS_TNCTOC_BflPn;
  Dem_MonitorStatusType Test_Dem_MonitorStatusType_V_2_BflLn = DEM_MONITOR_STATUS_TNCTOC_BflLn;

  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_1 = DEM_CYCLE_STATE_START;
  Dem_OperationCycleStateType Test_Dem_OperationCycleStateType_V_2 = DEM_CYCLE_STATE_END;

  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1 = DEM_UDS_STATUS_TF;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflMask = DEM_UDS_STATUS_TF_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflPn = DEM_UDS_STATUS_TF_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_1_BflLn = DEM_UDS_STATUS_TF_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2 = DEM_UDS_STATUS_TFTOC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflMask = DEM_UDS_STATUS_TFTOC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflPn = DEM_UDS_STATUS_TFTOC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_2_BflLn = DEM_UDS_STATUS_TFTOC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3 = DEM_UDS_STATUS_PDTC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflMask = DEM_UDS_STATUS_PDTC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflPn = DEM_UDS_STATUS_PDTC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_3_BflLn = DEM_UDS_STATUS_PDTC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4 = DEM_UDS_STATUS_CDTC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflMask = DEM_UDS_STATUS_CDTC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflPn = DEM_UDS_STATUS_CDTC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_4_BflLn = DEM_UDS_STATUS_CDTC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5 = DEM_UDS_STATUS_TNCSLC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflMask = DEM_UDS_STATUS_TNCSLC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflPn = DEM_UDS_STATUS_TNCSLC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_5_BflLn = DEM_UDS_STATUS_TNCSLC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6 = DEM_UDS_STATUS_TFSLC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflMask = DEM_UDS_STATUS_TFSLC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflPn = DEM_UDS_STATUS_TFSLC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_6_BflLn = DEM_UDS_STATUS_TFSLC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7 = DEM_UDS_STATUS_TNCTOC;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflMask = DEM_UDS_STATUS_TNCTOC_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflPn = DEM_UDS_STATUS_TNCTOC_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_7_BflLn = DEM_UDS_STATUS_TNCTOC_BflLn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8 = DEM_UDS_STATUS_WIR;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflMask = DEM_UDS_STATUS_WIR_BflMask;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflPn = DEM_UDS_STATUS_WIR_BflPn;
  Dem_UdsStatusByteType Test_Dem_UdsStatusByteType_V_8_BflLn = DEM_UDS_STATUS_WIR_BflLn;
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
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_TestCode:
     Reason:     This justification is used within the generated test code by the Rte Analyzer.
     Risk:       No functional risk.
     Prevention: Not required.

*/
