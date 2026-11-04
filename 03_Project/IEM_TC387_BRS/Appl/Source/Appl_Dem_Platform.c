/**********************************************************************************************************************
 * Appl_Dem_Platform.c — COM_Busoff / COM_CarConfigErr via Dem_SetEventStatus
 *********************************************************************************************************************/
#include "Appl_Dem_Platform.h"
#include "Dem.h"
#include "Dem_Lcfg.h"

volatile uint8 Appl_Dem_BusOffActive = 0u;
volatile uint8 Appl_Dem_CarConfigErrActive = 0u;
volatile Std_ReturnType Appl_Dem_BusOffRet = E_NOT_OK;
volatile Std_ReturnType Appl_Dem_CarConfigRet = E_NOT_OK;

void Appl_Dem_Platform_OnSample(uint8 busOffCnt, uint8 stackOk)
{
  if (busOffCnt > 0u)
  {
    Appl_Dem_BusOffRet = Dem_SetEventStatus(
        DemConf_DemEventParameter_COM_Busoff, DEM_EVENT_STATUS_FAILED);
    Appl_Dem_BusOffActive = 1u;
  }
  else if (stackOk != 0u)
  {
    Appl_Dem_BusOffRet = Dem_SetEventStatus(
        DemConf_DemEventParameter_COM_Busoff, DEM_EVENT_STATUS_PASSED);
    Appl_Dem_BusOffActive = 0u;
  }
  else
  {
    /* Keep last status until FULL path known. */
  }
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
