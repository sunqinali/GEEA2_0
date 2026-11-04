#include "Std_Types.h"

#define APPL_PROG_REQUEST_SET ((uint8)1u)

uint8 Appl_ProgRequestFlag;

void Appl_BswM_ProgRequest(void)
{
    Appl_ProgRequestFlag = APPL_PROG_REQUEST_SET;
}
