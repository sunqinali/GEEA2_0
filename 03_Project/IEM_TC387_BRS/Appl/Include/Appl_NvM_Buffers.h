#ifndef APPL_NVM_BUFFERS_H
#define APPL_NVM_BUFFERS_H

#include "Std_Types.h"

/* NvM RAM mirrors referenced by NvMRamBlockDataAddress */
extern uint8 NvM_ConfigBlock_Ram[8];
extern uint8 Appl_ProgRequest_NvMRam[32];
extern uint8 Appl_CarConfig_NvMRam[16]; /* state shell; CCP values later */

/* Startup/shutdown observation (board watchlist) */
extern uint8 Appl_NvM_Inited;
extern uint8 Appl_NvM_ReadAllDone;
extern uint8 Appl_NvM_ReadAllTimedOut;
extern uint8 Appl_NvM_WriteAllDone;
extern uint8 Appl_NvM_WriteAllTimedOut;
extern uint8 Appl_NvM_MultiBlockResult; /* NvM_RequestResultType */
extern uint8 Appl_NvM_FeeStatus;        /* MemIf: 0 UNINIT 1 IDLE 2 BUSY 3 BUSY_INTERNAL */
extern uint8 Appl_NvM_FeeJobResult;     /* MemIf_JobResultType */
extern uint8 Appl_NvM_FlsStatus;
extern uint8 Appl_NvM_FlsJobResult;
extern uint8 Appl_NvM_ReadAllIssued;
extern uint32 Appl_NvM_BgPollCnt;
extern uint32 Appl_NvM_FeeIdleWaitCnt;  /* polls spent waiting Fee IDLE */
extern uint8 Appl_NvM_DemDeferred;     /* 1: Dem_Init/Dcm_Init pending after ReadAll */
extern uint8 Appl_NvM_FeeMainJob;      /* Fee_StateVar.FeeMainJob (1=INITGC) */
extern uint8 Appl_NvM_FeeInitGCState;  /* 1=INVALID 6=FAIL 7=VIRGIN … */
extern uint8 Appl_NvM_FeePendReq;      /* !=1 means pending user job */
extern volatile uint16 Appl_Diag_ReadySampleCnt; /* CanStack samples at Dem/Dcm ready */
extern volatile uint32 Appl_Diag_ReadyApproxMs;  /* ~SampleCnt*100; T2 budget 2500 */

/* Fls→Fee→NvM init; must NOT block Init_Task for seconds. */
void Appl_NvM_InitStackAndReadAll(void);

/* Drive Fee GC + ReadAll; runs Dem_Init/Dcm_Init once when ReadAllDone. */
void Appl_NvM_Background(void);

/* Timed WriteAll for EcuM GoOff / ProgReset path. */
void Appl_NvM_WriteAllSync(void);

/* T8: UDE sets Appl_NvM_T8_WriteReq=1 → Background runs WriteAllSync then clears. */
extern volatile uint8 Appl_NvM_T8_WriteReq;

#endif /* APPL_NVM_BUFFERS_H */
