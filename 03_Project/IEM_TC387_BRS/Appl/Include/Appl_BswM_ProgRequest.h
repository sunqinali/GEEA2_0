#ifndef APPL_BSWM_PROGREQUEST_H
#define APPL_BSWM_PROGREQUEST_H

#include "Std_Types.h"

#define APPL_PROG_REQUEST_SET ((uint8)1u)
#define APPL_PROG_MAGIC       (0x50524F47u) /* 'PROG' */

extern uint8 Appl_ProgRequestFlag;
extern uint32 Appl_ProgMagic;

/* BswM AL_ProgReset UserCallout — keep this header free of Dcm.h (included from BswM_Lcfg). */
void Appl_BswM_ProgRequest(void);

#endif
