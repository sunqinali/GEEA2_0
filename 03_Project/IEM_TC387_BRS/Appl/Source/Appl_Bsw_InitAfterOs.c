/**********************************************************************************************************************
 * Appl_Bsw_InitAfterOs.c — post-StartOS BSW init (Default_Init_Task)
 *
 * Ownership (board-proven 052E; keep Can/PduR/Dem PreInit post-OS — do not pre-OS move):
 *   BswM     — AL_EnterRun / ComM FULL / BswMPduGroupSwitch / AL_ProgReset
 *   EcuM     — DriverInitZero/One: Det, Mcu, Port, Spi, CanTrcv, BswM_PreInit
 *   This file— Can→Com + PduR/Dem PreInit + Dem_Init/Dcm after OS
 *   Appl     — NvM ReadAll deferral, Rte_Start kick, bring-up watches
 *
 * MCMCAN CLC/MCR are Safety-EndInit protected. Force fMCAN (CCUCON1) then enable CLC
 * (wait DISS) before Can_Init MMIO.
 *********************************************************************************************************************/
#include "Appl_Bsw_InitAfterOs.h"
#include "Os.h"
#include "BswM.h"
#include "BswM_EcuM.h"
#include "SchM_BswM.h"
#include "EcuM.h"
#include "Rte_Main.h"
#include "Can.h"
#include "CanIf.h"
#include "CanSM_EcuM.h"
#include "ComM.h"
#include "Nm.h"
#include "CanNm.h"
#include "CanTp.h"
#include "PduR.h"
#include "Com.h"
#include "Dem.h"
#include "Dcm.h"
#include "Appl_NvM_Buffers.h"
#include "Appl_Diag_RxProbe.h"

extern volatile uint8 Appl_Os_InitPhase;
extern volatile uint8 Appl_BswM_PreInitOk;
extern volatile uint8 Appl_BswM_EcuMMode;
extern volatile uint8 Appl_BswM_Initialized;
extern volatile uint8 Appl_BswM_KickDone;
extern volatile uint8 Appl_BswM_InitFallback;
extern volatile uint8 Appl_BswM_DetApi;
extern volatile uint8 Appl_BswM_DetErr;
extern volatile uint8 Appl_Det_LastApiId;
extern volatile uint8 Appl_Det_LastErrorId;
extern uint8 BswM_EcuMModeState;
extern boolean BswM_Initialized;
extern boolean BswM_PreInitialized;
extern void Appl_UnlockEndinit(void);
extern void Appl_LockEndinit(void);

volatile uint32 Appl_Os_FwStamp = 0x260B0542uL;
volatile uint8 Appl_Rte_StartRet = 0xFFu;
volatile uint8 Appl_Rte_InitState = 0u;
volatile uint8 Appl_Can_InitSkipped = 0u;

#define APPL_SCU_CCUCON0 (*(volatile uint32 *)0xF0036030uL)
#define APPL_SCU_CCUCON1 (*(volatile uint32 *)0xF0036034uL)
#define APPL_CCUCON1_TARGET (0x21210012uL) /* BrsHw / Mcu_PBcfg fMCAN=fSOURCE1/2 */

#define APPL_CAN0_CLC   (*(volatile uint32 *)0xF0208000uL)
#define APPL_CAN0_MCR   (*(volatile uint32 *)0xF0208030uL)
#define APPL_CAN0_ACCEN (*(volatile uint32 *)0xF02080FCuL)

volatile uint32 Appl_Can_Ccucon0 = 0uL;
volatile uint32 Appl_Can_Ccucon1 = 0uL;
volatile uint32 Appl_Can_Ccucon1After = 0uL;
volatile uint32 Appl_Can_McmcanClc = 0xFFFFFFFFuL;
volatile uint32 Appl_Can_McmcanMcr = 0uL;

static void Appl_Can_ForceFMcanClock(void)
{
  uint32 n;

  Appl_Can_Ccucon0 = APPL_SCU_CCUCON0;
  Appl_Can_Ccucon1 = APPL_SCU_CCUCON1;

  Appl_UnlockEndinit();
  for (n = 0u; n < 100000u; n++)
  {
    if ((APPL_SCU_CCUCON1 & 0x80000000uL) == 0uL)
    {
      break;
    }
  }
  APPL_SCU_CCUCON1 = APPL_CCUCON1_TARGET | 0x40000000uL;
  for (n = 0u; n < 100000u; n++)
  {
    if ((APPL_SCU_CCUCON1 & 0x80000000uL) == 0uL)
    {
      break;
    }
  }
  Appl_LockEndinit();

  Appl_Can_Ccucon1After = APPL_SCU_CCUCON1;
}

/* Enable MCMCAN kernel clock before any node/CCCR access (Safety EndInit). */
static void Appl_Can_EnableMcmcan(void)
{
  uint32 n;

  Appl_UnlockEndinit();
  APPL_CAN0_CLC = 0uL;
  for (n = 0u; n < 100000u; n++)
  {
    if ((APPL_CAN0_CLC & 0x2uL) == 0uL) /* DISS=0 */
    {
      break;
    }
  }
  APPL_CAN0_ACCEN = 0xFFFFFFFFuL;
  Appl_Can_McmcanClc = APPL_CAN0_CLC;
  Appl_Can_McmcanMcr = APPL_CAN0_MCR;
  Appl_LockEndinit();
}

void Appl_Bsw_InitAfterOs(void)
{
  if (Appl_Os_FwStamp != 0x260B0542uL)
  {
    Appl_Os_FwStamp = 0x260B0542uL;
  }

  /* Same as 052E: re-PreInit here so StartupTwo→BswM_Init always sees PreInitialized. */
  BswM_InitMemory();
  BswM_PreInit(NULL_PTR);
  Appl_BswM_PreInitOk = (BswM_PreInitialized != FALSE) ? 1u : 0u;

  Appl_Os_InitPhase = 30u;
  Appl_Can_ForceFMcanClock();

  Appl_Os_InitPhase = 31u;
  Appl_Can_EnableMcmcan();
  Can_Init(NULL_PTR);

  Appl_Os_InitPhase = 32u;
  CanIf_Init(NULL_PTR);
  CanSM_Init(NULL_PTR);
  Appl_Can_InitSkipped = 0u;

  Appl_Os_InitPhase = 4u;
  ComM_Init();
  Nm_Init();
  CanNm_Init(NULL_PTR);
  CanTp_Init(NULL_PTR);

  Appl_Os_InitPhase = 51u;
  /* PduR_Init is a no-op (Det PDUR_E_NO_PREINIT) without PreInit — RX dies at PduR_LoIfRxIndication. */
  PduR_InitMemory();
  PduR_PreInit(NULL_PTR);
  PduR_Init(NULL_PTR);
  Appl_Os_InitPhase = 52u;
  Com_Init(NULL_PTR);

  /* IPDU groups: BswM AL_EnterRun ACT_ComIpduStart (BswMPduGroupSwitch), not Appl. */
  Appl_Os_InitPhase = 6u;

  Appl_Os_InitPhase = 7u;
  Dem_PreInit(NULL_PTR);
  /* Arm Fls/Fee cyclic tasks BEFORE any Fee GC wait (Task_Com_5ms has Fls MF). */
  (void)SetRelAlarm(Alarm_Bsw_10ms, 10u, 10u);
  (void)SetRelAlarm(Alarm_Com_5ms, 5u, 5u);

  Appl_NvM_InitStackAndReadAll(); /* short try; Dem/Dcm may defer to Background */

  Appl_Os_InitPhase = 8u;
  if (Appl_NvM_ReadAllDone != 0u)
  {
    Dem_Init(NULL_PTR);
    Dcm_Init(NULL_PTR);
    Appl_Diag_AfterDcmInit();
  }
  /* else: Appl_NvM_DemDeferred — Background runs Dem/Dcm after ReadAll */
  Appl_Os_InitPhase = 9u;
}

void Appl_BswM_NotifyRunAndEnter(uint8 kickPhase)
{
  /* StartupTwo owns BswM_Init; fallback only if that path skipped PreInit/Init. */
  if (BswM_Initialized == FALSE)
  {
    if (BswM_PreInitialized == FALSE)
    {
      BswM_InitMemory();
      BswM_PreInit(NULL_PTR);
      Appl_BswM_PreInitOk = (BswM_PreInitialized != FALSE) ? 1u : 0u;
    }
    BswM_Init(NULL_PTR);
    Appl_BswM_InitFallback = 1u;
  }

  Appl_BswM_Initialized = (BswM_Initialized != FALSE) ? 1u : 0u;
  /* Kick after Can stack (InitAfterOs) so AL_EnterRun ComM FULL / PduGroup can succeed. */
  BswM_EcuM_CurrentState(ECUM_STATE_RUN);
  BswM_MainFunction();
  Appl_BswM_EcuMMode = BswM_EcuMModeState;
  Appl_BswM_DetApi = Appl_Det_LastApiId;
  Appl_BswM_DetErr = Appl_Det_LastErrorId;
  Appl_BswM_KickDone = kickPhase;

  /* ECUM_SUPPORT_RTE=OFF → StartupTwo never calls Rte_Start; ComShell gated on Rte_InitState. */
  if (kickPhase >= 2u)
  {
    Appl_Rte_StartThisCore();
  }
}

void Appl_Rte_StartThisCore(void)
{
  extern volatile uint8 Rte_InitState;
  /* Slave cores skipped StartupTwo/SchM_Init — bring SchM to SCHM_INIT first. */
  SchM_Init();
  Appl_Rte_StartRet = (uint8)Rte_Start();
  if (GetCoreID() == OS_CORE_ID_0)
  {
    Appl_Rte_InitState = Rte_InitState;
  }
}
