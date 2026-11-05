/**********************************************************************************************************************
 * Appl_Diag_Bringup.c — 编程前置条件 RID 0x0206 + Security L3/L4 桩（明确响应，避免 UNCONNECTED）
 * RTE 再生后重跑 Tasking/_gen_diag_bringup.py
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
#ifndef RTE_DCM_APPL_DATA
# define RTE_DCM_APPL_DATA
#endif

/* 1=允许进编程会话（bring-up 默认）；调试器改 0 可测“条件不满足”正响应 */
volatile uint8 Appl_ProgPrecond_Allow = 1u;
volatile uint8 Appl_ProgPrecond_LastAllow = 0xFFu;
volatile uint8 Appl_Sec_L3_SeedReqCnt = 0u;
volatile uint8 Appl_Sec_L4_SeedReqCnt = 0u;
volatile uint8 Appl_Sec_L3_KeyFailCnt = 0u;
volatile uint8 Appl_Sec_L4_KeyFailCnt = 0u;

#define APPL_SEC_COMPARE_KEY_FAILED ((Std_ReturnType)11u)

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_RoutineServices_Check_programming_pre_conditions_Start(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Out_New_Bit_Field,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR)
      Out_RID_0206_Start_Pr_3_Condition_Fullfilled_To_Enter_Programming_Session,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  uint8 allow = Appl_ProgPrecond_Allow;

  (void)OpStatus;
  Appl_ProgPrecond_LastAllow = allow;

  if (Out_New_Bit_Field != NULL_PTR)
  {
    /* bit0: 总条件（与第二字节一致）；其余位 bring-up 清零 */
    *Out_New_Bit_Field = (allow != 0u) ? 0x01u : 0x00u;
  }
  if (Out_RID_0206_Start_Pr_3_Condition_Fullfilled_To_Enter_Programming_Session != NULL_PTR)
  {
    *Out_RID_0206_Start_Pr_3_Condition_Fullfilled_To_Enter_Programming_Session =
        (allow != 0u) ? 0x01u : 0x00u;
  }
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_GetSeed(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  (void)OpStatus;
  Appl_Sec_L3_SeedReqCnt++;
  if (Seed != NULL_PTR)
  {
    Seed[0] = 0xA5u;
    Seed[1] = 0x5Au;
    Seed[2] = Appl_Sec_L3_SeedReqCnt;
  }
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_CommonUnlock_Level_3_CompareKey(
  P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key,
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  (void)Key;
  (void)OpStatus;
  Appl_Sec_L3_KeyFailCnt++;
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  /* 明确失败，非 UNCONNECTED / 超时；量产换真实算法 */
  return APPL_SEC_COMPARE_KEY_FAILED;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_GetSeed(
  Dcm_OpStatusType OpStatus,
  P2VAR(uint8, AUTOMATIC, RTE_DCM_APPL_VAR) Seed,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  (void)OpStatus;
  Appl_Sec_L4_SeedReqCnt++;
  if (Seed != NULL_PTR)
  {
    Seed[0] = 0xB6u;
    Seed[1] = 0x6Bu;
    Seed[2] = Appl_Sec_L4_SeedReqCnt;
  }
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  return E_OK;
}

FUNC(Std_ReturnType, RTE_CODE) Rte_Call_Dcm_SecurityAccess_ImmoUnlocked_Level_4_CompareKey(
  P2CONST(uint8, AUTOMATIC, RTE_DCM_APPL_DATA) Key,
  Dcm_OpStatusType OpStatus,
  P2VAR(Dcm_NegativeResponseCodeType, AUTOMATIC, RTE_DCM_APPL_VAR) ErrorCode)
{
  (void)Key;
  (void)OpStatus;
  Appl_Sec_L4_KeyFailCnt++;
  if (ErrorCode != NULL_PTR)
  {
    *ErrorCode = 0u;
  }
  return APPL_SEC_COMPARE_KEY_FAILED;
}
