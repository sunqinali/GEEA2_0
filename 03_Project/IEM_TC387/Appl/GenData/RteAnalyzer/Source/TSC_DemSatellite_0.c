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
 *          File:  TSC_DemSatellite_0.c
 *        Config:  IEM_TC387.dpa
 *   ECU-Project:  IEM
 *
 *     Generator:  MICROSAR RTE Generator Version 4.19.0
 *                 RTE Core Version 1.19.0
 *       License:  CBD1900078
 *
 *   Description:  Implementation of wrapper software component for Bte-based Rte test cases
 *********************************************************************************************************************/
#include "Rte_DemSatellite_0.h"
#include "TSC_DemSatellite_0.h"















     /* Client Server Interfaces: */


     /* Service calls */
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xd003_DID_D003_Vehicle_Speed_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xdd00_DID_DD00_Global_Real_Time_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xdd01_DID_DD01_Total_Distance_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xdd02_DID_DD02_Vehicle_Battery_Voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xdd0a_DID_DD0A_Usage_Mode_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xdd0c_DID_DD0C_Electric_Power_Level_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe300_DID_E300_HVDC_Voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe301_DID_E301_HVDC_Current__ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe303_DID_E303_Motor_Speed__ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe304_DID_E304_Actual_Torque_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe305_DID_E305_Inverter_IGBT_Junction_Temp_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe306_DID_E306_Motor_Temperature_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe307_DID_E307_System_Mode_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe308_DID_E308_ECM_Torque_Request_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe309_DID_E309_ECM_Mode_Request_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe310_DID_E310_IEMMGM_Derating_Status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe311_DID_E311_Crash_Status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe312_DID_E312_Wheel_Speed_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe313_DID_E313_Active_discharge_status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe314_DID_E314_Available_Torque_maximum_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe315_DID_E315_Available_Torque_minimum_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe319_DID_E319_Torque_Direction_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe320_DID_E320_System_Mode_Mismatch_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe324_DID_E324_Motor_Derating_reason_of_IEMMGM_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_H_Ser_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Hu_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Hv_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Hw_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_L_Ser_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Lu_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Lv_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe333_2002_Lw_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe335_DID_E335_d_axis_current_setpoint_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe336_DID_E336_d_axis_current_feedback_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe337_DID_E337_q_axis_current_setpoint_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe338_DID_E338_q_axis_current_feedback_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe339_DID_E339_d_axis_voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe341_DID_E341_q_axis_voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe346_DID_E346_ECM_Torque_Allowed_Status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe347_DID_E347_IGBT_Max_Temperature_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe348_DID_E348_Phase_U_PWM_duty_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe349_DID_E349_Phase_V_PWM_duty_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe350_DID_E350_Phase_W_PWM_duty_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe353_DID_E353_Flux_weakening_correction_factor_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe357_DID_E357_Resolve_compensated_angle_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe358_DID_E358_Resolve_angle_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe363_DID_E363_Modulation_index_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xe364_DID_E364_AURIX_Fault_Indication_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xee9a_DID_EE9A_Inverter_Coolant_Temperature_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xee9c_DID_EE9C_Transient_Phase_Current_A_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xee9d_DID_EE9D_Transient_Phase_Current_B_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xee9e_DID_EE9E_Transient_Phase_Current_C_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xee9f_DID_EE9F_Gate_Status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeeb2_DID_EEB2_Three_Phase_Motor_Current_RMS_Current_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeeb5_DID_EEB5_IEMMGM_current_torque_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeeb6_DID_EEB6_ECM_Power_Limitation_maximum_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeeb7_DID_EEB7_ECM_Power_Limitation_minimum_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeeb8_DID_EEB8_HV_voltage_received_from_BECM_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeebe_DID_EEBE_Offset_angle_status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeebf_DID_EEBF_HV_Main_Relay_Status_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeec3_DID_EEC3_ECU_power_supply_Voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeec4_DID_EEC4_Charging_Power_Sustain_RelayCPSR_Voltage_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed1_EED1_0_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed1_EED1_1_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed1_EED1_2_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed1_EED1_3_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed2_DID_EED2_SaftyTorque_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed3_DID_EED3_Safety_speed_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed4_DID_EED4_Safty_Function_Mode_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DID_0xeed5_EED5_Safety_Torque_Quality_factor_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DTCStatusindicator30_DTCStatusindicator30_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DTCTimeStamp20_DTCTimeStamp20_ReadData(Data);
}
Std_ReturnType TSC_DemSatellite_0_Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(uint8 *Data)
{
  return Rte_Call_CBReadData_DTCTimeStamp21_DTCTimeStamp21_ReadData(Data);
}


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */













     /* Client Server Interfaces: */


     /* Service calls */


     /* Mode Interfaces */




     /* Trigger Interfaces */

     /* Inter-Runnable variables */







     /* DemSatellite_0 */
      /* DemSatellite_0 */



