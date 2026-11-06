#ifndef APPL_DIAG_RX_PROBE_H
#define APPL_DIAG_RX_PROBE_H

#include "Std_Types.h"

extern volatile uint16 Appl_Diag_CanTpRxAll;
extern volatile uint16 Appl_Diag_Rx737Cnt;
extern volatile uint16 Appl_Diag_CanTpLastPdu;
/** Set to 1 after Dcm_Init. */
extern volatile uint8 Appl_Diag_DcmInited;
/** 1 after post-Init Dcm_ComM_FullComModeEntered (fixes FULL-before-Dcm_Init race). */
extern volatile uint8 Appl_Diag_DcmComMFullNotified;
/** Dcm_Confirmation calls. */
extern volatile uint16 Appl_Diag_DcmConfCnt;
extern volatile uint8 Appl_Diag_DcmConfStatus;

/** Call after every Dcm_Init — re-sync ComM FULL into Dcm net state. */
void Appl_Diag_AfterDcmInit(void);

#endif
