/**********************************************************************************************************************
 * Board overrides for IEM TC387 (tool derivative remains TC397 in DaVinci/vBaseEnv).
 * Include after vBrsCfg.h where needed, or via Compiler_Cfg / force-include.
 *********************************************************************************************************************/
#ifndef BRSCFG_BOARD_OVERRIDE_H
#define BRSCFG_BOARD_OVERRIDE_H

/* TC387 has 4 cores only — SIP TC397X_StepB preconfig forces 6 and is not changeable. */
#ifdef BRS_CPU_CORE_AMOUNT
# undef BRS_CPU_CORE_AMOUNT
#endif
#define BRS_CPU_CORE_AMOUNT 4

#ifndef BRS_ENABLE_CAN_SUPPORT
# define BRS_ENABLE_CAN_SUPPORT
#endif

#ifndef BRS_ENABLE_PLLCLOCKS
# define BRS_ENABLE_PLLCLOCKS
#endif

#endif /* BRSCFG_BOARD_OVERRIDE_H */
