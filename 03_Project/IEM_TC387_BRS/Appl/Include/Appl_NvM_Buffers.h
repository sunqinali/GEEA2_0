#ifndef APPL_NVM_BUFFERS_H
#define APPL_NVM_BUFFERS_H

#include "Std_Types.h"

/* NvM RAM mirrors referenced by NvMRamBlockDataAddress */
extern uint8 NvM_ConfigBlock_Ram[8];
extern uint8 Appl_ProgRequest_NvMRam[32];

/* Startup/shutdown observation (board watchlist) */
extern uint8 Appl_NvM_Inited;
extern uint8 Appl_NvM_ReadAllDone;
extern uint8 Appl_NvM_ReadAllTimedOut;
extern uint8 Appl_NvM_WriteAllDone;
extern uint8 Appl_NvM_WriteAllTimedOut;
extern uint8 Appl_NvM_MultiBlockResult; /* NvM_RequestResultType */

/* Fls→Fee→NvM init + timed ReadAll (call before Dem_Init). */
void Appl_NvM_InitStackAndReadAll(void);

/* Timed WriteAll for EcuM GoOff / ProgReset path. */
void Appl_NvM_WriteAllSync(void);

#endif /* APPL_NVM_BUFFERS_H */
