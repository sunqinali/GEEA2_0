/**********************************************************************************************************************
 * Appl_ComGroup_Bringup.c — Com signal-group RX smoke (3 groups)
 *********************************************************************************************************************/
#include "Appl_ComGroup_Bringup.h"
#include "Com.h"
#include "Com_Cfg.h"

volatile uint16 Appl_ComGroup_SampleCnt = 0u;
volatile uint16 Appl_ComGroup_OkCnt = 0u;
volatile uint8 Appl_ComGroup_AnyOk = 0u;

volatile uint16 Appl_ComGroup_VehSpdLgtA = 0u;
volatile uint8 Appl_ComGroup_VehSpdLgtQf = 0u;
volatile uint8 Appl_ComGroup_VehSpdLgtCntr = 0u;
volatile Std_ReturnType Appl_ComGroup_VehSpdRet = E_NOT_OK;

volatile uint8 Appl_ComGroup_UsgModSts = 0u;
volatile uint8 Appl_ComGroup_CarModSts1 = 0u;
volatile uint8 Appl_ComGroup_VehModCntr = 0u;
volatile Std_ReturnType Appl_ComGroup_VehModRet = E_NOT_OK;

volatile uint8 Appl_ComGroup_TqAllwd = 0u;
volatile uint8 Appl_ComGroup_TqAllwdCntr = 0u;
volatile Std_ReturnType Appl_ComGroup_TqAllwdRet = E_NOT_OK;

static uint8 Appl_ComGroup_LastSpdCntr = 0xFFu;
static uint8 Appl_ComGroup_LastModCntr = 0xFFu;
static uint8 Appl_ComGroup_LastTqCntr = 0xFFu;

void Appl_ComGroup_Bringup_OnSample(void)
{
  uint16 spdA = 0u;
  uint8 qf = 0u;
  uint8 cntr = 0u;
  uint8 usg = 0u;
  uint8 car = 0u;
  uint8 tq = 0u;
  uint8 saw = 0u;

  Appl_ComGroup_SampleCnt++;

  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igVehSpdLgt_56c0cfd4_Rx) == E_OK)
  {
    Appl_ComGroup_VehSpdRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehSpdLgtA_668ad5e3_Rx, &spdA);
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_isVehSpdLgtQf_057400a6_Rx, &qf);
    (void)Com_ReceiveSignal(ComConf_ComGroupSignal_isVehSpdLgtCntr_b8df6eaa_Rx, &cntr);
    if (Appl_ComGroup_VehSpdRet == E_OK)
    {
      Appl_ComGroup_VehSpdLgtA = spdA;
      Appl_ComGroup_VehSpdLgtQf = qf;
      Appl_ComGroup_VehSpdLgtCntr = cntr;
      if (cntr != Appl_ComGroup_LastSpdCntr)
      {
        Appl_ComGroup_LastSpdCntr = cntr;
        saw = 1u;
      }
    }
  }
  else
  {
    Appl_ComGroup_VehSpdRet = E_NOT_OK;
  }

  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igVehModMngtGlbSafe1_d1f2be1a_Rx) == E_OK)
  {
    Appl_ComGroup_VehModRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehModMngtGlbSafe1UsgModSts_8ea1ac37_Rx, &usg);
    (void)Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehModMngtGlbSafe1CarModSts1_a7324f03_Rx, &car);
    (void)Com_ReceiveSignal(
        ComConf_ComGroupSignal_isVehModMngtGlbSafe1Cntr_ede3beb1_Rx, &cntr);
    if (Appl_ComGroup_VehModRet == E_OK)
    {
      Appl_ComGroup_UsgModSts = usg;
      Appl_ComGroup_CarModSts1 = car;
      Appl_ComGroup_VehModCntr = cntr;
      if (cntr != Appl_ComGroup_LastModCntr)
      {
        Appl_ComGroup_LastModCntr = cntr;
        saw = 1u;
      }
    }
  }
  else
  {
    Appl_ComGroup_VehModRet = E_NOT_OK;
  }

  if (Com_ReceiveSignalGroup(ComConf_ComSignalGroup_igWhlMotSysTqAllwd_20f5846f_Rx) == E_OK)
  {
    Appl_ComGroup_TqAllwdRet = Com_ReceiveSignal(
        ComConf_ComGroupSignal_isWhlMotSysTqAllwdWhlMotSysTqAllwd_0ecd7abd_Rx, &tq);
    (void)Com_ReceiveSignal(
        ComConf_ComGroupSignal_isWhlMotSysTqAllwdCntr_e287795e_Rx, &cntr);
    if (Appl_ComGroup_TqAllwdRet == E_OK)
    {
      Appl_ComGroup_TqAllwd = tq;
      Appl_ComGroup_TqAllwdCntr = cntr;
      if (cntr != Appl_ComGroup_LastTqCntr)
      {
        Appl_ComGroup_LastTqCntr = cntr;
        saw = 1u;
      }
    }
  }
  else
  {
    Appl_ComGroup_TqAllwdRet = E_NOT_OK;
  }

  if (saw != 0u)
  {
    Appl_ComGroup_OkCnt++;
    Appl_ComGroup_AnyOk = 1u;
  }
}
