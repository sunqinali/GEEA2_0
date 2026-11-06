/**********************************************************************************************************************
 * Appl_Com_Bringup.c — RX observe only (IPDU groups owned by BswM AL_EnterRun)
 *
 * BswM ACT_ComIpduStart = BswMPduGroupSwitch → Com_IpduGroupControl (required when
 * COM_IPDUGROUPINFO=OFF). Appl only mirrors group-active into flags + samples isCarTiGlb.
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

void Appl_Com_SyncIpduGroupFlags(void)
{
  /* VDDMPropSignalIPDU17 / isCarTiGlb → ComIPdu handle 21 */
  if (Com_IsRxPduGrpActive(ComConf_ComIPdu_VDDMPropSignalIPDU17_1ed85da7_Rx) != FALSE)
  {
    Appl_Com_IpduStarted = 1u;
    Appl_Com_IpduOk = 1u;
  }
}

void Appl_Com_Bringup_OnSample(uint8 stackOk)
{
  uint32 value = 0u;

  (void)stackOk;
  Appl_Com_SyncIpduGroupFlags();

  if (Appl_Com_IpduStarted == 0u)
  {
    return;
  }

  Appl_Com_RxCallCnt++;
  /* isCarTiGlb: Motorola u32 @ byte0..3, UpdateBit = byte4 bit7 (0x80).
   * ZCANPRO 0x162 DLC8 example: 11 22 33 44 80 00 00 00 -> value 0x11223344.
   * All-zero data keeps Com_ReceiveSignal at 0x80 (COM_SERVICE_NOT_AVAILABLE). */
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
