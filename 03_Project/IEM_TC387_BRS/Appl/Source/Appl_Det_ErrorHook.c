/**********************************************************************************************************************
 * Appl_Det_ErrorHook.c — ring buffer of last DET reports (bring-up / no UART yet)
 *********************************************************************************************************************/
#include "Std_Types.h"

#define APPL_DET_LOG_SIZE 8u

volatile uint16 Appl_Det_LastModuleId;
volatile uint8  Appl_Det_LastInstanceId;
volatile uint8  Appl_Det_LastApiId;
volatile uint8  Appl_Det_LastErrorId;
volatile uint16 Appl_Det_Count;

volatile uint16 Appl_Det_Mod[APPL_DET_LOG_SIZE];
volatile uint8  Appl_Det_Inst[APPL_DET_LOG_SIZE];
volatile uint8  Appl_Det_Api[APPL_DET_LOG_SIZE];
volatile uint8  Appl_Det_Err[APPL_DET_LOG_SIZE];
volatile uint8  Appl_Det_Idx;

Std_ReturnType Appl_Det_ErrorHook(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId)
{
  uint8 i = Appl_Det_Idx;

  Appl_Det_LastModuleId = ModuleId;
  Appl_Det_LastInstanceId = InstanceId;
  Appl_Det_LastApiId = ApiId;
  Appl_Det_LastErrorId = ErrorId;
  Appl_Det_Count++;

  Appl_Det_Mod[i] = ModuleId;
  Appl_Det_Inst[i] = InstanceId;
  Appl_Det_Api[i] = ApiId;
  Appl_Det_Err[i] = ErrorId;
  Appl_Det_Idx = (uint8)((i + 1u) % APPL_DET_LOG_SIZE);

  return E_OK; /* continue Det processing (log buffer etc.) */
}
