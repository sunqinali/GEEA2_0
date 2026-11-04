/**********************************************************************************************************************
 * Appl_CanTrcv_Smoke.h — TJA1145 / QSPI3 board bring-up helpers
 *********************************************************************************************************************/
#ifndef APPL_CANTRCV_SMOKE_H
#define APPL_CANTRCV_SMOKE_H

#include "Std_Types.h"

/* Status globals (watch in debugger after download) */
extern volatile uint8 Appl_CanTrcv_LastOpMode;       /* CanTrcv_TrcvModeType */
extern volatile Std_ReturnType Appl_CanTrcv_LastRet; /* GetOpMode */
extern volatile Std_ReturnType Appl_CanTrcv_SetRet;  /* SetTrcvMode */
extern volatile uint8 Appl_CanTrcv_SpiSeqL;          /* Spi_SeqResultType after GetOpMode */
extern volatile uint8 Appl_CanTrcv_SpiSeqM;
extern volatile uint8 Appl_CanTrcv_SpiSeqN;
extern volatile uint8 Appl_CanTrcv_SmokePhase;       /* 0=idle 1=afterInit 2=deferred 3=manual */
extern volatile uint8 Appl_CanTrcv_SmokeOk;          /* 1 if LastRet==E_OK after last GetMode */

void Appl_CanTrcv_Smoke_GetMode(void);
void Appl_CanTrcv_Smoke_SetNormal(void);
void Appl_CanTrcv_Smoke_SetStandby(void);
void Appl_CanTrcv_Smoke_SetSleep(void);

/* Call once right after CanTrcv_30_Tja1145_Init (SPI path only). */
void Appl_CanTrcv_Smoke_AfterInit(void);

/* Call ~every 100 ms from Core0 (Spi_MainFunction_Handling); GetMode once ~1s after start. */
void Appl_CanTrcv_Smoke_DeferredTick(void);

#endif /* APPL_CANTRCV_SMOKE_H */
