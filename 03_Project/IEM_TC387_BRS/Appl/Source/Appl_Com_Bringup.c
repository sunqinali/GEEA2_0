/**********************************************************************************************************************
 * Appl_Com_Bringup.c — start baseline Com I-PDU groups + RX observe
 *
 * BswM AL_EnterRun currently only does ComM Allow/FULL — no Com_IpduGroupStart.
 * Call Appl_Com_StartIpduGroups_ForBswM() after Com_Init (and optionally from BswM UserCallout).
 * PNC SPG groups are left stopped until PNC is requested.
 *********************************************************************************************************************/
#include "Appl_Com_Bringup.h"
#include "Com.h"
#include "Com_Cfg.h"

volatile uint8 Appl_Com_IpduStarted = 0u;
volatile uint8 Appl_Com_IpduOk = 0u;
volatile uint16 Appl_Com_RxCallCnt = 0u;
volatile uint16 Appl_Com_RxOkCnt = 0u;
volatile uint16 Appl_Com_RxChangeCnt = 0u;
volatile uint32 Appl_Com_RxLastValue = 0u;
volatile Std_ReturnType Appl_Com_RxRet = E_NOT_OK;

static uint8 s_havePrev = 0u;
static uint32 s_prev = 0u;

void Appl_Com_StartIpduGroups_ForBswM(void)
{
  if (Appl_Com_IpduStarted != 0u)
  {
    return;
  }

  /* Baseline groups only (not PNC_* SPGs). isCarTiGlb lives in RxSPG_PropulsionCAN. */
  Com_IpduGroupStart(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75, TRUE);
  Com_IpduGroupStart(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e, TRUE);
  Com_IpduGroupStart(ComConf_ComIPduGroup_TxMPG_PropulsionCAN_3709a166, TRUE);
  Com_IpduGroupStart(ComConf_ComIPduGroup_TxSPG_PropulsionCAN_617cc08d, TRUE);

  Com_EnableReceptionDM(ComConf_ComIPduGroup_RxMPG_PropulsionCAN_aad5aa75);
  Com_EnableReceptionDM(ComConf_ComIPduGroup_RxSPG_PropulsionCAN_fca0cb9e);

  Appl_Com_IpduStarted = 1u;
  Appl_Com_IpduOk = 1u;
}

void Appl_Com_Bringup_OnSample(uint8 stackOk)
{
  uint32 value = 0u;

  (void)stackOk;
  Appl_Com_StartIpduGroups_ForBswM();

  if (Appl_Com_IpduStarted == 0u)
  {
    return;
  }

  Appl_Com_RxCallCnt++;
  Appl_Com_RxRet = Com_ReceiveSignal(ComConf_ComSignal_isCarTiGlb_7a3bdc75_Rx, &value);
  if (Appl_Com_RxRet == E_OK)
  {
    Appl_Com_RxOkCnt++;
    Appl_Com_RxLastValue = value;
    if ((s_havePrev != 0u) && (value != s_prev))
    {
      Appl_Com_RxChangeCnt++;
    }
    s_prev = value;
    s_havePrev = 1u;
  }
}
