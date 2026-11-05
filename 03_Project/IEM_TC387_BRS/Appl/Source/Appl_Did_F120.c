/**********************************************************************************************************************
 * Appl_Did_F120.c — 平台 DID 0xF120 Application Diagnostic Database Part Number
 * Main 4B + Variant 3B；RTE 再生后重跑 Tasking/_gen_did_f120.py
 *********************************************************************************************************************/
#include "Std_Types.h"
#include "Rte_Type.h"
#include "Compiler.h"

#ifndef RTE_CODE
# define RTE_CODE
#endif
#ifndef RTE_DCM_APPL_VAR
# define RTE_DCM_APPL_VAR
#endif

/* Bring-up 占位；量产零件号从标定/NvM 替换 */
static const uint8 Appl_Did_F120_Main[4] = { (uint8)'I', (uint8)'E', (uint8)'M', (uint8)'1' };
static const uint8 Appl_Did_F120_Variant[3] = { (uint8)'0', (uint8)'0', (uint8)'1' };

static Std_ReturnType Appl_Did_F120_CondOk(
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

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_F120_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Main_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  uint8 i;
  (void)OpStatus;
  if (Data != NULL_PTR)
  {
    for (i = 0u; i < 4u; i++)
    {
      Data[i] = Appl_Did_F120_Main[i];
    }
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ConditionCheckRead(Dcm_OpStatusType OpStatus, P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  return Appl_Did_F120_CondOk(OpStatus, ErrorCode);
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_DataServices_Application_Diagnostic_Database_Part_Number_Partnumber_Variant_ReadData(Dcm_OpStatusType OpStatus, P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Data)
{
  uint8 i;
  (void)OpStatus;
  if (Data != NULL_PTR)
  {
    for (i = 0u; i < 3u; i++)
    {
      Data[i] = Appl_Did_F120_Variant[i];
    }
  }
  return E_OK;
}
