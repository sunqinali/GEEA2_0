/**********************************************************************************************************************
 * Appl_CanStack_Status.c — sample CAN stack on Core0 (~100 ms via Spi_MainFunction_Handling)
 *********************************************************************************************************************/
#include "Appl_CanStack_Status.h"
#include "Appl_CanTrcv_Smoke.h"
#include "Appl_Com_Bringup.h"
#include "Appl_Dem_Platform.h"
#include "Appl_CarConfig_Bringup.h"
#include "Appl_ComGroup_Bringup.h"
#include "ComM.h"
#include "ComM_Cfg.h"
#include "CanSM_ComM.h"
#include "CanSM_Cfg.h"
#include "CanIf.h"
#include "CanIf_Cfg.h"
#include "CanNm.h"
#include "NmStack_Types.h"

volatile uint8 Appl_Can_ComMMode = 0xFFu;
volatile uint8 Appl_Can_CanSMMode = 0xFFu;
volatile uint8 Appl_Can_CtrlMode = 0xFFu;
volatile uint8 Appl_Can_TrcvMode = 0xFFu;
volatile uint8 Appl_Can_CanSMState = 0xFFu;
volatile uint8 Appl_Can_BusOffCnt = 0u;
volatile uint8 Appl_Can_ReqComMode = 0xFFu;
volatile uint8 Appl_Can_NmState = 0xFFu;
volatile uint8 Appl_Can_NmMode = 0xFFu;
volatile uint8 Appl_Can_PduMode = 0xFFu;
volatile Std_ReturnType Appl_Can_ComMRet = E_NOT_OK;
volatile Std_ReturnType Appl_Can_CanSMRet = E_NOT_OK;
volatile Std_ReturnType Appl_Can_CtrlRet = E_NOT_OK;
volatile Std_ReturnType Appl_Can_TrcvRet = E_NOT_OK;
volatile Std_ReturnType Appl_Can_NmRet = E_NOT_OK;
volatile Std_ReturnType Appl_Can_PduModeRet = E_NOT_OK;
volatile uint8 Appl_Can_StackOk = 0u;
volatile uint8 Appl_Can_NmOk = 0u;
volatile uint8 Appl_Bringup_Ok = 0u;
volatile uint8 Appl_Bringup_FailFlags = 0xFFu;
volatile uint16 Appl_Can_SampleCnt = 0u;

void Appl_CanStack_Status_Sample(void)
{
  ComM_ModeType comM = COMM_NO_COMMUNICATION;
  ComM_ModeType canSm = COMM_NO_COMMUNICATION;
  CanIf_ControllerModeType ctrl = CANIF_CS_UNINIT;
  CanTrcv_TrcvModeType trcv = CANTRCV_TRCVMODE_SLEEP;
  Nm_StateType nmState = NM_STATE_UNINIT;
  Nm_ModeType nmMode = NM_MODE_BUS_SLEEP;
  uint8 fail = 0u;

  Appl_Can_SampleCnt++;

  Appl_Can_ComMRet = ComM_GetCurrentComMode(
      ComMConf_ComMUser_PropulsionCAN_IEM_04f8de22, &comM);
  Appl_Can_ComMMode = (uint8)comM;

  Appl_Can_CanSMRet = CanSM_GetCurrentComMode(
      ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a, &canSm);
  Appl_Can_CanSMMode = (uint8)canSm;

  Appl_Can_CtrlRet = CanIf_GetControllerMode(
      CanIfConf_CanIfCtrlCfg_PropulsionCAN_6c6185ef, &ctrl);
  Appl_Can_CtrlMode = (uint8)ctrl;

  Appl_Can_TrcvRet = CanIf_GetTrcvMode(
      &trcv, CanIfConf_CanIfTrcvCfg_CanIfTrcvCfg_Tja1145);
  Appl_Can_TrcvMode = (uint8)trcv;

  Appl_Can_CanSMState = CanSM_ChannelVarRecord[0].CanSM_CurrentState;
  Appl_Can_BusOffCnt = CanSM_ChannelVarRecord[0].CanSM_BusOffCounter;
  Appl_Can_ReqComMode = (uint8)CanSM_ChannelVarRecord[0].CanSM_RequestedComMode;

  Appl_Can_NmRet = CanNm_GetState(
      ComMConf_ComMChannel_PropulsionCAN_IEM_19020f5a, &nmState, &nmMode);
  Appl_Can_NmState = (uint8)nmState;
  Appl_Can_NmMode = (uint8)nmMode;

  {
    CanIf_PduGetModeType pduMode = CANIF_GET_OFFLINE;
    Appl_Can_PduModeRet = CanIf_GetPduMode(
        CanIfConf_CanIfCtrlCfg_PropulsionCAN_6c6185ef, &pduMode);
    Appl_Can_PduMode = (uint8)pduMode;
  }

  Appl_Can_StackOk =
      ((Appl_Can_ComMRet == E_OK) && (Appl_Can_ComMMode == (uint8)COMM_FULL_COMMUNICATION) &&
       (Appl_Can_CanSMRet == E_OK) && (Appl_Can_CanSMMode == (uint8)COMM_FULL_COMMUNICATION) &&
       (Appl_Can_CtrlRet == E_OK) && (Appl_Can_CtrlMode == (uint8)CANIF_CS_STARTED) &&
       (Appl_Can_TrcvRet == E_OK) && (Appl_Can_TrcvMode == (uint8)CANTRCV_TRCVMODE_NORMAL) &&
       ((Appl_Can_CanSMState & 0x10u) == 0x10u) &&
       (Appl_Can_PduModeRet == E_OK) && (Appl_Can_PduMode == (uint8)CANIF_GET_ONLINE))
          ? 1u
          : 0u;

  Appl_Can_NmOk =
      ((Appl_Can_NmRet == E_OK) &&
       (Appl_Can_NmMode == (uint8)NM_MODE_NETWORK) &&
       ((Appl_Can_NmState == (uint8)NM_STATE_NORMAL_OPERATION) ||
        (Appl_Can_NmState == (uint8)NM_STATE_REPEAT_MESSAGE) ||
        (Appl_Can_NmState == (uint8)NM_STATE_READY_SLEEP)))
          ? 1u
          : 0u;

  if (Appl_Can_StackOk == 0u)
  {
    fail |= 0x01u;
  }
  if (Appl_CanTrcv_SmokeOk == 0u)
  {
    fail |= 0x02u;
  }
  if (Appl_Can_SampleCnt == 0u)
  {
    fail |= 0x04u;
  }
  if (Appl_Can_NmOk == 0u)
  {
    fail |= 0x08u;
  }

  Appl_Com_Bringup_OnSample(Appl_Can_StackOk);
  Appl_Dem_Platform_OnSample(Appl_Can_BusOffCnt, Appl_Can_StackOk);
  Appl_CarConfig_Bringup_OnSample();
  Appl_ComGroup_Bringup_OnSample();

  if (Appl_Com_IpduOk == 0u)
  {
    fail |= 0x10u;
  }

  Appl_Bringup_FailFlags = fail;
  /* Require stack + smoke + sampling; Nm/ComIpdu soft in FailFlags bit3/4 until FULL. */
  Appl_Bringup_Ok = ((fail & 0x07u) == 0u) ? 1u : 0u;
}
