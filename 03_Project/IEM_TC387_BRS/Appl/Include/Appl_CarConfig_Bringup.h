/**********************************************************************************************************************
 * Appl_CarConfig_Bringup.h — VehCfgPrm / Ext observe + Dem COM_CarConfigErr (CDD E300-56)
 *
 * Full CCP Valid table / DID 0xE103 / NvM still TBD. This shell:
 *   Bulk → Valid on first BlkID in 1..255; Dem PASSED once; no auto-fail without CCP DB.
 *********************************************************************************************************************/
#ifndef APPL_CARCONFIG_BRINGUP_H
#define APPL_CARCONFIG_BRINGUP_H

#include "Std_Types.h"

#define APPL_CARCFG_STATE_BULK  ((uint8)0u)
#define APPL_CARCFG_STATE_VALID ((uint8)1u)
#define APPL_CARCFG_STATE_ERROR ((uint8)2u)

extern volatile uint8 Appl_CarConfig_State;
extern volatile uint8 Appl_CarConfig_LastBlkId;
extern volatile uint8 Appl_CarConfig_LastExtBlkId;
extern volatile uint16 Appl_CarConfig_RxCnt;
extern volatile uint16 Appl_CarConfig_ExtRxCnt;
extern volatile uint8 Appl_CarConfig_PassedOnce;
extern volatile Std_ReturnType Appl_CarConfig_BlkRet;
extern volatile Std_ReturnType Appl_CarConfig_ExtRet;

void Appl_CarConfig_Bringup_OnSample(void);

/* Test / future CCP checker: force Dem failed while staying observable. */
void Appl_CarConfig_InjectError(void);

#endif /* APPL_CARCONFIG_BRINGUP_H */
