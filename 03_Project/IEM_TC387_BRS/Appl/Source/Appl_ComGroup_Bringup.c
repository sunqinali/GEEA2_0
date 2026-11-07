/**********************************************************************************************************************
 * Appl_ComGroup_Bringup.c — RX Cntr observe + TX Cntr poke (pre-RTE group shell)
 *********************************************************************************************************************/
#include "Appl_ComGroup_Bringup.h"
#include "Com.h"
#include "Com_Cfg.h"

volatile uint16 Appl_ComGroup_SampleCnt = 0u;
volatile uint16 Appl_ComGroup_OkCnt = 0u;
volatile uint8 Appl_ComGroup_AnyOk = 0u;
volatile uint16 Appl_ComGroup_HitMask = 0u;
volatile uint8 Appl_ComGroup_Cntr[APPL_COMGROUP_RX_N];
volatile Std_ReturnType Appl_ComGroup_GrpRet[APPL_COMGROUP_RX_N];

volatile uint8 Appl_ComGroup_VehSpdLgtCntr = 0u;
volatile uint8 Appl_ComGroup_VehModCntr = 0u;
volatile uint8 Appl_ComGroup_TqAllwdCntr = 0u;

volatile uint8 Appl_ComGroup_TxEnable = 1u;
volatile uint8 Appl_ComGroup_TxCntr[APPL_COMGROUP_TX_N];
volatile uint16 Appl_ComGroup_TxOkCnt = 0u;
volatile Std_ReturnType Appl_ComGroup_TxRet[APPL_COMGROUP_TX_N];

typedef struct
{
  Com_SignalGroupIdType groupId;
  Com_SignalIdType cntrSigId;
  uint16 hitBit;
} Appl_ComGroup_DescType;

typedef struct
{
  Com_SignalGroupIdType groupId;
  Com_SignalIdType cntrSigId;
} Appl_ComGroup_TxDescType;

static const Appl_ComGroup_DescType Appl_ComGroup_Desc[APPL_COMGROUP_RX_N] =
{
  { ComConf_ComSignalGroup_igCrashStsSafe_0a09c5f2_Rx,       ComConf_ComGroupSignal_isCrashStsSafeCntr_fc00f19d_Rx,       APPL_COMGROUP_BIT_Crash },
  { ComConf_ComSignalGroup_igEngSt1WdSts_adcf75d2_Rx,        ComConf_ComGroupSignal_isEngSt1WdStsCntr_cb1f19e9_Rx,        APPL_COMGROUP_BIT_EngSt1 },
  { ComConf_ComSignalGroup_igEscVariantToDmc_3c205019_Rx,    ComConf_ComGroupSignal_isEscVariantToDmcCntr_24e3f87c_Rx,    APPL_COMGROUP_BIT_EscVar },
  { ComConf_ComSignalGroup_igHvSysRlySts_760c5326_Rx,        ComConf_ComGroupSignal_isHvSysRlyStsCntr_0f0d2d9a_Rx,        APPL_COMGROUP_BIT_HvRly },
  { ComConf_ComSignalGroup_igPtTqAtAxleMaxReq_e1a6f04e_Rx,   ComConf_ComGroupSignal_isPtTqAtAxleMaxReqCntr_d4048d38_Rx,   APPL_COMGROUP_BIT_PtTq },
  { ComConf_ComSignalGroup_igStcStsToDmc_cb036148_Rx,        ComConf_ComGroupSignal_isStcStsToDmcCntr_c1534faa_Rx,        APPL_COMGROUP_BIT_Stc },
  { ComConf_ComSignalGroup_igVehModMngtGlbSafe1_d1f2be1a_Rx, ComConf_ComGroupSignal_isVehModMngtGlbSafe1Cntr_ede3beb1_Rx, APPL_COMGROUP_BIT_VehMod },
  { ComConf_ComSignalGroup_igVehMtnSt_68a0f345_Rx,           ComConf_ComGroupSignal_isVehMtnStCntr_f87e0a6d_Rx,           APPL_COMGROUP_BIT_VehMtn },
  { ComConf_ComSignalGroup_igVehSpdLgt_56c0cfd4_Rx,          ComConf_ComGroupSignal_isVehSpdLgtCntr_b8df6eaa_Rx,          APPL_COMGROUP_BIT_VehSpd },
  { ComConf_ComSignalGroup_igWhlMotSysTqAllwd_20f5846f_Rx,   ComConf_ComGroupSignal_isWhlMotSysTqAllwdCntr_e287795e_Rx,   APPL_COMGROUP_BIT_TqAllwd }
};

static const Appl_ComGroup_TxDescType Appl_ComGroup_TxDesc[APPL_COMGROUP_TX_N] =
{
  { ComConf_ComSignalGroup_igDmcStsRearToEsc_5d8e0053_Tx,     ComConf_ComGroupSignal_isDmcStsRearToEscCntr_b6c7ae3c_Tx },
  { ComConf_ComSignalGroup_igWhlMotSysSpdActSafe_58c9c55b_Tx, ComConf_ComGroupSignal_isWhlMotSysSpdActSafeCntr_307aefc1_Tx },
  { ComConf_ComSignalGroup_igWhlMotSysTqEst_02b3fb8d_Tx,      ComConf_ComGroupSignal_isWhlMotSysTqEstCntr_73285af8_Tx }
};

static uint8 Appl_ComGroup_Last[APPL_COMGROUP_RX_N];
static uint8 Appl_ComGroup_Armed[APPL_COMGROUP_RX_N];
static uint8 Appl_ComGroup_LastInit = 0u;

static void Appl_ComGroup_TxPoke(void)
{
  uint8 i;
  uint8 cntr;
  uint8 ok = 0u;

  if (Appl_ComGroup_TxEnable == 0u)
  {
    return;
  }

  /* Advance once per CanStack sample (~100 ms). */
  cntr = (uint8)((Appl_ComGroup_SampleCnt) & 0x0Fu);

  for (i = 0u; i < APPL_COMGROUP_TX_N; i++)
  {
    Appl_ComGroup_TxCntr[i] = cntr;
    Appl_ComGroup_TxRet[i] = Com_SendSignal(Appl_ComGroup_TxDesc[i].cntrSigId, &cntr);
    if (Appl_ComGroup_TxRet[i] == E_OK)
    {
      if (Com_SendSignalGroup(Appl_ComGroup_TxDesc[i].groupId) == E_OK)
      {
        ok = 1u;
      }
      else
      {
        Appl_ComGroup_TxRet[i] = E_NOT_OK;
      }
    }
  }
  if (ok != 0u)
  {
    Appl_ComGroup_TxOkCnt++;
  }
}

void Appl_ComGroup_Bringup_OnSample(void)
{
  uint8 i;
  uint8 cntr;
  uint8 saw = 0u;

  Appl_ComGroup_SampleCnt++;
  if (Appl_ComGroup_LastInit == 0u)
  {
    for (i = 0u; i < APPL_COMGROUP_RX_N; i++)
    {
      Appl_ComGroup_Last[i] = 0u;
      Appl_ComGroup_Armed[i] = 0u;
      Appl_ComGroup_Cntr[i] = 0u;
      Appl_ComGroup_GrpRet[i] = E_NOT_OK;
    }
    for (i = 0u; i < APPL_COMGROUP_TX_N; i++)
    {
      Appl_ComGroup_TxCntr[i] = 0u;
      Appl_ComGroup_TxRet[i] = E_NOT_OK;
    }
    Appl_ComGroup_LastInit = 1u;
  }

  for (i = 0u; i < APPL_COMGROUP_RX_N; i++)
  {
    cntr = 0u;
    if (Com_ReceiveSignalGroup(Appl_ComGroup_Desc[i].groupId) == E_OK)
    {
      Appl_ComGroup_GrpRet[i] = Com_ReceiveSignal(Appl_ComGroup_Desc[i].cntrSigId, &cntr);
      if (Appl_ComGroup_GrpRet[i] == E_OK)
      {
        Appl_ComGroup_Cntr[i] = cntr;
        if (Appl_ComGroup_Armed[i] == 0u)
        {
          Appl_ComGroup_Last[i] = cntr;
          Appl_ComGroup_Armed[i] = 1u;
        }
        else if (cntr != Appl_ComGroup_Last[i])
        {
          Appl_ComGroup_Last[i] = cntr;
          Appl_ComGroup_HitMask |= Appl_ComGroup_Desc[i].hitBit;
          saw = 1u;
        }
      }
    }
    else
    {
      Appl_ComGroup_GrpRet[i] = E_NOT_OK;
    }
  }

  Appl_ComGroup_VehModCntr = Appl_ComGroup_Cntr[6];
  Appl_ComGroup_VehSpdLgtCntr = Appl_ComGroup_Cntr[8];
  Appl_ComGroup_TqAllwdCntr = Appl_ComGroup_Cntr[9];

  if (saw != 0u)
  {
    Appl_ComGroup_OkCnt++;
    Appl_ComGroup_AnyOk = 1u;
  }

  Appl_ComGroup_TxPoke();
}
