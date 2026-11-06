/**********************************************************************************************************************
 * Appl_Com_Bringup.h — Com RX observe (IPDU groups started by BswM)
 *********************************************************************************************************************/
#ifndef APPL_COM_BRINGUP_H
#define APPL_COM_BRINGUP_H

#include "Std_Types.h"

extern volatile uint8 Appl_Com_IpduStarted;
extern volatile uint8 Appl_Com_IpduOk;
extern volatile uint16 Appl_Com_RxCallCnt;
extern volatile uint16 Appl_Com_RxOkCnt;
extern volatile uint16 Appl_Com_RxChangeCnt;
extern volatile uint32 Appl_Com_RxLastValue;
extern volatile Std_ReturnType Appl_Com_RxRet;

/** Mirror Com_RxPduGrpActive into Appl_Com_IpduStarted/Ok (BswM owns the real start). */
void Appl_Com_SyncIpduGroupFlags(void);

/** ~100 ms Core0 sample: sync flags, observe isCarTiGlb. */
void Appl_Com_Bringup_OnSample(uint8 stackOk);

#endif /* APPL_COM_BRINGUP_H */
