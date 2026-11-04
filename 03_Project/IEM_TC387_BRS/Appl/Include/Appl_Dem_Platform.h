/**********************************************************************************************************************
 * Platform Dem reporters (BusOff / CarConfig) — SWC-kind events, no CanSM Dem yet
 *********************************************************************************************************************/
#ifndef APPL_DEM_PLATFORM_H
#define APPL_DEM_PLATFORM_H

#include "Std_Types.h"

extern volatile uint8 Appl_Dem_BusOffActive;
extern volatile uint8 Appl_Dem_CarConfigErrActive;
extern volatile Std_ReturnType Appl_Dem_BusOffRet;
extern volatile Std_ReturnType Appl_Dem_CarConfigRet;

/* Call ~100 ms from Core0 sample path. */
void Appl_Dem_Platform_OnSample(uint8 busOffCnt, uint8 stackOk);

/* CarConfig SWC / CCP shell can call these later. */
void Appl_Dem_ReportCarConfigErr(uint8 failed);

#endif /* APPL_DEM_PLATFORM_H */
