/*******************************************/
/*     FILE GENERATED BY iec2c             */
/* Editing this file is not recommended... */
/*******************************************/

#include "iec_std_lib.h"

#include "accessor.h"

#include "POUS.h"

// CONFIGURATION CONFIG0
__DECLARE_GLOBAL(BOOL,CONFIG0,F_CONF)
__DECLARE_GLOBAL(BOOL,CONFIG0,F_RES)
__DECLARE_GLOBAL(TSTAT,CONFIG0,STAT)
__DECLARE_GLOBAL(THEAD,CONFIG0,HDR)
__DECLARE_GLOBAL(TSETS,CONFIG0,STS)
__DECLARE_GLOBAL(TITEMS,CONFIG0,ITS)
__DECLARE_GLOBAL(__ARRAY_OF_TITEM_3,CONFIG0,SFC)
__DECLARE_GLOBAL(TCONF,CONFIG0,CFG)
__DECLARE_GLOBAL(__ARRAY_OF_TRAD_16,CONFIG0,RAD)
__DECLARE_GLOBAL(TVARI,CONFIG0,VRI)
__DECLARE_GLOBAL(__ARRAY_OF_TPHASEI_3,CONFIG0,PHI)
__DECLARE_GLOBAL(TVARO,CONFIG0,VRO)
__DECLARE_GLOBAL(__ARRAY_OF_TPHASEO_3,CONFIG0,PHO)
__DECLARE_GLOBAL(TRES,CONFIG0,RES)
__DECLARE_GLOBAL(REAL,CONFIG0,RTEST)

void RES0_init__(void);

void config_init__(void) {
  BOOL retain;
  retain = 0;
  __INIT_GLOBAL(BOOL,F_CONF,__INITIAL_VALUE(__BOOL_LITERAL(TRUE)),retain)
  __INIT_GLOBAL(BOOL,F_RES,__INITIAL_VALUE(__BOOL_LITERAL(FALSE)),retain)
  __INIT_GLOBAL(TSTAT,STAT,__INITIAL_VALUE({__BOOL_LITERAL(FALSE),__BOOL_LITERAL(TRUE),TERROR__E_SUCCESS,0,__STRING_LITERAL(0,"")}),retain)
  __INIT_GLOBAL(THEAD,HDR,__INITIAL_VALUE({0,0,0,0,0,0,0,{{__time_to_timespec(1, 0, 60, 0, 0, 0),__time_to_timespec(1, 0, 30, 0, 0, 0),__time_to_timespec(1, 0, 10, 0, 0, 0),__time_to_timespec(1, 0, 5, 0, 0, 0)}},0,0,0,0,{{0,0}}}),retain)
  __INIT_GLOBAL(TSETS,STS,__INITIAL_VALUE({{{0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}}),retain)
  __INIT_GLOBAL(TITEMS,ITS,__INITIAL_VALUE({{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}},{{0,0}}}),retain)
  __INIT_GLOBAL(__ARRAY_OF_TITEM_3,SFC,__INITIAL_VALUE({{0,0,0}}),retain)
  __INIT_GLOBAL(TCONF,CFG,__INITIAL_VALUE({0,0,__time_to_timespec(1, 0, 10, 0, 0, 0)}),retain)
  __INIT_GLOBAL(__ARRAY_OF_TRAD_16,RAD,__INITIAL_VALUE({{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}),retain)
  __INIT_GLOBAL(TVARI,VRI,__INITIAL_VALUE({0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0}),retain)
  __INIT_GLOBAL(__ARRAY_OF_TPHASEI_3,PHI,__INITIAL_VALUE({{0,0,0}}),retain)
  __INIT_GLOBAL(TVARO,VRO,__INITIAL_VALUE({0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0}),retain)
  __INIT_GLOBAL(__ARRAY_OF_TPHASEO_3,PHO,__INITIAL_VALUE({{0,0,0}}),retain)
  __INIT_GLOBAL(TRES,RES,__INITIAL_VALUE({0,__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),0,0,{{0,0,0,0,0,0}}}),retain)
  __INIT_GLOBAL(REAL,RTEST,__INITIAL_VALUE(0.0),retain)
  RES0_init__();
}

void RES0_run__(unsigned long tick);

void config_run__(unsigned long tick) {
  RES0_run__(tick);
}
unsigned long long common_ticktime__ = 1000000000ULL; /*ns*/
unsigned long greatest_tick_count__ = 18446744073709551614UL; /*tick*/
