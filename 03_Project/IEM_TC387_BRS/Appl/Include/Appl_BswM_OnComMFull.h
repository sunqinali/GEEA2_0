#ifndef APPL_BSWM_ONCOMMFULL_H
#define APPL_BSWM_ONCOMMFULL_H

#include "Std_Types.h"

/** Count of BswM/Appl invocations (UDE watch). */
extern volatile uint8 Appl_BswM_OnComMFullCnt;

/** BswM AL_ComMFullEntered UserCallout — Dcm ComM re-sync when channel is FULL. */
void Appl_BswM_OnComMFull(void);

#endif /* APPL_BSWM_ONCOMMFULL_H */
