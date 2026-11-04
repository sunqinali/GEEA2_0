#ifndef MCAL_SAFETY_ERROR_H
#define MCAL_SAFETY_ERROR_H

#include "Std_Types.h"

#define MCAL_SAFETY_ERROR_RELEASE_MAJOR_VERSION 4U
#define MCAL_SAFETY_ERROR_RELEASE_MINOR_VERSION 2U

extern void Mcal_ReportSafetyError(uint16 ModuleId, uint8 InstanceId, uint8 ApiId, uint8 ErrorId);

#endif
