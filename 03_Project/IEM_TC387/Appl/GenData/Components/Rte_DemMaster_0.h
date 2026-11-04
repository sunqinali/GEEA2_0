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
 *          File:  Rte_DemMaster_0.h
 *        Config:  IEM_TC387.dpa
 *   ECU-Project:  IEM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1900078
 *
 *   Description:  Application header file for SW-C <DemMaster_0>
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_DEMMASTER_0_H
# define _RTE_DEMMASTER_0_H

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

# include "Rte_DemMaster_0_Type.h"
# include "Rte_DataHandleType.h"


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBInitEvt_PS_5V_Fault_InitMonitorForEvent(Dem_InitMonitorReasonType InitMonitorReason); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(P2VAR(DataArrayType_uint8_4, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(P2VAR(DataArrayType_uint8_3, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_H_Ser_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_H_Ser_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hu_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hv_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hv_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hw_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hw_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_L_Ser_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_L_Ser_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lu_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lu_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lv_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lv_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lw_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lw_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_0_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_0_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_1_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_1_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_2_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_2_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_3_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_3_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(P2VAR(DataArrayType_uint8_2, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(P2VAR(DataArrayType_uint8_1, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(P2VAR(DataArrayType_uint8_4, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, RTE_CODE) Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(P2VAR(DataArrayType_uint8_4, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) Data); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE

/**********************************************************************************************************************
 * Rte_Call_<p>_<o> (unmapped) for synchronous C/S communication
 *********************************************************************************************************************/
#  define Rte_Call_CBInitEvt_PS_5V_Fault_InitMonitorForEvent Rte_Call_DemMaster_0_CBInitEvt_PS_5V_Fault_InitMonitorForEvent
#  define Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData
#  define Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData
#  define Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData
#  define Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData
#  define Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData
#  define Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData
#  define Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData
#  define Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData
#  define Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData
#  define Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData
#  define Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData
#  define Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData
#  define Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData
#  define Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData
#  define Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData
#  define Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData
#  define Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData
#  define Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData
#  define Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData
#  define Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData
#  define Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData
#  define Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_H_Ser_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hu_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hv_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Hw_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_L_Ser_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lu_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lv_ReadData
#  define Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe333_2002_Lw_ReadData
#  define Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData
#  define Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData
#  define Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData
#  define Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData
#  define Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData
#  define Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData
#  define Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData
#  define Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData
#  define Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData
#  define Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData
#  define Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData
#  define Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData
#  define Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData
#  define Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData
#  define Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData
#  define Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData
#  define Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData
#  define Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData
#  define Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData
#  define Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData
#  define Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData
#  define Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData
#  define Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData
#  define Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData
#  define Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData
#  define Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData
#  define Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData
#  define Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_0_ReadData
#  define Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_1_ReadData
#  define Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_2_ReadData
#  define Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed1_EED1_3_ReadData
#  define Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData
#  define Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData
#  define Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData
#  define Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData Rte_Call_DemMaster_0_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData
#  define Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData Rte_Call_DemMaster_0_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData
#  define Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData
#  define Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData Rte_Call_DemMaster_0_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData


# endif /* !defined(RTE_CORE) */


# define DemMaster_0_START_SEC_CODE
# include "DemMaster_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * Runnable entities
 *********************************************************************************************************************/

# ifndef RTE_CORE
#  define RTE_RUNNABLE_Dem_MasterMainFunction Dem_MasterMainFunction
#  define RTE_RUNNABLE_GetDTCOfEvent Dem_GetDTCOfEvent
#  define RTE_RUNNABLE_GetDTCStatusAvailabilityMask Dem_GetDTCStatusAvailabilityMask
#  define RTE_RUNNABLE_GetDebouncingOfEvent Dem_GetDebouncingOfEvent
#  define RTE_RUNNABLE_GetEventEnableCondition Dem_GetEventEnableCondition
#  define RTE_RUNNABLE_GetEventExtendedDataRecordEx Dem_GetEventExtendedDataRecordEx
#  define RTE_RUNNABLE_GetEventFailed Dem_GetEventFailed
#  define RTE_RUNNABLE_GetEventFreezeFrameDataEx Dem_GetEventFreezeFrameDataEx
#  define RTE_RUNNABLE_GetEventStatus Dem_GetEventUdsStatus
#  define RTE_RUNNABLE_GetEventTested Dem_GetEventTested
#  define RTE_RUNNABLE_GetEventUdsStatus Dem_GetEventUdsStatus
#  define RTE_RUNNABLE_GetFaultDetectionCounter Dem_GetFaultDetectionCounter
#  define RTE_RUNNABLE_GetIndicatorStatus Dem_GetIndicatorStatus
#  define RTE_RUNNABLE_GetMonitorStatus Dem_GetMonitorStatus
#  define RTE_RUNNABLE_GetOperationCycleState Dem_GetOperationCycleState
#  define RTE_RUNNABLE_PostRunRequested Dem_PostRunRequested
#  define RTE_RUNNABLE_SetEnableCondition Dem_SetEnableCondition
#  define RTE_RUNNABLE_SetOperationCycleState Dem_SetOperationCycleState
# endif

FUNC(void, DemMaster_0_CODE) Dem_MasterMainFunction(void); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDTCOfEvent(Dem_EventIdType EventId, Dem_DTCFormatType DTCFormat, P2VAR(uint32, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DTCOfEvent); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDTCStatusAvailabilityMask(uint8 ClientId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DTCStatusMask); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetDebouncingOfEvent(Dem_EventIdType EventId, P2VAR(Dem_DebouncingStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DebouncingState); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventEnableCondition(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) ConditionFullfilled); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventExtendedDataRecordEx(Dem_EventIdType EventId, uint8 RecordNumber, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFailed(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) EventFailed); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# ifdef RTE_PTR2ARRAYBASETYPE_PASSING
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(uint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# else
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventFreezeFrameDataEx(Dem_EventIdType EventId, uint8 RecordNumber, uint16 DataId, P2VAR(Dem_MaxDataValueType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) DestBuffer, P2VAR(uint16, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) BufSize); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
# endif
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) UDSStatusByte); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventTested(Dem_EventIdType EventId, P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) EventTested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetEventUdsStatus(Dem_EventIdType EventId, P2VAR(Dem_UdsStatusByteType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) UDSStatusByte); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetFaultDetectionCounter(Dem_EventIdType EventId, P2VAR(sint8, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) FaultDetectionCounter); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetIndicatorStatus(uint8 parg0, P2VAR(Dem_IndicatorStatusType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) IndicatorStatus); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetMonitorStatus(Dem_EventIdType EventId, P2VAR(Dem_MonitorStatusType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) MonitorStatus); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_GetOperationCycleState(Dem_OperationCycleIdType parg0, P2VAR(Dem_OperationCycleStateType, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) CycleState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_PostRunRequested(P2VAR(boolean, AUTOMATIC, RTE_DEMMASTER_0_APPL_VAR) IsRequested); /* PRQA S 0850, 3451 */ /* MD_MSR_19.8, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_SetEnableCondition(uint8 parg0, boolean ConditionFulfilled); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */
FUNC(Std_ReturnType, DemMaster_0_CODE) Dem_SetOperationCycleState(Dem_OperationCycleIdType parg0, Dem_OperationCycleStateType CycleState); /* PRQA S 0850, 1330, 3451 */ /* MD_MSR_19.8, MD_Rte_1330, MD_Rte_3451 */

# define DemMaster_0_STOP_SEC_CODE
# include "DemMaster_0_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


# ifndef RTE_CORE
/**********************************************************************************************************************
 * Application errors
 *********************************************************************************************************************/

#  define RTE_E_CSDataServices_DID_0xd003_DID_D003_Vehicle_Speed_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xdd00_DID_DD00_Global_Real_Time_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xdd01_DID_DD01_Total_Distance_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xdd0a_DID_DD0A_Usage_Mode_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xdd0c_DID_DD0C_Electric_Power_Level_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe300_DID_E300_HVDC_Voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe301_DID_E301_HVDC_Current__E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe303_DID_E303_Motor_Speed__E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe304_DID_E304_Actual_Torque_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe306_DID_E306_Motor_Temperature_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe307_DID_E307_System_Mode_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe308_DID_E308_ECM_Torque_Request_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe309_DID_E309_ECM_Mode_Request_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe310_DID_E310_IEMMGM_Derating_Status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe311_DID_E311_Crash_Status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe312_DID_E312_Wheel_Speed_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe313_DID_E313_Active_discharge_status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe314_DID_E314_Available_Torque_maximum_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe315_DID_E315_Available_Torque_minimum_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe319_DID_E319_Torque_Direction_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe320_DID_E320_System_Mode_Mismatch_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_H_Ser_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Hu_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Hv_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Hw_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_L_Ser_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Lu_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Lv_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe333_2002_Lw_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe335_DID_E335_d_axis_current_setpoint_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe336_DID_E336_d_axis_current_feedback_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe337_DID_E337_q_axis_current_setpoint_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe338_DID_E338_q_axis_current_feedback_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe339_DID_E339_d_axis_voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe341_DID_E341_q_axis_voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe347_DID_E347_IGBT_Max_Temperature_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe348_DID_E348_Phase_U_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe349_DID_E349_Phase_V_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe350_DID_E350_Phase_W_PWM_duty_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe353_DID_E353_Flux_weakening_correction_factor_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe357_DID_E357_Resolve_compensated_angle_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe358_DID_E358_Resolve_angle_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe363_DID_E363_Modulation_index_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xe364_DID_E364_AURIX_Fault_Indication_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xee9f_DID_EE9F_Gate_Status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeebe_DID_EEBE_Offset_angle_status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed1_EED1_0_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed1_EED1_1_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed1_EED1_2_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed1_EED1_3_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed2_DID_EED2_SaftyTorque_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed3_DID_EED3_Safety_speed_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed4_DID_EED4_Safty_Function_Mode_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DID_0xeed5_EED5_Safety_Torque_Quality_factor_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DTCStatusindicator30_DTCStatusindicator30_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DTCTimeStamp20_DTCTimeStamp20_E_NOT_OK (1U)

#  define RTE_E_CSDataServices_DTCTimeStamp21_DTCTimeStamp21_E_NOT_OK (1U)

#  define RTE_E_CallbackInitMonitorForEvent_E_NOT_OK (1U)

#  define RTE_E_DemServices_E_NOT_OK (1U)

#  define RTE_E_EnableCondition_E_NOT_OK (1U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_BUFFER_TOO_SMALL (21U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_DTC_AVAILABLE (10U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_E_NO_FDC_AVAILABLE (14U)

#  define RTE_E_GeneralDiagnosticInfo_DEM_NO_SUCH_ELEMENT (48U)

#  define RTE_E_GeneralDiagnosticInfo_E_NOT_OK (1U)

#  define RTE_E_IndicatorStatus_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_NOT_OK (1U)

#  define RTE_E_OperationCycle_E_OK (0U)
# endif /* !defined(RTE_CORE) */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_DEMMASTER_0_H */

/**********************************************************************************************************************
 MISRA 2004 violations and justifications
 *********************************************************************************************************************/

/* module specific MISRA deviations:
   MD_Rte_1330:  MISRA rule: 16.4
     Reason:     The RTE Generator uses default names for parameter identifiers of port defined arguments of service modules.
                 Therefore the parameter identifiers in the function declaration differs from those of the implementation of the BSW module.
     Risk:       No functional risk.
     Prevention: Not required.

   MD_Rte_3451:  MISRA rule: 8.8
     Reason:     Schedulable entities are declared by the RTE and also by the BSW modules.
     Risk:       No functional risk.
     Prevention: Not required.

*/
