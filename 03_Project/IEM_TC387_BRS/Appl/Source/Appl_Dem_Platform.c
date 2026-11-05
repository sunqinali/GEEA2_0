/**********************************************************************************************************************
 * Appl_Dem_Platform.c — BusOff mirror (CanSM→Dem native) + COM_CarConfigErr via Dem_SetEventStatus
 *********************************************************************************************************************/
#include "Appl_Dem_Platform.h"
#include "Dem.h"
#include "Dem_Lcfg.h"

volatile uint8 Appl_Dem_BusOffActive = 0u;
volatile uint8 Appl_Dem_CarConfigErrActive = 0u;
volatile Std_ReturnType Appl_Dem_BusOffRet = E_OK;
volatile Std_ReturnType Appl_Dem_CarConfigRet = E_NOT_OK;

void Appl_Dem_Platform_OnSample(uint8 busOffCnt, uint8 stackOk)
{
  /* COM_Busoff is DEM_EVENT_KIND_BSW: CanSM reports via Dem_ReportErrorStatus.
   * Appl only mirrors CanSM BusOffCounter for debugger / Bringup watches. */
  (void)stackOk;
  Appl_Dem_BusOffActive = (busOffCnt > 0u) ? 1u : 0u;
  Appl_Dem_BusOffRet = E_OK;
}

void Appl_Dem_ReportCarConfigErr(uint8 failed)
{
  if (failed != 0u)
  {
    Appl_Dem_CarConfigRet = Dem_SetEventStatus(
        DemConf_DemEventParameter_COM_CarConfigErr, DEM_EVENT_STATUS_FAILED);
    Appl_Dem_CarConfigErrActive = 1u;
  }
  else
  {
    Appl_Dem_CarConfigRet = Dem_SetEventStatus(
        DemConf_DemEventParameter_COM_CarConfigErr, DEM_EVENT_STATUS_PASSED);
    Appl_Dem_CarConfigErrActive = 0u;
  }
}
