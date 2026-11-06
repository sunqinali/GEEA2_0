/**********************************************************************************************************************
 * Appl_ComGroup_Bringup.c — table-driven RX signal-group Cntr observation
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

typedef struct
{
  Com_SignalGroupIdType groupId;
  Com_SignalIdType cntrSigId;
  uint16 hitBit;
} Appl_ComGroup_DescType;

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

static uint8 Appl_ComGroup_Last[APPL_COMGROUP_RX_N];
static uint8 Appl_ComGroup_Armed[APPL_COMGROUP_RX_N]; /* 1 after first E_OK sample (no Hit yet) */
static uint8 Appl_ComGroup_LastInit = 0u;

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
          /* Arm only — avoid HitMask false from init→0. */
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

  /* Compat mirrors */
  Appl_ComGroup_VehModCntr = Appl_ComGroup_Cntr[6];
  Appl_ComGroup_VehSpdLgtCntr = Appl_ComGroup_Cntr[8];
  Appl_ComGroup_TqAllwdCntr = Appl_ComGroup_Cntr[9];

  if (saw != 0u)
  {
    Appl_ComGroup_OkCnt++;
    Appl_ComGroup_AnyOk = 1u;
  }
}
