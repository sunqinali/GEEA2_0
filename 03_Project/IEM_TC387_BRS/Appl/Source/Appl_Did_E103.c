/**********************************************************************************************************************
 * Appl_Did_E103.c — Dcm DID 0xE103 providers (replaces Rte UNCONNECTED stubs)
 * Re-run Tasking/_gen_did_e103.py after each RTE generate.
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Rte_Type.h"
#include "Compiler.h"
#include "Appl_CarConfig_Bringup.h"

#ifndef RTE_CODE
# define RTE_CODE
#endif
#ifndef RTE_DCM_APPL_VAR
# define RTE_DCM_APPL_VAR
#endif

static Std_ReturnType Appl_Did_E103_CondOk(
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  (void)OpStatus;
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  return E_OK;
}

static Std_ReturnType Appl_Did_E103_ReadCount(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  (void)OpStatus;
  if (Data != NULL_PTR)
  {
    Data[0] = Appl_CarConfig_GetFaultCount();
  }
  return E_OK;
}

static Std_ReturnType Appl_Did_E103_ReadCcpNum(
  uint8 slot,
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  uint16 ccp = 0u;
  uint8 inv = 0u;
  (void)OpStatus;
  (void)Appl_CarConfig_GetFault(slot, &ccp, &inv);
  if (Data != NULL_PTR)
  {
    Data[0] = (uint8)((ccp >> 8) & 0xFFu);
    Data[1] = (uint8)(ccp & 0xFFu);
  }
  return E_OK;
}

static Std_ReturnType Appl_Did_E103_ReadInv(
  uint8 slot,
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  uint16 ccp = 0u;
  uint8 inv = 0u;
  (void)OpStatus;
  (void)Appl_CarConfig_GetFault(slot, &ccp, &inv);
  if (Data != NULL_PTR)
  {
    Data[0] = inv;
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_10_5th_parameter_number_of_the_car_configuration_data_450C8300_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(4u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_11_5th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(4u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_12_6th_parameter_number_of_the_car_configuration_data_E81803DD_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(5u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_13_6th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(5u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_14_7th_parameter_number_of_the_car_configuration_data_8B2384BA_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(6u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_15_7th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(6u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_16_8th_parameter_number_of_the_car_configuration_data_2E2F0597_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(7u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_17_8th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(7u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_18_9th_parameter_number_of_the_car_configuration_data_D13A8674_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(8u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_19_9th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(8u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_1_Number_of_invalid_car_configuration_parameter_value_7E36D2F5_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCount(OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_20_10th_parameter_number_of_the_car_configuration_dat_86F3B3DF_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(9u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_21_10th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(9u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_2_1st_parameter_number_of_the_car_configuration_data_C808D86E_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(0u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_3_1st_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(0u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_4_2nd_parameter_number_of_the_car_configuration_data_0046C356_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(1u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_5_2nd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(1u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_6_3rd_parameter_number_of_the_car_configuration_data_DA502437_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(2u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_7_3rd_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(2u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_8_4th_parameter_number_of_the_car_configuration_data_125EA492_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadCcpNum(3u, OpStatus, Data);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_E103_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_DID_E103_Car_Configuration_Parameter_Faults_DID_E103_9_4th_parameter_invalid_value_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  return Appl_Did_E103_ReadInv(3u, OpStatus, Data);
}

