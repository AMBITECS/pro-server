// FUNCTION
BOOL IS_PARENT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL IS_PARENT = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IS_PARENT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (IS_PARENT = (__GET_GLOBAL_ITS()->IT.table[PIT].NUM > 0)); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IS_PARENT;
}


// FUNCTION
LOGLEVEL ERR2LEV(
  BOOL EN, 
  BOOL *__ENO, 
  TERROR ERR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  LOGLEVEL ERR2LEV = LOGLEVEL__DEBUG;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ERR2LEV;
  }
  {
    TERROR __case_expression = ERR;
    if ((__case_expression == TERROR__E_SUCCESS)) {
      ERR2LEV = LOGLEVEL__INFO;
    }
    else if ((__case_expression == TERROR__W_PERIOD)) {
      ERR2LEV = LOGLEVEL__WARNING;
    }
    else {
      ERR2LEV = LOGLEVEL__CRITICAL;
    }
  };
  goto __end;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ERR2LEV;
}


// FUNCTION
BOOL ST_CHECK(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL FORCE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_CHECK = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_CHECK;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    return (
      ST_CHECK = ( 
        FORCE || (ERR2LEV(1,NULL,__GET_GLOBAL_STAT()->ERR) != LOGLEVEL__CRITICAL) 
      )
    ); 
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_CHECK;
}


// FUNCTION
TVARO M_VAR_OUT(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVARO M_VAR_OUT = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_VAR_OUT;
  }
  M_VAR_OUT.DTO = MD0;
  M_VAR_OUT.TMO = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_VAR_OUT.QTY = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_VAR_OUT.QTS = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_VAR_OUT.RO1 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD4);
  M_VAR_OUT.RO2 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD5);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_VAR_OUT;
}


// FUNCTION
TRAD M_RAD(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5, 
  UDINT MD6, 
  UDINT MD7)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TRAD M_RAD = {0.02,1.1,0.003,0.01,{{0.2,0.6,0.85,1.0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_RAD;
  }
  M_RAD.VM = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD0);
  M_RAD.FK = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_RAD.Q0 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_RAD.Q1 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_RAD.BL.table[(0) - (0)] = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD4);
  M_RAD.BL.table[(1) - (0)] = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD5);
  M_RAD.BL.table[(2) - (0)] = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD6);
  M_RAD.BL.table[(3) - (0)] = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD7);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_RAD;
}


// FUNCTION
SINT IT_LEV(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  UINT IID = 0xFFFF;
  SINT IT_LEV = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_LEV;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    IID = __GET_GLOBAL_ITS()->IT.table[PIT].ID;
    if (IID==0 || IID==0xffff) return (IT_LEV=-1);
    IT_LEV = 3;
    if (IID & 0x000F) return(IT_LEV); IT_LEV--;
    if (IID & 0x00F0) return(IT_LEV); IT_LEV--;
    if (IID & 0x0F00) return(IT_LEV); IT_LEV--;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_LEV;
}


// FUNCTION
STRING ERR2STR(
  BOOL EN, 
  BOOL *__ENO, 
  TERROR ERR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  STRING ERR2STR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ERR2STR;
  }
  {
    TERROR __case_expression = ERR;
    if ((__case_expression == TERROR__E_SUCCESS)) {
      ERR2STR = __STRING_LITERAL(10,"Succeeded!");
    }
    else if ((__case_expression == TERROR__E_FAIL)) {
      ERR2STR = __STRING_LITERAL(16,"Unexpected error");
    }
    else if ((__case_expression == TERROR__E_STATE)) {
      ERR2STR = __STRING_LITERAL(19,"Program state error");
    }
    else if ((__case_expression == TERROR__E_CHECK)) {
      ERR2STR = __STRING_LITERAL(17,"Check point error");
    }
    else if ((__case_expression == TERROR__E_HEAD)) {
      ERR2STR = __STRING_LITERAL(12,"Invalid head");
    }
    else if ((__case_expression == TERROR__E_INDEX)) {
      ERR2STR = __STRING_LITERAL(13,"Invalid index");
    }
    else if ((__case_expression == TERROR__E_ITEMPOS)) {
      ERR2STR = __STRING_LITERAL(21,"Invalid item position");
    }
    else if ((__case_expression == TERROR__E_ITEM)) {
      ERR2STR = __STRING_LITERAL(15,"Invalid element");
    }
    else if ((__case_expression == TERROR__E_GRID)) {
      ERR2STR = __STRING_LITERAL(12,"Invalid grid");
    }
    else if ((__case_expression == TERROR__E_AXIS)) {
      ERR2STR = __STRING_LITERAL(12,"Invalid axis");
    }
    else if ((__case_expression == TERROR__E_PRIO)) {
      ERR2STR = __STRING_LITERAL(12,"Invalid prio");
    }
    else if ((__case_expression == TERROR__E_MATER)) {
      ERR2STR = __STRING_LITERAL(13,"Invalid mater");
    }
    else if ((__case_expression == TERROR__E_PROFILE)) {
      ERR2STR = __STRING_LITERAL(15,"Invalid profile");
    }
    else if ((__case_expression == TERROR__E_VALUE)) {
      ERR2STR = __STRING_LITERAL(13,"Invalid value");
    }
    else if ((__case_expression == TERROR__E_ROOT)) {
      ERR2STR = __STRING_LITERAL(12,"Invalid ROOT");
    }
    else if ((__case_expression == TERROR__E_ITEMSIZE)) {
      ERR2STR = __STRING_LITERAL(15,"Bad ItemAt size");
    }
    else if ((__case_expression == TERROR__E_STEPSIZE)) {
      ERR2STR = __STRING_LITERAL(13,"Bad axis step");
    }
    else if ((__case_expression == TERROR__E_TIMESIZE)) {
      ERR2STR = __STRING_LITERAL(13,"Bad time step");
    }
    else if ((__case_expression == TERROR__E_STACKSIZE)) {
      ERR2STR = __STRING_LITERAL(15,"Small stacksize");
    }
    else if ((__case_expression == TERROR__E_NOTREADY)) {
      ERR2STR = __STRING_LITERAL(17,"Object dont ready");
    }
    else if ((__case_expression == TERROR__E_LOC2ABS)) {
      ERR2STR = __STRING_LITERAL(13,"Loc2Abs error");
    }
    else if ((__case_expression == TERROR__E_ABS2LOC)) {
      ERR2STR = __STRING_LITERAL(13,"Abs2Loc error");
    }
    else if ((__case_expression == TERROR__E_VALIDATE)) {
      ERR2STR = __STRING_LITERAL(14,"Validate error");
    }
    else if ((__case_expression == TERROR__E_CHECKVALID)) {
      ERR2STR = __STRING_LITERAL(16,"CheckValid error");
    }
    else if ((__case_expression == TERROR__E_LINKITEMS)) {
      ERR2STR = __STRING_LITERAL(15,"LinkItems error");
    }
    else if ((__case_expression == TERROR__E_PROCESS)) {
      ERR2STR = __STRING_LITERAL(18,"Process item error");
    }
    else if ((__case_expression == TERROR__E_BADTEMP)) {
      ERR2STR = __STRING_LITERAL(13,"GetTemp error");
    }
    else if ((__case_expression == TERROR__W_PERIOD)) {
      ERR2STR = __STRING_LITERAL(12,"Small period");
    }
    else {
      ERR2STR = __STRING_LITERAL(13,"Unknown error");
    }
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ERR2STR;
}


// FUNCTION
STRING LOGMSG(
  BOOL EN, 
  BOOL *__ENO, 
  STRING STR, 
  LOGLEVEL LVL, 
  TERROR ERR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  STRING LOGMSG = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return LOGMSG;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #ifdef _BEREMIZ_H_
      #define __LOG_MSG(level,string,length) LogMessage(level,(char *)string,length)
    #else
      #define __LOG_MSG(level,string,length) printf("%s\n", (char *)string)
    #endif
    TSTAT *pStat = __GET_GLOBAL_STAT();
    if (LVL!=LOGLEVEL__DEBUG || (LVL==LOGLEVEL__DEBUG && pStat->DBG)) {
      if (STR.len) __LOG_MSG(LVL, (char *)STR.body, STR.len);
    }
    if (ERR!=TERROR__E_SUCCESS) {
      pStat->ERR=ERR;
      LVL=ERR2LEV(1,NULL,ERR); 
      STR=ERR2STR(1,NULL,ERR);
      if (STR.len) __LOG_MSG(LVL,(char *)STR.body,STR.len);
    }
    return (LOGMSG = __INIT_STRING);
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return LOGMSG;
}


// FUNCTION
BOOL HALT(
  BOOL EN, 
  BOOL *__ENO, 
  TERROR ERR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL HALT = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return HALT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    //#ifndef __ASSERT_H
    //#define __ASSERT_H 1
       //#include <unistd.h> // Include "unistd.h" for sleep() & exit() function
    //#endif // __ASSERT_H
    //sleep(3); // Wait for message logging..
    //exit(ERR);
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return HALT;
}


// FUNCTION
STRING MAKEMSG(
  BOOL EN, 
  BOOL *__ENO, 
  STRING S0, 
  STRING S1, 
  STRING S2, 
  STRING S3)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL BLOG = __BOOL_LITERAL(FALSE);
  STRING MAKEMSG = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return MAKEMSG;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 BLOG = __GET_GLOBAL_STAT()->DBG; 
  #undef GetFbVar
  #undef SetFbVar
;
  if (BLOG) {
    MAKEMSG = CONCAT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (STRING)CONCAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)2,
        (STRING)CONCAT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UINT)2,
          (STRING)S0,
          (STRING)S1),
        (STRING)S2),
      (STRING)S3);
  } else {
    MAKEMSG = __STRING_LITERAL(0,"");
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return MAKEMSG;
}


// FUNCTION
BOOL ASSERT(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL STAT, 
  TERROR ERR, 
  STRING STR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ASSERT = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ASSERT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

  //  #ifndef __ASSERT_H
  //  #define __ASSERT_H 1
  //     #include <unistd.h> // Include "unistd.h" for sleep() & exit() function
  //     #include <assert.h> // Include "unistd.h" for sleep() & exit() function
  //  #endif // __ASSERT_H
    if (!(ASSERT=STAT)) { 
      STR = MAKEMSG(1, NULL, 
        __STRING_LITERAL(27,"OpenPLC: ASSERTION FAILED! "), 
        STR,
        __INIT_STRING,
        __INIT_STRING
      );
      LOGMSG(1, NULL, STR, LOGLEVEL__CRITICAL, ERR); 
      //HALT(1, NULL, ERR);
      //sleep(3); // Wait for message logging..
      //exit(ERR);
  //    assert(0);
    }
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ASSERT;
}


// FUNCTION
TPOS8 IT_POS(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  BOOL BFORCE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 IT_POS = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_POS;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    if (BFORCE) {
      ASSERT(1, NULL, 
       (PIT >= 0) && (PIT < __GET_GLOBAL_HDR()->NI), TERROR__E_ITEMPOS, __INIT_STRING);
    }
    return (IT_POS = ( (PIT < 0) || (PIT >= __GET_GLOBAL_HDR()->NI) ? (0) : PIT ));
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_POS;
}


// FUNCTION
TITER IT_END(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT_END = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_END;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    return (IT_END = ((TITER){ TDIR__DIR_UP, -1, -1, -1, -1, {0,0,0,0} } )); 
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_END;
}


// FUNCTION
TITER IT_NEXT(
  BOOL EN, 
  BOOL *__ENO, 
  TITER IT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT_NEXT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_NEXT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    /* Алгоритм обхода:
      1) Если предыдущий узел - родительский для этого узла 
         -> переходим к первому дочернему узлу (если нет->к родителю);
      2) Если предыдущий узел - дочерний для этого узла  
         -> переходим к следующему дочернему узлу (если нет->к родителю) 
    */
    SINT iSub = 0;
    SINT iLevel = 0;
    BOOL bBreak = FALSE;
    TITEM *Items = &(__GET_GLOBAL_ITS()->IT.table[0]);
    
    while (!bBreak && IT.ITEM!=(-1)) { 
      IT.ITEM = IT.NEXT;  // Переход к следующему элементу
      if (IT.ITEM!=(-1)) {
        // Запоминаем уровень текущего узла в стеке со смещением +1
        iLevel = IT_LEV(1,NULL,IT.ITEM)+1; 
        
        // Определение следующего узла
        if (IT.PREV == Items[IT.ITEM].PAR) {
          // предыдущий узел является является родительским узлом этого узла ->
          iSub = 0;
          if (Items[IT.ITEM].NUM > iSub) { 
            // ВНИЗ -> к первому дочернему узлу (если есть)
            IT.NEXT = Items[IT.ITEM].KIDS.table[iSub];
            IT.STACK.table[iLevel] = iSub;
            IT.DIR = TDIR__DIR_DOWN;  // Актуально если есть потомки
            bBreak = TRUE; 
          } else {    
            // ВВЕРХ -> к родителю (потомков нет)
            IT.NEXT = (IT.ITEM != IT.LAST) ? IT.NEXT = Items[IT.ITEM].PAR : (-1);
            IT.DIR = TDIR__DIR_UP;    // Актуально для любого элемента
            bBreak = TRUE;
          }
        } else if (Items[IT.PREV].PAR == IT.ITEM) { 
          // предыдущий узел является дочерним узлом этого узла ->
          iSub = IT.STACK.table[iLevel]+1;
          if (iSub < Items[IT.ITEM].NUM) {
            // ПО ГОРИЗОНТАЛИ -> к следующему дочернему узлу (если есть)
            IT.NEXT = Items[IT.ITEM].KIDS.table[iSub];
            IT.STACK.table[iLevel] = iSub;
          } else {
            // ВВЕРХ -> к родителю (потомков больше нет)
            IT.NEXT = (IT.ITEM != IT.LAST) ? IT.NEXT = Items[IT.ITEM].PAR : (-1);
            IT.DIR = TDIR__DIR_UP;
            bBreak = TRUE;
          }
        } else {
          //ASSERT(1,NULL,FALSE, TERROR__E_FAIL, 
            //__STRING_LITERAL(24,"it_next: Bad struct!"));
          return (IT_NEXT = IT_END(1,NULL,-1)); // так не бывает - ошибка структуры!!!
        }
      }
      IT.PREV = IT.ITEM;  // Сохранение текущего узла
    }
    return (IT_NEXT = IT);
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_NEXT;
}


// FUNCTION
TITER IT_BEGIN(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL BVALID = __BOOL_LITERAL(TRUE);
  TITER IT_BEGIN = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_BEGIN;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    BOOL bValid = (PIT >= 0 && PIT < __GET_GLOBAL_HDR()->NI);
    if (bValid) {
      IT_BEGIN.PREV = __GET_GLOBAL_ITS()->IT.table[PIT].PAR;
      IT_BEGIN.ITEM = IT_BEGIN.NEXT = IT_BEGIN.LAST = PIT;
      // Если позиция начала верна - делаем первую итерацию
      return (IT_BEGIN = IT_NEXT(1,NULL,IT_BEGIN));
    } else 
        // Если позиция не верна - переход в конечное состояние
        return (IT_BEGIN = IT_END(1,NULL,(-1)));
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_BEGIN;
}


// FUNCTION
REAL C2T(
  BOOL EN, 
  BOOL *__ENO, 
  INT CODE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL C2T = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return C2T;
  }
  C2T = (INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)CODE) / 100.0);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return C2T;
}


// FUNCTION
BOOL IS_POLY(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL IS_POLY = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IS_POLY;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    return (IS_POLY = (__GET_GLOBAL_ITS()->IT.table[PIT].NUM > 0)); 
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IS_POLY;
}


// FUNCTION
STRING ID2STR(
  BOOL EN, 
  BOOL *__ENO, 
  UINT IID)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  USINT I = 0;
  __ARRAY_OF_USINT_4 IDS = {{0,0,0,0}};
  __ARRAY_OF_STRING_4 CH = {{__STRING_LITERAL(0,""),__STRING_LITERAL(0,""),__STRING_LITERAL(0,""),__STRING_LITERAL(0,"")}};
  STRING ID2STR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ID2STR;
  }
  IDS.table[(0) - (0)] = WORD_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(UINT_TO_WORD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IID) & 0xF000),
      (SINT)12));
  IDS.table[(1) - (0)] = WORD_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(UINT_TO_WORD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IID) & 0xF00),
      (SINT)8));
  IDS.table[(2) - (0)] = WORD_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(UINT_TO_WORD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IID) & 0xF0),
      (SINT)4));
  IDS.table[(3) - (0)] = WORD_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(UINT_TO_WORD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IID) & 0xF),
      (SINT)0));
  for(I = 0; I <= 3; I++) {
    {
      USINT __case_expression = (IDS.table[(I) - (0)] - 10);
      if ((__case_expression == 0)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"A");
      }
      else if ((__case_expression == 1)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"B");
      }
      else if ((__case_expression == 2)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"C");
      }
      else if ((__case_expression == 3)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"D");
      }
      else if ((__case_expression == 4)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"E");
      }
      else if ((__case_expression == 5)) {
        CH.table[(I) - (0)] = __STRING_LITERAL(1,"F");
      }
      else {
        CH.table[(I) - (0)] = USINT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (USINT)IDS.table[(I) - (0)]);
      }
    };
  };
  ID2STR = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)CH.table[(0) - (0)],
    (STRING)CH.table[(1) - (0)],
    (STRING)CH.table[(2) - (0)],
    (STRING)CH.table[(3) - (0)]);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ID2STR;
}


// FUNCTION
UINT IT_ID(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  UINT IT_ID = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_ID;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (IT_ID = __GET_GLOBAL_ITS()->IT.table[PIT].ID); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_ID;
}


// FUNCTION
__ARRAY_OF_INT_3 _KNOT(
  BOOL EN, 
  BOOL *__ENO, 
  INT I, 
  INT J, 
  INT K)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_INT_3 _KNOT = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _KNOT;
  }
  _KNOT.table[(0) - (0)] = I;
  _KNOT.table[(1) - (0)] = J;
  _KNOT.table[(2) - (0)] = K;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _KNOT;
}


// FUNCTION
TDOT _DOT(
  BOOL EN, 
  BOOL *__ENO, 
  INT V, 
  INT I, 
  INT J, 
  INT K)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TDOT _DOT = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _DOT;
  }
  _DOT.V = V;
  _DOT.A = _KNOT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)I,
    (INT)J,
    (INT)K);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _DOT;
}


// FUNCTION
TCOND _COND(
  BOOL EN, 
  BOOL *__ENO, 
  UINT ID, 
  INT TMID, 
  TDOT TMIN, 
  TDOT TMAX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TCOND _COND = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _COND;
  }
  _COND.ID = ID;
  _COND.TMID = TMID;
  _COND.TMIN = TMIN;
  _COND.TMAX = TMAX;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _COND;
}


// FUNCTION
TCOND GET_CN(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TCOND GET_CN = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_CN;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    return (GET_CN = 
      (
        (PIT != -1) ? 
        __GET_GLOBAL_ITS()->CN.table[PIT] 
        : _COND(1, NULL, 0, 2000, _DOT(1,NULL,2000,0,0,0), _DOT(1,NULL,2000,0,0,0))
      )
    ); 
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_CN;
}


// FUNCTION
STRING IT_CONDSTR(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TCOND COND = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
  BOOL BP = __BOOL_LITERAL(FALSE);
  STRING MSG = __STRING_LITERAL(0,"");
  STRING IT_CONDSTR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_CONDSTR;
  }
  COND = GET_CN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  if (IS_POLY(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT)) {
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)__STRING_LITERAL(2," ["),
      (STRING)ID2STR(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IT_ID(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)PIT)),
      (STRING)__STRING_LITERAL(1,","));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)PIT),
      (STRING)__STRING_LITERAL(1,","),
      (STRING)__STRING_LITERAL(0,""));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)INT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)COND.TMID))),
      (STRING)__STRING_LITERAL(1,","),
      (STRING)__STRING_LITERAL(0,""));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)INT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)COND.TMAX.V))),
      (STRING)__STRING_LITERAL(1,"]"),
      (STRING)__STRING_LITERAL(0,""));
  } else {
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)__STRING_LITERAL(2," ("),
      (STRING)ID2STR(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IT_ID(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)PIT)),
      (STRING)__STRING_LITERAL(1,","));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)PIT),
      (STRING)__STRING_LITERAL(1,","),
      (STRING)__STRING_LITERAL(0,""));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)INT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)COND.TMID))),
      (STRING)__STRING_LITERAL(1,","),
      (STRING)__STRING_LITERAL(0,""));
    MSG = MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG,
      (STRING)INT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)COND.TMAX.V))),
      (STRING)__STRING_LITERAL(1,")"),
      (STRING)__STRING_LITERAL(0,""));
  };
  IT_CONDSTR = MSG;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_CONDSTR;
}


// FUNCTION
BOOL DO_LOGCOND(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  STRING MSG = __STRING_LITERAL(0,"");
  SINT I = 0;
  BOOL DO_LOGCOND = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_LOGCOND;
  }
  DO_LOGCOND = ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE));
  if (!(DO_LOGCOND)) {
    goto __end;
  };
  I = 0;
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  while ((IT.ITEM != -1)) {
    if ((LEN__ULINT__STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MSG) == 0)) {
      MSG = MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__STRING_LITERAL(4," -> "),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""));
    };
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_UP)) {
        MSG = MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)MSG,
          (STRING)IT_CONDSTR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)IT.ITEM),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,""));
        if ((MOD__SINT__SINT__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)(I + 1),
          (SINT)5) == 0)) {
          MSG = LOGMSG(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(1,";"),
              (STRING)__STRING_LITERAL(0,""),
              (STRING)__STRING_LITERAL(0,"")),
            (LOGLEVEL)LOGLEVEL__DEBUG,
            (TERROR)TERROR__E_SUCCESS);
        };
        I = (I + 1);
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  if ((LEN__ULINT__STRING(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG) > 0)) {
    MSG = LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)MSG,
        (STRING)__STRING_LITERAL(1,";"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS);
  };
  MSG = LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(5," --- "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_LOGCOND;
}


// FUNCTION
TPOS8 SET_VAR(
  BOOL EN, 
  BOOL *__ENO, 
  THANDLE HGR, 
  TPOS8 PGR, 
  P_INT OFF, 
  TVAR TV, 
  USINT IX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 SET_VAR = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SET_VAR;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)
    
    // Получаем массив сеток по дескриптору  
    TGRID *Grids = (TGRID *)(HGR);
    
    if (IX == 0xFF) { // Направление не задано  - заполнение ячеек узла шаблоном TV
    
      for (short int k=0; k < OFF.B; k++) {
        Grids[PGR].A.table[OFF.A+k] = TV;
      }    
      
    } else {          //  Направление задано =>
      if (IX == 0) {    // Главная ячейка (IX == 0)
        Grids[PGR].A.table[OFF.A] = TV;
        /*
        pvar_t pDest = (var_t *) &Grids[PGR].A.table[OFF.A];
        pvar_t pvar  = (var_t *) &TV;
        if (pvar->r) *pDest = *pvar;
        else {
          // if (pvar->A != -16384) 
            pDest->A = pvar->A;
            
          // if (pvar->B != -16384) 
            pDest->B = pvar->B;
            
          pDest->C = pvar->C;
        }
        */
      } else {          // Смежная ячейка (IX > 0)
      
        // В смежных ячейках могут быть только ссылки или воздух (-1)
        // ASSERT(1,NULL,((pvar_t)&TV)->r,TERROR__E_FAIL, 
          //__STRING_LITERAL(29,"it_var_set: Reference wanted!"));
        
        pvar_t pDest = NULL;
        for (short int k=1; k < OFF.B; k++) {
          pvar_t pvar = (var_t *) &Grids[PGR].A.table[OFF.A+k];
          if ((pDest==NULL && pvar->d==0) || pvar->d == IX) {
            pDest = pvar;
            if (pDest->d == IX) break;
          }
        }
        
        // Ячейка должна найтись!!!
        //ASSERT(1,NULL,pDest!=NULL,TERROR__E_FAIL,
          //_STRING_LITERAL(26, "it_var_set: Cell not found!"));
          
        //if (pDest!=NULL) {
          pDest->tv = TV; 
          pDest->d  = IX;  // Значение IX перезаписывается
        //}
      }
    }
    SET_VAR = PGR;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SET_VAR;
}


void DISTCOND_init__(DISTCOND *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MD0,0,retain)
  __INIT_VAR(data__->MD1,0,retain)
  __INIT_VAR(data__->MD2,0,retain)
  __INIT_VAR(data__->MD3,0,retain)
  __INIT_VAR(data__->MD4,0,retain)
  {
    static const TCOND temp = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
    __SET_VAR(data__->,COND,,temp);
  }
}

// Code part
void DISTCOND_body__(DISTCOND *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MD0,,((UINT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->COND,.ID)) * 65536) + INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMID))));
  __SET_VAR(data__->,MD1,,((INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMIN.A.table[(0) - (0)])) * 65536) + INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMIN.A.table[(1) - (0)]))));
  __SET_VAR(data__->,MD2,,((INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMIN.A.table[(2) - (0)])) * 65536) + INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMIN.V))));
  __SET_VAR(data__->,MD3,,((INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMAX.A.table[(0) - (0)])) * 65536) + INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMAX.A.table[(1) - (0)]))));
  __SET_VAR(data__->,MD4,,((INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMAX.A.table[(2) - (0)])) * 65536) + INT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->COND,.TMAX.V))));

  goto __end;

__end:
  return;
} // DISTCOND_body__() 





void SETCOND_init__(SETCOND *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UINT,MW1000,data__->MW1000,retain)
  __INIT_EXTERNAL(UINT,MW1001,data__->MW1001,retain)
  __INIT_EXTERNAL(UINT,MW1002,data__->MW1002,retain)
  __INIT_EXTERNAL(UINT,MW1003,data__->MW1003,retain)
  __INIT_EXTERNAL(UINT,MW1004,data__->MW1004,retain)
  __INIT_EXTERNAL(UINT,MW1005,data__->MW1005,retain)
  __INIT_EXTERNAL(UINT,MW1006,data__->MW1006,retain)
  __INIT_EXTERNAL(UINT,MW1007,data__->MW1007,retain)
  __INIT_EXTERNAL(UINT,MW1008,data__->MW1008,retain)
  __INIT_EXTERNAL(UINT,MW1009,data__->MW1009,retain)
  __INIT_EXTERNAL(UDINT,MD500,data__->MD500,retain)
  __INIT_EXTERNAL(UDINT,MD501,data__->MD501,retain)
  __INIT_EXTERNAL(UDINT,MD502,data__->MD502,retain)
  __INIT_EXTERNAL(UDINT,MD503,data__->MD503,retain)
  __INIT_EXTERNAL(UDINT,MD504,data__->MD504,retain)
  __INIT_EXTERNAL(UDINT,MD505,data__->MD505,retain)
  __INIT_EXTERNAL(UDINT,MD506,data__->MD506,retain)
  __INIT_EXTERNAL(UDINT,MD507,data__->MD507,retain)
  __INIT_EXTERNAL(UDINT,MD508,data__->MD508,retain)
  __INIT_EXTERNAL(UDINT,MD509,data__->MD509,retain)
  __INIT_EXTERNAL(UDINT,MD510,data__->MD510,retain)
  __INIT_EXTERNAL(UDINT,MD511,data__->MD511,retain)
  __INIT_EXTERNAL(UDINT,MD512,data__->MD512,retain)
  __INIT_EXTERNAL(UDINT,MD513,data__->MD513,retain)
  __INIT_EXTERNAL(UDINT,MD514,data__->MD514,retain)
  __INIT_EXTERNAL(UDINT,MD515,data__->MD515,retain)
  __INIT_EXTERNAL(UDINT,MD516,data__->MD516,retain)
  __INIT_EXTERNAL(UDINT,MD517,data__->MD517,retain)
  __INIT_EXTERNAL(UDINT,MD518,data__->MD518,retain)
  __INIT_EXTERNAL(UDINT,MD519,data__->MD519,retain)
  __INIT_EXTERNAL(UDINT,MD520,data__->MD520,retain)
  __INIT_EXTERNAL(UDINT,MD521,data__->MD521,retain)
  __INIT_EXTERNAL(UDINT,MD522,data__->MD522,retain)
  __INIT_EXTERNAL(UDINT,MD523,data__->MD523,retain)
  __INIT_EXTERNAL(UDINT,MD524,data__->MD524,retain)
  __INIT_EXTERNAL(UDINT,MD525,data__->MD525,retain)
  __INIT_EXTERNAL(UDINT,MD526,data__->MD526,retain)
  __INIT_EXTERNAL(UDINT,MD527,data__->MD527,retain)
  __INIT_EXTERNAL(UDINT,MD528,data__->MD528,retain)
  __INIT_EXTERNAL(UDINT,MD529,data__->MD529,retain)
  __INIT_EXTERNAL(UDINT,MD530,data__->MD530,retain)
  __INIT_EXTERNAL(UDINT,MD531,data__->MD531,retain)
  __INIT_EXTERNAL(UDINT,MD532,data__->MD532,retain)
  __INIT_EXTERNAL(UDINT,MD533,data__->MD533,retain)
  __INIT_EXTERNAL(UDINT,MD534,data__->MD534,retain)
  __INIT_EXTERNAL(UDINT,MD535,data__->MD535,retain)
  __INIT_EXTERNAL(UDINT,MD536,data__->MD536,retain)
  __INIT_EXTERNAL(UDINT,MD537,data__->MD537,retain)
  __INIT_EXTERNAL(UDINT,MD538,data__->MD538,retain)
  __INIT_EXTERNAL(UDINT,MD539,data__->MD539,retain)
  __INIT_EXTERNAL(UDINT,MD540,data__->MD540,retain)
  __INIT_EXTERNAL(UDINT,MD541,data__->MD541,retain)
  __INIT_EXTERNAL(UDINT,MD542,data__->MD542,retain)
  __INIT_EXTERNAL(UDINT,MD543,data__->MD543,retain)
  __INIT_EXTERNAL(UDINT,MD544,data__->MD544,retain)
  __INIT_EXTERNAL(UDINT,MD545,data__->MD545,retain)
  __INIT_EXTERNAL(UDINT,MD546,data__->MD546,retain)
  __INIT_EXTERNAL(UDINT,MD547,data__->MD547,retain)
  __INIT_EXTERNAL(UDINT,MD548,data__->MD548,retain)
  __INIT_EXTERNAL(UDINT,MD549,data__->MD549,retain)
  __INIT_EXTERNAL(UDINT,MD550,data__->MD550,retain)
  __INIT_EXTERNAL(UDINT,MD551,data__->MD551,retain)
  __INIT_EXTERNAL(UDINT,MD552,data__->MD552,retain)
  __INIT_EXTERNAL(UDINT,MD553,data__->MD553,retain)
  __INIT_EXTERNAL(UDINT,MD554,data__->MD554,retain)
  __INIT_EXTERNAL(UDINT,MD555,data__->MD555,retain)
  __INIT_EXTERNAL(UDINT,MD556,data__->MD556,retain)
  __INIT_EXTERNAL(UDINT,MD557,data__->MD557,retain)
  __INIT_EXTERNAL(UDINT,MD558,data__->MD558,retain)
  __INIT_EXTERNAL(UDINT,MD559,data__->MD559,retain)
  __INIT_EXTERNAL(UDINT,MD560,data__->MD560,retain)
  __INIT_EXTERNAL(UDINT,MD561,data__->MD561,retain)
  __INIT_EXTERNAL(UDINT,MD562,data__->MD562,retain)
  __INIT_EXTERNAL(UDINT,MD563,data__->MD563,retain)
  __INIT_EXTERNAL(UDINT,MD564,data__->MD564,retain)
  __INIT_EXTERNAL(UDINT,MD565,data__->MD565,retain)
  __INIT_EXTERNAL(UDINT,MD566,data__->MD566,retain)
  __INIT_EXTERNAL(UDINT,MD567,data__->MD567,retain)
  __INIT_EXTERNAL(UDINT,MD568,data__->MD568,retain)
  __INIT_EXTERNAL(UDINT,MD569,data__->MD569,retain)
  __INIT_EXTERNAL(UDINT,MD570,data__->MD570,retain)
  __INIT_EXTERNAL(UDINT,MD571,data__->MD571,retain)
  __INIT_EXTERNAL(UDINT,MD572,data__->MD572,retain)
  __INIT_EXTERNAL(UDINT,MD573,data__->MD573,retain)
  __INIT_EXTERNAL(UDINT,MD574,data__->MD574,retain)
  __INIT_EXTERNAL(UDINT,MD575,data__->MD575,retain)
  __INIT_EXTERNAL(UDINT,MD576,data__->MD576,retain)
  __INIT_EXTERNAL(UDINT,MD577,data__->MD577,retain)
  __INIT_EXTERNAL(UDINT,MD578,data__->MD578,retain)
  __INIT_EXTERNAL(UDINT,MD579,data__->MD579,retain)
  __INIT_EXTERNAL(UDINT,MD580,data__->MD580,retain)
  __INIT_EXTERNAL(UDINT,MD581,data__->MD581,retain)
  __INIT_EXTERNAL(UDINT,MD582,data__->MD582,retain)
  __INIT_EXTERNAL(UDINT,MD583,data__->MD583,retain)
  __INIT_EXTERNAL(UDINT,MD584,data__->MD584,retain)
  __INIT_EXTERNAL(UDINT,MD585,data__->MD585,retain)
  __INIT_EXTERNAL(UDINT,MD586,data__->MD586,retain)
  __INIT_EXTERNAL(UDINT,MD587,data__->MD587,retain)
  __INIT_EXTERNAL(UDINT,MD588,data__->MD588,retain)
  __INIT_EXTERNAL(UDINT,MD589,data__->MD589,retain)
  __INIT_EXTERNAL(UDINT,MD590,data__->MD590,retain)
  __INIT_EXTERNAL(UDINT,MD591,data__->MD591,retain)
  __INIT_EXTERNAL(UDINT,MD592,data__->MD592,retain)
  __INIT_EXTERNAL(UDINT,MD593,data__->MD593,retain)
  __INIT_EXTERNAL(UDINT,MD594,data__->MD594,retain)
  __INIT_EXTERNAL(UDINT,MD595,data__->MD595,retain)
  __INIT_EXTERNAL(UDINT,MD596,data__->MD596,retain)
  __INIT_EXTERNAL(UDINT,MD597,data__->MD597,retain)
  __INIT_EXTERNAL(UDINT,MD598,data__->MD598,retain)
  __INIT_EXTERNAL(UDINT,MD599,data__->MD599,retain)
  __INIT_EXTERNAL(UDINT,MD600,data__->MD600,retain)
  __INIT_EXTERNAL(UDINT,MD601,data__->MD601,retain)
  __INIT_EXTERNAL(UDINT,MD602,data__->MD602,retain)
  __INIT_EXTERNAL(UDINT,MD603,data__->MD603,retain)
  __INIT_EXTERNAL(UDINT,MD604,data__->MD604,retain)
  __INIT_EXTERNAL(UDINT,MD605,data__->MD605,retain)
  __INIT_EXTERNAL(UDINT,MD606,data__->MD606,retain)
  __INIT_EXTERNAL(UDINT,MD607,data__->MD607,retain)
  __INIT_EXTERNAL(UDINT,MD608,data__->MD608,retain)
  __INIT_EXTERNAL(UDINT,MD609,data__->MD609,retain)
  __INIT_EXTERNAL(UDINT,MD610,data__->MD610,retain)
  __INIT_EXTERNAL(UDINT,MD611,data__->MD611,retain)
  __INIT_EXTERNAL(UDINT,MD612,data__->MD612,retain)
  __INIT_EXTERNAL(UDINT,MD613,data__->MD613,retain)
  __INIT_EXTERNAL(UDINT,MD614,data__->MD614,retain)
  __INIT_EXTERNAL(UDINT,MD615,data__->MD615,retain)
  __INIT_EXTERNAL(UDINT,MD616,data__->MD616,retain)
  __INIT_EXTERNAL(UDINT,MD617,data__->MD617,retain)
  __INIT_EXTERNAL(UDINT,MD618,data__->MD618,retain)
  __INIT_EXTERNAL(UDINT,MD619,data__->MD619,retain)
  __INIT_EXTERNAL(UDINT,MD620,data__->MD620,retain)
  __INIT_EXTERNAL(UDINT,MD621,data__->MD621,retain)
  __INIT_EXTERNAL(UDINT,MD622,data__->MD622,retain)
  __INIT_EXTERNAL(UDINT,MD623,data__->MD623,retain)
  __INIT_EXTERNAL(UDINT,MD624,data__->MD624,retain)
  __INIT_EXTERNAL(UDINT,MD625,data__->MD625,retain)
  __INIT_EXTERNAL(UDINT,MD626,data__->MD626,retain)
  __INIT_EXTERNAL(UDINT,MD627,data__->MD627,retain)
  __INIT_EXTERNAL(UDINT,MD628,data__->MD628,retain)
  __INIT_EXTERNAL(UDINT,MD629,data__->MD629,retain)
  __INIT_EXTERNAL(UDINT,MD630,data__->MD630,retain)
  __INIT_EXTERNAL(UDINT,MD631,data__->MD631,retain)
  __INIT_EXTERNAL(UDINT,MD632,data__->MD632,retain)
  __INIT_EXTERNAL(UDINT,MD633,data__->MD633,retain)
  __INIT_EXTERNAL(UDINT,MD634,data__->MD634,retain)
  __INIT_EXTERNAL(UDINT,MD635,data__->MD635,retain)
  __INIT_EXTERNAL(UDINT,MD636,data__->MD636,retain)
  __INIT_EXTERNAL(UDINT,MD637,data__->MD637,retain)
  __INIT_EXTERNAL(UDINT,MD638,data__->MD638,retain)
  __INIT_EXTERNAL(UDINT,MD639,data__->MD639,retain)
  __INIT_EXTERNAL(UDINT,MD640,data__->MD640,retain)
  __INIT_EXTERNAL(UDINT,MD641,data__->MD641,retain)
  __INIT_EXTERNAL(UDINT,MD642,data__->MD642,retain)
  __INIT_EXTERNAL(UDINT,MD643,data__->MD643,retain)
  __INIT_EXTERNAL(UDINT,MD644,data__->MD644,retain)
  __INIT_EXTERNAL(UDINT,MD645,data__->MD645,retain)
  __INIT_EXTERNAL(UDINT,MD646,data__->MD646,retain)
  __INIT_EXTERNAL(UDINT,MD647,data__->MD647,retain)
  __INIT_EXTERNAL(UDINT,MD648,data__->MD648,retain)
  __INIT_EXTERNAL(UDINT,MD649,data__->MD649,retain)
  __INIT_EXTERNAL(UDINT,MD650,data__->MD650,retain)
  __INIT_EXTERNAL(UDINT,MD651,data__->MD651,retain)
  __INIT_EXTERNAL(UDINT,MD652,data__->MD652,retain)
  __INIT_EXTERNAL(UDINT,MD653,data__->MD653,retain)
  __INIT_EXTERNAL(UDINT,MD654,data__->MD654,retain)
  __INIT_EXTERNAL(UDINT,MD655,data__->MD655,retain)
  __INIT_EXTERNAL(UDINT,MD656,data__->MD656,retain)
  __INIT_EXTERNAL(UDINT,MD657,data__->MD657,retain)
  __INIT_EXTERNAL(UDINT,MD658,data__->MD658,retain)
  __INIT_EXTERNAL(UDINT,MD659,data__->MD659,retain)
  __INIT_EXTERNAL(UDINT,MD660,data__->MD660,retain)
  __INIT_EXTERNAL(UDINT,MD661,data__->MD661,retain)
  __INIT_EXTERNAL(UDINT,MD662,data__->MD662,retain)
  __INIT_EXTERNAL(UDINT,MD663,data__->MD663,retain)
  __INIT_EXTERNAL(UDINT,MD664,data__->MD664,retain)
  __INIT_EXTERNAL(UDINT,MD665,data__->MD665,retain)
  __INIT_EXTERNAL(UDINT,MD666,data__->MD666,retain)
  __INIT_EXTERNAL(UDINT,MD667,data__->MD667,retain)
  __INIT_EXTERNAL(UDINT,MD668,data__->MD668,retain)
  __INIT_EXTERNAL(UDINT,MD669,data__->MD669,retain)
  __INIT_EXTERNAL(UDINT,MD670,data__->MD670,retain)
  __INIT_EXTERNAL(UDINT,MD671,data__->MD671,retain)
  __INIT_EXTERNAL(UDINT,MD672,data__->MD672,retain)
  __INIT_EXTERNAL(UDINT,MD673,data__->MD673,retain)
  __INIT_EXTERNAL(UDINT,MD674,data__->MD674,retain)
  __INIT_EXTERNAL(UDINT,MD675,data__->MD675,retain)
  __INIT_EXTERNAL(UDINT,MD676,data__->MD676,retain)
  __INIT_EXTERNAL(UDINT,MD677,data__->MD677,retain)
  __INIT_EXTERNAL(UDINT,MD678,data__->MD678,retain)
  __INIT_EXTERNAL(UDINT,MD679,data__->MD679,retain)
  __INIT_EXTERNAL(UDINT,MD680,data__->MD680,retain)
  __INIT_EXTERNAL(UDINT,MD681,data__->MD681,retain)
  __INIT_EXTERNAL(UDINT,MD682,data__->MD682,retain)
  __INIT_EXTERNAL(UDINT,MD683,data__->MD683,retain)
  __INIT_EXTERNAL(UDINT,MD684,data__->MD684,retain)
  __INIT_EXTERNAL(UDINT,MD685,data__->MD685,retain)
  __INIT_EXTERNAL(UDINT,MD686,data__->MD686,retain)
  __INIT_EXTERNAL(UDINT,MD687,data__->MD687,retain)
  __INIT_EXTERNAL(UDINT,MD688,data__->MD688,retain)
  __INIT_EXTERNAL(UDINT,MD689,data__->MD689,retain)
  __INIT_EXTERNAL(UDINT,MD690,data__->MD690,retain)
  __INIT_EXTERNAL(UDINT,MD691,data__->MD691,retain)
  __INIT_EXTERNAL(UDINT,MD692,data__->MD692,retain)
  __INIT_EXTERNAL(UDINT,MD693,data__->MD693,retain)
  __INIT_EXTERNAL(UDINT,MD694,data__->MD694,retain)
  __INIT_EXTERNAL(UDINT,MD695,data__->MD695,retain)
  __INIT_EXTERNAL(UDINT,MD696,data__->MD696,retain)
  __INIT_EXTERNAL(UDINT,MD697,data__->MD697,retain)
  __INIT_EXTERNAL(UDINT,MD698,data__->MD698,retain)
  __INIT_EXTERNAL(UDINT,MD699,data__->MD699,retain)
  __INIT_EXTERNAL(UDINT,MD700,data__->MD700,retain)
  __INIT_EXTERNAL(UDINT,MD701,data__->MD701,retain)
  __INIT_EXTERNAL(UDINT,MD702,data__->MD702,retain)
  __INIT_EXTERNAL(UDINT,MD703,data__->MD703,retain)
  __INIT_EXTERNAL(UDINT,MD704,data__->MD704,retain)
  __INIT_EXTERNAL(UDINT,MD705,data__->MD705,retain)
  __INIT_EXTERNAL(UDINT,MD706,data__->MD706,retain)
  __INIT_EXTERNAL(UDINT,MD707,data__->MD707,retain)
  __INIT_EXTERNAL(UDINT,MD708,data__->MD708,retain)
  __INIT_EXTERNAL(UDINT,MD709,data__->MD709,retain)
  __INIT_EXTERNAL(UDINT,MD710,data__->MD710,retain)
  __INIT_EXTERNAL(UDINT,MD711,data__->MD711,retain)
  __INIT_EXTERNAL(UDINT,MD712,data__->MD712,retain)
  __INIT_EXTERNAL(UDINT,MD713,data__->MD713,retain)
  __INIT_EXTERNAL(UDINT,MD714,data__->MD714,retain)
  __INIT_EXTERNAL(UDINT,MD715,data__->MD715,retain)
  __INIT_EXTERNAL(UDINT,MD716,data__->MD716,retain)
  __INIT_EXTERNAL(UDINT,MD717,data__->MD717,retain)
  __INIT_EXTERNAL(UDINT,MD718,data__->MD718,retain)
  __INIT_EXTERNAL(UDINT,MD719,data__->MD719,retain)
  __INIT_EXTERNAL(UDINT,MD720,data__->MD720,retain)
  __INIT_EXTERNAL(UDINT,MD721,data__->MD721,retain)
  __INIT_EXTERNAL(UDINT,MD722,data__->MD722,retain)
  __INIT_EXTERNAL(UDINT,MD723,data__->MD723,retain)
  __INIT_EXTERNAL(UDINT,MD724,data__->MD724,retain)
  __INIT_EXTERNAL(UDINT,MD725,data__->MD725,retain)
  __INIT_EXTERNAL(UDINT,MD726,data__->MD726,retain)
  __INIT_EXTERNAL(UDINT,MD727,data__->MD727,retain)
  __INIT_EXTERNAL(UDINT,MD728,data__->MD728,retain)
  __INIT_EXTERNAL(UDINT,MD729,data__->MD729,retain)
  __INIT_EXTERNAL(UDINT,MD730,data__->MD730,retain)
  __INIT_EXTERNAL(UDINT,MD731,data__->MD731,retain)
  __INIT_EXTERNAL(UDINT,MD732,data__->MD732,retain)
  __INIT_EXTERNAL(UDINT,MD733,data__->MD733,retain)
  __INIT_EXTERNAL(UDINT,MD734,data__->MD734,retain)
  __INIT_EXTERNAL(UDINT,MD735,data__->MD735,retain)
  __INIT_EXTERNAL(UDINT,MD736,data__->MD736,retain)
  __INIT_EXTERNAL(UDINT,MD737,data__->MD737,retain)
  __INIT_EXTERNAL(UDINT,MD738,data__->MD738,retain)
  __INIT_EXTERNAL(UDINT,MD739,data__->MD739,retain)
  __INIT_EXTERNAL(UDINT,MD740,data__->MD740,retain)
  __INIT_EXTERNAL(UDINT,MD741,data__->MD741,retain)
  __INIT_EXTERNAL(UDINT,MD742,data__->MD742,retain)
  __INIT_EXTERNAL(UDINT,MD743,data__->MD743,retain)
  __INIT_EXTERNAL(UDINT,MD744,data__->MD744,retain)
  __INIT_EXTERNAL(UDINT,MD745,data__->MD745,retain)
  __INIT_EXTERNAL(UDINT,MD746,data__->MD746,retain)
  __INIT_EXTERNAL(UDINT,MD747,data__->MD747,retain)
  __INIT_EXTERNAL(UDINT,MD748,data__->MD748,retain)
  __INIT_EXTERNAL(UDINT,MD749,data__->MD749,retain)
  __INIT_EXTERNAL(UDINT,MD750,data__->MD750,retain)
  __INIT_EXTERNAL(UDINT,MD751,data__->MD751,retain)
  __INIT_EXTERNAL(UDINT,MD752,data__->MD752,retain)
  __INIT_EXTERNAL(UDINT,MD753,data__->MD753,retain)
  __INIT_EXTERNAL(UDINT,MD754,data__->MD754,retain)
  __INIT_EXTERNAL(UDINT,MD755,data__->MD755,retain)
  __INIT_EXTERNAL(UDINT,MD756,data__->MD756,retain)
  __INIT_EXTERNAL(UDINT,MD757,data__->MD757,retain)
  __INIT_EXTERNAL(UDINT,MD758,data__->MD758,retain)
  __INIT_EXTERNAL(UDINT,MD759,data__->MD759,retain)
  __INIT_EXTERNAL(UDINT,MD760,data__->MD760,retain)
  __INIT_EXTERNAL(UDINT,MD761,data__->MD761,retain)
  __INIT_EXTERNAL(UDINT,MD762,data__->MD762,retain)
  __INIT_EXTERNAL(UDINT,MD763,data__->MD763,retain)
  __INIT_EXTERNAL(UDINT,MD764,data__->MD764,retain)
  __INIT_EXTERNAL(UDINT,MD765,data__->MD765,retain)
  __INIT_EXTERNAL(UDINT,MD766,data__->MD766,retain)
  __INIT_EXTERNAL(UDINT,MD767,data__->MD767,retain)
  __INIT_EXTERNAL(UDINT,MD768,data__->MD768,retain)
  __INIT_EXTERNAL(UDINT,MD769,data__->MD769,retain)
  __INIT_EXTERNAL(UDINT,MD770,data__->MD770,retain)
  __INIT_EXTERNAL(UDINT,MD771,data__->MD771,retain)
  __INIT_EXTERNAL(UDINT,MD772,data__->MD772,retain)
  __INIT_EXTERNAL(UDINT,MD773,data__->MD773,retain)
  __INIT_EXTERNAL(UDINT,MD774,data__->MD774,retain)
  __INIT_EXTERNAL(UDINT,MD775,data__->MD775,retain)
  __INIT_EXTERNAL(UDINT,MD776,data__->MD776,retain)
  __INIT_EXTERNAL(UDINT,MD777,data__->MD777,retain)
  __INIT_EXTERNAL(UDINT,MD778,data__->MD778,retain)
  __INIT_EXTERNAL(UDINT,MD779,data__->MD779,retain)
  __INIT_EXTERNAL(UDINT,MD780,data__->MD780,retain)
  __INIT_EXTERNAL(UDINT,MD781,data__->MD781,retain)
  __INIT_EXTERNAL(UDINT,MD782,data__->MD782,retain)
  __INIT_EXTERNAL(UDINT,MD783,data__->MD783,retain)
  __INIT_EXTERNAL(UDINT,MD784,data__->MD784,retain)
  __INIT_EXTERNAL(UDINT,MD785,data__->MD785,retain)
  __INIT_EXTERNAL(UDINT,MD786,data__->MD786,retain)
  __INIT_EXTERNAL(UDINT,MD787,data__->MD787,retain)
  __INIT_EXTERNAL(UDINT,MD788,data__->MD788,retain)
  __INIT_EXTERNAL(UDINT,MD789,data__->MD789,retain)
  __INIT_EXTERNAL(UDINT,MD790,data__->MD790,retain)
  __INIT_EXTERNAL(UDINT,MD791,data__->MD791,retain)
  __INIT_EXTERNAL(UDINT,MD792,data__->MD792,retain)
  __INIT_EXTERNAL(UDINT,MD793,data__->MD793,retain)
  __INIT_EXTERNAL(UDINT,MD794,data__->MD794,retain)
  __INIT_EXTERNAL(UDINT,MD795,data__->MD795,retain)
  __INIT_EXTERNAL(UDINT,MD796,data__->MD796,retain)
  __INIT_EXTERNAL(UDINT,MD797,data__->MD797,retain)
  __INIT_EXTERNAL(UDINT,MD798,data__->MD798,retain)
  __INIT_EXTERNAL(UDINT,MD799,data__->MD799,retain)
  __INIT_EXTERNAL(UDINT,MD800,data__->MD800,retain)
  __INIT_EXTERNAL(UDINT,MD801,data__->MD801,retain)
  __INIT_EXTERNAL(UDINT,MD802,data__->MD802,retain)
  __INIT_EXTERNAL(UDINT,MD803,data__->MD803,retain)
  __INIT_EXTERNAL(UDINT,MD804,data__->MD804,retain)
  __INIT_EXTERNAL(UDINT,MD805,data__->MD805,retain)
  __INIT_EXTERNAL(UDINT,MD806,data__->MD806,retain)
  __INIT_EXTERNAL(UDINT,MD807,data__->MD807,retain)
  __INIT_EXTERNAL(UDINT,MD808,data__->MD808,retain)
  __INIT_EXTERNAL(UDINT,MD809,data__->MD809,retain)
  __INIT_EXTERNAL(UDINT,MD810,data__->MD810,retain)
  __INIT_EXTERNAL(UDINT,MD811,data__->MD811,retain)
  __INIT_EXTERNAL(UDINT,MD812,data__->MD812,retain)
  __INIT_EXTERNAL(UDINT,MD813,data__->MD813,retain)
  __INIT_EXTERNAL(UDINT,MD814,data__->MD814,retain)
  __INIT_EXTERNAL(UDINT,MD815,data__->MD815,retain)
  __INIT_EXTERNAL(UDINT,MD816,data__->MD816,retain)
  __INIT_EXTERNAL(UDINT,MD817,data__->MD817,retain)
  __INIT_EXTERNAL(UDINT,MD818,data__->MD818,retain)
  __INIT_EXTERNAL(UDINT,MD819,data__->MD819,retain)
  __INIT_EXTERNAL(UDINT,MD820,data__->MD820,retain)
  __INIT_EXTERNAL(UDINT,MD821,data__->MD821,retain)
  __INIT_EXTERNAL(UDINT,MD822,data__->MD822,retain)
  __INIT_EXTERNAL(UDINT,MD823,data__->MD823,retain)
  __INIT_EXTERNAL(UDINT,MD824,data__->MD824,retain)
  __INIT_EXTERNAL(UDINT,MD825,data__->MD825,retain)
  __INIT_EXTERNAL(UDINT,MD826,data__->MD826,retain)
  __INIT_EXTERNAL(UDINT,MD827,data__->MD827,retain)
  __INIT_EXTERNAL(UDINT,MD828,data__->MD828,retain)
  __INIT_EXTERNAL(UDINT,MD829,data__->MD829,retain)
  __INIT_EXTERNAL(UDINT,MD830,data__->MD830,retain)
  __INIT_EXTERNAL(UDINT,MD831,data__->MD831,retain)
  __INIT_EXTERNAL(UDINT,MD832,data__->MD832,retain)
  __INIT_EXTERNAL(UDINT,MD833,data__->MD833,retain)
  __INIT_EXTERNAL(UDINT,MD834,data__->MD834,retain)
  __INIT_EXTERNAL(UDINT,MD835,data__->MD835,retain)
  __INIT_EXTERNAL(UDINT,MD836,data__->MD836,retain)
  __INIT_EXTERNAL(UDINT,MD837,data__->MD837,retain)
  __INIT_EXTERNAL(UDINT,MD838,data__->MD838,retain)
  __INIT_EXTERNAL(UDINT,MD839,data__->MD839,retain)
  __INIT_EXTERNAL(UDINT,MD840,data__->MD840,retain)
  __INIT_EXTERNAL(UDINT,MD841,data__->MD841,retain)
  __INIT_EXTERNAL(UDINT,MD842,data__->MD842,retain)
  __INIT_EXTERNAL(UDINT,MD843,data__->MD843,retain)
  __INIT_EXTERNAL(UDINT,MD844,data__->MD844,retain)
  __INIT_EXTERNAL(UDINT,MD845,data__->MD845,retain)
  __INIT_EXTERNAL(UDINT,MD846,data__->MD846,retain)
  __INIT_EXTERNAL(UDINT,MD847,data__->MD847,retain)
  __INIT_EXTERNAL(UDINT,MD848,data__->MD848,retain)
  __INIT_EXTERNAL(UDINT,MD849,data__->MD849,retain)
  __INIT_EXTERNAL(UDINT,MD850,data__->MD850,retain)
  __INIT_EXTERNAL(UDINT,MD851,data__->MD851,retain)
  __INIT_EXTERNAL(UDINT,MD852,data__->MD852,retain)
  __INIT_EXTERNAL(UDINT,MD853,data__->MD853,retain)
  __INIT_EXTERNAL(UDINT,MD854,data__->MD854,retain)
  __INIT_EXTERNAL(UDINT,MD855,data__->MD855,retain)
  __INIT_EXTERNAL(UDINT,MD856,data__->MD856,retain)
  __INIT_EXTERNAL(UDINT,MD857,data__->MD857,retain)
  __INIT_EXTERNAL(UDINT,MD858,data__->MD858,retain)
  __INIT_EXTERNAL(UDINT,MD859,data__->MD859,retain)
  __INIT_EXTERNAL(UDINT,MD860,data__->MD860,retain)
  __INIT_EXTERNAL(UDINT,MD861,data__->MD861,retain)
  __INIT_EXTERNAL(UDINT,MD862,data__->MD862,retain)
  __INIT_EXTERNAL(UDINT,MD863,data__->MD863,retain)
  __INIT_EXTERNAL(UDINT,MD864,data__->MD864,retain)
  __INIT_EXTERNAL(UDINT,MD865,data__->MD865,retain)
  __INIT_EXTERNAL(UDINT,MD866,data__->MD866,retain)
  __INIT_EXTERNAL(UDINT,MD867,data__->MD867,retain)
  __INIT_EXTERNAL(UDINT,MD868,data__->MD868,retain)
  __INIT_EXTERNAL(UDINT,MD869,data__->MD869,retain)
  __INIT_EXTERNAL(UDINT,MD870,data__->MD870,retain)
  __INIT_EXTERNAL(UDINT,MD871,data__->MD871,retain)
  __INIT_EXTERNAL(UDINT,MD872,data__->MD872,retain)
  __INIT_EXTERNAL(UDINT,MD873,data__->MD873,retain)
  __INIT_EXTERNAL(UDINT,MD874,data__->MD874,retain)
  __INIT_EXTERNAL(UDINT,MD875,data__->MD875,retain)
  __INIT_EXTERNAL(UDINT,MD876,data__->MD876,retain)
  __INIT_EXTERNAL(UDINT,MD877,data__->MD877,retain)
  __INIT_EXTERNAL(UDINT,MD878,data__->MD878,retain)
  __INIT_EXTERNAL(UDINT,MD879,data__->MD879,retain)
  __INIT_EXTERNAL(UDINT,MD880,data__->MD880,retain)
  __INIT_EXTERNAL(UDINT,MD881,data__->MD881,retain)
  __INIT_EXTERNAL(UDINT,MD882,data__->MD882,retain)
  __INIT_EXTERNAL(UDINT,MD883,data__->MD883,retain)
  __INIT_EXTERNAL(UDINT,MD884,data__->MD884,retain)
  __INIT_EXTERNAL(UDINT,MD885,data__->MD885,retain)
  __INIT_EXTERNAL(UDINT,MD886,data__->MD886,retain)
  __INIT_EXTERNAL(UDINT,MD887,data__->MD887,retain)
  __INIT_EXTERNAL(UDINT,MD888,data__->MD888,retain)
  __INIT_EXTERNAL(UDINT,MD889,data__->MD889,retain)
  __INIT_EXTERNAL(UDINT,MD890,data__->MD890,retain)
  __INIT_EXTERNAL(UDINT,MD891,data__->MD891,retain)
  __INIT_EXTERNAL(UDINT,MD892,data__->MD892,retain)
  __INIT_EXTERNAL(UDINT,MD893,data__->MD893,retain)
  __INIT_EXTERNAL(UDINT,MD894,data__->MD894,retain)
  __INIT_EXTERNAL(UDINT,MD895,data__->MD895,retain)
  __INIT_EXTERNAL(UDINT,MD896,data__->MD896,retain)
  __INIT_EXTERNAL(UDINT,MD897,data__->MD897,retain)
  __INIT_EXTERNAL(UDINT,MD898,data__->MD898,retain)
  __INIT_EXTERNAL(UDINT,MD899,data__->MD899,retain)
  __INIT_EXTERNAL(UDINT,MD900,data__->MD900,retain)
  __INIT_EXTERNAL(UDINT,MD901,data__->MD901,retain)
  __INIT_EXTERNAL(UDINT,MD902,data__->MD902,retain)
  __INIT_EXTERNAL(UDINT,MD903,data__->MD903,retain)
  __INIT_EXTERNAL(UDINT,MD904,data__->MD904,retain)
  __INIT_EXTERNAL(UDINT,MD905,data__->MD905,retain)
  __INIT_EXTERNAL(UDINT,MD906,data__->MD906,retain)
  __INIT_EXTERNAL(UDINT,MD907,data__->MD907,retain)
  __INIT_EXTERNAL(UDINT,MD908,data__->MD908,retain)
  __INIT_EXTERNAL(UDINT,MD909,data__->MD909,retain)
  __INIT_EXTERNAL(UDINT,MD910,data__->MD910,retain)
  __INIT_EXTERNAL(UDINT,MD911,data__->MD911,retain)
  __INIT_EXTERNAL(UDINT,MD912,data__->MD912,retain)
  __INIT_EXTERNAL(UDINT,MD913,data__->MD913,retain)
  __INIT_EXTERNAL(UDINT,MD914,data__->MD914,retain)
  __INIT_EXTERNAL(UDINT,MD915,data__->MD915,retain)
  __INIT_EXTERNAL(UDINT,MD916,data__->MD916,retain)
  __INIT_EXTERNAL(UDINT,MD917,data__->MD917,retain)
  __INIT_EXTERNAL(UDINT,MD918,data__->MD918,retain)
  __INIT_EXTERNAL(UDINT,MD919,data__->MD919,retain)
  __INIT_EXTERNAL(UDINT,MD920,data__->MD920,retain)
  __INIT_EXTERNAL(UDINT,MD921,data__->MD921,retain)
  __INIT_EXTERNAL(UDINT,MD922,data__->MD922,retain)
  __INIT_EXTERNAL(UDINT,MD923,data__->MD923,retain)
  __INIT_EXTERNAL(UDINT,MD924,data__->MD924,retain)
  __INIT_EXTERNAL(UDINT,MD925,data__->MD925,retain)
  __INIT_EXTERNAL(UDINT,MD926,data__->MD926,retain)
  __INIT_EXTERNAL(UDINT,MD927,data__->MD927,retain)
  __INIT_EXTERNAL(UDINT,MD928,data__->MD928,retain)
  __INIT_EXTERNAL(UDINT,MD929,data__->MD929,retain)
  __INIT_EXTERNAL(UDINT,MD930,data__->MD930,retain)
  __INIT_EXTERNAL(UDINT,MD931,data__->MD931,retain)
  __INIT_EXTERNAL(UDINT,MD932,data__->MD932,retain)
  __INIT_EXTERNAL(UDINT,MD933,data__->MD933,retain)
  __INIT_EXTERNAL(UDINT,MD934,data__->MD934,retain)
  __INIT_EXTERNAL(UDINT,MD935,data__->MD935,retain)
  __INIT_EXTERNAL(UDINT,MD936,data__->MD936,retain)
  __INIT_EXTERNAL(UDINT,MD937,data__->MD937,retain)
  __INIT_EXTERNAL(UDINT,MD938,data__->MD938,retain)
  __INIT_EXTERNAL(UDINT,MD939,data__->MD939,retain)
  __INIT_EXTERNAL(UDINT,MD940,data__->MD940,retain)
  __INIT_EXTERNAL(UDINT,MD941,data__->MD941,retain)
  __INIT_EXTERNAL(UDINT,MD942,data__->MD942,retain)
  __INIT_EXTERNAL(UDINT,MD943,data__->MD943,retain)
  __INIT_EXTERNAL(UDINT,MD944,data__->MD944,retain)
  __INIT_EXTERNAL(UDINT,MD945,data__->MD945,retain)
  __INIT_EXTERNAL(UDINT,MD946,data__->MD946,retain)
  __INIT_EXTERNAL(UDINT,MD947,data__->MD947,retain)
  __INIT_EXTERNAL(UDINT,MD948,data__->MD948,retain)
  __INIT_EXTERNAL(UDINT,MD949,data__->MD949,retain)
  __INIT_EXTERNAL(UDINT,MD950,data__->MD950,retain)
  __INIT_EXTERNAL(UDINT,MD951,data__->MD951,retain)
  __INIT_EXTERNAL(UDINT,MD952,data__->MD952,retain)
  __INIT_EXTERNAL(UDINT,MD953,data__->MD953,retain)
  __INIT_EXTERNAL(UDINT,MD954,data__->MD954,retain)
  __INIT_EXTERNAL(UDINT,MD955,data__->MD955,retain)
  __INIT_EXTERNAL(UDINT,MD956,data__->MD956,retain)
  __INIT_EXTERNAL(UDINT,MD957,data__->MD957,retain)
  __INIT_EXTERNAL(UDINT,MD958,data__->MD958,retain)
  __INIT_EXTERNAL(UDINT,MD959,data__->MD959,retain)
  __INIT_EXTERNAL(UDINT,MD960,data__->MD960,retain)
  __INIT_EXTERNAL(UDINT,MD961,data__->MD961,retain)
  __INIT_EXTERNAL(UDINT,MD962,data__->MD962,retain)
  __INIT_EXTERNAL(UDINT,MD963,data__->MD963,retain)
  __INIT_EXTERNAL(UDINT,MD964,data__->MD964,retain)
  __INIT_EXTERNAL(UDINT,MD965,data__->MD965,retain)
  __INIT_EXTERNAL(UDINT,MD966,data__->MD966,retain)
  __INIT_EXTERNAL(UDINT,MD967,data__->MD967,retain)
  __INIT_EXTERNAL(UDINT,MD968,data__->MD968,retain)
  __INIT_EXTERNAL(UDINT,MD969,data__->MD969,retain)
  __INIT_EXTERNAL(UDINT,MD970,data__->MD970,retain)
  __INIT_EXTERNAL(UDINT,MD971,data__->MD971,retain)
  __INIT_EXTERNAL(UDINT,MD972,data__->MD972,retain)
  __INIT_EXTERNAL(UDINT,MD973,data__->MD973,retain)
  __INIT_EXTERNAL(UDINT,MD974,data__->MD974,retain)
  __INIT_EXTERNAL(UDINT,MD975,data__->MD975,retain)
  __INIT_EXTERNAL(UDINT,MD976,data__->MD976,retain)
  __INIT_EXTERNAL(UDINT,MD977,data__->MD977,retain)
  __INIT_EXTERNAL(UDINT,MD978,data__->MD978,retain)
  __INIT_EXTERNAL(UDINT,MD979,data__->MD979,retain)
  __INIT_EXTERNAL(UDINT,MD980,data__->MD980,retain)
  __INIT_EXTERNAL(UDINT,MD981,data__->MD981,retain)
  __INIT_EXTERNAL(UDINT,MD982,data__->MD982,retain)
  __INIT_EXTERNAL(UDINT,MD983,data__->MD983,retain)
  __INIT_EXTERNAL(UDINT,MD984,data__->MD984,retain)
  __INIT_EXTERNAL(UDINT,MD985,data__->MD985,retain)
  __INIT_EXTERNAL(UDINT,MD986,data__->MD986,retain)
  __INIT_EXTERNAL(UDINT,MD987,data__->MD987,retain)
  __INIT_EXTERNAL(UDINT,MD988,data__->MD988,retain)
  __INIT_EXTERNAL(UDINT,MD989,data__->MD989,retain)
  __INIT_EXTERNAL(UDINT,MD990,data__->MD990,retain)
  __INIT_EXTERNAL(UDINT,MD991,data__->MD991,retain)
  __INIT_EXTERNAL(UDINT,MD992,data__->MD992,retain)
  __INIT_EXTERNAL(UDINT,MD993,data__->MD993,retain)
  __INIT_EXTERNAL(UDINT,MD994,data__->MD994,retain)
  __INIT_EXTERNAL(UDINT,MD995,data__->MD995,retain)
  __INIT_EXTERNAL(UDINT,MD996,data__->MD996,retain)
  __INIT_EXTERNAL(UDINT,MD997,data__->MD997,retain)
  __INIT_EXTERNAL(UDINT,MD998,data__->MD998,retain)
  __INIT_EXTERNAL(UDINT,MD999,data__->MD999,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TCOND temp = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
    __SET_VAR(data__->,COND,,temp);
  }
  DISTCOND_init__(&data__->DIST,retain);
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
}

// Code part
void SETCOND_body__(SETCOND *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    UINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD500,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD501,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD502,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD503,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD504,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD505,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD506,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD507,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD508,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD509,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD510,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD511,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD512,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD513,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD514,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD515,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD516,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD517,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD518,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD519,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD520,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD521,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD522,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD523,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD524,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD525,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD526,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD527,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD528,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD529,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD530,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD531,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD532,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD533,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD534,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD535,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD536,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD537,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD538,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD539,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD540,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD541,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD542,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD543,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD544,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD545,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD546,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD547,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD548,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD549,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD550,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD551,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD552,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD553,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD554,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD555,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD556,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD557,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD558,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD559,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD560,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD561,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD562,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD563,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD564,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD565,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD566,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD567,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD568,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD569,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD570,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD571,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD572,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD573,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD574,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD575,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD576,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD577,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD578,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD579,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD580,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD581,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD582,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD583,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD584,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD585,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD586,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD587,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD588,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD589,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD590,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD591,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD592,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD593,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD594,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD595,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD596,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD597,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD598,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD599,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD600,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD601,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD602,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD603,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD604,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD605,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD606,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD607,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD608,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD609,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD610,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD611,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD612,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD613,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD614,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD615,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD616,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD617,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD618,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD619,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD620,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD621,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD622,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD623,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD624,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 25)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD625,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD626,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD627,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD628,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD629,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 26)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD630,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD631,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD632,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD633,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD634,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 27)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD635,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD636,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD637,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD638,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD639,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 28)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD640,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD641,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD642,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD643,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD644,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 29)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD645,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD646,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD647,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD648,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD649,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 30)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD650,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD651,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD652,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD653,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD654,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 31)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD655,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD656,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD657,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD658,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD659,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 32)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD660,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD661,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD662,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD663,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD664,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 33)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD665,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD666,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD667,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD668,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD669,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 34)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD670,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD671,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD672,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD673,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD674,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 35)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD675,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD676,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD677,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD678,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD679,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 36)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD680,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD681,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD682,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD683,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD684,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 37)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD685,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD686,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD687,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD688,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD689,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 38)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD690,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD691,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD692,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD693,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD694,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 39)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD695,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD696,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD697,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD698,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD699,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 40)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD700,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD701,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD702,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD703,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD704,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 41)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD705,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD706,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD707,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD708,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD709,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 42)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD710,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD711,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD712,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD713,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD714,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 43)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD715,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD716,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD717,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD718,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD719,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 44)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD720,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD721,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD722,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD723,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD724,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 45)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD725,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD726,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD727,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD728,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD729,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 46)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD730,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD731,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD732,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD733,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD734,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 47)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD735,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD736,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD737,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD738,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD739,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 48)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD740,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD741,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD742,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD743,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD744,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 49)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD745,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD746,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD747,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD748,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD749,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 50)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD750,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD751,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD752,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD753,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD754,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 51)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD755,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD756,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD757,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD758,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD759,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 52)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD760,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD761,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD762,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD763,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD764,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 53)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD765,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD766,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD767,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD768,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD769,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 54)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD770,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD771,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD772,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD773,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD774,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 55)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD775,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD776,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD777,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD778,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD779,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 56)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD780,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD781,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD782,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD783,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD784,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 57)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD785,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD786,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD787,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD788,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD789,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 58)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD790,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD791,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD792,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD793,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD794,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 59)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD795,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD796,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD797,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD798,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD799,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 60)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD800,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD801,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD802,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD803,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD804,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 61)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD805,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD806,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD807,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD808,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD809,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 62)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD810,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD811,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD812,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD813,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD814,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 63)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD815,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD816,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD817,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD818,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD819,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 64)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD820,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD821,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD822,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD823,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD824,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 65)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD825,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD826,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD827,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD828,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD829,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 66)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD830,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD831,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD832,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD833,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD834,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 67)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD835,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD836,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD837,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD838,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD839,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 68)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD840,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD841,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD842,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD843,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD844,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 69)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD845,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD846,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD847,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD848,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD849,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 70)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD850,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD851,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD852,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD853,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD854,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 71)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD855,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD856,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD857,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD858,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD859,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 72)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD860,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD861,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD862,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD863,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD864,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 73)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD865,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD866,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD867,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD868,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD869,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 74)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD870,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD871,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD872,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD873,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD874,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 75)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD875,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD876,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD877,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD878,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD879,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 76)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD880,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD881,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD882,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD883,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD884,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 77)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD885,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD886,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD887,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD888,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD889,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 78)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD890,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD891,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD892,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD893,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD894,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 79)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD895,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD896,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD897,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD898,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD899,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 80)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD900,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD901,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD902,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD903,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD904,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 81)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD905,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD906,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD907,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD908,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD909,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 82)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD910,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD911,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD912,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD913,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD914,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 83)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD915,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD916,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD917,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD918,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD919,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 84)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD920,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD921,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD922,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD923,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD924,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 85)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD925,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD926,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD927,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD928,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD929,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 86)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD930,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD931,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD932,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD933,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD934,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 87)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD935,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD936,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD937,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD938,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD939,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 88)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD940,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD941,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD942,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD943,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD944,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 89)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD945,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD946,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD947,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD948,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD949,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 90)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD950,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD951,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD952,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD953,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD954,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 91)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD955,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD956,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD957,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD958,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD959,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 92)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD960,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD961,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD962,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD963,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD964,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 93)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD965,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD966,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD967,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD968,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD969,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 94)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD970,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD971,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD972,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD973,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD974,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 95)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD975,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD976,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD977,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD978,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD979,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 96)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD980,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD981,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD982,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD983,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD984,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 97)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD985,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD986,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD987,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD988,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD989,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 98)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD990,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD991,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD992,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD993,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD994,,__GET_VAR(data__->DIST.MD4));
    }
    else if ((__case_expression == 99)) {
      __SET_VAR(data__->DIST.,COND,,__GET_VAR(data__->COND,));
      DISTCOND_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD995,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD996,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD997,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD998,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD999,,__GET_VAR(data__->DIST.MD4));
    }
  };

  goto __end;

__end:
  return;
} // SETCOND_body__() 





// FUNCTION
REAL BETA_N4(
  BOOL EN, 
  BOOL *__ENO, 
  REAL HT, 
  TMATTER M1, 
  TMATTER M2, 
  P_RERE ALFA_NM1, 
  REAL TN_N, 
  REAL TN_NP1, 
  REAL Q1N_N, 
  REAL Q2N_N)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL B = 0.0;
  REAL C = 0.0;
  REAL F = 0.0;
  REAL BETA_N4 = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return BETA_N4;
  }
  if (((M1.H < 1.0E-4) || (M2.H < 1.0E-4))) {
    BETA_N4 = TN_NP1;
  } else {
    C = (M1.L / M1.H);
    B = ((((M1.L / M1.H) + (M2.L / M2.H)) + ((M1.L * M1.H) / ((2.0 * M1.A) * HT))) + ((M2.L * M2.H) / ((2.0 * M2.A) * HT)));
    F = (((( -(TN_N) * (((M1.L * M1.H) / ((2.0 * M1.A) * HT)) + ((M2.L * M2.H) / ((2.0 * M2.A) * HT)))) - (((M1.L * M1.H) / (2.0 * M1.A)) * Q1N_N)) - (((M2.L * M2.H) / (2.0 * M2.A)) * Q2N_N)) - ((M2.L / M2.H) * TN_NP1));
    BETA_N4 = (((C * ALFA_NM1.B) - F) / (B - (C * ALFA_NM1.A)));
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return BETA_N4;
}


// FUNCTION
TVAR _REF(
  BOOL EN, 
  BOOL *__ENO, 
  SINT PIT, 
  TDOT DOT, 
  USINT DIR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAR _REF = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _REF;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    union { // 32-бит (4 байта)
      TVAR tv;
      struct {  // Значение (var)
        USINT  R:1;       // Флаг R (для var = 0)
          INT  A:15;      // Значение A (актуальное)
        USINT  C:1;       // Флаг C (1-расчёт готов)
          INT  B:15;      // Значение B (предыдущее)
      };
      struct {  // Ссылка   (ref)
        USINT  r:1;       // Флаг r (для ref = 1)
        USINT  d:2;       // Направление (0,1,2,3)
        USINT  p:8;       // Позиция элемента
        USINT  i:7;       // Индекс сетки по DOT (0..127)
        USINT  j:7;       // Индекс сетки по J (0..127)
        USINT  k:7;       // Индекс сетки по K (0..127)
      };
    } var /*= {0}*/;
    #pragma pack(pop)
    var.r=1;              // Флаг r = 1
    var.d=DIR;            // Индекс направления     (d)
    var.p=PIT;            // Ссылка на элемент      (p)
    var.i=DOT.A.table[0]; // Индексы узла элемента  (i)
    var.j=DOT.A.table[1]; // Индексы узла элемента  (j)
    var.k=DOT.A.table[2]; // Индексы узла элемента  (k)
    _REF=var.tv;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _REF;
}


// FUNCTION
REAL BETA_N3(
  BOOL EN, 
  BOOL *__ENO, 
  REAL HT, 
  TMATTER M, 
  P_RERE ALFA_N1, 
  REAL TN_N, 
  REAL TQ_N, 
  REAL QN_N, 
  REAL V_N, 
  REAL R_N, 
  BOOL BOUND3)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL D_N = 0.0;
  REAL E_N = 0.0;
  REAL B_N = 0.0;
  REAL K_N = 0.0;
  REAL H2 = 0.0;
  REAL AT2 = 0.0;
  REAL DE = 0.0;
  REAL DENOM = 0.0;
  REAL BETA_N3 = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return BETA_N3;
  }
  if ((R_N > 1.0E-5)) {
    if (!(BOUND3)) {
      M.K = 1.0;
    };
    B_N = (M.K / M.L);
    K_N = (B_N * TQ_N);
    if (!(BOUND3)) {
      B_N = 0.0;
    };
    if ((R_N < 1.0E5)) {
      E_N = (M.H / (2.0 * R_N));
    };
    D_N = ((ABS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)V_N) * M.H) / (2.0 * M.A));
  } else {
    M.H = 0.0;
  };
  H2 = (M.H * M.H);
  AT2 = ((2.0 * M.A) * HT);
  DE = ((1.0 - D_N) + E_N);
  DENOM = (H2 + (AT2 * ((1.0 + ((DE * M.H) * B_N)) - ALFA_N1.A)));
  BETA_N3 = (((H2 * (TN_N + (HT * QN_N))) + (AT2 * (ALFA_N1.B + ((DE * M.H) * K_N)))) / DENOM);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return BETA_N3;
}


// FUNCTION
THANDLE ITS_GR2(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 OFF)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  THANDLE ITS_GR2 = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ITS_GR2;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 ITS_GR2 = (THANDLE)&__GET_GLOBAL_ITS()->GR2.table[OFF]; 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ITS_GR2;
}


// FUNCTION
ULINT INT4UL(
  BOOL EN, 
  BOOL *__ENO, 
  INT I0, 
  INT I1, 
  INT I2, 
  INT I3)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  ULINT INT4UL = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return INT4UL;
  }
  INT4UL = ((((INT_TO_ULINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)I0) * 0x1000000000000) + (INT_TO_ULINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)I1) * 0x100000000)) + (INT_TO_ULINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)I2) * 0x10000)) + INT_TO_ULINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)I3));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return INT4UL;
}


void DISTVARO_init__(DISTVARO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MD0,0,retain)
  __INIT_VAR(data__->MD1,0,retain)
  __INIT_VAR(data__->MD2,0,retain)
  __INIT_VAR(data__->MD3,0,retain)
  __INIT_VAR(data__->MD4,0,retain)
  __INIT_VAR(data__->MD5,0,retain)
  {
    static const TVARO temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};
    __SET_VAR(data__->,VARO,,temp);
  }
}

// Code part
void DISTVARO_body__(DISTVARO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MD0,,__GET_VAR(data__->VARO,.DTO));
  __SET_VAR(data__->,MD1,,TIME_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->VARO,.TMO)));
  __SET_VAR(data__->,MD2,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->VARO,.QTY)));
  __SET_VAR(data__->,MD3,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->VARO,.QTS)));
  __SET_VAR(data__->,MD4,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->VARO,.RO1)));
  __SET_VAR(data__->,MD5,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->VARO,.RO2)));

  goto __end;

__end:
  return;
} // DISTVARO_body__() 





void FRONT_init__(FRONT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->PT,__time_to_timespec(1, 0, 1, 0, 0, 0),retain)
  __INIT_VAR(data__->OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->INV,__BOOL_LITERAL(FALSE),retain)
  TP_init__(&data__->F_TP,retain);
  __INIT_VAR(data__->F_TP_ET,__time_to_timespec(1, 0, 0, 0, 0, 0),retain)
  __INIT_VAR(data__->F_TP_Q,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->BRESTART,__BOOL_LITERAL(TRUE),retain)
}

// Code part
void FRONT_body__(FRONT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if (__GET_VAR(data__->IN,)) {
    if (__GET_VAR(data__->BRESTART,)) {
      __SET_VAR(data__->,BRESTART,,__BOOL_LITERAL(FALSE));
      __SET_VAR(data__->F_TP.,IN,,__BOOL_LITERAL(FALSE));
      TP_body__(&data__->F_TP);
      __SET_VAR(data__->F_TP.,IN,,__BOOL_LITERAL(TRUE));
      __SET_VAR(data__->F_TP.,PT,,__GET_VAR(data__->PT,));
      TP_body__(&data__->F_TP);
      __SET_VAR(data__->,F_TP_Q,,__GET_VAR(data__->F_TP.Q));
      __SET_VAR(data__->,F_TP_ET,,__GET_VAR(data__->F_TP.ET));
      __SET_VAR(data__->,OUT,,__BOOL_LITERAL(TRUE));
    };
    __SET_VAR(data__->F_TP.,IN,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->F_TP.,PT,,__GET_VAR(data__->PT,));
    TP_body__(&data__->F_TP);
    __SET_VAR(data__->,F_TP_Q,,__GET_VAR(data__->F_TP.Q));
    __SET_VAR(data__->,F_TP_ET,,__GET_VAR(data__->F_TP.ET));
    if ((__GET_VAR(data__->F_TP.Q,) == __BOOL_LITERAL(FALSE))) {
      if ((__GET_VAR(data__->OUT,) == __BOOL_LITERAL(FALSE))) {
        __SET_VAR(data__->F_TP.,IN,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->F_TP.,PT,,__GET_VAR(data__->PT,));
        TP_body__(&data__->F_TP);
        __SET_VAR(data__->,F_TP_Q,,__GET_VAR(data__->F_TP.Q));
        __SET_VAR(data__->,F_TP_ET,,__GET_VAR(data__->F_TP.ET));
        __SET_VAR(data__->,OUT,,__BOOL_LITERAL(TRUE));
      } else {
        __SET_VAR(data__->,OUT,,__BOOL_LITERAL(FALSE));
      };
    } else {
      __SET_VAR(data__->,OUT,,__BOOL_LITERAL(FALSE));
    };
  } else {
    __SET_VAR(data__->,BRESTART,,__BOOL_LITERAL(TRUE));
  };
  if ((__GET_VAR(data__->OUT,) != __BOOL_LITERAL(TRUE))) {
    __SET_VAR(data__->,INV,,__BOOL_LITERAL(TRUE));
  } else {
    __SET_VAR(data__->,INV,,__BOOL_LITERAL(FALSE));
  };
  goto __end;

  goto __end;

__end:
  return;
} // FRONT_body__() 





// FUNCTION
BOOL ST_IS_DEBUG(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL TMP)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_IS_DEBUG = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_IS_DEBUG;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (ST_IS_DEBUG=__GET_GLOBAL_STAT()->DBG); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_IS_DEBUG;
}


// FUNCTION
TPOS8 IT_IP(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 IT_IP = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_IP;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (IT_IP = __GET_GLOBAL_ITS()->IT.table[PIT].PAR); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_IP;
}


// FUNCTION
THEAD M_HEAD(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5, 
  UDINT MD6, 
  UDINT MD7, 
  UDINT MD8, 
  UDINT MD9)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  THEAD M_HEAD = {0,0,0,0,0,0,0,{{__time_to_timespec(1, 0, 60, 0, 0, 0),__time_to_timespec(1, 0, 30, 0, 0, 0),__time_to_timespec(1, 0, 10, 0, 0, 0),__time_to_timespec(1, 0, 5, 0, 0, 0)}},0,0,0,0,{{0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_HEAD;
  }
  M_HEAD.NI = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD0 / 65536)) / 256));
  M_HEAD.NG = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD0 / 65536)),
      (UINT)256));
  M_HEAD.NM = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD0,
        (UDINT)65536)) / 256));
  M_HEAD.NV = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD0,
          (UDINT)65536)),
      (UINT)256));
  M_HEAD.NP = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD1 / 65536)) / 256));
  M_HEAD.RI = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD1 / 65536)),
      (UINT)256));
  M_HEAD.ID = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD1,
      (UDINT)65536));
  M_HEAD.TR.table[(0) - (0)] = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_HEAD.TR.table[(1) - (0)] = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_HEAD.TR.table[(2) - (0)] = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD4);
  M_HEAD.TR.table[(3) - (0)] = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD5);
  M_HEAD.AX = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD6 / 65536));
  M_HEAD.PX = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD6,
      (UDINT)65536));
  M_HEAD.PY = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD7 / 65536));
  M_HEAD.PZ = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD7,
      (UDINT)65536));
  M_HEAD.RV.table[(0) - (0)] = UDINT_TO_DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD8);
  M_HEAD.RV.table[(1) - (0)] = UDINT_TO_DINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD9);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_HEAD;
}


void GETHEAD_init__(GETHEAD *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD0,data__->MD0,retain)
  __INIT_EXTERNAL(UDINT,MD1,data__->MD1,retain)
  __INIT_EXTERNAL(UDINT,MD2,data__->MD2,retain)
  __INIT_EXTERNAL(UDINT,MD3,data__->MD3,retain)
  __INIT_EXTERNAL(UDINT,MD4,data__->MD4,retain)
  __INIT_EXTERNAL(UDINT,MD5,data__->MD5,retain)
  __INIT_EXTERNAL(UDINT,MD6,data__->MD6,retain)
  __INIT_EXTERNAL(UDINT,MD7,data__->MD7,retain)
  __INIT_EXTERNAL(UDINT,MD8,data__->MD8,retain)
  __INIT_EXTERNAL(UDINT,MD9,data__->MD9,retain)
  {
    static const THEAD temp = {0,0,0,0,0,0,0,{{__time_to_timespec(1, 0, 60, 0, 0, 0),__time_to_timespec(1, 0, 30, 0, 0, 0),__time_to_timespec(1, 0, 10, 0, 0, 0),__time_to_timespec(1, 0, 5, 0, 0, 0)}},0,0,0,0,{{0,0}}};
    __SET_VAR(data__->,HEAD,,temp);
  }
}

// Code part
void GETHEAD_body__(GETHEAD *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,HEAD,,M_HEAD(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_EXTERNAL(data__->MD0,),
    (UDINT)__GET_EXTERNAL(data__->MD1,),
    (UDINT)__GET_EXTERNAL(data__->MD2,),
    (UDINT)__GET_EXTERNAL(data__->MD3,),
    (UDINT)__GET_EXTERNAL(data__->MD4,),
    (UDINT)__GET_EXTERNAL(data__->MD5,),
    (UDINT)__GET_EXTERNAL(data__->MD6,),
    (UDINT)__GET_EXTERNAL(data__->MD7,),
    (UDINT)__GET_EXTERNAL(data__->MD8,),
    (UDINT)__GET_EXTERNAL(data__->MD9,)));

  goto __end;

__end:
  return;
} // GETHEAD_body__() 





// FUNCTION
TPOS8 IT_IV(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 IT_IV = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_IV;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (IT_IV = __GET_GLOBAL_ITS()->IT.table[PIT].IV); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_IV;
}


// FUNCTION
USINT SH_GET_AX(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  USINT SH_GET_AX = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_GET_AX;
  }
  SH_GET_AX = WORD_TO_USINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(SH.WF & 0x3000),
      (SINT)12));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_GET_AX;
}


// FUNCTION
P_RERE ALFA_I(
  BOOL EN, 
  BOOL *__ENO, 
  REAL HT, 
  TMATTER M, 
  P_RERE ALFA_IM, 
  REAL TI, 
  REAL QI, 
  REAL VI, 
  REAL RI)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL AI = 0.0;
  REAL BI = 0.0;
  REAL CI = 0.0;
  REAL FI = 0.0;
  REAL RH = 0.0;
  REAL RK = 0.0;
  REAL VIA = 0.0;
  REAL VIP = 0.0;
  REAL VIM = 0.0;
  REAL DI = 0.0;
  REAL EI = 0.0;
  REAL DENOM = 0.0;
  P_RERE ALFA_I = {0.0,0.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ALFA_I;
  }
  if ((RI < 1.0E-4)) {
    ALFA_I.A = 1.0;
    ALFA_I.B = 0.0;
  } else {
    if ((RI < 1.0E5)) {
      EI = (M.H / (2.0 * RI));
    };
    if ((VI != 0.0)) {
      VIA = ABS__REAL__REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)VI);
      VIP = ((VIA + VI) / 2.0);
      VIM = ((VIA - VI) / 2.0);
      DI = ((VIA * M.H) / (2.0 * M.A));
    };
    RH = (HT / M.H);
    RK = ((M.A * RH) / M.H);
    AI = (((RK * (1.0 + EI)) / (1.0 + DI)) + (VIM * RH));
    CI = (((RK * (1.0 - EI)) / (1.0 + DI)) + (VIP * RH));
    BI = ((1.0 + ((2.0 * RK) / (1.0 + DI))) + (VIA * RH));
    FI = ( -(TI) - (HT * QI));
    DENOM = (BI - (CI * ALFA_IM.A));
    ALFA_I.A = (AI / DENOM);
    ALFA_I.B = (((CI * ALFA_IM.B) - FI) / DENOM);
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ALFA_I;
}


// FUNCTION
REAL TEMP_I(
  BOOL EN, 
  BOOL *__ENO, 
  P_RERE _ALFA_I, 
  REAL T_IP)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL TEMP_I = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return TEMP_I;
  }
  TEMP_I = ((_ALFA_I.A * T_IP) + _ALFA_I.B);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return TEMP_I;
}


// FUNCTION
UDINT REAL2UDI(
  BOOL EN, 
  BOOL *__ENO, 
  REAL VALUE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  UDINT TMP = 0;
  UDINT REAL2UDI = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return REAL2UDI;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    union { UDINT  udint; float real; } value;
    value.real = VALUE;
    TMP = value.udint;
  
  #undef GetFbVar
  #undef SetFbVar
;
  REAL2UDI = TMP;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return REAL2UDI;
}


// FUNCTION
__ARRAY_OF_REAL_3 _POINT(
  BOOL EN, 
  BOOL *__ENO, 
  REAL X, 
  REAL Y, 
  REAL Z)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_REAL_3 _POINT = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _POINT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    _POINT.table[0] = X; 
    _POINT.table[1] = Y; 
    _POINT.table[2] = Z; 
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _POINT;
}


// FUNCTION
REAL KTO_OIL(
  BOOL EN, 
  BOOL *__ENO, 
  REAL L, 
  REAL DTM)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL C = 0.59;
  REAL N = 0.25;
  REAL KTO_OIL = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return KTO_OIL;
  }
  KTO_OIL = 36.0;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return KTO_OIL;
}


// FUNCTION
TMATTER _MATTER(
  BOOL EN, 
  BOOL *__ENO, 
  REAL A, 
  REAL L, 
  REAL H, 
  REAL K)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TMATTER _MATTER = {0.0001,1.0,0.001,1.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _MATTER;
  }
  _MATTER.A = A;
  _MATTER.L = L;
  _MATTER.H = H;
  _MATTER.K = K;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _MATTER;
}


// FUNCTION
REAL GRAD(
  BOOL EN, 
  BOOL *__ENO, 
  REAL RAD)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL GRAD = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GRAD;
  }
  GRAD = (RAD * 57.295779513082320876798154814105);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GRAD;
}


// FUNCTION
TAXO AXO(
  BOOL EN, 
  BOOL *__ENO, 
  USINT AX, 
  BOOL INSIDE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TAXO AXO = {0,0,0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return AXO;
  }
  if (INSIDE) {
    AXO.X = ((3 == 0)?0:((0 + AX) % 3));
    AXO.Y = ((3 == 0)?0:((1 + AX) % 3));
    AXO.Z = ((3 == 0)?0:((2 + AX) % 3));
  } else {
    AXO.X = ((3 == 0)?0:((3 - AX) % 3));
    AXO.Y = ((3 == 0)?0:((4 - AX) % 3));
    AXO.Z = ((3 == 0)?0:((5 - AX) % 3));
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return AXO;
}


// FUNCTION
TSHAPE GET_SH(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PSH)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TSHAPE GET_SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_SH;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_SH = __GET_GLOBAL_ITS()->SH.table[PSH]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_SH;
}


// FUNCTION
__ARRAY_OF_REAL_3 SH_ABS2LOC(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH, 
  REAL X, 
  REAL Y, 
  REAL Z)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  USINT AX = 0;
  __ARRAY_OF_REAL_3 A = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 B = {{0.0,0.0,0.0}};
  TAXO O = {0,0,0};
  REAL PI = 3.1415926535897932384626433832795;
  REAL PI_2 = 1.5707963267948966192313216916398;
  BOOL RAD = __BOOL_LITERAL(FALSE);
  REAL DX = 1.0E-5;
  __ARRAY_OF_REAL_3 SH_ABS2LOC = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_ABS2LOC;
  }
  AX = SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH);
  A = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(X - SH.P0.table[(0) - (0)]),
    (REAL)(Y - SH.P0.table[(1) - (0)]),
    (REAL)(Z - SH.P0.table[(2) - (0)]));
  if ((AX > 0)) {
    O = AXO(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)AX,
      (BOOL)__BOOL_LITERAL(TRUE));
    B.table[(O.X) - (0)] = SQRT__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)((A.table[(O.X) - (0)] * A.table[(O.X) - (0)]) + (A.table[(O.Y) - (0)] * A.table[(O.Y) - (0)])));
    if ((ABS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)A.table[(O.X) - (0)]) < DX)) {
      A.table[(O.X) - (0)] = 0.0;
    };
    if ((ABS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)A.table[(O.Y) - (0)]) < DX)) {
      A.table[(O.Y) - (0)] = 0.0;
    };
    if ((A.table[(O.X) - (0)] < 0.0)) {
      if ((A.table[(O.Y) - (0)] < 0.0)) {
        B.table[(O.Y) - (0)] = (ATAN__REAL__REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(A.table[(O.Y) - (0)] / A.table[(O.X) - (0)])) - PI);
      } else {
        B.table[(O.Y) - (0)] = (ATAN__REAL__REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(A.table[(O.Y) - (0)] / A.table[(O.X) - (0)])) + PI);
      };
    } else {
      if ((A.table[(O.X) - (0)] > 0.0)) {
        B.table[(O.Y) - (0)] = ATAN__REAL__REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(A.table[(O.Y) - (0)] / A.table[(O.X) - (0)]));
      } else {
        if ((A.table[(O.Y) - (0)] < 0.0)) {
          B.table[(O.Y) - (0)] =  -(PI_2);
        } else {
          if ((A.table[(O.Y) - (0)] > 0.0)) {
            B.table[(O.Y) - (0)] = PI_2;
          } else {
            B.table[(O.Y) - (0)] = 0.0;
          };
        };
      };
    };
    if ((ABS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)B.table[(O.Y) - (0)]) < DX)) {
      B.table[(O.Y) - (0)] = 0.0;
    };
    if (!(RAD)) {
      B.table[(O.Y) - (0)] = GRAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)B.table[(O.Y) - (0)]);
    };
    B.table[(O.Z) - (0)] = A.table[(O.Z) - (0)];
  } else {
    B = A;
  };
  SH_ABS2LOC = B;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_ABS2LOC;
}


// FUNCTION
REAL RADI(
  BOOL EN, 
  BOOL *__ENO, 
  REAL GRA)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL RADI = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return RADI;
  }
  RADI = (GRA * 0.01745329251994329576923690768489);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return RADI;
}


// FUNCTION
REAL ANGLE(
  BOOL EN, 
  BOOL *__ENO, 
  REAL A, 
  REAL L0, 
  REAL PI2)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL ANGLE = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ANGLE;
  }
  while ((A < L0)) {
    A = (A + PI2);
  };
  while ((A > (L0 + PI2))) {
    A = (A - PI2);
  };
  ANGLE = A;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ANGLE;
}


// FUNCTION
__ARRAY_OF_REAL_3 REFORM(
  BOOL EN, 
  BOOL *__ENO, 
  WORD WF, 
  REAL ANG, 
  REAL PT, 
  REAL PL, 
  REAL LX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL PR = 0.0;
  P_BOOL LR = {__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE)};
  SINT Q = 0;
  REAL K = 0.0;
  REAL KX = 0.0;
  REAL PI_2 = 90.0;
  REAL PI_4 = 45.0;
  REAL PI = 180.0;
  REAL PI3_2 = 270.0;
  __ARRAY_OF_REAL_3 REFORM = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return REFORM;
  }
  ANG = ANGLE(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)ANG,
    (REAL)0.0,
    (REAL)360.0);
  if ((ANG >= 0.0)) {
    if (((ANG >= 0.0) && (ANG < PI_2))) {
      Q = 0;
    } else if (((ANG >= PI_2) && (ANG < PI))) {
      Q = 1;
    } else if (((ANG >= PI) && (ANG < PI3_2))) {
      Q = 2;
    } else {
      Q = 3;
    };
  } else {
    if (((ANG <= 0.0) && (ANG >  -(PI_2)))) {
      Q = 3;
    } else if (((ANG <=  -(PI_2)) && (ANG >  -(PI)))) {
      Q = 2;
    } else if (((ANG <=  -(PI)) && (ANG >  -(PI3_2)))) {
      Q = 1;
    } else {
      Q = 0;
    };
  };
  LR.A = ((WF & SHL__WORD__WORD__SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)0x10,
    (SINT)Q)) != 0);
  LR.B = ((WF & SHL__WORD__WORD__SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)0x1,
    (SINT)Q)) != 0);
  if ((LR.A || LR.B)) {
    ANG = ANGLE(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)ANG,
      (REAL)0.0,
      (REAL)PI_2);
    if ((ANG < PI_4)) {
      KX = (1.0 / COS__REAL__REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)RADI(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)ANG)));
    } else {
      KX = (1.0 / SIN__REAL__REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)RADI(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)ANG)));
    };
    PR = (PL + LX);
    K = ((PT - PL) / LX);
    if (LR.A) {
      PL = (PL * KX);
    };
    if (LR.B) {
      PR = (PR * KX);
    };
    LX = (PR - PL);
    PT = (PL + (K * LX));
  };
  REFORM.table[(0) - (0)] = PT;
  REFORM.table[(1) - (0)] = PL;
  REFORM.table[(2) - (0)] = LX;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return REFORM;
}


// FUNCTION
TDOT SH_POINT2DOT(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH, 
  REAL X, 
  REAL Y, 
  REAL Z, 
  BOOL FCHK)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_REAL_3 HN = {{0.0,0.0,0.0}};
  USINT AX = 0;
  __ARRAY_OF_REAL_3 PL = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 PR = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 PDL = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 PDR = {{0.0,0.0,0.0}};
  TAXO OX = {0,0,0};
  __ARRAY_OF_REAL_3 PT = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 HX = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 P = {{0.0,0.0,0.0}};
  BYTE B = 0;
  BOOL BRES = __BOOL_LITERAL(TRUE);
  REAL DX = 1.0E-5;
  TDOT SH_POINT2DOT = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_POINT2DOT;
  }
  AX = SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH);
  PT = SH_ABS2LOC(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH,
    (REAL)X,
    (REAL)Y,
    (REAL)Z);
  if ((AX != 0)) {
    OX = AXO(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)AX,
      (BOOL)__BOOL_LITERAL(TRUE));
    PT.table[(OX.Y) - (0)] = ANGLE(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)PT.table[(OX.Y) - (0)],
      (REAL)SH.PL.table[(OX.Y) - (0)],
      (REAL)360.0);
    P = REFORM(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)SH.WF,
      (REAL)PT.table[(OX.Y) - (0)],
      (REAL)0.0,
      (REAL)SH.PL.table[(OX.X) - (0)],
      (REAL)SH.LX.table[(OX.X) - (0)]);
    SH.PL.table[(OX.X) - (0)] = P.table[(1) - (0)];
    SH.LX.table[(OX.X) - (0)] = P.table[(2) - (0)];
  };
  if (FCHK) {
    PL = SH.PL;
    PR = _POINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)(SH.PL.table[(0) - (0)] + SH.LX.table[(0) - (0)]),
      (REAL)(SH.PL.table[(1) - (0)] + SH.LX.table[(1) - (0)]),
      (REAL)(SH.PL.table[(2) - (0)] + SH.LX.table[(2) - (0)]));
    PDL = _POINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)(PL.table[(0) - (0)] * (1.0 + DX)),
      (REAL)(PL.table[(1) - (0)] * (1.0 + DX)),
      (REAL)(PL.table[(2) - (0)] * (1.0 + DX)));
    PDR = _POINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)(PR.table[(0) - (0)] * (1.0 - DX)),
      (REAL)(PR.table[(1) - (0)] * (1.0 - DX)),
      (REAL)(PR.table[(2) - (0)] * (1.0 - DX)));
    if (((PT.table[(0) - (0)] > PDL.table[(0) - (0)]) && (PT.table[(0) - (0)] < PDR.table[(0) - (0)]))) {
      if (((PT.table[(1) - (0)] > PDL.table[(1) - (0)]) && (PT.table[(1) - (0)] < PDR.table[(1) - (0)]))) {
        if (((PT.table[(2) - (0)] > PDL.table[(2) - (0)]) && (PT.table[(2) - (0)] < PDR.table[(2) - (0)]))) {
          B = 0x1;
        };
      };
    };
    if ((B == 0)) {
      if (((PT.table[(0) - (0)] >= PL.table[(0) - (0)]) && (PT.table[(0) - (0)] <= PDL.table[(0) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)1));
      } else if (((PT.table[(0) - (0)] <= PR.table[(0) - (0)]) && (PT.table[(0) - (0)] >= PDR.table[(0) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)2));
      };
      if (((PT.table[(1) - (0)] >= PL.table[(1) - (0)]) && (PT.table[(1) - (0)] <= PDL.table[(1) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)3));
      } else if (((PT.table[(1) - (0)] <= PR.table[(1) - (0)]) && (PT.table[(1) - (0)] >= PDR.table[(1) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)4));
      };
      if (((PT.table[(2) - (0)] >= PL.table[(2) - (0)]) && (PT.table[(2) - (0)] <= PDL.table[(2) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)5));
      } else if (((PT.table[(2) - (0)] <= PR.table[(2) - (0)]) && (PT.table[(2) - (0)] >= PDR.table[(2) - (0)]))) {
        B = (B | SHL__BYTE__BYTE__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (BYTE)0x1,
          (SINT)6));
      };
    };
    if ((B == 0)) {
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

      #undef GetFbVar
      #undef SetFbVar
;
    };
  };
  if ((SH.KN.table[(0) - (0)] > 1)) {
    HN.table[(0) - (0)] = (SH.LX.table[(0) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(0) - (0)] - 1)));
  };
  if ((SH.KN.table[(1) - (0)] > 1)) {
    HN.table[(1) - (0)] = (SH.LX.table[(1) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(1) - (0)] - 1)));
  };
  if ((SH.KN.table[(2) - (0)] > 1)) {
    HN.table[(2) - (0)] = (SH.LX.table[(2) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(2) - (0)] - 1)));
  };
  SH_POINT2DOT = _DOT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)BYTE_TO_INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (BYTE)B),
    (INT)MIN__INT__INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (INT)(SH.KN.table[(0) - (0)] - 1),
      (INT)MAX__INT__INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)2,
        (INT)0,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)((PT.table[(0) - (0)] - SH.PL.table[(0) - (0)]) / HN.table[(0) - (0)])))),
    (INT)MIN__INT__INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (INT)(SH.KN.table[(1) - (0)] - 1),
      (INT)MAX__INT__INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)2,
        (INT)0,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)((PT.table[(1) - (0)] - SH.PL.table[(1) - (0)]) / HN.table[(1) - (0)])))),
    (INT)MIN__INT__INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)2,
      (INT)(SH.KN.table[(2) - (0)] - 1),
      (INT)MAX__INT__INT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)2,
        (INT)0,
        (INT)REAL_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)((PT.table[(2) - (0)] - SH.PL.table[(2) - (0)]) / HN.table[(2) - (0)])))));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_POINT2DOT;
}


// FUNCTION
TPOS8 ID2PIT(
  BOOL EN, 
  BOOL *__ENO, 
  UINT ID)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL BFOUND = __BOOL_LITERAL(FALSE);
  TPOS8 ID2PIT = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ID2PIT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    ID2PIT = -1;
    P_IDPIT *IDS = &(__GET_GLOBAL_ITS()->PR.table[0]);
    if (ID != 0) {
      int lBound=0, rBound=99, test;
      if (IDS[rBound].A == ID)      ID2PIT = IDS[rBound].B;
      else if (IDS[lBound].A == ID) ID2PIT = IDS[lBound].B;
      else {
        if ( (IDS[lBound].A < ID) && (ID < IDS[rBound].A) ) {
          while (TRUE) {
            test = (lBound+rBound)/2;
            if (IDS[test].A == ID) { ID2PIT = IDS[test].B; break; }
            if (rBound-lBound <= 1) break;
            if (IDS[test].A <  ID) lBound = test; else rBound = test; 
          }
        }
      }
    } else ID2PIT = IDS[0].B;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ID2PIT;
}


// FUNCTION
TDOT DO_FINDDOT(
  BOOL EN, 
  BOOL *__ENO, 
  REAL X, 
  REAL Y, 
  REAL Z, 
  TPOS8 IGN)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  TPOS8 SKIP_TO = -1;
  SINT I = 0;
  SINT N = 0;
  __ARRAY_OF_TDOT_8 DOTS = {{{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}},{0,{{0,0,0}}}}};
  __ARRAY_OF_TPOS8_8 P = {{-1,-1,-1,-1,-1,-1,-1,-1}};
  TDOT DO_FINDDOT = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_FINDDOT;
  }
  if (!(ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE)))) {
    goto __end;
  };
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0));
  while (((IT.ITEM != -1) && (N < 8))) {
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_DOWN)) {
        if ((SKIP_TO == -1)) {
          if (IS_POLY(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)IT.ITEM)) {
            DO_FINDDOT = SH_POINT2DOT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)GET_SH(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IT.ITEM),
              (REAL)X,
              (REAL)Y,
              (REAL)Z,
              (BOOL)__BOOL_LITERAL(TRUE));
            if ((DO_FINDDOT.V <= 0)) {
              SKIP_TO = IT.ITEM;
            };
          };
        };
      }
      else if ((__case_expression == TDIR__DIR_UP)) {
        if ((SKIP_TO != -1)) {
          if ((SKIP_TO == IT.ITEM)) {
            SKIP_TO = -1;
          };
        } else {
          if (!(IS_POLY(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)IT.ITEM))) {
            DOTS.table[(N) - (0)] = SH_POINT2DOT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)GET_SH(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IT.ITEM),
              (REAL)X,
              (REAL)Y,
              (REAL)Z,
              (BOOL)__BOOL_LITERAL(TRUE));
            if ((DOTS.table[(N) - (0)].V > 0)) {
              P.table[(N) - (0)] = IT.ITEM;
              N = (N + 1);
            };
          };
        };
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  DO_FINDDOT = _DOT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)-1,
    (INT)0,
    (INT)0,
    (INT)0);
  if ((N > 0)) {
    for(I = 0; I <= (N - 1); I++) {
      if (((P.table[(I) - (0)] != IGN) || (N == 1))) {
        DO_FINDDOT = DOTS.table[(I) - (0)];
        DO_FINDDOT.V = SINT_TO_INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)P.table[(I) - (0)]);
        break;
      };
    };
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_FINDDOT;
}


// FUNCTION
TDOT VAR_D(
  BOOL EN, 
  BOOL *__ENO, 
  TVAR TV)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TDOT VAR_D = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return VAR_D;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)

    // Величина должна быть ссылкой
    // ASSERT(1, NULL, pvar->r, TERROR__E_FAIL, __INIT_STRING);
    VAR_D.A.table[0] = ((pvar_t) &TV)->i;
    VAR_D.A.table[1] = ((pvar_t) &TV)->j;
    VAR_D.A.table[2] = ((pvar_t) &TV)->k;
    VAR_D.V          = ((pvar_t) &TV)->p;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return VAR_D;
}


void DISTLONG4_init__(DISTLONG4 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  {
    static const __ARRAY_OF_ULINT_4 temp = {{0,0,0,0}};
    __SET_VAR(data__->,LONG4,,temp);
  }
  __INIT_VAR(data__->ML0,0,retain)
  __INIT_VAR(data__->ML1,0,retain)
  __INIT_VAR(data__->ML2,0,retain)
  __INIT_VAR(data__->ML3,0,retain)
}

// Code part
void DISTLONG4_body__(DISTLONG4 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ML0,,__GET_VAR(data__->LONG4,.table[(0) - (0)]));
  __SET_VAR(data__->,ML1,,__GET_VAR(data__->LONG4,.table[(1) - (0)]));
  __SET_VAR(data__->,ML2,,__GET_VAR(data__->LONG4,.table[(2) - (0)]));
  __SET_VAR(data__->,ML3,,__GET_VAR(data__->LONG4,.table[(3) - (0)]));

  goto __end;

__end:
  return;
} // DISTLONG4_body__() 





void SETLONG4_init__(SETLONG4 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(ULINT,ML0,data__->ML0,retain)
  __INIT_EXTERNAL(ULINT,ML1,data__->ML1,retain)
  __INIT_EXTERNAL(ULINT,ML2,data__->ML2,retain)
  __INIT_EXTERNAL(ULINT,ML3,data__->ML3,retain)
  __INIT_EXTERNAL(ULINT,ML4,data__->ML4,retain)
  __INIT_EXTERNAL(ULINT,ML5,data__->ML5,retain)
  __INIT_EXTERNAL(ULINT,ML6,data__->ML6,retain)
  __INIT_EXTERNAL(ULINT,ML7,data__->ML7,retain)
  __INIT_EXTERNAL(ULINT,ML8,data__->ML8,retain)
  __INIT_EXTERNAL(ULINT,ML9,data__->ML9,retain)
  __INIT_EXTERNAL(ULINT,ML10,data__->ML10,retain)
  __INIT_EXTERNAL(ULINT,ML11,data__->ML11,retain)
  __INIT_EXTERNAL(ULINT,ML12,data__->ML12,retain)
  __INIT_EXTERNAL(ULINT,ML13,data__->ML13,retain)
  __INIT_EXTERNAL(ULINT,ML14,data__->ML14,retain)
  __INIT_EXTERNAL(ULINT,ML15,data__->ML15,retain)
  __INIT_EXTERNAL(ULINT,ML16,data__->ML16,retain)
  __INIT_EXTERNAL(ULINT,ML17,data__->ML17,retain)
  __INIT_EXTERNAL(ULINT,ML18,data__->ML18,retain)
  __INIT_EXTERNAL(ULINT,ML19,data__->ML19,retain)
  __INIT_EXTERNAL(ULINT,ML20,data__->ML20,retain)
  __INIT_EXTERNAL(ULINT,ML21,data__->ML21,retain)
  __INIT_EXTERNAL(ULINT,ML22,data__->ML22,retain)
  __INIT_EXTERNAL(ULINT,ML23,data__->ML23,retain)
  __INIT_EXTERNAL(ULINT,ML24,data__->ML24,retain)
  __INIT_EXTERNAL(ULINT,ML25,data__->ML25,retain)
  __INIT_EXTERNAL(ULINT,ML26,data__->ML26,retain)
  __INIT_EXTERNAL(ULINT,ML27,data__->ML27,retain)
  __INIT_EXTERNAL(ULINT,ML28,data__->ML28,retain)
  __INIT_EXTERNAL(ULINT,ML29,data__->ML29,retain)
  __INIT_EXTERNAL(ULINT,ML30,data__->ML30,retain)
  __INIT_EXTERNAL(ULINT,ML31,data__->ML31,retain)
  __INIT_EXTERNAL(ULINT,ML32,data__->ML32,retain)
  __INIT_EXTERNAL(ULINT,ML33,data__->ML33,retain)
  __INIT_EXTERNAL(ULINT,ML34,data__->ML34,retain)
  __INIT_EXTERNAL(ULINT,ML35,data__->ML35,retain)
  __INIT_EXTERNAL(ULINT,ML36,data__->ML36,retain)
  __INIT_EXTERNAL(ULINT,ML37,data__->ML37,retain)
  __INIT_EXTERNAL(ULINT,ML38,data__->ML38,retain)
  __INIT_EXTERNAL(ULINT,ML39,data__->ML39,retain)
  __INIT_EXTERNAL(ULINT,ML40,data__->ML40,retain)
  __INIT_EXTERNAL(ULINT,ML41,data__->ML41,retain)
  __INIT_EXTERNAL(ULINT,ML42,data__->ML42,retain)
  __INIT_EXTERNAL(ULINT,ML43,data__->ML43,retain)
  __INIT_EXTERNAL(ULINT,ML44,data__->ML44,retain)
  __INIT_EXTERNAL(ULINT,ML45,data__->ML45,retain)
  __INIT_EXTERNAL(ULINT,ML46,data__->ML46,retain)
  __INIT_EXTERNAL(ULINT,ML47,data__->ML47,retain)
  __INIT_EXTERNAL(ULINT,ML48,data__->ML48,retain)
  __INIT_EXTERNAL(ULINT,ML49,data__->ML49,retain)
  __INIT_EXTERNAL(ULINT,ML50,data__->ML50,retain)
  __INIT_EXTERNAL(ULINT,ML51,data__->ML51,retain)
  __INIT_EXTERNAL(ULINT,ML52,data__->ML52,retain)
  __INIT_EXTERNAL(ULINT,ML53,data__->ML53,retain)
  __INIT_EXTERNAL(ULINT,ML54,data__->ML54,retain)
  __INIT_EXTERNAL(ULINT,ML55,data__->ML55,retain)
  __INIT_EXTERNAL(ULINT,ML56,data__->ML56,retain)
  __INIT_EXTERNAL(ULINT,ML57,data__->ML57,retain)
  __INIT_EXTERNAL(ULINT,ML58,data__->ML58,retain)
  __INIT_EXTERNAL(ULINT,ML59,data__->ML59,retain)
  __INIT_EXTERNAL(ULINT,ML60,data__->ML60,retain)
  __INIT_EXTERNAL(ULINT,ML61,data__->ML61,retain)
  __INIT_EXTERNAL(ULINT,ML62,data__->ML62,retain)
  __INIT_EXTERNAL(ULINT,ML63,data__->ML63,retain)
  __INIT_EXTERNAL(ULINT,ML64,data__->ML64,retain)
  __INIT_EXTERNAL(ULINT,ML65,data__->ML65,retain)
  __INIT_EXTERNAL(ULINT,ML66,data__->ML66,retain)
  __INIT_EXTERNAL(ULINT,ML67,data__->ML67,retain)
  __INIT_EXTERNAL(ULINT,ML68,data__->ML68,retain)
  __INIT_EXTERNAL(ULINT,ML69,data__->ML69,retain)
  __INIT_EXTERNAL(ULINT,ML70,data__->ML70,retain)
  __INIT_EXTERNAL(ULINT,ML71,data__->ML71,retain)
  __INIT_EXTERNAL(ULINT,ML72,data__->ML72,retain)
  __INIT_EXTERNAL(ULINT,ML73,data__->ML73,retain)
  __INIT_EXTERNAL(ULINT,ML74,data__->ML74,retain)
  __INIT_EXTERNAL(ULINT,ML75,data__->ML75,retain)
  __INIT_EXTERNAL(ULINT,ML76,data__->ML76,retain)
  __INIT_EXTERNAL(ULINT,ML77,data__->ML77,retain)
  __INIT_EXTERNAL(ULINT,ML78,data__->ML78,retain)
  __INIT_EXTERNAL(ULINT,ML79,data__->ML79,retain)
  __INIT_EXTERNAL(ULINT,ML80,data__->ML80,retain)
  __INIT_EXTERNAL(ULINT,ML81,data__->ML81,retain)
  __INIT_EXTERNAL(ULINT,ML82,data__->ML82,retain)
  __INIT_EXTERNAL(ULINT,ML83,data__->ML83,retain)
  __INIT_EXTERNAL(ULINT,ML84,data__->ML84,retain)
  __INIT_EXTERNAL(ULINT,ML85,data__->ML85,retain)
  __INIT_EXTERNAL(ULINT,ML86,data__->ML86,retain)
  __INIT_EXTERNAL(ULINT,ML87,data__->ML87,retain)
  __INIT_EXTERNAL(ULINT,ML88,data__->ML88,retain)
  __INIT_EXTERNAL(ULINT,ML89,data__->ML89,retain)
  __INIT_EXTERNAL(ULINT,ML90,data__->ML90,retain)
  __INIT_EXTERNAL(ULINT,ML91,data__->ML91,retain)
  __INIT_EXTERNAL(ULINT,ML92,data__->ML92,retain)
  __INIT_EXTERNAL(ULINT,ML93,data__->ML93,retain)
  __INIT_EXTERNAL(ULINT,ML94,data__->ML94,retain)
  __INIT_EXTERNAL(ULINT,ML95,data__->ML95,retain)
  __INIT_EXTERNAL(ULINT,ML96,data__->ML96,retain)
  __INIT_EXTERNAL(ULINT,ML97,data__->ML97,retain)
  __INIT_EXTERNAL(ULINT,ML98,data__->ML98,retain)
  __INIT_EXTERNAL(ULINT,ML99,data__->ML99,retain)
  __INIT_EXTERNAL(ULINT,ML100,data__->ML100,retain)
  __INIT_EXTERNAL(ULINT,ML101,data__->ML101,retain)
  __INIT_EXTERNAL(ULINT,ML102,data__->ML102,retain)
  __INIT_EXTERNAL(ULINT,ML103,data__->ML103,retain)
  __INIT_EXTERNAL(ULINT,ML104,data__->ML104,retain)
  __INIT_EXTERNAL(ULINT,ML105,data__->ML105,retain)
  __INIT_EXTERNAL(ULINT,ML106,data__->ML106,retain)
  __INIT_EXTERNAL(ULINT,ML107,data__->ML107,retain)
  __INIT_EXTERNAL(ULINT,ML108,data__->ML108,retain)
  __INIT_EXTERNAL(ULINT,ML109,data__->ML109,retain)
  __INIT_EXTERNAL(ULINT,ML110,data__->ML110,retain)
  __INIT_EXTERNAL(ULINT,ML111,data__->ML111,retain)
  __INIT_EXTERNAL(ULINT,ML112,data__->ML112,retain)
  __INIT_EXTERNAL(ULINT,ML113,data__->ML113,retain)
  __INIT_EXTERNAL(ULINT,ML114,data__->ML114,retain)
  __INIT_EXTERNAL(ULINT,ML115,data__->ML115,retain)
  __INIT_EXTERNAL(ULINT,ML116,data__->ML116,retain)
  __INIT_EXTERNAL(ULINT,ML117,data__->ML117,retain)
  __INIT_EXTERNAL(ULINT,ML118,data__->ML118,retain)
  __INIT_EXTERNAL(ULINT,ML119,data__->ML119,retain)
  __INIT_EXTERNAL(ULINT,ML120,data__->ML120,retain)
  __INIT_EXTERNAL(ULINT,ML121,data__->ML121,retain)
  __INIT_EXTERNAL(ULINT,ML122,data__->ML122,retain)
  __INIT_EXTERNAL(ULINT,ML123,data__->ML123,retain)
  __INIT_EXTERNAL(ULINT,ML124,data__->ML124,retain)
  __INIT_EXTERNAL(ULINT,ML125,data__->ML125,retain)
  __INIT_EXTERNAL(ULINT,ML126,data__->ML126,retain)
  __INIT_EXTERNAL(ULINT,ML127,data__->ML127,retain)
  __INIT_EXTERNAL(ULINT,ML128,data__->ML128,retain)
  __INIT_EXTERNAL(ULINT,ML129,data__->ML129,retain)
  __INIT_EXTERNAL(ULINT,ML130,data__->ML130,retain)
  __INIT_EXTERNAL(ULINT,ML131,data__->ML131,retain)
  __INIT_EXTERNAL(ULINT,ML132,data__->ML132,retain)
  __INIT_EXTERNAL(ULINT,ML133,data__->ML133,retain)
  __INIT_EXTERNAL(ULINT,ML134,data__->ML134,retain)
  __INIT_EXTERNAL(ULINT,ML135,data__->ML135,retain)
  __INIT_EXTERNAL(ULINT,ML136,data__->ML136,retain)
  __INIT_EXTERNAL(ULINT,ML137,data__->ML137,retain)
  __INIT_EXTERNAL(ULINT,ML138,data__->ML138,retain)
  __INIT_EXTERNAL(ULINT,ML139,data__->ML139,retain)
  __INIT_EXTERNAL(ULINT,ML140,data__->ML140,retain)
  __INIT_EXTERNAL(ULINT,ML141,data__->ML141,retain)
  __INIT_EXTERNAL(ULINT,ML142,data__->ML142,retain)
  __INIT_EXTERNAL(ULINT,ML143,data__->ML143,retain)
  __INIT_EXTERNAL(ULINT,ML144,data__->ML144,retain)
  __INIT_EXTERNAL(ULINT,ML145,data__->ML145,retain)
  __INIT_EXTERNAL(ULINT,ML146,data__->ML146,retain)
  __INIT_EXTERNAL(ULINT,ML147,data__->ML147,retain)
  __INIT_EXTERNAL(ULINT,ML148,data__->ML148,retain)
  __INIT_EXTERNAL(ULINT,ML149,data__->ML149,retain)
  __INIT_EXTERNAL(ULINT,ML150,data__->ML150,retain)
  __INIT_EXTERNAL(ULINT,ML151,data__->ML151,retain)
  __INIT_EXTERNAL(ULINT,ML152,data__->ML152,retain)
  __INIT_EXTERNAL(ULINT,ML153,data__->ML153,retain)
  __INIT_EXTERNAL(ULINT,ML154,data__->ML154,retain)
  __INIT_EXTERNAL(ULINT,ML155,data__->ML155,retain)
  __INIT_EXTERNAL(ULINT,ML156,data__->ML156,retain)
  __INIT_EXTERNAL(ULINT,ML157,data__->ML157,retain)
  __INIT_EXTERNAL(ULINT,ML158,data__->ML158,retain)
  __INIT_EXTERNAL(ULINT,ML159,data__->ML159,retain)
  __INIT_EXTERNAL(ULINT,ML160,data__->ML160,retain)
  __INIT_EXTERNAL(ULINT,ML161,data__->ML161,retain)
  __INIT_EXTERNAL(ULINT,ML162,data__->ML162,retain)
  __INIT_EXTERNAL(ULINT,ML163,data__->ML163,retain)
  __INIT_EXTERNAL(ULINT,ML164,data__->ML164,retain)
  __INIT_EXTERNAL(ULINT,ML165,data__->ML165,retain)
  __INIT_EXTERNAL(ULINT,ML166,data__->ML166,retain)
  __INIT_EXTERNAL(ULINT,ML167,data__->ML167,retain)
  __INIT_EXTERNAL(ULINT,ML168,data__->ML168,retain)
  __INIT_EXTERNAL(ULINT,ML169,data__->ML169,retain)
  __INIT_EXTERNAL(ULINT,ML170,data__->ML170,retain)
  __INIT_EXTERNAL(ULINT,ML171,data__->ML171,retain)
  __INIT_EXTERNAL(ULINT,ML172,data__->ML172,retain)
  __INIT_EXTERNAL(ULINT,ML173,data__->ML173,retain)
  __INIT_EXTERNAL(ULINT,ML174,data__->ML174,retain)
  __INIT_EXTERNAL(ULINT,ML175,data__->ML175,retain)
  __INIT_EXTERNAL(ULINT,ML176,data__->ML176,retain)
  __INIT_EXTERNAL(ULINT,ML177,data__->ML177,retain)
  __INIT_EXTERNAL(ULINT,ML178,data__->ML178,retain)
  __INIT_EXTERNAL(ULINT,ML179,data__->ML179,retain)
  __INIT_EXTERNAL(ULINT,ML180,data__->ML180,retain)
  __INIT_EXTERNAL(ULINT,ML181,data__->ML181,retain)
  __INIT_EXTERNAL(ULINT,ML182,data__->ML182,retain)
  __INIT_EXTERNAL(ULINT,ML183,data__->ML183,retain)
  __INIT_EXTERNAL(ULINT,ML184,data__->ML184,retain)
  __INIT_EXTERNAL(ULINT,ML185,data__->ML185,retain)
  __INIT_EXTERNAL(ULINT,ML186,data__->ML186,retain)
  __INIT_EXTERNAL(ULINT,ML187,data__->ML187,retain)
  __INIT_EXTERNAL(ULINT,ML188,data__->ML188,retain)
  __INIT_EXTERNAL(ULINT,ML189,data__->ML189,retain)
  __INIT_EXTERNAL(ULINT,ML190,data__->ML190,retain)
  __INIT_EXTERNAL(ULINT,ML191,data__->ML191,retain)
  __INIT_EXTERNAL(ULINT,ML192,data__->ML192,retain)
  __INIT_EXTERNAL(ULINT,ML193,data__->ML193,retain)
  __INIT_EXTERNAL(ULINT,ML194,data__->ML194,retain)
  __INIT_EXTERNAL(ULINT,ML195,data__->ML195,retain)
  __INIT_EXTERNAL(ULINT,ML196,data__->ML196,retain)
  __INIT_EXTERNAL(ULINT,ML197,data__->ML197,retain)
  __INIT_EXTERNAL(ULINT,ML198,data__->ML198,retain)
  __INIT_EXTERNAL(ULINT,ML199,data__->ML199,retain)
  __INIT_EXTERNAL(ULINT,ML200,data__->ML200,retain)
  __INIT_EXTERNAL(ULINT,ML201,data__->ML201,retain)
  __INIT_EXTERNAL(ULINT,ML202,data__->ML202,retain)
  __INIT_EXTERNAL(ULINT,ML203,data__->ML203,retain)
  __INIT_EXTERNAL(ULINT,ML204,data__->ML204,retain)
  __INIT_EXTERNAL(ULINT,ML205,data__->ML205,retain)
  __INIT_EXTERNAL(ULINT,ML206,data__->ML206,retain)
  __INIT_EXTERNAL(ULINT,ML207,data__->ML207,retain)
  __INIT_EXTERNAL(ULINT,ML208,data__->ML208,retain)
  __INIT_EXTERNAL(ULINT,ML209,data__->ML209,retain)
  __INIT_EXTERNAL(ULINT,ML210,data__->ML210,retain)
  __INIT_EXTERNAL(ULINT,ML211,data__->ML211,retain)
  __INIT_EXTERNAL(ULINT,ML212,data__->ML212,retain)
  __INIT_EXTERNAL(ULINT,ML213,data__->ML213,retain)
  __INIT_EXTERNAL(ULINT,ML214,data__->ML214,retain)
  __INIT_EXTERNAL(ULINT,ML215,data__->ML215,retain)
  __INIT_EXTERNAL(ULINT,ML216,data__->ML216,retain)
  __INIT_EXTERNAL(ULINT,ML217,data__->ML217,retain)
  __INIT_EXTERNAL(ULINT,ML218,data__->ML218,retain)
  __INIT_EXTERNAL(ULINT,ML219,data__->ML219,retain)
  __INIT_EXTERNAL(ULINT,ML220,data__->ML220,retain)
  __INIT_EXTERNAL(ULINT,ML221,data__->ML221,retain)
  __INIT_EXTERNAL(ULINT,ML222,data__->ML222,retain)
  __INIT_EXTERNAL(ULINT,ML223,data__->ML223,retain)
  __INIT_EXTERNAL(ULINT,ML224,data__->ML224,retain)
  __INIT_EXTERNAL(ULINT,ML225,data__->ML225,retain)
  __INIT_EXTERNAL(ULINT,ML226,data__->ML226,retain)
  __INIT_EXTERNAL(ULINT,ML227,data__->ML227,retain)
  __INIT_EXTERNAL(ULINT,ML228,data__->ML228,retain)
  __INIT_EXTERNAL(ULINT,ML229,data__->ML229,retain)
  __INIT_EXTERNAL(ULINT,ML230,data__->ML230,retain)
  __INIT_EXTERNAL(ULINT,ML231,data__->ML231,retain)
  __INIT_EXTERNAL(ULINT,ML232,data__->ML232,retain)
  __INIT_EXTERNAL(ULINT,ML233,data__->ML233,retain)
  __INIT_EXTERNAL(ULINT,ML234,data__->ML234,retain)
  __INIT_EXTERNAL(ULINT,ML235,data__->ML235,retain)
  __INIT_EXTERNAL(ULINT,ML236,data__->ML236,retain)
  __INIT_EXTERNAL(ULINT,ML237,data__->ML237,retain)
  __INIT_EXTERNAL(ULINT,ML238,data__->ML238,retain)
  __INIT_EXTERNAL(ULINT,ML239,data__->ML239,retain)
  __INIT_EXTERNAL(ULINT,ML240,data__->ML240,retain)
  __INIT_EXTERNAL(ULINT,ML241,data__->ML241,retain)
  __INIT_EXTERNAL(ULINT,ML242,data__->ML242,retain)
  __INIT_EXTERNAL(ULINT,ML243,data__->ML243,retain)
  __INIT_EXTERNAL(ULINT,ML244,data__->ML244,retain)
  __INIT_EXTERNAL(ULINT,ML245,data__->ML245,retain)
  __INIT_EXTERNAL(ULINT,ML246,data__->ML246,retain)
  __INIT_EXTERNAL(ULINT,ML247,data__->ML247,retain)
  __INIT_EXTERNAL(ULINT,ML248,data__->ML248,retain)
  __INIT_EXTERNAL(ULINT,ML249,data__->ML249,retain)
  __INIT_EXTERNAL(ULINT,ML250,data__->ML250,retain)
  __INIT_EXTERNAL(ULINT,ML251,data__->ML251,retain)
  __INIT_EXTERNAL(ULINT,ML252,data__->ML252,retain)
  __INIT_EXTERNAL(ULINT,ML253,data__->ML253,retain)
  __INIT_EXTERNAL(ULINT,ML254,data__->ML254,retain)
  __INIT_EXTERNAL(ULINT,ML255,data__->ML255,retain)
  __INIT_EXTERNAL(ULINT,ML256,data__->ML256,retain)
  __INIT_EXTERNAL(ULINT,ML257,data__->ML257,retain)
  __INIT_EXTERNAL(ULINT,ML258,data__->ML258,retain)
  __INIT_EXTERNAL(ULINT,ML259,data__->ML259,retain)
  __INIT_EXTERNAL(ULINT,ML260,data__->ML260,retain)
  __INIT_EXTERNAL(ULINT,ML261,data__->ML261,retain)
  __INIT_EXTERNAL(ULINT,ML262,data__->ML262,retain)
  __INIT_EXTERNAL(ULINT,ML263,data__->ML263,retain)
  __INIT_EXTERNAL(ULINT,ML264,data__->ML264,retain)
  __INIT_EXTERNAL(ULINT,ML265,data__->ML265,retain)
  __INIT_EXTERNAL(ULINT,ML266,data__->ML266,retain)
  __INIT_EXTERNAL(ULINT,ML267,data__->ML267,retain)
  __INIT_EXTERNAL(ULINT,ML268,data__->ML268,retain)
  __INIT_EXTERNAL(ULINT,ML269,data__->ML269,retain)
  __INIT_EXTERNAL(ULINT,ML270,data__->ML270,retain)
  __INIT_EXTERNAL(ULINT,ML271,data__->ML271,retain)
  __INIT_EXTERNAL(ULINT,ML272,data__->ML272,retain)
  __INIT_EXTERNAL(ULINT,ML273,data__->ML273,retain)
  __INIT_EXTERNAL(ULINT,ML274,data__->ML274,retain)
  __INIT_EXTERNAL(ULINT,ML275,data__->ML275,retain)
  __INIT_EXTERNAL(ULINT,ML276,data__->ML276,retain)
  __INIT_EXTERNAL(ULINT,ML277,data__->ML277,retain)
  __INIT_EXTERNAL(ULINT,ML278,data__->ML278,retain)
  __INIT_EXTERNAL(ULINT,ML279,data__->ML279,retain)
  __INIT_EXTERNAL(ULINT,ML280,data__->ML280,retain)
  __INIT_EXTERNAL(ULINT,ML281,data__->ML281,retain)
  __INIT_EXTERNAL(ULINT,ML282,data__->ML282,retain)
  __INIT_EXTERNAL(ULINT,ML283,data__->ML283,retain)
  __INIT_EXTERNAL(ULINT,ML284,data__->ML284,retain)
  __INIT_EXTERNAL(ULINT,ML285,data__->ML285,retain)
  __INIT_EXTERNAL(ULINT,ML286,data__->ML286,retain)
  __INIT_EXTERNAL(ULINT,ML287,data__->ML287,retain)
  __INIT_EXTERNAL(ULINT,ML288,data__->ML288,retain)
  __INIT_EXTERNAL(ULINT,ML289,data__->ML289,retain)
  __INIT_EXTERNAL(ULINT,ML290,data__->ML290,retain)
  __INIT_EXTERNAL(ULINT,ML291,data__->ML291,retain)
  __INIT_EXTERNAL(ULINT,ML292,data__->ML292,retain)
  __INIT_EXTERNAL(ULINT,ML293,data__->ML293,retain)
  __INIT_EXTERNAL(ULINT,ML294,data__->ML294,retain)
  __INIT_EXTERNAL(ULINT,ML295,data__->ML295,retain)
  __INIT_EXTERNAL(ULINT,ML296,data__->ML296,retain)
  __INIT_EXTERNAL(ULINT,ML297,data__->ML297,retain)
  __INIT_EXTERNAL(ULINT,ML298,data__->ML298,retain)
  __INIT_EXTERNAL(ULINT,ML299,data__->ML299,retain)
  __INIT_EXTERNAL(ULINT,ML300,data__->ML300,retain)
  __INIT_EXTERNAL(ULINT,ML301,data__->ML301,retain)
  __INIT_EXTERNAL(ULINT,ML302,data__->ML302,retain)
  __INIT_EXTERNAL(ULINT,ML303,data__->ML303,retain)
  __INIT_EXTERNAL(ULINT,ML304,data__->ML304,retain)
  __INIT_EXTERNAL(ULINT,ML305,data__->ML305,retain)
  __INIT_EXTERNAL(ULINT,ML306,data__->ML306,retain)
  __INIT_EXTERNAL(ULINT,ML307,data__->ML307,retain)
  __INIT_EXTERNAL(ULINT,ML308,data__->ML308,retain)
  __INIT_EXTERNAL(ULINT,ML309,data__->ML309,retain)
  __INIT_EXTERNAL(ULINT,ML310,data__->ML310,retain)
  __INIT_EXTERNAL(ULINT,ML311,data__->ML311,retain)
  __INIT_EXTERNAL(ULINT,ML312,data__->ML312,retain)
  __INIT_EXTERNAL(ULINT,ML313,data__->ML313,retain)
  __INIT_EXTERNAL(ULINT,ML314,data__->ML314,retain)
  __INIT_EXTERNAL(ULINT,ML315,data__->ML315,retain)
  __INIT_EXTERNAL(ULINT,ML316,data__->ML316,retain)
  __INIT_EXTERNAL(ULINT,ML317,data__->ML317,retain)
  __INIT_EXTERNAL(ULINT,ML318,data__->ML318,retain)
  __INIT_EXTERNAL(ULINT,ML319,data__->ML319,retain)
  __INIT_EXTERNAL(ULINT,ML320,data__->ML320,retain)
  __INIT_EXTERNAL(ULINT,ML321,data__->ML321,retain)
  __INIT_EXTERNAL(ULINT,ML322,data__->ML322,retain)
  __INIT_EXTERNAL(ULINT,ML323,data__->ML323,retain)
  __INIT_EXTERNAL(ULINT,ML324,data__->ML324,retain)
  __INIT_EXTERNAL(ULINT,ML325,data__->ML325,retain)
  __INIT_EXTERNAL(ULINT,ML326,data__->ML326,retain)
  __INIT_EXTERNAL(ULINT,ML327,data__->ML327,retain)
  __INIT_EXTERNAL(ULINT,ML328,data__->ML328,retain)
  __INIT_EXTERNAL(ULINT,ML329,data__->ML329,retain)
  __INIT_EXTERNAL(ULINT,ML330,data__->ML330,retain)
  __INIT_EXTERNAL(ULINT,ML331,data__->ML331,retain)
  __INIT_EXTERNAL(ULINT,ML332,data__->ML332,retain)
  __INIT_EXTERNAL(ULINT,ML333,data__->ML333,retain)
  __INIT_EXTERNAL(ULINT,ML334,data__->ML334,retain)
  __INIT_EXTERNAL(ULINT,ML335,data__->ML335,retain)
  __INIT_EXTERNAL(ULINT,ML336,data__->ML336,retain)
  __INIT_EXTERNAL(ULINT,ML337,data__->ML337,retain)
  __INIT_EXTERNAL(ULINT,ML338,data__->ML338,retain)
  __INIT_EXTERNAL(ULINT,ML339,data__->ML339,retain)
  __INIT_EXTERNAL(ULINT,ML340,data__->ML340,retain)
  __INIT_EXTERNAL(ULINT,ML341,data__->ML341,retain)
  __INIT_EXTERNAL(ULINT,ML342,data__->ML342,retain)
  __INIT_EXTERNAL(ULINT,ML343,data__->ML343,retain)
  __INIT_EXTERNAL(ULINT,ML344,data__->ML344,retain)
  __INIT_EXTERNAL(ULINT,ML345,data__->ML345,retain)
  __INIT_EXTERNAL(ULINT,ML346,data__->ML346,retain)
  __INIT_EXTERNAL(ULINT,ML347,data__->ML347,retain)
  __INIT_EXTERNAL(ULINT,ML348,data__->ML348,retain)
  __INIT_EXTERNAL(ULINT,ML349,data__->ML349,retain)
  __INIT_EXTERNAL(ULINT,ML350,data__->ML350,retain)
  __INIT_EXTERNAL(ULINT,ML351,data__->ML351,retain)
  __INIT_EXTERNAL(ULINT,ML352,data__->ML352,retain)
  __INIT_EXTERNAL(ULINT,ML353,data__->ML353,retain)
  __INIT_EXTERNAL(ULINT,ML354,data__->ML354,retain)
  __INIT_EXTERNAL(ULINT,ML355,data__->ML355,retain)
  __INIT_EXTERNAL(ULINT,ML356,data__->ML356,retain)
  __INIT_EXTERNAL(ULINT,ML357,data__->ML357,retain)
  __INIT_EXTERNAL(ULINT,ML358,data__->ML358,retain)
  __INIT_EXTERNAL(ULINT,ML359,data__->ML359,retain)
  __INIT_EXTERNAL(ULINT,ML360,data__->ML360,retain)
  __INIT_EXTERNAL(ULINT,ML361,data__->ML361,retain)
  __INIT_EXTERNAL(ULINT,ML362,data__->ML362,retain)
  __INIT_EXTERNAL(ULINT,ML363,data__->ML363,retain)
  __INIT_EXTERNAL(ULINT,ML364,data__->ML364,retain)
  __INIT_EXTERNAL(ULINT,ML365,data__->ML365,retain)
  __INIT_EXTERNAL(ULINT,ML366,data__->ML366,retain)
  __INIT_EXTERNAL(ULINT,ML367,data__->ML367,retain)
  __INIT_EXTERNAL(ULINT,ML368,data__->ML368,retain)
  __INIT_EXTERNAL(ULINT,ML369,data__->ML369,retain)
  __INIT_EXTERNAL(ULINT,ML370,data__->ML370,retain)
  __INIT_EXTERNAL(ULINT,ML371,data__->ML371,retain)
  __INIT_EXTERNAL(ULINT,ML372,data__->ML372,retain)
  __INIT_EXTERNAL(ULINT,ML373,data__->ML373,retain)
  __INIT_EXTERNAL(ULINT,ML374,data__->ML374,retain)
  __INIT_EXTERNAL(ULINT,ML375,data__->ML375,retain)
  __INIT_EXTERNAL(ULINT,ML376,data__->ML376,retain)
  __INIT_EXTERNAL(ULINT,ML377,data__->ML377,retain)
  __INIT_EXTERNAL(ULINT,ML378,data__->ML378,retain)
  __INIT_EXTERNAL(ULINT,ML379,data__->ML379,retain)
  __INIT_EXTERNAL(ULINT,ML380,data__->ML380,retain)
  __INIT_EXTERNAL(ULINT,ML381,data__->ML381,retain)
  __INIT_EXTERNAL(ULINT,ML382,data__->ML382,retain)
  __INIT_EXTERNAL(ULINT,ML383,data__->ML383,retain)
  __INIT_EXTERNAL(ULINT,ML384,data__->ML384,retain)
  __INIT_EXTERNAL(ULINT,ML385,data__->ML385,retain)
  __INIT_EXTERNAL(ULINT,ML386,data__->ML386,retain)
  __INIT_EXTERNAL(ULINT,ML387,data__->ML387,retain)
  __INIT_EXTERNAL(ULINT,ML388,data__->ML388,retain)
  __INIT_EXTERNAL(ULINT,ML389,data__->ML389,retain)
  __INIT_EXTERNAL(ULINT,ML390,data__->ML390,retain)
  __INIT_EXTERNAL(ULINT,ML391,data__->ML391,retain)
  __INIT_EXTERNAL(ULINT,ML392,data__->ML392,retain)
  __INIT_EXTERNAL(ULINT,ML393,data__->ML393,retain)
  __INIT_EXTERNAL(ULINT,ML394,data__->ML394,retain)
  __INIT_EXTERNAL(ULINT,ML395,data__->ML395,retain)
  __INIT_EXTERNAL(ULINT,ML396,data__->ML396,retain)
  __INIT_EXTERNAL(ULINT,ML397,data__->ML397,retain)
  __INIT_EXTERNAL(ULINT,ML398,data__->ML398,retain)
  __INIT_EXTERNAL(ULINT,ML399,data__->ML399,retain)
  __INIT_EXTERNAL(ULINT,ML400,data__->ML400,retain)
  __INIT_EXTERNAL(ULINT,ML401,data__->ML401,retain)
  __INIT_EXTERNAL(ULINT,ML402,data__->ML402,retain)
  __INIT_EXTERNAL(ULINT,ML403,data__->ML403,retain)
  __INIT_EXTERNAL(ULINT,ML404,data__->ML404,retain)
  __INIT_EXTERNAL(ULINT,ML405,data__->ML405,retain)
  __INIT_EXTERNAL(ULINT,ML406,data__->ML406,retain)
  __INIT_EXTERNAL(ULINT,ML407,data__->ML407,retain)
  __INIT_EXTERNAL(ULINT,ML408,data__->ML408,retain)
  __INIT_EXTERNAL(ULINT,ML409,data__->ML409,retain)
  __INIT_EXTERNAL(ULINT,ML410,data__->ML410,retain)
  __INIT_EXTERNAL(ULINT,ML411,data__->ML411,retain)
  __INIT_EXTERNAL(ULINT,ML412,data__->ML412,retain)
  __INIT_EXTERNAL(ULINT,ML413,data__->ML413,retain)
  __INIT_EXTERNAL(ULINT,ML414,data__->ML414,retain)
  __INIT_EXTERNAL(ULINT,ML415,data__->ML415,retain)
  __INIT_EXTERNAL(ULINT,ML416,data__->ML416,retain)
  __INIT_EXTERNAL(ULINT,ML417,data__->ML417,retain)
  __INIT_EXTERNAL(ULINT,ML418,data__->ML418,retain)
  __INIT_EXTERNAL(ULINT,ML419,data__->ML419,retain)
  __INIT_EXTERNAL(ULINT,ML420,data__->ML420,retain)
  __INIT_EXTERNAL(ULINT,ML421,data__->ML421,retain)
  __INIT_EXTERNAL(ULINT,ML422,data__->ML422,retain)
  __INIT_EXTERNAL(ULINT,ML423,data__->ML423,retain)
  __INIT_EXTERNAL(ULINT,ML424,data__->ML424,retain)
  __INIT_EXTERNAL(ULINT,ML425,data__->ML425,retain)
  __INIT_EXTERNAL(ULINT,ML426,data__->ML426,retain)
  __INIT_EXTERNAL(ULINT,ML427,data__->ML427,retain)
  __INIT_EXTERNAL(ULINT,ML428,data__->ML428,retain)
  __INIT_EXTERNAL(ULINT,ML429,data__->ML429,retain)
  __INIT_EXTERNAL(ULINT,ML430,data__->ML430,retain)
  __INIT_EXTERNAL(ULINT,ML431,data__->ML431,retain)
  __INIT_EXTERNAL(ULINT,ML432,data__->ML432,retain)
  __INIT_EXTERNAL(ULINT,ML433,data__->ML433,retain)
  __INIT_EXTERNAL(ULINT,ML434,data__->ML434,retain)
  __INIT_EXTERNAL(ULINT,ML435,data__->ML435,retain)
  __INIT_EXTERNAL(ULINT,ML436,data__->ML436,retain)
  __INIT_EXTERNAL(ULINT,ML437,data__->ML437,retain)
  __INIT_EXTERNAL(ULINT,ML438,data__->ML438,retain)
  __INIT_EXTERNAL(ULINT,ML439,data__->ML439,retain)
  __INIT_EXTERNAL(ULINT,ML440,data__->ML440,retain)
  __INIT_EXTERNAL(ULINT,ML441,data__->ML441,retain)
  __INIT_EXTERNAL(ULINT,ML442,data__->ML442,retain)
  __INIT_EXTERNAL(ULINT,ML443,data__->ML443,retain)
  __INIT_EXTERNAL(ULINT,ML444,data__->ML444,retain)
  __INIT_EXTERNAL(ULINT,ML445,data__->ML445,retain)
  __INIT_EXTERNAL(ULINT,ML446,data__->ML446,retain)
  __INIT_EXTERNAL(ULINT,ML447,data__->ML447,retain)
  __INIT_EXTERNAL(ULINT,ML448,data__->ML448,retain)
  __INIT_EXTERNAL(ULINT,ML449,data__->ML449,retain)
  __INIT_EXTERNAL(ULINT,ML450,data__->ML450,retain)
  __INIT_EXTERNAL(ULINT,ML451,data__->ML451,retain)
  __INIT_EXTERNAL(ULINT,ML452,data__->ML452,retain)
  __INIT_EXTERNAL(ULINT,ML453,data__->ML453,retain)
  __INIT_EXTERNAL(ULINT,ML454,data__->ML454,retain)
  __INIT_EXTERNAL(ULINT,ML455,data__->ML455,retain)
  __INIT_EXTERNAL(ULINT,ML456,data__->ML456,retain)
  __INIT_EXTERNAL(ULINT,ML457,data__->ML457,retain)
  __INIT_EXTERNAL(ULINT,ML458,data__->ML458,retain)
  __INIT_EXTERNAL(ULINT,ML459,data__->ML459,retain)
  __INIT_EXTERNAL(ULINT,ML460,data__->ML460,retain)
  __INIT_EXTERNAL(ULINT,ML461,data__->ML461,retain)
  __INIT_EXTERNAL(ULINT,ML462,data__->ML462,retain)
  __INIT_EXTERNAL(ULINT,ML463,data__->ML463,retain)
  __INIT_EXTERNAL(ULINT,ML464,data__->ML464,retain)
  __INIT_EXTERNAL(ULINT,ML465,data__->ML465,retain)
  __INIT_EXTERNAL(ULINT,ML466,data__->ML466,retain)
  __INIT_EXTERNAL(ULINT,ML467,data__->ML467,retain)
  __INIT_EXTERNAL(ULINT,ML468,data__->ML468,retain)
  __INIT_EXTERNAL(ULINT,ML469,data__->ML469,retain)
  __INIT_EXTERNAL(ULINT,ML470,data__->ML470,retain)
  __INIT_EXTERNAL(ULINT,ML471,data__->ML471,retain)
  __INIT_EXTERNAL(ULINT,ML472,data__->ML472,retain)
  __INIT_EXTERNAL(ULINT,ML473,data__->ML473,retain)
  __INIT_EXTERNAL(ULINT,ML474,data__->ML474,retain)
  __INIT_EXTERNAL(ULINT,ML475,data__->ML475,retain)
  __INIT_EXTERNAL(ULINT,ML476,data__->ML476,retain)
  __INIT_EXTERNAL(ULINT,ML477,data__->ML477,retain)
  __INIT_EXTERNAL(ULINT,ML478,data__->ML478,retain)
  __INIT_EXTERNAL(ULINT,ML479,data__->ML479,retain)
  __INIT_EXTERNAL(ULINT,ML480,data__->ML480,retain)
  __INIT_EXTERNAL(ULINT,ML481,data__->ML481,retain)
  __INIT_EXTERNAL(ULINT,ML482,data__->ML482,retain)
  __INIT_EXTERNAL(ULINT,ML483,data__->ML483,retain)
  __INIT_EXTERNAL(ULINT,ML484,data__->ML484,retain)
  __INIT_EXTERNAL(ULINT,ML485,data__->ML485,retain)
  __INIT_EXTERNAL(ULINT,ML486,data__->ML486,retain)
  __INIT_EXTERNAL(ULINT,ML487,data__->ML487,retain)
  __INIT_EXTERNAL(ULINT,ML488,data__->ML488,retain)
  __INIT_EXTERNAL(ULINT,ML489,data__->ML489,retain)
  __INIT_EXTERNAL(ULINT,ML490,data__->ML490,retain)
  __INIT_EXTERNAL(ULINT,ML491,data__->ML491,retain)
  __INIT_EXTERNAL(ULINT,ML492,data__->ML492,retain)
  __INIT_EXTERNAL(ULINT,ML493,data__->ML493,retain)
  __INIT_EXTERNAL(ULINT,ML494,data__->ML494,retain)
  __INIT_EXTERNAL(ULINT,ML495,data__->ML495,retain)
  __INIT_EXTERNAL(ULINT,ML496,data__->ML496,retain)
  __INIT_EXTERNAL(ULINT,ML497,data__->ML497,retain)
  __INIT_EXTERNAL(ULINT,ML498,data__->ML498,retain)
  __INIT_EXTERNAL(ULINT,ML499,data__->ML499,retain)
  __INIT_EXTERNAL(ULINT,ML500,data__->ML500,retain)
  __INIT_EXTERNAL(ULINT,ML501,data__->ML501,retain)
  __INIT_EXTERNAL(ULINT,ML502,data__->ML502,retain)
  __INIT_EXTERNAL(ULINT,ML503,data__->ML503,retain)
  __INIT_EXTERNAL(ULINT,ML504,data__->ML504,retain)
  __INIT_EXTERNAL(ULINT,ML505,data__->ML505,retain)
  __INIT_EXTERNAL(ULINT,ML506,data__->ML506,retain)
  __INIT_EXTERNAL(ULINT,ML507,data__->ML507,retain)
  __INIT_EXTERNAL(ULINT,ML508,data__->ML508,retain)
  __INIT_EXTERNAL(ULINT,ML509,data__->ML509,retain)
  __INIT_EXTERNAL(ULINT,ML510,data__->ML510,retain)
  __INIT_EXTERNAL(ULINT,ML511,data__->ML511,retain)
  __INIT_EXTERNAL(ULINT,ML512,data__->ML512,retain)
  __INIT_EXTERNAL(ULINT,ML513,data__->ML513,retain)
  __INIT_EXTERNAL(ULINT,ML514,data__->ML514,retain)
  __INIT_EXTERNAL(ULINT,ML515,data__->ML515,retain)
  __INIT_EXTERNAL(ULINT,ML516,data__->ML516,retain)
  __INIT_EXTERNAL(ULINT,ML517,data__->ML517,retain)
  __INIT_EXTERNAL(ULINT,ML518,data__->ML518,retain)
  __INIT_EXTERNAL(ULINT,ML519,data__->ML519,retain)
  __INIT_EXTERNAL(ULINT,ML520,data__->ML520,retain)
  __INIT_EXTERNAL(ULINT,ML521,data__->ML521,retain)
  __INIT_EXTERNAL(ULINT,ML522,data__->ML522,retain)
  __INIT_EXTERNAL(ULINT,ML523,data__->ML523,retain)
  __INIT_EXTERNAL(ULINT,ML524,data__->ML524,retain)
  __INIT_EXTERNAL(ULINT,ML525,data__->ML525,retain)
  __INIT_EXTERNAL(ULINT,ML526,data__->ML526,retain)
  __INIT_EXTERNAL(ULINT,ML527,data__->ML527,retain)
  __INIT_EXTERNAL(ULINT,ML528,data__->ML528,retain)
  __INIT_EXTERNAL(ULINT,ML529,data__->ML529,retain)
  __INIT_EXTERNAL(ULINT,ML530,data__->ML530,retain)
  __INIT_EXTERNAL(ULINT,ML531,data__->ML531,retain)
  __INIT_EXTERNAL(ULINT,ML532,data__->ML532,retain)
  __INIT_EXTERNAL(ULINT,ML533,data__->ML533,retain)
  __INIT_EXTERNAL(ULINT,ML534,data__->ML534,retain)
  __INIT_EXTERNAL(ULINT,ML535,data__->ML535,retain)
  __INIT_EXTERNAL(ULINT,ML536,data__->ML536,retain)
  __INIT_EXTERNAL(ULINT,ML537,data__->ML537,retain)
  __INIT_EXTERNAL(ULINT,ML538,data__->ML538,retain)
  __INIT_EXTERNAL(ULINT,ML539,data__->ML539,retain)
  __INIT_EXTERNAL(ULINT,ML540,data__->ML540,retain)
  __INIT_EXTERNAL(ULINT,ML541,data__->ML541,retain)
  __INIT_EXTERNAL(ULINT,ML542,data__->ML542,retain)
  __INIT_EXTERNAL(ULINT,ML543,data__->ML543,retain)
  __INIT_EXTERNAL(ULINT,ML544,data__->ML544,retain)
  __INIT_EXTERNAL(ULINT,ML545,data__->ML545,retain)
  __INIT_EXTERNAL(ULINT,ML546,data__->ML546,retain)
  __INIT_EXTERNAL(ULINT,ML547,data__->ML547,retain)
  __INIT_EXTERNAL(ULINT,ML548,data__->ML548,retain)
  __INIT_EXTERNAL(ULINT,ML549,data__->ML549,retain)
  __INIT_EXTERNAL(ULINT,ML550,data__->ML550,retain)
  __INIT_EXTERNAL(ULINT,ML551,data__->ML551,retain)
  __INIT_EXTERNAL(ULINT,ML552,data__->ML552,retain)
  __INIT_EXTERNAL(ULINT,ML553,data__->ML553,retain)
  __INIT_EXTERNAL(ULINT,ML554,data__->ML554,retain)
  __INIT_EXTERNAL(ULINT,ML555,data__->ML555,retain)
  __INIT_EXTERNAL(ULINT,ML556,data__->ML556,retain)
  __INIT_EXTERNAL(ULINT,ML557,data__->ML557,retain)
  __INIT_EXTERNAL(ULINT,ML558,data__->ML558,retain)
  __INIT_EXTERNAL(ULINT,ML559,data__->ML559,retain)
  __INIT_EXTERNAL(ULINT,ML560,data__->ML560,retain)
  __INIT_EXTERNAL(ULINT,ML561,data__->ML561,retain)
  __INIT_EXTERNAL(ULINT,ML562,data__->ML562,retain)
  __INIT_EXTERNAL(ULINT,ML563,data__->ML563,retain)
  __INIT_EXTERNAL(ULINT,ML564,data__->ML564,retain)
  __INIT_EXTERNAL(ULINT,ML565,data__->ML565,retain)
  __INIT_EXTERNAL(ULINT,ML566,data__->ML566,retain)
  __INIT_EXTERNAL(ULINT,ML567,data__->ML567,retain)
  __INIT_EXTERNAL(ULINT,ML568,data__->ML568,retain)
  __INIT_EXTERNAL(ULINT,ML569,data__->ML569,retain)
  __INIT_EXTERNAL(ULINT,ML570,data__->ML570,retain)
  __INIT_EXTERNAL(ULINT,ML571,data__->ML571,retain)
  __INIT_EXTERNAL(ULINT,ML572,data__->ML572,retain)
  __INIT_EXTERNAL(ULINT,ML573,data__->ML573,retain)
  __INIT_EXTERNAL(ULINT,ML574,data__->ML574,retain)
  __INIT_EXTERNAL(ULINT,ML575,data__->ML575,retain)
  __INIT_EXTERNAL(ULINT,ML576,data__->ML576,retain)
  __INIT_EXTERNAL(ULINT,ML577,data__->ML577,retain)
  __INIT_EXTERNAL(ULINT,ML578,data__->ML578,retain)
  __INIT_EXTERNAL(ULINT,ML579,data__->ML579,retain)
  __INIT_EXTERNAL(ULINT,ML580,data__->ML580,retain)
  __INIT_EXTERNAL(ULINT,ML581,data__->ML581,retain)
  __INIT_EXTERNAL(ULINT,ML582,data__->ML582,retain)
  __INIT_EXTERNAL(ULINT,ML583,data__->ML583,retain)
  __INIT_EXTERNAL(ULINT,ML584,data__->ML584,retain)
  __INIT_EXTERNAL(ULINT,ML585,data__->ML585,retain)
  __INIT_EXTERNAL(ULINT,ML586,data__->ML586,retain)
  __INIT_EXTERNAL(ULINT,ML587,data__->ML587,retain)
  __INIT_EXTERNAL(ULINT,ML588,data__->ML588,retain)
  __INIT_EXTERNAL(ULINT,ML589,data__->ML589,retain)
  __INIT_EXTERNAL(ULINT,ML590,data__->ML590,retain)
  __INIT_EXTERNAL(ULINT,ML591,data__->ML591,retain)
  __INIT_EXTERNAL(ULINT,ML592,data__->ML592,retain)
  __INIT_EXTERNAL(ULINT,ML593,data__->ML593,retain)
  __INIT_EXTERNAL(ULINT,ML594,data__->ML594,retain)
  __INIT_EXTERNAL(ULINT,ML595,data__->ML595,retain)
  __INIT_EXTERNAL(ULINT,ML596,data__->ML596,retain)
  __INIT_EXTERNAL(ULINT,ML597,data__->ML597,retain)
  __INIT_EXTERNAL(ULINT,ML598,data__->ML598,retain)
  __INIT_EXTERNAL(ULINT,ML599,data__->ML599,retain)
  __INIT_EXTERNAL(ULINT,ML600,data__->ML600,retain)
  __INIT_EXTERNAL(ULINT,ML601,data__->ML601,retain)
  __INIT_EXTERNAL(ULINT,ML602,data__->ML602,retain)
  __INIT_EXTERNAL(ULINT,ML603,data__->ML603,retain)
  __INIT_EXTERNAL(ULINT,ML604,data__->ML604,retain)
  __INIT_EXTERNAL(ULINT,ML605,data__->ML605,retain)
  __INIT_EXTERNAL(ULINT,ML606,data__->ML606,retain)
  __INIT_EXTERNAL(ULINT,ML607,data__->ML607,retain)
  __INIT_EXTERNAL(ULINT,ML608,data__->ML608,retain)
  __INIT_EXTERNAL(ULINT,ML609,data__->ML609,retain)
  __INIT_EXTERNAL(ULINT,ML610,data__->ML610,retain)
  __INIT_EXTERNAL(ULINT,ML611,data__->ML611,retain)
  __INIT_EXTERNAL(ULINT,ML612,data__->ML612,retain)
  __INIT_EXTERNAL(ULINT,ML613,data__->ML613,retain)
  __INIT_EXTERNAL(ULINT,ML614,data__->ML614,retain)
  __INIT_EXTERNAL(ULINT,ML615,data__->ML615,retain)
  __INIT_EXTERNAL(ULINT,ML616,data__->ML616,retain)
  __INIT_EXTERNAL(ULINT,ML617,data__->ML617,retain)
  __INIT_EXTERNAL(ULINT,ML618,data__->ML618,retain)
  __INIT_EXTERNAL(ULINT,ML619,data__->ML619,retain)
  __INIT_EXTERNAL(ULINT,ML620,data__->ML620,retain)
  __INIT_EXTERNAL(ULINT,ML621,data__->ML621,retain)
  __INIT_EXTERNAL(ULINT,ML622,data__->ML622,retain)
  __INIT_EXTERNAL(ULINT,ML623,data__->ML623,retain)
  __INIT_EXTERNAL(ULINT,ML624,data__->ML624,retain)
  __INIT_EXTERNAL(ULINT,ML625,data__->ML625,retain)
  __INIT_EXTERNAL(ULINT,ML626,data__->ML626,retain)
  __INIT_EXTERNAL(ULINT,ML627,data__->ML627,retain)
  __INIT_EXTERNAL(ULINT,ML628,data__->ML628,retain)
  __INIT_EXTERNAL(ULINT,ML629,data__->ML629,retain)
  __INIT_EXTERNAL(ULINT,ML630,data__->ML630,retain)
  __INIT_EXTERNAL(ULINT,ML631,data__->ML631,retain)
  __INIT_EXTERNAL(ULINT,ML632,data__->ML632,retain)
  __INIT_EXTERNAL(ULINT,ML633,data__->ML633,retain)
  __INIT_EXTERNAL(ULINT,ML634,data__->ML634,retain)
  __INIT_EXTERNAL(ULINT,ML635,data__->ML635,retain)
  __INIT_EXTERNAL(ULINT,ML636,data__->ML636,retain)
  __INIT_EXTERNAL(ULINT,ML637,data__->ML637,retain)
  __INIT_EXTERNAL(ULINT,ML638,data__->ML638,retain)
  __INIT_EXTERNAL(ULINT,ML639,data__->ML639,retain)
  __INIT_EXTERNAL(ULINT,ML640,data__->ML640,retain)
  __INIT_EXTERNAL(ULINT,ML641,data__->ML641,retain)
  __INIT_EXTERNAL(ULINT,ML642,data__->ML642,retain)
  __INIT_EXTERNAL(ULINT,ML643,data__->ML643,retain)
  __INIT_EXTERNAL(ULINT,ML644,data__->ML644,retain)
  __INIT_EXTERNAL(ULINT,ML645,data__->ML645,retain)
  __INIT_EXTERNAL(ULINT,ML646,data__->ML646,retain)
  __INIT_EXTERNAL(ULINT,ML647,data__->ML647,retain)
  __INIT_EXTERNAL(ULINT,ML648,data__->ML648,retain)
  __INIT_EXTERNAL(ULINT,ML649,data__->ML649,retain)
  __INIT_EXTERNAL(ULINT,ML650,data__->ML650,retain)
  __INIT_EXTERNAL(ULINT,ML651,data__->ML651,retain)
  __INIT_EXTERNAL(ULINT,ML652,data__->ML652,retain)
  __INIT_EXTERNAL(ULINT,ML653,data__->ML653,retain)
  __INIT_EXTERNAL(ULINT,ML654,data__->ML654,retain)
  __INIT_EXTERNAL(ULINT,ML655,data__->ML655,retain)
  __INIT_EXTERNAL(ULINT,ML656,data__->ML656,retain)
  __INIT_EXTERNAL(ULINT,ML657,data__->ML657,retain)
  __INIT_EXTERNAL(ULINT,ML658,data__->ML658,retain)
  __INIT_EXTERNAL(ULINT,ML659,data__->ML659,retain)
  __INIT_EXTERNAL(ULINT,ML660,data__->ML660,retain)
  __INIT_EXTERNAL(ULINT,ML661,data__->ML661,retain)
  __INIT_EXTERNAL(ULINT,ML662,data__->ML662,retain)
  __INIT_EXTERNAL(ULINT,ML663,data__->ML663,retain)
  __INIT_EXTERNAL(ULINT,ML664,data__->ML664,retain)
  __INIT_EXTERNAL(ULINT,ML665,data__->ML665,retain)
  __INIT_EXTERNAL(ULINT,ML666,data__->ML666,retain)
  __INIT_EXTERNAL(ULINT,ML667,data__->ML667,retain)
  __INIT_EXTERNAL(ULINT,ML668,data__->ML668,retain)
  __INIT_EXTERNAL(ULINT,ML669,data__->ML669,retain)
  __INIT_EXTERNAL(ULINT,ML670,data__->ML670,retain)
  __INIT_EXTERNAL(ULINT,ML671,data__->ML671,retain)
  __INIT_EXTERNAL(ULINT,ML672,data__->ML672,retain)
  __INIT_EXTERNAL(ULINT,ML673,data__->ML673,retain)
  __INIT_EXTERNAL(ULINT,ML674,data__->ML674,retain)
  __INIT_EXTERNAL(ULINT,ML675,data__->ML675,retain)
  __INIT_EXTERNAL(ULINT,ML676,data__->ML676,retain)
  __INIT_EXTERNAL(ULINT,ML677,data__->ML677,retain)
  __INIT_EXTERNAL(ULINT,ML678,data__->ML678,retain)
  __INIT_EXTERNAL(ULINT,ML679,data__->ML679,retain)
  __INIT_EXTERNAL(ULINT,ML680,data__->ML680,retain)
  __INIT_EXTERNAL(ULINT,ML681,data__->ML681,retain)
  __INIT_EXTERNAL(ULINT,ML682,data__->ML682,retain)
  __INIT_EXTERNAL(ULINT,ML683,data__->ML683,retain)
  __INIT_EXTERNAL(ULINT,ML684,data__->ML684,retain)
  __INIT_EXTERNAL(ULINT,ML685,data__->ML685,retain)
  __INIT_EXTERNAL(ULINT,ML686,data__->ML686,retain)
  __INIT_EXTERNAL(ULINT,ML687,data__->ML687,retain)
  __INIT_EXTERNAL(ULINT,ML688,data__->ML688,retain)
  __INIT_EXTERNAL(ULINT,ML689,data__->ML689,retain)
  __INIT_EXTERNAL(ULINT,ML690,data__->ML690,retain)
  __INIT_EXTERNAL(ULINT,ML691,data__->ML691,retain)
  __INIT_EXTERNAL(ULINT,ML692,data__->ML692,retain)
  __INIT_EXTERNAL(ULINT,ML693,data__->ML693,retain)
  __INIT_EXTERNAL(ULINT,ML694,data__->ML694,retain)
  __INIT_EXTERNAL(ULINT,ML695,data__->ML695,retain)
  __INIT_EXTERNAL(ULINT,ML696,data__->ML696,retain)
  __INIT_EXTERNAL(ULINT,ML697,data__->ML697,retain)
  __INIT_EXTERNAL(ULINT,ML698,data__->ML698,retain)
  __INIT_EXTERNAL(ULINT,ML699,data__->ML699,retain)
  __INIT_EXTERNAL(ULINT,ML700,data__->ML700,retain)
  __INIT_EXTERNAL(ULINT,ML701,data__->ML701,retain)
  __INIT_EXTERNAL(ULINT,ML702,data__->ML702,retain)
  __INIT_EXTERNAL(ULINT,ML703,data__->ML703,retain)
  __INIT_EXTERNAL(ULINT,ML704,data__->ML704,retain)
  __INIT_EXTERNAL(ULINT,ML705,data__->ML705,retain)
  __INIT_EXTERNAL(ULINT,ML706,data__->ML706,retain)
  __INIT_EXTERNAL(ULINT,ML707,data__->ML707,retain)
  __INIT_EXTERNAL(ULINT,ML708,data__->ML708,retain)
  __INIT_EXTERNAL(ULINT,ML709,data__->ML709,retain)
  __INIT_EXTERNAL(ULINT,ML710,data__->ML710,retain)
  __INIT_EXTERNAL(ULINT,ML711,data__->ML711,retain)
  __INIT_EXTERNAL(ULINT,ML712,data__->ML712,retain)
  __INIT_EXTERNAL(ULINT,ML713,data__->ML713,retain)
  __INIT_EXTERNAL(ULINT,ML714,data__->ML714,retain)
  __INIT_EXTERNAL(ULINT,ML715,data__->ML715,retain)
  __INIT_EXTERNAL(ULINT,ML716,data__->ML716,retain)
  __INIT_EXTERNAL(ULINT,ML717,data__->ML717,retain)
  __INIT_EXTERNAL(ULINT,ML718,data__->ML718,retain)
  __INIT_EXTERNAL(ULINT,ML719,data__->ML719,retain)
  __INIT_EXTERNAL(ULINT,ML720,data__->ML720,retain)
  __INIT_EXTERNAL(ULINT,ML721,data__->ML721,retain)
  __INIT_EXTERNAL(ULINT,ML722,data__->ML722,retain)
  __INIT_EXTERNAL(ULINT,ML723,data__->ML723,retain)
  __INIT_EXTERNAL(ULINT,ML724,data__->ML724,retain)
  __INIT_EXTERNAL(ULINT,ML725,data__->ML725,retain)
  __INIT_EXTERNAL(ULINT,ML726,data__->ML726,retain)
  __INIT_EXTERNAL(ULINT,ML727,data__->ML727,retain)
  __INIT_EXTERNAL(ULINT,ML728,data__->ML728,retain)
  __INIT_EXTERNAL(ULINT,ML729,data__->ML729,retain)
  __INIT_EXTERNAL(ULINT,ML730,data__->ML730,retain)
  __INIT_EXTERNAL(ULINT,ML731,data__->ML731,retain)
  __INIT_EXTERNAL(ULINT,ML732,data__->ML732,retain)
  __INIT_EXTERNAL(ULINT,ML733,data__->ML733,retain)
  __INIT_EXTERNAL(ULINT,ML734,data__->ML734,retain)
  __INIT_EXTERNAL(ULINT,ML735,data__->ML735,retain)
  __INIT_EXTERNAL(ULINT,ML736,data__->ML736,retain)
  __INIT_EXTERNAL(ULINT,ML737,data__->ML737,retain)
  __INIT_EXTERNAL(ULINT,ML738,data__->ML738,retain)
  __INIT_EXTERNAL(ULINT,ML739,data__->ML739,retain)
  __INIT_EXTERNAL(ULINT,ML740,data__->ML740,retain)
  __INIT_EXTERNAL(ULINT,ML741,data__->ML741,retain)
  __INIT_EXTERNAL(ULINT,ML742,data__->ML742,retain)
  __INIT_EXTERNAL(ULINT,ML743,data__->ML743,retain)
  __INIT_EXTERNAL(ULINT,ML744,data__->ML744,retain)
  __INIT_EXTERNAL(ULINT,ML745,data__->ML745,retain)
  __INIT_EXTERNAL(ULINT,ML746,data__->ML746,retain)
  __INIT_EXTERNAL(ULINT,ML747,data__->ML747,retain)
  __INIT_EXTERNAL(ULINT,ML748,data__->ML748,retain)
  __INIT_EXTERNAL(ULINT,ML749,data__->ML749,retain)
  __INIT_EXTERNAL(ULINT,ML750,data__->ML750,retain)
  __INIT_EXTERNAL(ULINT,ML751,data__->ML751,retain)
  __INIT_EXTERNAL(ULINT,ML752,data__->ML752,retain)
  __INIT_EXTERNAL(ULINT,ML753,data__->ML753,retain)
  __INIT_EXTERNAL(ULINT,ML754,data__->ML754,retain)
  __INIT_EXTERNAL(ULINT,ML755,data__->ML755,retain)
  __INIT_EXTERNAL(ULINT,ML756,data__->ML756,retain)
  __INIT_EXTERNAL(ULINT,ML757,data__->ML757,retain)
  __INIT_EXTERNAL(ULINT,ML758,data__->ML758,retain)
  __INIT_EXTERNAL(ULINT,ML759,data__->ML759,retain)
  __INIT_EXTERNAL(ULINT,ML760,data__->ML760,retain)
  __INIT_EXTERNAL(ULINT,ML761,data__->ML761,retain)
  __INIT_EXTERNAL(ULINT,ML762,data__->ML762,retain)
  __INIT_EXTERNAL(ULINT,ML763,data__->ML763,retain)
  __INIT_EXTERNAL(ULINT,ML764,data__->ML764,retain)
  __INIT_EXTERNAL(ULINT,ML765,data__->ML765,retain)
  __INIT_EXTERNAL(ULINT,ML766,data__->ML766,retain)
  __INIT_EXTERNAL(ULINT,ML767,data__->ML767,retain)
  __INIT_EXTERNAL(ULINT,ML768,data__->ML768,retain)
  __INIT_EXTERNAL(ULINT,ML769,data__->ML769,retain)
  __INIT_EXTERNAL(ULINT,ML770,data__->ML770,retain)
  __INIT_EXTERNAL(ULINT,ML771,data__->ML771,retain)
  __INIT_EXTERNAL(ULINT,ML772,data__->ML772,retain)
  __INIT_EXTERNAL(ULINT,ML773,data__->ML773,retain)
  __INIT_EXTERNAL(ULINT,ML774,data__->ML774,retain)
  __INIT_EXTERNAL(ULINT,ML775,data__->ML775,retain)
  __INIT_EXTERNAL(ULINT,ML776,data__->ML776,retain)
  __INIT_EXTERNAL(ULINT,ML777,data__->ML777,retain)
  __INIT_EXTERNAL(ULINT,ML778,data__->ML778,retain)
  __INIT_EXTERNAL(ULINT,ML779,data__->ML779,retain)
  __INIT_EXTERNAL(ULINT,ML780,data__->ML780,retain)
  __INIT_EXTERNAL(ULINT,ML781,data__->ML781,retain)
  __INIT_EXTERNAL(ULINT,ML782,data__->ML782,retain)
  __INIT_EXTERNAL(ULINT,ML783,data__->ML783,retain)
  __INIT_EXTERNAL(ULINT,ML784,data__->ML784,retain)
  __INIT_EXTERNAL(ULINT,ML785,data__->ML785,retain)
  __INIT_EXTERNAL(ULINT,ML786,data__->ML786,retain)
  __INIT_EXTERNAL(ULINT,ML787,data__->ML787,retain)
  __INIT_EXTERNAL(ULINT,ML788,data__->ML788,retain)
  __INIT_EXTERNAL(ULINT,ML789,data__->ML789,retain)
  __INIT_EXTERNAL(ULINT,ML790,data__->ML790,retain)
  __INIT_EXTERNAL(ULINT,ML791,data__->ML791,retain)
  __INIT_EXTERNAL(ULINT,ML792,data__->ML792,retain)
  __INIT_EXTERNAL(ULINT,ML793,data__->ML793,retain)
  __INIT_EXTERNAL(ULINT,ML794,data__->ML794,retain)
  __INIT_EXTERNAL(ULINT,ML795,data__->ML795,retain)
  __INIT_EXTERNAL(ULINT,ML796,data__->ML796,retain)
  __INIT_EXTERNAL(ULINT,ML797,data__->ML797,retain)
  __INIT_EXTERNAL(ULINT,ML798,data__->ML798,retain)
  __INIT_EXTERNAL(ULINT,ML799,data__->ML799,retain)
  __INIT_EXTERNAL(ULINT,ML800,data__->ML800,retain)
  __INIT_EXTERNAL(ULINT,ML801,data__->ML801,retain)
  __INIT_EXTERNAL(ULINT,ML802,data__->ML802,retain)
  __INIT_EXTERNAL(ULINT,ML803,data__->ML803,retain)
  __INIT_EXTERNAL(ULINT,ML804,data__->ML804,retain)
  __INIT_EXTERNAL(ULINT,ML805,data__->ML805,retain)
  __INIT_EXTERNAL(ULINT,ML806,data__->ML806,retain)
  __INIT_EXTERNAL(ULINT,ML807,data__->ML807,retain)
  __INIT_EXTERNAL(ULINT,ML808,data__->ML808,retain)
  __INIT_EXTERNAL(ULINT,ML809,data__->ML809,retain)
  __INIT_EXTERNAL(ULINT,ML810,data__->ML810,retain)
  __INIT_EXTERNAL(ULINT,ML811,data__->ML811,retain)
  __INIT_EXTERNAL(ULINT,ML812,data__->ML812,retain)
  __INIT_EXTERNAL(ULINT,ML813,data__->ML813,retain)
  __INIT_EXTERNAL(ULINT,ML814,data__->ML814,retain)
  __INIT_EXTERNAL(ULINT,ML815,data__->ML815,retain)
  __INIT_EXTERNAL(ULINT,ML816,data__->ML816,retain)
  __INIT_EXTERNAL(ULINT,ML817,data__->ML817,retain)
  __INIT_EXTERNAL(ULINT,ML818,data__->ML818,retain)
  __INIT_EXTERNAL(ULINT,ML819,data__->ML819,retain)
  __INIT_EXTERNAL(ULINT,ML820,data__->ML820,retain)
  __INIT_EXTERNAL(ULINT,ML821,data__->ML821,retain)
  __INIT_EXTERNAL(ULINT,ML822,data__->ML822,retain)
  __INIT_EXTERNAL(ULINT,ML823,data__->ML823,retain)
  __INIT_EXTERNAL(ULINT,ML824,data__->ML824,retain)
  __INIT_EXTERNAL(ULINT,ML825,data__->ML825,retain)
  __INIT_EXTERNAL(ULINT,ML826,data__->ML826,retain)
  __INIT_EXTERNAL(ULINT,ML827,data__->ML827,retain)
  __INIT_EXTERNAL(ULINT,ML828,data__->ML828,retain)
  __INIT_EXTERNAL(ULINT,ML829,data__->ML829,retain)
  __INIT_EXTERNAL(ULINT,ML830,data__->ML830,retain)
  __INIT_EXTERNAL(ULINT,ML831,data__->ML831,retain)
  __INIT_EXTERNAL(ULINT,ML832,data__->ML832,retain)
  __INIT_EXTERNAL(ULINT,ML833,data__->ML833,retain)
  __INIT_EXTERNAL(ULINT,ML834,data__->ML834,retain)
  __INIT_EXTERNAL(ULINT,ML835,data__->ML835,retain)
  __INIT_EXTERNAL(ULINT,ML836,data__->ML836,retain)
  __INIT_EXTERNAL(ULINT,ML837,data__->ML837,retain)
  __INIT_EXTERNAL(ULINT,ML838,data__->ML838,retain)
  __INIT_EXTERNAL(ULINT,ML839,data__->ML839,retain)
  __INIT_EXTERNAL(ULINT,ML840,data__->ML840,retain)
  __INIT_EXTERNAL(ULINT,ML841,data__->ML841,retain)
  __INIT_EXTERNAL(ULINT,ML842,data__->ML842,retain)
  __INIT_EXTERNAL(ULINT,ML843,data__->ML843,retain)
  __INIT_EXTERNAL(ULINT,ML844,data__->ML844,retain)
  __INIT_EXTERNAL(ULINT,ML845,data__->ML845,retain)
  __INIT_EXTERNAL(ULINT,ML846,data__->ML846,retain)
  __INIT_EXTERNAL(ULINT,ML847,data__->ML847,retain)
  __INIT_EXTERNAL(ULINT,ML848,data__->ML848,retain)
  __INIT_EXTERNAL(ULINT,ML849,data__->ML849,retain)
  __INIT_EXTERNAL(ULINT,ML850,data__->ML850,retain)
  __INIT_EXTERNAL(ULINT,ML851,data__->ML851,retain)
  __INIT_EXTERNAL(ULINT,ML852,data__->ML852,retain)
  __INIT_EXTERNAL(ULINT,ML853,data__->ML853,retain)
  __INIT_EXTERNAL(ULINT,ML854,data__->ML854,retain)
  __INIT_EXTERNAL(ULINT,ML855,data__->ML855,retain)
  __INIT_EXTERNAL(ULINT,ML856,data__->ML856,retain)
  __INIT_EXTERNAL(ULINT,ML857,data__->ML857,retain)
  __INIT_EXTERNAL(ULINT,ML858,data__->ML858,retain)
  __INIT_EXTERNAL(ULINT,ML859,data__->ML859,retain)
  __INIT_EXTERNAL(ULINT,ML860,data__->ML860,retain)
  __INIT_EXTERNAL(ULINT,ML861,data__->ML861,retain)
  __INIT_EXTERNAL(ULINT,ML862,data__->ML862,retain)
  __INIT_EXTERNAL(ULINT,ML863,data__->ML863,retain)
  __INIT_EXTERNAL(ULINT,ML864,data__->ML864,retain)
  __INIT_EXTERNAL(ULINT,ML865,data__->ML865,retain)
  __INIT_EXTERNAL(ULINT,ML866,data__->ML866,retain)
  __INIT_EXTERNAL(ULINT,ML867,data__->ML867,retain)
  __INIT_EXTERNAL(ULINT,ML868,data__->ML868,retain)
  __INIT_EXTERNAL(ULINT,ML869,data__->ML869,retain)
  __INIT_EXTERNAL(ULINT,ML870,data__->ML870,retain)
  __INIT_EXTERNAL(ULINT,ML871,data__->ML871,retain)
  __INIT_EXTERNAL(ULINT,ML872,data__->ML872,retain)
  __INIT_EXTERNAL(ULINT,ML873,data__->ML873,retain)
  __INIT_EXTERNAL(ULINT,ML874,data__->ML874,retain)
  __INIT_EXTERNAL(ULINT,ML875,data__->ML875,retain)
  __INIT_EXTERNAL(ULINT,ML876,data__->ML876,retain)
  __INIT_EXTERNAL(ULINT,ML877,data__->ML877,retain)
  __INIT_EXTERNAL(ULINT,ML878,data__->ML878,retain)
  __INIT_EXTERNAL(ULINT,ML879,data__->ML879,retain)
  __INIT_EXTERNAL(ULINT,ML880,data__->ML880,retain)
  __INIT_EXTERNAL(ULINT,ML881,data__->ML881,retain)
  __INIT_EXTERNAL(ULINT,ML882,data__->ML882,retain)
  __INIT_EXTERNAL(ULINT,ML883,data__->ML883,retain)
  __INIT_EXTERNAL(ULINT,ML884,data__->ML884,retain)
  __INIT_EXTERNAL(ULINT,ML885,data__->ML885,retain)
  __INIT_EXTERNAL(ULINT,ML886,data__->ML886,retain)
  __INIT_EXTERNAL(ULINT,ML887,data__->ML887,retain)
  __INIT_EXTERNAL(ULINT,ML888,data__->ML888,retain)
  __INIT_EXTERNAL(ULINT,ML889,data__->ML889,retain)
  __INIT_EXTERNAL(ULINT,ML890,data__->ML890,retain)
  __INIT_EXTERNAL(ULINT,ML891,data__->ML891,retain)
  __INIT_EXTERNAL(ULINT,ML892,data__->ML892,retain)
  __INIT_EXTERNAL(ULINT,ML893,data__->ML893,retain)
  __INIT_EXTERNAL(ULINT,ML894,data__->ML894,retain)
  __INIT_EXTERNAL(ULINT,ML895,data__->ML895,retain)
  __INIT_EXTERNAL(ULINT,ML896,data__->ML896,retain)
  __INIT_EXTERNAL(ULINT,ML897,data__->ML897,retain)
  __INIT_EXTERNAL(ULINT,ML898,data__->ML898,retain)
  __INIT_EXTERNAL(ULINT,ML899,data__->ML899,retain)
  __INIT_EXTERNAL(ULINT,ML900,data__->ML900,retain)
  __INIT_EXTERNAL(ULINT,ML901,data__->ML901,retain)
  __INIT_EXTERNAL(ULINT,ML902,data__->ML902,retain)
  __INIT_EXTERNAL(ULINT,ML903,data__->ML903,retain)
  __INIT_EXTERNAL(ULINT,ML904,data__->ML904,retain)
  __INIT_EXTERNAL(ULINT,ML905,data__->ML905,retain)
  __INIT_EXTERNAL(ULINT,ML906,data__->ML906,retain)
  __INIT_EXTERNAL(ULINT,ML907,data__->ML907,retain)
  __INIT_EXTERNAL(ULINT,ML908,data__->ML908,retain)
  __INIT_EXTERNAL(ULINT,ML909,data__->ML909,retain)
  __INIT_EXTERNAL(ULINT,ML910,data__->ML910,retain)
  __INIT_EXTERNAL(ULINT,ML911,data__->ML911,retain)
  __INIT_EXTERNAL(ULINT,ML912,data__->ML912,retain)
  __INIT_EXTERNAL(ULINT,ML913,data__->ML913,retain)
  __INIT_EXTERNAL(ULINT,ML914,data__->ML914,retain)
  __INIT_EXTERNAL(ULINT,ML915,data__->ML915,retain)
  __INIT_EXTERNAL(ULINT,ML916,data__->ML916,retain)
  __INIT_EXTERNAL(ULINT,ML917,data__->ML917,retain)
  __INIT_EXTERNAL(ULINT,ML918,data__->ML918,retain)
  __INIT_EXTERNAL(ULINT,ML919,data__->ML919,retain)
  __INIT_EXTERNAL(ULINT,ML920,data__->ML920,retain)
  __INIT_EXTERNAL(ULINT,ML921,data__->ML921,retain)
  __INIT_EXTERNAL(ULINT,ML922,data__->ML922,retain)
  __INIT_EXTERNAL(ULINT,ML923,data__->ML923,retain)
  __INIT_EXTERNAL(ULINT,ML924,data__->ML924,retain)
  __INIT_EXTERNAL(ULINT,ML925,data__->ML925,retain)
  __INIT_EXTERNAL(ULINT,ML926,data__->ML926,retain)
  __INIT_EXTERNAL(ULINT,ML927,data__->ML927,retain)
  __INIT_EXTERNAL(ULINT,ML928,data__->ML928,retain)
  __INIT_EXTERNAL(ULINT,ML929,data__->ML929,retain)
  __INIT_EXTERNAL(ULINT,ML930,data__->ML930,retain)
  __INIT_EXTERNAL(ULINT,ML931,data__->ML931,retain)
  __INIT_EXTERNAL(ULINT,ML932,data__->ML932,retain)
  __INIT_EXTERNAL(ULINT,ML933,data__->ML933,retain)
  __INIT_EXTERNAL(ULINT,ML934,data__->ML934,retain)
  __INIT_EXTERNAL(ULINT,ML935,data__->ML935,retain)
  __INIT_EXTERNAL(ULINT,ML936,data__->ML936,retain)
  __INIT_EXTERNAL(ULINT,ML937,data__->ML937,retain)
  __INIT_EXTERNAL(ULINT,ML938,data__->ML938,retain)
  __INIT_EXTERNAL(ULINT,ML939,data__->ML939,retain)
  __INIT_EXTERNAL(ULINT,ML940,data__->ML940,retain)
  __INIT_EXTERNAL(ULINT,ML941,data__->ML941,retain)
  __INIT_EXTERNAL(ULINT,ML942,data__->ML942,retain)
  __INIT_EXTERNAL(ULINT,ML943,data__->ML943,retain)
  __INIT_EXTERNAL(ULINT,ML944,data__->ML944,retain)
  __INIT_EXTERNAL(ULINT,ML945,data__->ML945,retain)
  __INIT_EXTERNAL(ULINT,ML946,data__->ML946,retain)
  __INIT_EXTERNAL(ULINT,ML947,data__->ML947,retain)
  __INIT_EXTERNAL(ULINT,ML948,data__->ML948,retain)
  __INIT_EXTERNAL(ULINT,ML949,data__->ML949,retain)
  __INIT_EXTERNAL(ULINT,ML950,data__->ML950,retain)
  __INIT_EXTERNAL(ULINT,ML951,data__->ML951,retain)
  __INIT_EXTERNAL(ULINT,ML952,data__->ML952,retain)
  __INIT_EXTERNAL(ULINT,ML953,data__->ML953,retain)
  __INIT_EXTERNAL(ULINT,ML954,data__->ML954,retain)
  __INIT_EXTERNAL(ULINT,ML955,data__->ML955,retain)
  __INIT_EXTERNAL(ULINT,ML956,data__->ML956,retain)
  __INIT_EXTERNAL(ULINT,ML957,data__->ML957,retain)
  __INIT_EXTERNAL(ULINT,ML958,data__->ML958,retain)
  __INIT_EXTERNAL(ULINT,ML959,data__->ML959,retain)
  __INIT_EXTERNAL(ULINT,ML960,data__->ML960,retain)
  __INIT_EXTERNAL(ULINT,ML961,data__->ML961,retain)
  __INIT_EXTERNAL(ULINT,ML962,data__->ML962,retain)
  __INIT_EXTERNAL(ULINT,ML963,data__->ML963,retain)
  __INIT_EXTERNAL(ULINT,ML964,data__->ML964,retain)
  __INIT_EXTERNAL(ULINT,ML965,data__->ML965,retain)
  __INIT_EXTERNAL(ULINT,ML966,data__->ML966,retain)
  __INIT_EXTERNAL(ULINT,ML967,data__->ML967,retain)
  __INIT_EXTERNAL(ULINT,ML968,data__->ML968,retain)
  __INIT_EXTERNAL(ULINT,ML969,data__->ML969,retain)
  __INIT_EXTERNAL(ULINT,ML970,data__->ML970,retain)
  __INIT_EXTERNAL(ULINT,ML971,data__->ML971,retain)
  __INIT_EXTERNAL(ULINT,ML972,data__->ML972,retain)
  __INIT_EXTERNAL(ULINT,ML973,data__->ML973,retain)
  __INIT_EXTERNAL(ULINT,ML974,data__->ML974,retain)
  __INIT_EXTERNAL(ULINT,ML975,data__->ML975,retain)
  __INIT_EXTERNAL(ULINT,ML976,data__->ML976,retain)
  __INIT_EXTERNAL(ULINT,ML977,data__->ML977,retain)
  __INIT_EXTERNAL(ULINT,ML978,data__->ML978,retain)
  __INIT_EXTERNAL(ULINT,ML979,data__->ML979,retain)
  __INIT_EXTERNAL(ULINT,ML980,data__->ML980,retain)
  __INIT_EXTERNAL(ULINT,ML981,data__->ML981,retain)
  __INIT_EXTERNAL(ULINT,ML982,data__->ML982,retain)
  __INIT_EXTERNAL(ULINT,ML983,data__->ML983,retain)
  __INIT_EXTERNAL(ULINT,ML984,data__->ML984,retain)
  __INIT_EXTERNAL(ULINT,ML985,data__->ML985,retain)
  __INIT_EXTERNAL(ULINT,ML986,data__->ML986,retain)
  __INIT_EXTERNAL(ULINT,ML987,data__->ML987,retain)
  __INIT_EXTERNAL(ULINT,ML988,data__->ML988,retain)
  __INIT_EXTERNAL(ULINT,ML989,data__->ML989,retain)
  __INIT_EXTERNAL(ULINT,ML990,data__->ML990,retain)
  __INIT_EXTERNAL(ULINT,ML991,data__->ML991,retain)
  __INIT_EXTERNAL(ULINT,ML992,data__->ML992,retain)
  __INIT_EXTERNAL(ULINT,ML993,data__->ML993,retain)
  __INIT_EXTERNAL(ULINT,ML994,data__->ML994,retain)
  __INIT_EXTERNAL(ULINT,ML995,data__->ML995,retain)
  __INIT_EXTERNAL(ULINT,ML996,data__->ML996,retain)
  __INIT_EXTERNAL(ULINT,ML997,data__->ML997,retain)
  __INIT_EXTERNAL(ULINT,ML998,data__->ML998,retain)
  __INIT_EXTERNAL(ULINT,ML999,data__->ML999,retain)
  __INIT_EXTERNAL(ULINT,ML1000,data__->ML1000,retain)
  __INIT_EXTERNAL(ULINT,ML1001,data__->ML1001,retain)
  __INIT_EXTERNAL(ULINT,ML1002,data__->ML1002,retain)
  __INIT_EXTERNAL(ULINT,ML1003,data__->ML1003,retain)
  __INIT_EXTERNAL(ULINT,ML1004,data__->ML1004,retain)
  __INIT_EXTERNAL(ULINT,ML1005,data__->ML1005,retain)
  __INIT_EXTERNAL(ULINT,ML1006,data__->ML1006,retain)
  __INIT_EXTERNAL(ULINT,ML1007,data__->ML1007,retain)
  __INIT_EXTERNAL(ULINT,ML1008,data__->ML1008,retain)
  __INIT_EXTERNAL(ULINT,ML1009,data__->ML1009,retain)
  __INIT_EXTERNAL(ULINT,ML1010,data__->ML1010,retain)
  __INIT_EXTERNAL(ULINT,ML1011,data__->ML1011,retain)
  __INIT_EXTERNAL(ULINT,ML1012,data__->ML1012,retain)
  __INIT_EXTERNAL(ULINT,ML1013,data__->ML1013,retain)
  __INIT_EXTERNAL(ULINT,ML1014,data__->ML1014,retain)
  __INIT_EXTERNAL(ULINT,ML1015,data__->ML1015,retain)
  __INIT_EXTERNAL(ULINT,ML1016,data__->ML1016,retain)
  __INIT_EXTERNAL(ULINT,ML1017,data__->ML1017,retain)
  __INIT_EXTERNAL(ULINT,ML1018,data__->ML1018,retain)
  __INIT_EXTERNAL(ULINT,ML1019,data__->ML1019,retain)
  __INIT_EXTERNAL(ULINT,ML1020,data__->ML1020,retain)
  __INIT_EXTERNAL(ULINT,ML1021,data__->ML1021,retain)
  __INIT_EXTERNAL(ULINT,ML1022,data__->ML1022,retain)
  __INIT_EXTERNAL(ULINT,ML1023,data__->ML1023,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const __ARRAY_OF_ULINT_4 temp = {{0,0,0,0}};
    __SET_VAR(data__->,LONG4,,temp);
  }
  DISTLONG4_init__(&data__->DIST,retain);
}

// Code part
void SETLONG4_body__(SETLONG4 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    INT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML0,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML2,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML3,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML4,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML5,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML6,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML7,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML8,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML9,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML10,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML11,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML12,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML13,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML14,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML15,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML16,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML17,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML18,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML19,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML20,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML21,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML22,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML23,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML24,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML25,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML26,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML27,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML28,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML29,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML30,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML31,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML32,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML33,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML34,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML35,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML36,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML37,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML38,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML39,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML40,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML41,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML42,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML43,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML44,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML45,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML46,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML47,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML48,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML49,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML50,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML51,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML52,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML53,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML54,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML55,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML56,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML57,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML58,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML59,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML60,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML61,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML62,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML63,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML64,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML65,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML66,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML67,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML68,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML69,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML70,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML71,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML72,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML73,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML74,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML75,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML76,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML77,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML78,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML79,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML80,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML81,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML82,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML83,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML84,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML85,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML86,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML87,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML88,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML89,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML90,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML91,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML92,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML93,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML94,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML95,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML96,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML97,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML98,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML99,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 25)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML100,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML101,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML102,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML103,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 26)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML104,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML105,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML106,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML107,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 27)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML108,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML109,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML110,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML111,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 28)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML112,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML113,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML114,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML115,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 29)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML116,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML117,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML118,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML119,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 30)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML120,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML121,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML122,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML123,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 31)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML124,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML125,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML126,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML127,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 32)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML128,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML129,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML130,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML131,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 33)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML132,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML133,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML134,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML135,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 34)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML136,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML137,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML138,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML139,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 35)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML140,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML141,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML142,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML143,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 36)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML144,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML145,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML146,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML147,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 37)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML148,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML149,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML150,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML151,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 38)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML152,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML153,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML154,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML155,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 39)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML156,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML157,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML158,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML159,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 40)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML160,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML161,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML162,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML163,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 41)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML164,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML165,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML166,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML167,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 42)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML168,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML169,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML170,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML171,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 43)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML172,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML173,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML174,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML175,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 44)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML176,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML177,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML178,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML179,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 45)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML180,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML181,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML182,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML183,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 46)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML184,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML185,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML186,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML187,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 47)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML188,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML189,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML190,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML191,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 48)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML192,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML193,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML194,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML195,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 49)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML196,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML197,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML198,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML199,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 50)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML200,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML201,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML202,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML203,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 51)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML204,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML205,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML206,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML207,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 52)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML208,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML209,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML210,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML211,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 53)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML212,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML213,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML214,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML215,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 54)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML216,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML217,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML218,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML219,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 55)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML220,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML221,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML222,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML223,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 56)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML224,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML225,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML226,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML227,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 57)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML228,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML229,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML230,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML231,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 58)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML232,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML233,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML234,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML235,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 59)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML236,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML237,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML238,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML239,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 60)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML240,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML241,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML242,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML243,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 61)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML244,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML245,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML246,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML247,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 62)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML248,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML249,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML250,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML251,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 63)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML252,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML253,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML254,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML255,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 64)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML256,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML257,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML258,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML259,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 65)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML260,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML261,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML262,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML263,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 66)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML264,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML265,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML266,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML267,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 67)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML268,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML269,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML270,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML271,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 68)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML272,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML273,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML274,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML275,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 69)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML276,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML277,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML278,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML279,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 70)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML280,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML281,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML282,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML283,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 71)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML284,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML285,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML286,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML287,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 72)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML288,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML289,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML290,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML291,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 73)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML292,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML293,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML294,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML295,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 74)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML296,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML297,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML298,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML299,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 75)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML300,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML301,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML302,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML303,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 76)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML304,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML305,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML306,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML307,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 77)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML308,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML309,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML310,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML311,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 78)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML312,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML313,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML314,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML315,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 79)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML316,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML317,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML318,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML319,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 80)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML320,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML321,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML322,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML323,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 81)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML324,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML325,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML326,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML327,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 82)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML328,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML329,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML330,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML331,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 83)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML332,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML333,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML334,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML335,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 84)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML336,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML337,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML338,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML339,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 85)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML340,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML341,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML342,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML343,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 86)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML344,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML345,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML346,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML347,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 87)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML348,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML349,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML350,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML351,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 88)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML352,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML353,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML354,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML355,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 89)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML356,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML357,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML358,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML359,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 90)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML360,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML361,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML362,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML363,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 91)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML364,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML365,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML366,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML367,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 92)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML368,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML369,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML370,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML371,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 93)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML372,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML373,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML374,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML375,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 94)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML376,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML377,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML378,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML379,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 95)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML380,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML381,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML382,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML383,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 96)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML384,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML385,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML386,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML387,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 97)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML388,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML389,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML390,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML391,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 98)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML392,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML393,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML394,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML395,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 99)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML396,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML397,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML398,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML399,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 100)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML400,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML401,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML402,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML403,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 101)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML404,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML405,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML406,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML407,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 102)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML408,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML409,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML410,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML411,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 103)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML412,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML413,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML414,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML415,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 104)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML416,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML417,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML418,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML419,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 105)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML420,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML421,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML422,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML423,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 106)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML424,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML425,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML426,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML427,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 107)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML428,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML429,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML430,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML431,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 108)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML432,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML433,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML434,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML435,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 109)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML436,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML437,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML438,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML439,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 110)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML440,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML441,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML442,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML443,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 111)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML444,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML445,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML446,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML447,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 112)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML448,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML449,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML450,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML451,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 113)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML452,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML453,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML454,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML455,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 114)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML456,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML457,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML458,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML459,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 115)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML460,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML461,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML462,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML463,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 116)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML464,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML465,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML466,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML467,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 117)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML468,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML469,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML470,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML471,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 118)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML472,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML473,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML474,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML475,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 119)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML476,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML477,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML478,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML479,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 120)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML480,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML481,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML482,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML483,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 121)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML484,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML485,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML486,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML487,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 122)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML488,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML489,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML490,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML491,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 123)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML492,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML493,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML494,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML495,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 124)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML496,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML497,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML498,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML499,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 125)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML500,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML501,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML502,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML503,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 126)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML504,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML505,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML506,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML507,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 127)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML508,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML509,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML510,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML511,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 128)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML512,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML513,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML514,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML515,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 129)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML516,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML517,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML518,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML519,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 130)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML520,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML521,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML522,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML523,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 131)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML524,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML525,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML526,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML527,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 132)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML528,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML529,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML530,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML531,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 133)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML532,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML533,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML534,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML535,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 134)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML536,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML537,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML538,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML539,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 135)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML540,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML541,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML542,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML543,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 136)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML544,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML545,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML546,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML547,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 137)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML548,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML549,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML550,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML551,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 138)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML552,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML553,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML554,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML555,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 139)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML556,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML557,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML558,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML559,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 140)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML560,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML561,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML562,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML563,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 141)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML564,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML565,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML566,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML567,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 142)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML568,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML569,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML570,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML571,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 143)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML572,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML573,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML574,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML575,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 144)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML576,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML577,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML578,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML579,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 145)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML580,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML581,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML582,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML583,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 146)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML584,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML585,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML586,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML587,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 147)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML588,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML589,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML590,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML591,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 148)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML592,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML593,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML594,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML595,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 149)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML596,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML597,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML598,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML599,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 150)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML600,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML601,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML602,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML603,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 151)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML604,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML605,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML606,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML607,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 152)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML608,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML609,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML610,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML611,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 153)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML612,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML613,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML614,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML615,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 154)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML616,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML617,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML618,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML619,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 155)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML620,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML621,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML622,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML623,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 156)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML624,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML625,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML626,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML627,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 157)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML628,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML629,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML630,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML631,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 158)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML632,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML633,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML634,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML635,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 159)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML636,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML637,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML638,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML639,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 160)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML640,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML641,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML642,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML643,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 161)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML644,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML645,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML646,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML647,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 162)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML648,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML649,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML650,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML651,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 163)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML652,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML653,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML654,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML655,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 164)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML656,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML657,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML658,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML659,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 165)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML660,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML661,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML662,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML663,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 166)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML664,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML665,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML666,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML667,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 167)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML668,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML669,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML670,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML671,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 168)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML672,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML673,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML674,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML675,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 169)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML676,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML677,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML678,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML679,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 170)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML680,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML681,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML682,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML683,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 171)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML684,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML685,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML686,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML687,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 172)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML688,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML689,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML690,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML691,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 173)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML692,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML693,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML694,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML695,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 174)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML696,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML697,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML698,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML699,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 175)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML700,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML701,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML702,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML703,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 176)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML704,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML705,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML706,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML707,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 177)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML708,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML709,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML710,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML711,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 178)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML712,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML713,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML714,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML715,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 179)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML716,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML717,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML718,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML719,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 180)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML720,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML721,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML722,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML723,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 181)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML724,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML725,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML726,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML727,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 182)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML728,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML729,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML730,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML731,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 183)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML732,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML733,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML734,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML735,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 184)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML736,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML737,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML738,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML739,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 185)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML740,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML741,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML742,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML743,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 186)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML744,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML745,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML746,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML747,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 187)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML748,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML749,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML750,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML751,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 188)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML752,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML753,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML754,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML755,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 189)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML756,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML757,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML758,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML759,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 190)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML760,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML761,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML762,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML763,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 191)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML764,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML765,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML766,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML767,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 192)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML768,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML769,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML770,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML771,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 193)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML772,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML773,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML774,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML775,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 194)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML776,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML777,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML778,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML779,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 195)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML780,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML781,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML782,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML783,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 196)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML784,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML785,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML786,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML787,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 197)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML788,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML789,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML790,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML791,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 198)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML792,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML793,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML794,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML795,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 199)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML796,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML797,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML798,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML799,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 200)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML800,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML801,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML802,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML803,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 201)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML804,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML805,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML806,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML807,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 202)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML808,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML809,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML810,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML811,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 203)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML812,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML813,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML814,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML815,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 204)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML816,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML817,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML818,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML819,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 205)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML820,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML821,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML822,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML823,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 206)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML824,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML825,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML826,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML827,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 207)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML828,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML829,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML830,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML831,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 208)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML832,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML833,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML834,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML835,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 209)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML836,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML837,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML838,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML839,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 210)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML840,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML841,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML842,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML843,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 211)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML844,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML845,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML846,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML847,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 212)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML848,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML849,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML850,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML851,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 213)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML852,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML853,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML854,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML855,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 214)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML856,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML857,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML858,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML859,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 215)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML860,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML861,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML862,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML863,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 216)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML864,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML865,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML866,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML867,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 217)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML868,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML869,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML870,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML871,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 218)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML872,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML873,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML874,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML875,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 219)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML876,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML877,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML878,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML879,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 220)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML880,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML881,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML882,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML883,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 221)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML884,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML885,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML886,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML887,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 222)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML888,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML889,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML890,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML891,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 223)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML892,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML893,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML894,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML895,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 224)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML896,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML897,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML898,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML899,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 225)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML900,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML901,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML902,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML903,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 226)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML904,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML905,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML906,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML907,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 227)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML908,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML909,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML910,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML911,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 228)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML912,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML913,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML914,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML915,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 229)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML916,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML917,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML918,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML919,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 230)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML920,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML921,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML922,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML923,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 231)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML924,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML925,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML926,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML927,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 232)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML928,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML929,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML930,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML931,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 233)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML932,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML933,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML934,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML935,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 234)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML936,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML937,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML938,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML939,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 235)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML940,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML941,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML942,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML943,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 236)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML944,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML945,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML946,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML947,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 237)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML948,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML949,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML950,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML951,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 238)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML952,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML953,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML954,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML955,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 239)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML956,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML957,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML958,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML959,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 240)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML960,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML961,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML962,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML963,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 241)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML964,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML965,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML966,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML967,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 242)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML968,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML969,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML970,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML971,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 243)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML972,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML973,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML974,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML975,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 244)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML976,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML977,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML978,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML979,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 245)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML980,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML981,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML982,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML983,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 246)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML984,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML985,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML986,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML987,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 247)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML988,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML989,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML990,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML991,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 248)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML992,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML993,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML994,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML995,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 249)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML996,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML997,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML998,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML999,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 250)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1000,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1001,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1002,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1003,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 251)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1004,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1005,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1006,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1007,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 252)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1008,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1009,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1010,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1011,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 253)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1012,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1013,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1014,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1015,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 254)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1016,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1017,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1018,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1019,,__GET_VAR(data__->DIST.ML3));
    }
    else if ((__case_expression == 255)) {
      __SET_VAR(data__->DIST.,LONG4,,__GET_VAR(data__->LONG4,));
      DISTLONG4_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,ML1020,,__GET_VAR(data__->DIST.ML0));
      __SET_EXTERNAL(data__->,ML1021,,__GET_VAR(data__->DIST.ML1));
      __SET_EXTERNAL(data__->,ML1022,,__GET_VAR(data__->DIST.ML2));
      __SET_EXTERNAL(data__->,ML1023,,__GET_VAR(data__->DIST.ML3));
    }
  };

  goto __end;

__end:
  return;
} // SETLONG4_body__() 





// FUNCTION
P_INT KNOFF(
  BOOL EN, 
  BOOL *__ENO, 
  INT NX, 
  INT NY, 
  INT NZ, 
  INT I, 
  INT J, 
  INT K)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  P_INT KNOFF = {-1,-1};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return KNOFF;
  }
  KNOFF.A = 0;
  KNOFF.B = 1;
  if ((K > 0)) {
    KNOFF.A = ((KNOFF.A + ((K * 2) * (NX + NY))) + (((K + 1) * NX) * NY));
    if ((K == (NZ - 1))) {
      KNOFF.B = (KNOFF.B + 1);
    };
  } else {
    KNOFF.B = (KNOFF.B + 1);
  };
  if ((J > 0)) {
    KNOFF.A = ((KNOFF.A + (J * (2 + (KNOFF.B * NX)))) + NX);
    if ((J == (NY - 1))) {
      KNOFF.B = (KNOFF.B + 1);
    };
  } else {
    KNOFF.B = (KNOFF.B + 1);
  };
  if ((I > 0)) {
    KNOFF.A = ((KNOFF.A + (I * KNOFF.B)) + 1);
    if ((I == (NX - 1))) {
      KNOFF.B = (KNOFF.B + 1);
    };
  } else {
    KNOFF.B = (KNOFF.B + 1);
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return KNOFF;
}


// FUNCTION
INT VAR_V(
  BOOL EN, 
  BOOL *__ENO, 
  TVAR TV, 
  BOOL GET_A)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  INT VAR_V = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return VAR_V;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)
    pvar_t pvar = (pvar_t)&TV;
    
    // Решаем ссылку (если нужно)
    while (pvar->r) {
      if (pvar->p >= 0) {
        // ссылка должна быть реальной (!)
        //ASSERT(1, NULL, (pvar->p < __GET_GLOBAL_HDR()->NI), 
        //  TERROR__E_FAIL, __STRING_LITERAL(22,"var_v: Reference fail!") );
        
        // Переход к элементу по ссылке:
        SH = GET_SH(1, NULL, pvar->p);
        P_INT Off = KNOFF(1, NULL, 
            SH.KN.table[0], SH.KN.table[1], SH.KN.table[2], 
            pvar->i, pvar->j, pvar->k
        );
        pvar = (pvar_t) &__GET_GLOBAL_ITS()->GR.table[pvar->p].A.table[Off.A];
      } else {  
        // элемент не существует -> воздух
        return (VAR_V = 2000); // 20.00 градусов Цельсия
      }
    }
    
    VAR_V = (GET_A) ? pvar->A : pvar->B;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return VAR_V;
}


// FUNCTION
TVAR GET_VAR(
  BOOL EN, 
  BOOL *__ENO, 
  THANDLE HGR, 
  TPOS8 PGR, 
  P_INT OFF, 
  USINT IX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAR GET_VAR = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_VAR;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)

    // Получаем массив сеток по дескриптору  
    TGRID *Grids = (TGRID *)(HGR);
    
    if (IX == 0) {        // Главная ячейка узла
    
      GET_VAR = Grids[PGR].A.table[OFF.A];
      
    } else if (IX < 4) {  // Смежная ячейка узла
    
      for (int k=(GET_VAR=(TVAR)0, 1); k < OFF.B; k++) {
        GET_VAR = Grids[PGR].A.table[OFF.A+k];
        if (((pvar_t)&GET_VAR)->d == IX) break;
      }
      
      // Значение смежных ячеек может быть только ссылочным (!)
      // ASSERT(1, NULL, ((pvar_t)&GET_VAR)->r, TERROR__E_FAIL, 
        //__STRING_LITERAL(29,"GET_VAR: Reference wanted!"));
        
    } else {

      // Неверное значение IX
      // ASSERT(1, NULL, FALSE, TERROR__E_FAIL, 
        //__STRING_LITERAL(29,"GET_VAR: Invalid IX!"));
    
    }
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_VAR;
}


void GRID2UL_init__(GRID2UL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->HGR,0,retain)
  __INIT_VAR(data__->PGR,-1,retain)
  {
    static const TSHAPE temp = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
    __SET_VAR(data__->,SH,,temp);
  }
  __INIT_VAR(data__->IRES,TERROR__E_SUCCESS,retain)
  __INIT_VAR(data__->ILOG,0,retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(1,"0"),retain)
  SETLONG4_init__(&data__->_SETLONG4,retain);
  __INIT_VAR(data__->M4,0,retain)
  __INIT_VAR(data__->N4,0,retain)
  __INIT_VAR(data__->IDX,0,retain)
  __INIT_VAR(data__->I,0,retain)
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->K,0,retain)
  {
    static const __ARRAY_OF_INT_4 temp = {{0,0,0,0}};
    __SET_VAR(data__->,W,,temp);
  }
  {
    static const __ARRAY_OF_ULINT_4 temp = {{0,0,0,0}};
    __SET_VAR(data__->,L,,temp);
  }
}

// Code part
void GRID2UL_body__(GRID2UL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,ILOG,,0);
  __SET_VAR(data__->,IRES,,TERROR__E_FAIL);
  __SET_VAR(data__->,M4,,0);
  __SET_VAR(data__->,N4,,0);
  __SET_VAR(data__->,IDX,,0);
  for(__GET_VAR(data__->K,) = 0; __GET_VAR(data__->K,) <= (__GET_VAR(data__->SH,.KN.table[(2) - (0)]) - 1); __GET_VAR(data__->K,)++) {
    for(__GET_VAR(data__->J,) = 0; __GET_VAR(data__->J,) <= (__GET_VAR(data__->SH,.KN.table[(1) - (0)]) - 1); __GET_VAR(data__->J,)++) {
      for(__GET_VAR(data__->I,) = 0; __GET_VAR(data__->I,) <= (__GET_VAR(data__->SH,.KN.table[(0) - (0)]) - 1); __GET_VAR(data__->I,)++) {
        __SET_VAR(data__->,W,.table[(__GET_VAR(data__->M4,)) - (0)],VAR_V(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TVAR)GET_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (THANDLE)__GET_VAR(data__->HGR,),
            (TPOS8)__GET_VAR(data__->PGR,),
            (P_INT)KNOFF(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)__GET_VAR(data__->SH,.KN.table[(0) - (0)]),
              (INT)__GET_VAR(data__->SH,.KN.table[(1) - (0)]),
              (INT)__GET_VAR(data__->SH,.KN.table[(2) - (0)]),
              (INT)__GET_VAR(data__->I,),
              (INT)__GET_VAR(data__->J,),
              (INT)__GET_VAR(data__->K,)),
            (USINT)0),
          (BOOL)__BOOL_LITERAL(TRUE)));
        if ((__GET_VAR(data__->ILOG,) < 4096)) {
          if ((LEN__ULINT__STRING(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)__GET_VAR(data__->MSG,)) == 0)) {
            __SET_VAR(data__->,MSG,,MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)__STRING_LITERAL(6," =!=> "),
              (STRING)__STRING_LITERAL(0,""),
              (STRING)__STRING_LITERAL(0,""),
              (STRING)__STRING_LITERAL(0,"")));
          };
          __SET_VAR(data__->,MSG,,MAKEMSG(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)__GET_VAR(data__->MSG,),
            (STRING)INT_TO_STRING(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)__GET_VAR(data__->W,.table[(__GET_VAR(data__->M4,)) - (0)])),
            (STRING)__STRING_LITERAL(1," "),
            (STRING)__STRING_LITERAL(0,"")));
          if ((MOD__INT__INT__INT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)(__GET_VAR(data__->ILOG,) + 1),
            (INT)64) == 0)) {
            __SET_VAR(data__->,MSG,,LOGMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)__GET_VAR(data__->MSG,),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,"")),
              (LOGLEVEL)LOGLEVEL__DEBUG,
              (TERROR)TERROR__E_SUCCESS));
          };
          __SET_VAR(data__->,ILOG,,(__GET_VAR(data__->ILOG,) + 1));
        };
        __SET_VAR(data__->,M4,,(__GET_VAR(data__->M4,) + 1));
        if ((MOD__INT__INT__INT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)__GET_VAR(data__->M4,),
          (INT)4) == 0)) {
          __SET_VAR(data__->,M4,,0);
          __SET_VAR(data__->,L,.table[(__GET_VAR(data__->N4,)) - (0)],INT4UL(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)__GET_VAR(data__->W,.table[(0) - (0)]),
            (INT)__GET_VAR(data__->W,.table[(1) - (0)]),
            (INT)__GET_VAR(data__->W,.table[(2) - (0)]),
            (INT)__GET_VAR(data__->W,.table[(3) - (0)])));
          __SET_VAR(data__->,N4,,(__GET_VAR(data__->N4,) + 1));
          if ((MOD__INT__INT__INT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)__GET_VAR(data__->N4,),
            (INT)4) == 0)) {
            __SET_VAR(data__->,N4,,0);
            __SET_VAR(data__->_SETLONG4.,I,,__GET_VAR(data__->IDX,));
            __SET_VAR(data__->_SETLONG4.,LONG4,,__GET_VAR(data__->L,));
            SETLONG4_body__(&data__->_SETLONG4);
            __SET_VAR(data__->,IDX,,(__GET_VAR(data__->IDX,) + 1));
          };
        };
      };
    };
  };
  if ((LEN__ULINT__STRING(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,)) > 0)) {
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  if (((MOD__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->M4,),
    (INT)4) != 0) || (MOD__INT__INT__INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->N4,),
    (INT)4) != 0))) {
    __SET_VAR(data__->,IRES,,TERROR__E_INDEX);
  } else {
    __SET_VAR(data__->,IRES,,TERROR__E_SUCCESS);
  };

  goto __end;

__end:
  return;
} // GRID2UL_body__() 





// FUNCTION
REAL GET_BF(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS16 PBF)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL GET_BF = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_BF;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_BF = __GET_GLOBAL_STS()->BF.table[PBF]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_BF;
}


// FUNCTION
TMAT MAT_OIL(
  BOOL EN, 
  BOOL *__ENO, 
  REAL TM)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TMAT MAT_OIL = {0.11,1666.0,880.3,198.1};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return MAT_OIL;
  }
  MAT_OIL.KT = (0.1124 - (0.000085 * TM));
  MAT_OIL.PL = (892.0 - (0.6075 * TM));
  MAT_OIL.CP = (1549.0 + (5.93334 * TM));
  MAT_OIL.MD = ((0.13515 * EXP__REAL__REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(2820.0 / (272.0 + (1.13 * TM))))) / 100000.0);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return MAT_OIL;
}


// FUNCTION
TPOS8 VAR_P(
  BOOL EN, 
  BOOL *__ENO, 
  TVAR TV)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 VAR_P = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return VAR_P;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)
    pvar_t pvar = (pvar_t)&TV;
    
    // Величина должна быть ссылкой
    // ASSERT(1, NULL, pvar->r, TERROR__E_FAIL, __INIT_STRING);
    VAR_P = pvar->p;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return VAR_P;
}


// FUNCTION
__ARRAY_OF_P_SINT_12 M_PROF(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_P_SINT_12 M_PROF = {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_PROF;
  }
  M_PROF.table[(0) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD0 / 65536)) / 256));
  M_PROF.table[(0) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD0 / 65536)),
      (UINT)256));
  M_PROF.table[(1) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD0,
        (UDINT)65536)) / 256));
  M_PROF.table[(1) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD0,
          (UDINT)65536)),
      (UINT)256));
  M_PROF.table[(2) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD1 / 65536)) / 256));
  M_PROF.table[(2) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD1 / 65536)),
      (UINT)256));
  M_PROF.table[(3) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD1,
        (UDINT)65536)) / 256));
  M_PROF.table[(3) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD1,
          (UDINT)65536)),
      (UINT)256));
  M_PROF.table[(4) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD2 / 65536)) / 256));
  M_PROF.table[(4) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD2 / 65536)),
      (UINT)256));
  M_PROF.table[(5) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD2,
        (UDINT)65536)) / 256));
  M_PROF.table[(5) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD2,
          (UDINT)65536)),
      (UINT)256));
  M_PROF.table[(6) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD3 / 65536)) / 256));
  M_PROF.table[(6) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD3 / 65536)),
      (UINT)256));
  M_PROF.table[(7) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD3,
        (UDINT)65536)) / 256));
  M_PROF.table[(7) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD3,
          (UDINT)65536)),
      (UINT)256));
  M_PROF.table[(8) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD4 / 65536)) / 256));
  M_PROF.table[(8) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD4 / 65536)),
      (UINT)256));
  M_PROF.table[(9) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD4,
        (UDINT)65536)) / 256));
  M_PROF.table[(9) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD4,
          (UDINT)65536)),
      (UINT)256));
  M_PROF.table[(10) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD5 / 65536)) / 256));
  M_PROF.table[(10) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD5 / 65536)),
      (UINT)256));
  M_PROF.table[(11) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD5,
        (UDINT)65536)) / 256));
  M_PROF.table[(11) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD5,
          (UDINT)65536)),
      (UINT)256));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_PROF;
}


void GETPROF_init__(GETPROF *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD120,data__->MD120,retain)
  __INIT_EXTERNAL(UDINT,MD121,data__->MD121,retain)
  __INIT_EXTERNAL(UDINT,MD122,data__->MD122,retain)
  __INIT_EXTERNAL(UDINT,MD123,data__->MD123,retain)
  __INIT_EXTERNAL(UDINT,MD124,data__->MD124,retain)
  __INIT_EXTERNAL(UDINT,MD125,data__->MD125,retain)
  __INIT_EXTERNAL(UDINT,MD126,data__->MD126,retain)
  __INIT_EXTERNAL(UDINT,MD127,data__->MD127,retain)
  __INIT_EXTERNAL(UDINT,MD128,data__->MD128,retain)
  __INIT_EXTERNAL(UDINT,MD129,data__->MD129,retain)
  __INIT_EXTERNAL(UDINT,MD130,data__->MD130,retain)
  __INIT_EXTERNAL(UDINT,MD131,data__->MD131,retain)
  __INIT_EXTERNAL(UDINT,MD132,data__->MD132,retain)
  __INIT_EXTERNAL(UDINT,MD133,data__->MD133,retain)
  __INIT_EXTERNAL(UDINT,MD134,data__->MD134,retain)
  __INIT_EXTERNAL(UDINT,MD135,data__->MD135,retain)
  __INIT_EXTERNAL(UDINT,MD136,data__->MD136,retain)
  __INIT_EXTERNAL(UDINT,MD137,data__->MD137,retain)
  __INIT_EXTERNAL(UDINT,MD138,data__->MD138,retain)
  __INIT_EXTERNAL(UDINT,MD139,data__->MD139,retain)
  __INIT_EXTERNAL(UDINT,MD140,data__->MD140,retain)
  __INIT_EXTERNAL(UDINT,MD141,data__->MD141,retain)
  __INIT_EXTERNAL(UDINT,MD142,data__->MD142,retain)
  __INIT_EXTERNAL(UDINT,MD143,data__->MD143,retain)
  __INIT_EXTERNAL(UDINT,MD144,data__->MD144,retain)
  __INIT_EXTERNAL(UDINT,MD145,data__->MD145,retain)
  __INIT_EXTERNAL(UDINT,MD146,data__->MD146,retain)
  __INIT_EXTERNAL(UDINT,MD147,data__->MD147,retain)
  __INIT_EXTERNAL(UDINT,MD148,data__->MD148,retain)
  __INIT_EXTERNAL(UDINT,MD149,data__->MD149,retain)
  __INIT_EXTERNAL(UDINT,MD150,data__->MD150,retain)
  __INIT_EXTERNAL(UDINT,MD151,data__->MD151,retain)
  __INIT_EXTERNAL(UDINT,MD152,data__->MD152,retain)
  __INIT_EXTERNAL(UDINT,MD153,data__->MD153,retain)
  __INIT_EXTERNAL(UDINT,MD154,data__->MD154,retain)
  __INIT_EXTERNAL(UDINT,MD155,data__->MD155,retain)
  __INIT_EXTERNAL(UDINT,MD156,data__->MD156,retain)
  __INIT_EXTERNAL(UDINT,MD157,data__->MD157,retain)
  __INIT_EXTERNAL(UDINT,MD158,data__->MD158,retain)
  __INIT_EXTERNAL(UDINT,MD159,data__->MD159,retain)
  __INIT_EXTERNAL(UDINT,MD160,data__->MD160,retain)
  __INIT_EXTERNAL(UDINT,MD161,data__->MD161,retain)
  __INIT_EXTERNAL(UDINT,MD162,data__->MD162,retain)
  __INIT_EXTERNAL(UDINT,MD163,data__->MD163,retain)
  __INIT_EXTERNAL(UDINT,MD164,data__->MD164,retain)
  __INIT_EXTERNAL(UDINT,MD165,data__->MD165,retain)
  __INIT_EXTERNAL(UDINT,MD166,data__->MD166,retain)
  __INIT_EXTERNAL(UDINT,MD167,data__->MD167,retain)
  __INIT_EXTERNAL(UDINT,MD168,data__->MD168,retain)
  __INIT_EXTERNAL(UDINT,MD169,data__->MD169,retain)
  __INIT_EXTERNAL(UDINT,MD170,data__->MD170,retain)
  __INIT_EXTERNAL(UDINT,MD171,data__->MD171,retain)
  __INIT_EXTERNAL(UDINT,MD172,data__->MD172,retain)
  __INIT_EXTERNAL(UDINT,MD173,data__->MD173,retain)
  __INIT_EXTERNAL(UDINT,MD174,data__->MD174,retain)
  __INIT_EXTERNAL(UDINT,MD175,data__->MD175,retain)
  __INIT_EXTERNAL(UDINT,MD176,data__->MD176,retain)
  __INIT_EXTERNAL(UDINT,MD177,data__->MD177,retain)
  __INIT_EXTERNAL(UDINT,MD178,data__->MD178,retain)
  __INIT_EXTERNAL(UDINT,MD179,data__->MD179,retain)
  __INIT_EXTERNAL(UDINT,MD180,data__->MD180,retain)
  __INIT_EXTERNAL(UDINT,MD181,data__->MD181,retain)
  __INIT_EXTERNAL(UDINT,MD182,data__->MD182,retain)
  __INIT_EXTERNAL(UDINT,MD183,data__->MD183,retain)
  __INIT_EXTERNAL(UDINT,MD184,data__->MD184,retain)
  __INIT_EXTERNAL(UDINT,MD185,data__->MD185,retain)
  __INIT_EXTERNAL(UDINT,MD186,data__->MD186,retain)
  __INIT_EXTERNAL(UDINT,MD187,data__->MD187,retain)
  __INIT_EXTERNAL(UDINT,MD188,data__->MD188,retain)
  __INIT_EXTERNAL(UDINT,MD189,data__->MD189,retain)
  __INIT_EXTERNAL(UDINT,MD190,data__->MD190,retain)
  __INIT_EXTERNAL(UDINT,MD191,data__->MD191,retain)
  __INIT_EXTERNAL(UDINT,MD192,data__->MD192,retain)
  __INIT_EXTERNAL(UDINT,MD193,data__->MD193,retain)
  __INIT_EXTERNAL(UDINT,MD194,data__->MD194,retain)
  __INIT_EXTERNAL(UDINT,MD195,data__->MD195,retain)
  __INIT_EXTERNAL(UDINT,MD196,data__->MD196,retain)
  __INIT_EXTERNAL(UDINT,MD197,data__->MD197,retain)
  __INIT_EXTERNAL(UDINT,MD198,data__->MD198,retain)
  __INIT_EXTERNAL(UDINT,MD199,data__->MD199,retain)
  __INIT_EXTERNAL(UDINT,MD200,data__->MD200,retain)
  __INIT_EXTERNAL(UDINT,MD201,data__->MD201,retain)
  __INIT_EXTERNAL(UDINT,MD202,data__->MD202,retain)
  __INIT_EXTERNAL(UDINT,MD203,data__->MD203,retain)
  __INIT_EXTERNAL(UDINT,MD204,data__->MD204,retain)
  __INIT_EXTERNAL(UDINT,MD205,data__->MD205,retain)
  __INIT_EXTERNAL(UDINT,MD206,data__->MD206,retain)
  __INIT_EXTERNAL(UDINT,MD207,data__->MD207,retain)
  __INIT_EXTERNAL(UDINT,MD208,data__->MD208,retain)
  __INIT_EXTERNAL(UDINT,MD209,data__->MD209,retain)
  __INIT_EXTERNAL(UDINT,MD210,data__->MD210,retain)
  __INIT_EXTERNAL(UDINT,MD211,data__->MD211,retain)
  __INIT_EXTERNAL(UDINT,MD212,data__->MD212,retain)
  __INIT_EXTERNAL(UDINT,MD213,data__->MD213,retain)
  __INIT_EXTERNAL(UDINT,MD214,data__->MD214,retain)
  __INIT_EXTERNAL(UDINT,MD215,data__->MD215,retain)
  __INIT_EXTERNAL(UDINT,MD216,data__->MD216,retain)
  __INIT_EXTERNAL(UDINT,MD217,data__->MD217,retain)
  __INIT_EXTERNAL(UDINT,MD218,data__->MD218,retain)
  __INIT_EXTERNAL(UDINT,MD219,data__->MD219,retain)
  __INIT_EXTERNAL(UDINT,MD220,data__->MD220,retain)
  __INIT_EXTERNAL(UDINT,MD221,data__->MD221,retain)
  __INIT_EXTERNAL(UDINT,MD222,data__->MD222,retain)
  __INIT_EXTERNAL(UDINT,MD223,data__->MD223,retain)
  __INIT_EXTERNAL(UDINT,MD224,data__->MD224,retain)
  __INIT_EXTERNAL(UDINT,MD225,data__->MD225,retain)
  __INIT_EXTERNAL(UDINT,MD226,data__->MD226,retain)
  __INIT_EXTERNAL(UDINT,MD227,data__->MD227,retain)
  __INIT_EXTERNAL(UDINT,MD228,data__->MD228,retain)
  __INIT_EXTERNAL(UDINT,MD229,data__->MD229,retain)
  __INIT_EXTERNAL(UDINT,MD230,data__->MD230,retain)
  __INIT_EXTERNAL(UDINT,MD231,data__->MD231,retain)
  __INIT_EXTERNAL(UDINT,MD232,data__->MD232,retain)
  __INIT_EXTERNAL(UDINT,MD233,data__->MD233,retain)
  __INIT_EXTERNAL(UDINT,MD234,data__->MD234,retain)
  __INIT_EXTERNAL(UDINT,MD235,data__->MD235,retain)
  __INIT_EXTERNAL(UDINT,MD236,data__->MD236,retain)
  __INIT_EXTERNAL(UDINT,MD237,data__->MD237,retain)
  __INIT_EXTERNAL(UDINT,MD238,data__->MD238,retain)
  __INIT_EXTERNAL(UDINT,MD239,data__->MD239,retain)
  __INIT_EXTERNAL(UDINT,MD240,data__->MD240,retain)
  __INIT_EXTERNAL(UDINT,MD241,data__->MD241,retain)
  __INIT_EXTERNAL(UDINT,MD242,data__->MD242,retain)
  __INIT_EXTERNAL(UDINT,MD243,data__->MD243,retain)
  __INIT_EXTERNAL(UDINT,MD244,data__->MD244,retain)
  __INIT_EXTERNAL(UDINT,MD245,data__->MD245,retain)
  __INIT_EXTERNAL(UDINT,MD246,data__->MD246,retain)
  __INIT_EXTERNAL(UDINT,MD247,data__->MD247,retain)
  __INIT_EXTERNAL(UDINT,MD248,data__->MD248,retain)
  __INIT_EXTERNAL(UDINT,MD249,data__->MD249,retain)
  __INIT_EXTERNAL(UDINT,MD250,data__->MD250,retain)
  __INIT_EXTERNAL(UDINT,MD251,data__->MD251,retain)
  __INIT_EXTERNAL(UDINT,MD252,data__->MD252,retain)
  __INIT_EXTERNAL(UDINT,MD253,data__->MD253,retain)
  __INIT_EXTERNAL(UDINT,MD254,data__->MD254,retain)
  __INIT_EXTERNAL(UDINT,MD255,data__->MD255,retain)
  __INIT_EXTERNAL(UDINT,MD256,data__->MD256,retain)
  __INIT_EXTERNAL(UDINT,MD257,data__->MD257,retain)
  __INIT_EXTERNAL(UDINT,MD258,data__->MD258,retain)
  __INIT_EXTERNAL(UDINT,MD259,data__->MD259,retain)
  __INIT_EXTERNAL(UDINT,MD260,data__->MD260,retain)
  __INIT_EXTERNAL(UDINT,MD261,data__->MD261,retain)
  __INIT_EXTERNAL(UDINT,MD262,data__->MD262,retain)
  __INIT_EXTERNAL(UDINT,MD263,data__->MD263,retain)
  __INIT_EXTERNAL(UDINT,MD264,data__->MD264,retain)
  __INIT_EXTERNAL(UDINT,MD265,data__->MD265,retain)
  __INIT_EXTERNAL(UDINT,MD266,data__->MD266,retain)
  __INIT_EXTERNAL(UDINT,MD267,data__->MD267,retain)
  __INIT_EXTERNAL(UDINT,MD268,data__->MD268,retain)
  __INIT_EXTERNAL(UDINT,MD269,data__->MD269,retain)
  __INIT_EXTERNAL(UDINT,MD270,data__->MD270,retain)
  __INIT_EXTERNAL(UDINT,MD271,data__->MD271,retain)
  __INIT_EXTERNAL(UDINT,MD272,data__->MD272,retain)
  __INIT_EXTERNAL(UDINT,MD273,data__->MD273,retain)
  __INIT_EXTERNAL(UDINT,MD274,data__->MD274,retain)
  __INIT_EXTERNAL(UDINT,MD275,data__->MD275,retain)
  __INIT_EXTERNAL(UDINT,MD276,data__->MD276,retain)
  __INIT_EXTERNAL(UDINT,MD277,data__->MD277,retain)
  __INIT_EXTERNAL(UDINT,MD278,data__->MD278,retain)
  __INIT_EXTERNAL(UDINT,MD279,data__->MD279,retain)
  __INIT_EXTERNAL(UDINT,MD280,data__->MD280,retain)
  __INIT_EXTERNAL(UDINT,MD281,data__->MD281,retain)
  __INIT_EXTERNAL(UDINT,MD282,data__->MD282,retain)
  __INIT_EXTERNAL(UDINT,MD283,data__->MD283,retain)
  __INIT_EXTERNAL(UDINT,MD284,data__->MD284,retain)
  __INIT_EXTERNAL(UDINT,MD285,data__->MD285,retain)
  __INIT_EXTERNAL(UDINT,MD286,data__->MD286,retain)
  __INIT_EXTERNAL(UDINT,MD287,data__->MD287,retain)
  __INIT_EXTERNAL(UDINT,MD288,data__->MD288,retain)
  __INIT_EXTERNAL(UDINT,MD289,data__->MD289,retain)
  __INIT_EXTERNAL(UDINT,MD290,data__->MD290,retain)
  __INIT_EXTERNAL(UDINT,MD291,data__->MD291,retain)
  __INIT_EXTERNAL(UDINT,MD292,data__->MD292,retain)
  __INIT_EXTERNAL(UDINT,MD293,data__->MD293,retain)
  __INIT_EXTERNAL(UDINT,MD294,data__->MD294,retain)
  __INIT_EXTERNAL(UDINT,MD295,data__->MD295,retain)
  __INIT_EXTERNAL(UDINT,MD296,data__->MD296,retain)
  __INIT_EXTERNAL(UDINT,MD297,data__->MD297,retain)
  __INIT_EXTERNAL(UDINT,MD298,data__->MD298,retain)
  __INIT_EXTERNAL(UDINT,MD299,data__->MD299,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const __ARRAY_OF_P_SINT_12 temp = {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
    __SET_VAR(data__->,PROF,,temp);
  }
}

// Code part
void GETPROF_body__(GETPROF *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD120,),
        (UDINT)__GET_EXTERNAL(data__->MD121,),
        (UDINT)__GET_EXTERNAL(data__->MD122,),
        (UDINT)__GET_EXTERNAL(data__->MD123,),
        (UDINT)__GET_EXTERNAL(data__->MD124,),
        (UDINT)__GET_EXTERNAL(data__->MD125,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD126,),
        (UDINT)__GET_EXTERNAL(data__->MD127,),
        (UDINT)__GET_EXTERNAL(data__->MD128,),
        (UDINT)__GET_EXTERNAL(data__->MD129,),
        (UDINT)__GET_EXTERNAL(data__->MD130,),
        (UDINT)__GET_EXTERNAL(data__->MD131,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD132,),
        (UDINT)__GET_EXTERNAL(data__->MD133,),
        (UDINT)__GET_EXTERNAL(data__->MD134,),
        (UDINT)__GET_EXTERNAL(data__->MD135,),
        (UDINT)__GET_EXTERNAL(data__->MD136,),
        (UDINT)__GET_EXTERNAL(data__->MD137,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD138,),
        (UDINT)__GET_EXTERNAL(data__->MD139,),
        (UDINT)__GET_EXTERNAL(data__->MD140,),
        (UDINT)__GET_EXTERNAL(data__->MD141,),
        (UDINT)__GET_EXTERNAL(data__->MD142,),
        (UDINT)__GET_EXTERNAL(data__->MD143,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD144,),
        (UDINT)__GET_EXTERNAL(data__->MD145,),
        (UDINT)__GET_EXTERNAL(data__->MD146,),
        (UDINT)__GET_EXTERNAL(data__->MD147,),
        (UDINT)__GET_EXTERNAL(data__->MD148,),
        (UDINT)__GET_EXTERNAL(data__->MD149,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD150,),
        (UDINT)__GET_EXTERNAL(data__->MD151,),
        (UDINT)__GET_EXTERNAL(data__->MD152,),
        (UDINT)__GET_EXTERNAL(data__->MD153,),
        (UDINT)__GET_EXTERNAL(data__->MD154,),
        (UDINT)__GET_EXTERNAL(data__->MD155,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD156,),
        (UDINT)__GET_EXTERNAL(data__->MD157,),
        (UDINT)__GET_EXTERNAL(data__->MD158,),
        (UDINT)__GET_EXTERNAL(data__->MD159,),
        (UDINT)__GET_EXTERNAL(data__->MD160,),
        (UDINT)__GET_EXTERNAL(data__->MD161,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD162,),
        (UDINT)__GET_EXTERNAL(data__->MD163,),
        (UDINT)__GET_EXTERNAL(data__->MD164,),
        (UDINT)__GET_EXTERNAL(data__->MD165,),
        (UDINT)__GET_EXTERNAL(data__->MD166,),
        (UDINT)__GET_EXTERNAL(data__->MD167,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD168,),
        (UDINT)__GET_EXTERNAL(data__->MD169,),
        (UDINT)__GET_EXTERNAL(data__->MD170,),
        (UDINT)__GET_EXTERNAL(data__->MD171,),
        (UDINT)__GET_EXTERNAL(data__->MD172,),
        (UDINT)__GET_EXTERNAL(data__->MD173,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD174,),
        (UDINT)__GET_EXTERNAL(data__->MD175,),
        (UDINT)__GET_EXTERNAL(data__->MD176,),
        (UDINT)__GET_EXTERNAL(data__->MD177,),
        (UDINT)__GET_EXTERNAL(data__->MD178,),
        (UDINT)__GET_EXTERNAL(data__->MD179,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD180,),
        (UDINT)__GET_EXTERNAL(data__->MD181,),
        (UDINT)__GET_EXTERNAL(data__->MD182,),
        (UDINT)__GET_EXTERNAL(data__->MD183,),
        (UDINT)__GET_EXTERNAL(data__->MD184,),
        (UDINT)__GET_EXTERNAL(data__->MD185,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD186,),
        (UDINT)__GET_EXTERNAL(data__->MD187,),
        (UDINT)__GET_EXTERNAL(data__->MD188,),
        (UDINT)__GET_EXTERNAL(data__->MD189,),
        (UDINT)__GET_EXTERNAL(data__->MD190,),
        (UDINT)__GET_EXTERNAL(data__->MD191,)));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD192,),
        (UDINT)__GET_EXTERNAL(data__->MD193,),
        (UDINT)__GET_EXTERNAL(data__->MD194,),
        (UDINT)__GET_EXTERNAL(data__->MD195,),
        (UDINT)__GET_EXTERNAL(data__->MD196,),
        (UDINT)__GET_EXTERNAL(data__->MD197,)));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD198,),
        (UDINT)__GET_EXTERNAL(data__->MD199,),
        (UDINT)__GET_EXTERNAL(data__->MD200,),
        (UDINT)__GET_EXTERNAL(data__->MD201,),
        (UDINT)__GET_EXTERNAL(data__->MD202,),
        (UDINT)__GET_EXTERNAL(data__->MD203,)));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD204,),
        (UDINT)__GET_EXTERNAL(data__->MD205,),
        (UDINT)__GET_EXTERNAL(data__->MD206,),
        (UDINT)__GET_EXTERNAL(data__->MD207,),
        (UDINT)__GET_EXTERNAL(data__->MD208,),
        (UDINT)__GET_EXTERNAL(data__->MD209,)));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD210,),
        (UDINT)__GET_EXTERNAL(data__->MD211,),
        (UDINT)__GET_EXTERNAL(data__->MD212,),
        (UDINT)__GET_EXTERNAL(data__->MD213,),
        (UDINT)__GET_EXTERNAL(data__->MD214,),
        (UDINT)__GET_EXTERNAL(data__->MD215,)));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD216,),
        (UDINT)__GET_EXTERNAL(data__->MD217,),
        (UDINT)__GET_EXTERNAL(data__->MD218,),
        (UDINT)__GET_EXTERNAL(data__->MD219,),
        (UDINT)__GET_EXTERNAL(data__->MD220,),
        (UDINT)__GET_EXTERNAL(data__->MD221,)));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD222,),
        (UDINT)__GET_EXTERNAL(data__->MD223,),
        (UDINT)__GET_EXTERNAL(data__->MD224,),
        (UDINT)__GET_EXTERNAL(data__->MD225,),
        (UDINT)__GET_EXTERNAL(data__->MD226,),
        (UDINT)__GET_EXTERNAL(data__->MD227,)));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD228,),
        (UDINT)__GET_EXTERNAL(data__->MD229,),
        (UDINT)__GET_EXTERNAL(data__->MD230,),
        (UDINT)__GET_EXTERNAL(data__->MD231,),
        (UDINT)__GET_EXTERNAL(data__->MD232,),
        (UDINT)__GET_EXTERNAL(data__->MD233,)));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD234,),
        (UDINT)__GET_EXTERNAL(data__->MD235,),
        (UDINT)__GET_EXTERNAL(data__->MD236,),
        (UDINT)__GET_EXTERNAL(data__->MD237,),
        (UDINT)__GET_EXTERNAL(data__->MD238,),
        (UDINT)__GET_EXTERNAL(data__->MD239,)));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD240,),
        (UDINT)__GET_EXTERNAL(data__->MD241,),
        (UDINT)__GET_EXTERNAL(data__->MD242,),
        (UDINT)__GET_EXTERNAL(data__->MD243,),
        (UDINT)__GET_EXTERNAL(data__->MD244,),
        (UDINT)__GET_EXTERNAL(data__->MD245,)));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD246,),
        (UDINT)__GET_EXTERNAL(data__->MD247,),
        (UDINT)__GET_EXTERNAL(data__->MD248,),
        (UDINT)__GET_EXTERNAL(data__->MD249,),
        (UDINT)__GET_EXTERNAL(data__->MD250,),
        (UDINT)__GET_EXTERNAL(data__->MD251,)));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD252,),
        (UDINT)__GET_EXTERNAL(data__->MD253,),
        (UDINT)__GET_EXTERNAL(data__->MD254,),
        (UDINT)__GET_EXTERNAL(data__->MD255,),
        (UDINT)__GET_EXTERNAL(data__->MD256,),
        (UDINT)__GET_EXTERNAL(data__->MD257,)));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD258,),
        (UDINT)__GET_EXTERNAL(data__->MD259,),
        (UDINT)__GET_EXTERNAL(data__->MD260,),
        (UDINT)__GET_EXTERNAL(data__->MD261,),
        (UDINT)__GET_EXTERNAL(data__->MD262,),
        (UDINT)__GET_EXTERNAL(data__->MD263,)));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD264,),
        (UDINT)__GET_EXTERNAL(data__->MD265,),
        (UDINT)__GET_EXTERNAL(data__->MD266,),
        (UDINT)__GET_EXTERNAL(data__->MD267,),
        (UDINT)__GET_EXTERNAL(data__->MD268,),
        (UDINT)__GET_EXTERNAL(data__->MD269,)));
    }
    else if ((__case_expression == 25)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD270,),
        (UDINT)__GET_EXTERNAL(data__->MD271,),
        (UDINT)__GET_EXTERNAL(data__->MD272,),
        (UDINT)__GET_EXTERNAL(data__->MD273,),
        (UDINT)__GET_EXTERNAL(data__->MD274,),
        (UDINT)__GET_EXTERNAL(data__->MD275,)));
    }
    else if ((__case_expression == 26)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD276,),
        (UDINT)__GET_EXTERNAL(data__->MD277,),
        (UDINT)__GET_EXTERNAL(data__->MD278,),
        (UDINT)__GET_EXTERNAL(data__->MD279,),
        (UDINT)__GET_EXTERNAL(data__->MD280,),
        (UDINT)__GET_EXTERNAL(data__->MD281,)));
    }
    else if ((__case_expression == 27)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD282,),
        (UDINT)__GET_EXTERNAL(data__->MD283,),
        (UDINT)__GET_EXTERNAL(data__->MD284,),
        (UDINT)__GET_EXTERNAL(data__->MD285,),
        (UDINT)__GET_EXTERNAL(data__->MD286,),
        (UDINT)__GET_EXTERNAL(data__->MD287,)));
    }
    else if ((__case_expression == 28)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD288,),
        (UDINT)__GET_EXTERNAL(data__->MD289,),
        (UDINT)__GET_EXTERNAL(data__->MD290,),
        (UDINT)__GET_EXTERNAL(data__->MD291,),
        (UDINT)__GET_EXTERNAL(data__->MD292,),
        (UDINT)__GET_EXTERNAL(data__->MD293,)));
    }
    else if ((__case_expression == 29)) {
      __SET_VAR(data__->,PROF,,M_PROF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD294,),
        (UDINT)__GET_EXTERNAL(data__->MD295,),
        (UDINT)__GET_EXTERNAL(data__->MD296,),
        (UDINT)__GET_EXTERNAL(data__->MD297,),
        (UDINT)__GET_EXTERNAL(data__->MD298,),
        (UDINT)__GET_EXTERNAL(data__->MD299,)));
    }
  };

  goto __end;

__end:
  return;
} // GETPROF_body__() 





// FUNCTION
TVAL GET_VL(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PVL)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAL GET_VL = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_VL;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_VL = __GET_GLOBAL_STS()->VL.table[PVL]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_VL;
}


// FUNCTION
THANDLE ITS_GR(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 OFF)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  THANDLE ITS_GR = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ITS_GR;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 ITS_GR = (THANDLE)&__GET_GLOBAL_ITS()->GR.table[OFF]; 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ITS_GR;
}


// FUNCTION
TCOND M_COND(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TCOND M_COND = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_COND;
  }
  M_COND.ID = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD0 / 65536));
  M_COND.TMID = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD0,
      (UDINT)65536));
  M_COND.TMIN.A.table[(0) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD1 / 65536));
  M_COND.TMIN.A.table[(1) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD1,
      (UDINT)65536));
  M_COND.TMIN.A.table[(2) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD2 / 65536));
  M_COND.TMIN.V = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD2,
      (UDINT)65536));
  M_COND.TMAX.A.table[(0) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD3 / 65536));
  M_COND.TMAX.A.table[(1) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD3,
      (UDINT)65536));
  M_COND.TMAX.A.table[(2) - (0)] = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD4 / 65536));
  M_COND.TMAX.V = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD4,
      (UDINT)65536));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_COND;
}


void WRITEITEM_init__(WRITEITEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->PIT,-1,retain)
  {
    static const TCOND temp = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
    __SET_VAR(data__->,COND,,temp);
  }
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  SETCOND_init__(&data__->_SETCOND,retain);
}

// Code part
void WRITEITEM_body__(WRITEITEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,COND,,GET_CN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)__GET_VAR(data__->PIT,)));
  __SET_VAR(data__->,COND,.ID,IT_ID(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)__GET_VAR(data__->PIT,)));
  __SET_VAR(data__->_SETCOND.,I,,SINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (SINT)__GET_VAR(data__->PIT,)));
  __SET_VAR(data__->_SETCOND.,COND,,__GET_VAR(data__->COND,));
  SETCOND_body__(&data__->_SETCOND);

  goto __end;

__end:
  return;
} // WRITEITEM_body__() 





// FUNCTION
REAL UDI2REAL(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT VALUE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL TMP = 0.0;
  REAL UDI2REAL = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return UDI2REAL;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    union { UDINT  udint; float real; } value;
    value.udint = VALUE;
    TMP = value.real;
  
  #undef GetFbVar
  #undef SetFbVar
;
  UDI2REAL = TMP;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return UDI2REAL;
}


// FUNCTION
STRING LOGERR(
  BOOL EN, 
  BOOL *__ENO, 
  TERROR ERR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  STRING LOGERR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return LOGERR;
  }
  LOGERR = LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(0,""),
    (LOGLEVEL)LOGLEVEL__INFO,
    (TERROR)ERR);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return LOGERR;
}


// FUNCTION
TPHASEO M_PHASE_OUT(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5, 
  UDINT MD6, 
  UDINT MD7)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPHASEO M_PHASE_OUT = {0.0,0.0,0.0,20.0,80.0,0.01,0.01,0.01};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_PHASE_OUT;
  }
  M_PHASE_OUT.Q0 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD0);
  M_PHASE_OUT.Q1 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_PHASE_OUT.Q2 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_PHASE_OUT.TIN = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_PHASE_OUT.TOUT = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD4);
  M_PHASE_OUT.QM = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD5);
  M_PHASE_OUT.SE = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD6);
  M_PHASE_OUT.VE = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD7);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_PHASE_OUT;
}


// FUNCTION
TSHAPE SH_SET_AX(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH, 
  USINT AX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TSHAPE SH_SET_AX = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_SET_AX;
  }
  SH.WF = (SH.WF | SHL__WORD__WORD__SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)USINT_TO_WORD(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)AX),
    (SINT)12));
  SH_SET_AX = SH;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_SET_AX;
}


// FUNCTION
TPOS8 SET_IT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  TITEM ITEM)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 SET_IT = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SET_IT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (SET_IT = ( __GET_GLOBAL_ITS()->IT.table[PIT] = ITEM, PIT) ); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SET_IT;
}


// FUNCTION
TDEF M_DEF(
  BOOL EN, 
  BOOL *__ENO, 
  UINT MW0, 
  UINT MW1, 
  UINT MW2, 
  UINT MW3, 
  UINT MW4, 
  UINT MW5, 
  UINT MW6, 
  UINT MW7, 
  UINT MW8, 
  UINT MW9)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TDEF M_DEF = {0,0,0,{{0,0,0}},{{100,100,100}},0,0,0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_DEF;
  }
  M_DEF.ID = MW0;
  M_DEF.CF = UINT_TO_WORD(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW1);
  M_DEF.R0 = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW2);
  M_DEF.XYZ.table[(0) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW3);
  M_DEF.XYZ.table[(1) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW4);
  M_DEF.XYZ.table[(2) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW5);
  M_DEF.LWH.table[(0) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW6);
  M_DEF.LWH.table[(1) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW7);
  M_DEF.LWH.table[(2) - (0)] = UINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MW8);
  M_DEF.IG = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)((MW9 / 256) / 16));
  M_DEF.IM = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)(MW9 / 256),
      (UINT)16));
  M_DEF.IV = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)MW9,
      (UINT)256));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_DEF;
}


void GETDEF_init__(GETDEF *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UINT,MW0,data__->MW0,retain)
  __INIT_EXTERNAL(UINT,MW1,data__->MW1,retain)
  __INIT_EXTERNAL(UINT,MW2,data__->MW2,retain)
  __INIT_EXTERNAL(UINT,MW3,data__->MW3,retain)
  __INIT_EXTERNAL(UINT,MW4,data__->MW4,retain)
  __INIT_EXTERNAL(UINT,MW5,data__->MW5,retain)
  __INIT_EXTERNAL(UINT,MW6,data__->MW6,retain)
  __INIT_EXTERNAL(UINT,MW7,data__->MW7,retain)
  __INIT_EXTERNAL(UINT,MW8,data__->MW8,retain)
  __INIT_EXTERNAL(UINT,MW9,data__->MW9,retain)
  __INIT_EXTERNAL(UINT,MW10,data__->MW10,retain)
  __INIT_EXTERNAL(UINT,MW11,data__->MW11,retain)
  __INIT_EXTERNAL(UINT,MW12,data__->MW12,retain)
  __INIT_EXTERNAL(UINT,MW13,data__->MW13,retain)
  __INIT_EXTERNAL(UINT,MW14,data__->MW14,retain)
  __INIT_EXTERNAL(UINT,MW15,data__->MW15,retain)
  __INIT_EXTERNAL(UINT,MW16,data__->MW16,retain)
  __INIT_EXTERNAL(UINT,MW17,data__->MW17,retain)
  __INIT_EXTERNAL(UINT,MW18,data__->MW18,retain)
  __INIT_EXTERNAL(UINT,MW19,data__->MW19,retain)
  __INIT_EXTERNAL(UINT,MW20,data__->MW20,retain)
  __INIT_EXTERNAL(UINT,MW21,data__->MW21,retain)
  __INIT_EXTERNAL(UINT,MW22,data__->MW22,retain)
  __INIT_EXTERNAL(UINT,MW23,data__->MW23,retain)
  __INIT_EXTERNAL(UINT,MW24,data__->MW24,retain)
  __INIT_EXTERNAL(UINT,MW25,data__->MW25,retain)
  __INIT_EXTERNAL(UINT,MW26,data__->MW26,retain)
  __INIT_EXTERNAL(UINT,MW27,data__->MW27,retain)
  __INIT_EXTERNAL(UINT,MW28,data__->MW28,retain)
  __INIT_EXTERNAL(UINT,MW29,data__->MW29,retain)
  __INIT_EXTERNAL(UINT,MW30,data__->MW30,retain)
  __INIT_EXTERNAL(UINT,MW31,data__->MW31,retain)
  __INIT_EXTERNAL(UINT,MW32,data__->MW32,retain)
  __INIT_EXTERNAL(UINT,MW33,data__->MW33,retain)
  __INIT_EXTERNAL(UINT,MW34,data__->MW34,retain)
  __INIT_EXTERNAL(UINT,MW35,data__->MW35,retain)
  __INIT_EXTERNAL(UINT,MW36,data__->MW36,retain)
  __INIT_EXTERNAL(UINT,MW37,data__->MW37,retain)
  __INIT_EXTERNAL(UINT,MW38,data__->MW38,retain)
  __INIT_EXTERNAL(UINT,MW39,data__->MW39,retain)
  __INIT_EXTERNAL(UINT,MW40,data__->MW40,retain)
  __INIT_EXTERNAL(UINT,MW41,data__->MW41,retain)
  __INIT_EXTERNAL(UINT,MW42,data__->MW42,retain)
  __INIT_EXTERNAL(UINT,MW43,data__->MW43,retain)
  __INIT_EXTERNAL(UINT,MW44,data__->MW44,retain)
  __INIT_EXTERNAL(UINT,MW45,data__->MW45,retain)
  __INIT_EXTERNAL(UINT,MW46,data__->MW46,retain)
  __INIT_EXTERNAL(UINT,MW47,data__->MW47,retain)
  __INIT_EXTERNAL(UINT,MW48,data__->MW48,retain)
  __INIT_EXTERNAL(UINT,MW49,data__->MW49,retain)
  __INIT_EXTERNAL(UINT,MW50,data__->MW50,retain)
  __INIT_EXTERNAL(UINT,MW51,data__->MW51,retain)
  __INIT_EXTERNAL(UINT,MW52,data__->MW52,retain)
  __INIT_EXTERNAL(UINT,MW53,data__->MW53,retain)
  __INIT_EXTERNAL(UINT,MW54,data__->MW54,retain)
  __INIT_EXTERNAL(UINT,MW55,data__->MW55,retain)
  __INIT_EXTERNAL(UINT,MW56,data__->MW56,retain)
  __INIT_EXTERNAL(UINT,MW57,data__->MW57,retain)
  __INIT_EXTERNAL(UINT,MW58,data__->MW58,retain)
  __INIT_EXTERNAL(UINT,MW59,data__->MW59,retain)
  __INIT_EXTERNAL(UINT,MW60,data__->MW60,retain)
  __INIT_EXTERNAL(UINT,MW61,data__->MW61,retain)
  __INIT_EXTERNAL(UINT,MW62,data__->MW62,retain)
  __INIT_EXTERNAL(UINT,MW63,data__->MW63,retain)
  __INIT_EXTERNAL(UINT,MW64,data__->MW64,retain)
  __INIT_EXTERNAL(UINT,MW65,data__->MW65,retain)
  __INIT_EXTERNAL(UINT,MW66,data__->MW66,retain)
  __INIT_EXTERNAL(UINT,MW67,data__->MW67,retain)
  __INIT_EXTERNAL(UINT,MW68,data__->MW68,retain)
  __INIT_EXTERNAL(UINT,MW69,data__->MW69,retain)
  __INIT_EXTERNAL(UINT,MW70,data__->MW70,retain)
  __INIT_EXTERNAL(UINT,MW71,data__->MW71,retain)
  __INIT_EXTERNAL(UINT,MW72,data__->MW72,retain)
  __INIT_EXTERNAL(UINT,MW73,data__->MW73,retain)
  __INIT_EXTERNAL(UINT,MW74,data__->MW74,retain)
  __INIT_EXTERNAL(UINT,MW75,data__->MW75,retain)
  __INIT_EXTERNAL(UINT,MW76,data__->MW76,retain)
  __INIT_EXTERNAL(UINT,MW77,data__->MW77,retain)
  __INIT_EXTERNAL(UINT,MW78,data__->MW78,retain)
  __INIT_EXTERNAL(UINT,MW79,data__->MW79,retain)
  __INIT_EXTERNAL(UINT,MW80,data__->MW80,retain)
  __INIT_EXTERNAL(UINT,MW81,data__->MW81,retain)
  __INIT_EXTERNAL(UINT,MW82,data__->MW82,retain)
  __INIT_EXTERNAL(UINT,MW83,data__->MW83,retain)
  __INIT_EXTERNAL(UINT,MW84,data__->MW84,retain)
  __INIT_EXTERNAL(UINT,MW85,data__->MW85,retain)
  __INIT_EXTERNAL(UINT,MW86,data__->MW86,retain)
  __INIT_EXTERNAL(UINT,MW87,data__->MW87,retain)
  __INIT_EXTERNAL(UINT,MW88,data__->MW88,retain)
  __INIT_EXTERNAL(UINT,MW89,data__->MW89,retain)
  __INIT_EXTERNAL(UINT,MW90,data__->MW90,retain)
  __INIT_EXTERNAL(UINT,MW91,data__->MW91,retain)
  __INIT_EXTERNAL(UINT,MW92,data__->MW92,retain)
  __INIT_EXTERNAL(UINT,MW93,data__->MW93,retain)
  __INIT_EXTERNAL(UINT,MW94,data__->MW94,retain)
  __INIT_EXTERNAL(UINT,MW95,data__->MW95,retain)
  __INIT_EXTERNAL(UINT,MW96,data__->MW96,retain)
  __INIT_EXTERNAL(UINT,MW97,data__->MW97,retain)
  __INIT_EXTERNAL(UINT,MW98,data__->MW98,retain)
  __INIT_EXTERNAL(UINT,MW99,data__->MW99,retain)
  __INIT_EXTERNAL(UINT,MW100,data__->MW100,retain)
  __INIT_EXTERNAL(UINT,MW101,data__->MW101,retain)
  __INIT_EXTERNAL(UINT,MW102,data__->MW102,retain)
  __INIT_EXTERNAL(UINT,MW103,data__->MW103,retain)
  __INIT_EXTERNAL(UINT,MW104,data__->MW104,retain)
  __INIT_EXTERNAL(UINT,MW105,data__->MW105,retain)
  __INIT_EXTERNAL(UINT,MW106,data__->MW106,retain)
  __INIT_EXTERNAL(UINT,MW107,data__->MW107,retain)
  __INIT_EXTERNAL(UINT,MW108,data__->MW108,retain)
  __INIT_EXTERNAL(UINT,MW109,data__->MW109,retain)
  __INIT_EXTERNAL(UINT,MW110,data__->MW110,retain)
  __INIT_EXTERNAL(UINT,MW111,data__->MW111,retain)
  __INIT_EXTERNAL(UINT,MW112,data__->MW112,retain)
  __INIT_EXTERNAL(UINT,MW113,data__->MW113,retain)
  __INIT_EXTERNAL(UINT,MW114,data__->MW114,retain)
  __INIT_EXTERNAL(UINT,MW115,data__->MW115,retain)
  __INIT_EXTERNAL(UINT,MW116,data__->MW116,retain)
  __INIT_EXTERNAL(UINT,MW117,data__->MW117,retain)
  __INIT_EXTERNAL(UINT,MW118,data__->MW118,retain)
  __INIT_EXTERNAL(UINT,MW119,data__->MW119,retain)
  __INIT_EXTERNAL(UINT,MW120,data__->MW120,retain)
  __INIT_EXTERNAL(UINT,MW121,data__->MW121,retain)
  __INIT_EXTERNAL(UINT,MW122,data__->MW122,retain)
  __INIT_EXTERNAL(UINT,MW123,data__->MW123,retain)
  __INIT_EXTERNAL(UINT,MW124,data__->MW124,retain)
  __INIT_EXTERNAL(UINT,MW125,data__->MW125,retain)
  __INIT_EXTERNAL(UINT,MW126,data__->MW126,retain)
  __INIT_EXTERNAL(UINT,MW127,data__->MW127,retain)
  __INIT_EXTERNAL(UINT,MW128,data__->MW128,retain)
  __INIT_EXTERNAL(UINT,MW129,data__->MW129,retain)
  __INIT_EXTERNAL(UINT,MW130,data__->MW130,retain)
  __INIT_EXTERNAL(UINT,MW131,data__->MW131,retain)
  __INIT_EXTERNAL(UINT,MW132,data__->MW132,retain)
  __INIT_EXTERNAL(UINT,MW133,data__->MW133,retain)
  __INIT_EXTERNAL(UINT,MW134,data__->MW134,retain)
  __INIT_EXTERNAL(UINT,MW135,data__->MW135,retain)
  __INIT_EXTERNAL(UINT,MW136,data__->MW136,retain)
  __INIT_EXTERNAL(UINT,MW137,data__->MW137,retain)
  __INIT_EXTERNAL(UINT,MW138,data__->MW138,retain)
  __INIT_EXTERNAL(UINT,MW139,data__->MW139,retain)
  __INIT_EXTERNAL(UINT,MW140,data__->MW140,retain)
  __INIT_EXTERNAL(UINT,MW141,data__->MW141,retain)
  __INIT_EXTERNAL(UINT,MW142,data__->MW142,retain)
  __INIT_EXTERNAL(UINT,MW143,data__->MW143,retain)
  __INIT_EXTERNAL(UINT,MW144,data__->MW144,retain)
  __INIT_EXTERNAL(UINT,MW145,data__->MW145,retain)
  __INIT_EXTERNAL(UINT,MW146,data__->MW146,retain)
  __INIT_EXTERNAL(UINT,MW147,data__->MW147,retain)
  __INIT_EXTERNAL(UINT,MW148,data__->MW148,retain)
  __INIT_EXTERNAL(UINT,MW149,data__->MW149,retain)
  __INIT_EXTERNAL(UINT,MW150,data__->MW150,retain)
  __INIT_EXTERNAL(UINT,MW151,data__->MW151,retain)
  __INIT_EXTERNAL(UINT,MW152,data__->MW152,retain)
  __INIT_EXTERNAL(UINT,MW153,data__->MW153,retain)
  __INIT_EXTERNAL(UINT,MW154,data__->MW154,retain)
  __INIT_EXTERNAL(UINT,MW155,data__->MW155,retain)
  __INIT_EXTERNAL(UINT,MW156,data__->MW156,retain)
  __INIT_EXTERNAL(UINT,MW157,data__->MW157,retain)
  __INIT_EXTERNAL(UINT,MW158,data__->MW158,retain)
  __INIT_EXTERNAL(UINT,MW159,data__->MW159,retain)
  __INIT_EXTERNAL(UINT,MW160,data__->MW160,retain)
  __INIT_EXTERNAL(UINT,MW161,data__->MW161,retain)
  __INIT_EXTERNAL(UINT,MW162,data__->MW162,retain)
  __INIT_EXTERNAL(UINT,MW163,data__->MW163,retain)
  __INIT_EXTERNAL(UINT,MW164,data__->MW164,retain)
  __INIT_EXTERNAL(UINT,MW165,data__->MW165,retain)
  __INIT_EXTERNAL(UINT,MW166,data__->MW166,retain)
  __INIT_EXTERNAL(UINT,MW167,data__->MW167,retain)
  __INIT_EXTERNAL(UINT,MW168,data__->MW168,retain)
  __INIT_EXTERNAL(UINT,MW169,data__->MW169,retain)
  __INIT_EXTERNAL(UINT,MW170,data__->MW170,retain)
  __INIT_EXTERNAL(UINT,MW171,data__->MW171,retain)
  __INIT_EXTERNAL(UINT,MW172,data__->MW172,retain)
  __INIT_EXTERNAL(UINT,MW173,data__->MW173,retain)
  __INIT_EXTERNAL(UINT,MW174,data__->MW174,retain)
  __INIT_EXTERNAL(UINT,MW175,data__->MW175,retain)
  __INIT_EXTERNAL(UINT,MW176,data__->MW176,retain)
  __INIT_EXTERNAL(UINT,MW177,data__->MW177,retain)
  __INIT_EXTERNAL(UINT,MW178,data__->MW178,retain)
  __INIT_EXTERNAL(UINT,MW179,data__->MW179,retain)
  __INIT_EXTERNAL(UINT,MW180,data__->MW180,retain)
  __INIT_EXTERNAL(UINT,MW181,data__->MW181,retain)
  __INIT_EXTERNAL(UINT,MW182,data__->MW182,retain)
  __INIT_EXTERNAL(UINT,MW183,data__->MW183,retain)
  __INIT_EXTERNAL(UINT,MW184,data__->MW184,retain)
  __INIT_EXTERNAL(UINT,MW185,data__->MW185,retain)
  __INIT_EXTERNAL(UINT,MW186,data__->MW186,retain)
  __INIT_EXTERNAL(UINT,MW187,data__->MW187,retain)
  __INIT_EXTERNAL(UINT,MW188,data__->MW188,retain)
  __INIT_EXTERNAL(UINT,MW189,data__->MW189,retain)
  __INIT_EXTERNAL(UINT,MW190,data__->MW190,retain)
  __INIT_EXTERNAL(UINT,MW191,data__->MW191,retain)
  __INIT_EXTERNAL(UINT,MW192,data__->MW192,retain)
  __INIT_EXTERNAL(UINT,MW193,data__->MW193,retain)
  __INIT_EXTERNAL(UINT,MW194,data__->MW194,retain)
  __INIT_EXTERNAL(UINT,MW195,data__->MW195,retain)
  __INIT_EXTERNAL(UINT,MW196,data__->MW196,retain)
  __INIT_EXTERNAL(UINT,MW197,data__->MW197,retain)
  __INIT_EXTERNAL(UINT,MW198,data__->MW198,retain)
  __INIT_EXTERNAL(UINT,MW199,data__->MW199,retain)
  __INIT_EXTERNAL(UINT,MW200,data__->MW200,retain)
  __INIT_EXTERNAL(UINT,MW201,data__->MW201,retain)
  __INIT_EXTERNAL(UINT,MW202,data__->MW202,retain)
  __INIT_EXTERNAL(UINT,MW203,data__->MW203,retain)
  __INIT_EXTERNAL(UINT,MW204,data__->MW204,retain)
  __INIT_EXTERNAL(UINT,MW205,data__->MW205,retain)
  __INIT_EXTERNAL(UINT,MW206,data__->MW206,retain)
  __INIT_EXTERNAL(UINT,MW207,data__->MW207,retain)
  __INIT_EXTERNAL(UINT,MW208,data__->MW208,retain)
  __INIT_EXTERNAL(UINT,MW209,data__->MW209,retain)
  __INIT_EXTERNAL(UINT,MW210,data__->MW210,retain)
  __INIT_EXTERNAL(UINT,MW211,data__->MW211,retain)
  __INIT_EXTERNAL(UINT,MW212,data__->MW212,retain)
  __INIT_EXTERNAL(UINT,MW213,data__->MW213,retain)
  __INIT_EXTERNAL(UINT,MW214,data__->MW214,retain)
  __INIT_EXTERNAL(UINT,MW215,data__->MW215,retain)
  __INIT_EXTERNAL(UINT,MW216,data__->MW216,retain)
  __INIT_EXTERNAL(UINT,MW217,data__->MW217,retain)
  __INIT_EXTERNAL(UINT,MW218,data__->MW218,retain)
  __INIT_EXTERNAL(UINT,MW219,data__->MW219,retain)
  __INIT_EXTERNAL(UINT,MW220,data__->MW220,retain)
  __INIT_EXTERNAL(UINT,MW221,data__->MW221,retain)
  __INIT_EXTERNAL(UINT,MW222,data__->MW222,retain)
  __INIT_EXTERNAL(UINT,MW223,data__->MW223,retain)
  __INIT_EXTERNAL(UINT,MW224,data__->MW224,retain)
  __INIT_EXTERNAL(UINT,MW225,data__->MW225,retain)
  __INIT_EXTERNAL(UINT,MW226,data__->MW226,retain)
  __INIT_EXTERNAL(UINT,MW227,data__->MW227,retain)
  __INIT_EXTERNAL(UINT,MW228,data__->MW228,retain)
  __INIT_EXTERNAL(UINT,MW229,data__->MW229,retain)
  __INIT_EXTERNAL(UINT,MW230,data__->MW230,retain)
  __INIT_EXTERNAL(UINT,MW231,data__->MW231,retain)
  __INIT_EXTERNAL(UINT,MW232,data__->MW232,retain)
  __INIT_EXTERNAL(UINT,MW233,data__->MW233,retain)
  __INIT_EXTERNAL(UINT,MW234,data__->MW234,retain)
  __INIT_EXTERNAL(UINT,MW235,data__->MW235,retain)
  __INIT_EXTERNAL(UINT,MW236,data__->MW236,retain)
  __INIT_EXTERNAL(UINT,MW237,data__->MW237,retain)
  __INIT_EXTERNAL(UINT,MW238,data__->MW238,retain)
  __INIT_EXTERNAL(UINT,MW239,data__->MW239,retain)
  __INIT_EXTERNAL(UINT,MW240,data__->MW240,retain)
  __INIT_EXTERNAL(UINT,MW241,data__->MW241,retain)
  __INIT_EXTERNAL(UINT,MW242,data__->MW242,retain)
  __INIT_EXTERNAL(UINT,MW243,data__->MW243,retain)
  __INIT_EXTERNAL(UINT,MW244,data__->MW244,retain)
  __INIT_EXTERNAL(UINT,MW245,data__->MW245,retain)
  __INIT_EXTERNAL(UINT,MW246,data__->MW246,retain)
  __INIT_EXTERNAL(UINT,MW247,data__->MW247,retain)
  __INIT_EXTERNAL(UINT,MW248,data__->MW248,retain)
  __INIT_EXTERNAL(UINT,MW249,data__->MW249,retain)
  __INIT_EXTERNAL(UINT,MW250,data__->MW250,retain)
  __INIT_EXTERNAL(UINT,MW251,data__->MW251,retain)
  __INIT_EXTERNAL(UINT,MW252,data__->MW252,retain)
  __INIT_EXTERNAL(UINT,MW253,data__->MW253,retain)
  __INIT_EXTERNAL(UINT,MW254,data__->MW254,retain)
  __INIT_EXTERNAL(UINT,MW255,data__->MW255,retain)
  __INIT_EXTERNAL(UINT,MW256,data__->MW256,retain)
  __INIT_EXTERNAL(UINT,MW257,data__->MW257,retain)
  __INIT_EXTERNAL(UINT,MW258,data__->MW258,retain)
  __INIT_EXTERNAL(UINT,MW259,data__->MW259,retain)
  __INIT_EXTERNAL(UINT,MW260,data__->MW260,retain)
  __INIT_EXTERNAL(UINT,MW261,data__->MW261,retain)
  __INIT_EXTERNAL(UINT,MW262,data__->MW262,retain)
  __INIT_EXTERNAL(UINT,MW263,data__->MW263,retain)
  __INIT_EXTERNAL(UINT,MW264,data__->MW264,retain)
  __INIT_EXTERNAL(UINT,MW265,data__->MW265,retain)
  __INIT_EXTERNAL(UINT,MW266,data__->MW266,retain)
  __INIT_EXTERNAL(UINT,MW267,data__->MW267,retain)
  __INIT_EXTERNAL(UINT,MW268,data__->MW268,retain)
  __INIT_EXTERNAL(UINT,MW269,data__->MW269,retain)
  __INIT_EXTERNAL(UINT,MW270,data__->MW270,retain)
  __INIT_EXTERNAL(UINT,MW271,data__->MW271,retain)
  __INIT_EXTERNAL(UINT,MW272,data__->MW272,retain)
  __INIT_EXTERNAL(UINT,MW273,data__->MW273,retain)
  __INIT_EXTERNAL(UINT,MW274,data__->MW274,retain)
  __INIT_EXTERNAL(UINT,MW275,data__->MW275,retain)
  __INIT_EXTERNAL(UINT,MW276,data__->MW276,retain)
  __INIT_EXTERNAL(UINT,MW277,data__->MW277,retain)
  __INIT_EXTERNAL(UINT,MW278,data__->MW278,retain)
  __INIT_EXTERNAL(UINT,MW279,data__->MW279,retain)
  __INIT_EXTERNAL(UINT,MW280,data__->MW280,retain)
  __INIT_EXTERNAL(UINT,MW281,data__->MW281,retain)
  __INIT_EXTERNAL(UINT,MW282,data__->MW282,retain)
  __INIT_EXTERNAL(UINT,MW283,data__->MW283,retain)
  __INIT_EXTERNAL(UINT,MW284,data__->MW284,retain)
  __INIT_EXTERNAL(UINT,MW285,data__->MW285,retain)
  __INIT_EXTERNAL(UINT,MW286,data__->MW286,retain)
  __INIT_EXTERNAL(UINT,MW287,data__->MW287,retain)
  __INIT_EXTERNAL(UINT,MW288,data__->MW288,retain)
  __INIT_EXTERNAL(UINT,MW289,data__->MW289,retain)
  __INIT_EXTERNAL(UINT,MW290,data__->MW290,retain)
  __INIT_EXTERNAL(UINT,MW291,data__->MW291,retain)
  __INIT_EXTERNAL(UINT,MW292,data__->MW292,retain)
  __INIT_EXTERNAL(UINT,MW293,data__->MW293,retain)
  __INIT_EXTERNAL(UINT,MW294,data__->MW294,retain)
  __INIT_EXTERNAL(UINT,MW295,data__->MW295,retain)
  __INIT_EXTERNAL(UINT,MW296,data__->MW296,retain)
  __INIT_EXTERNAL(UINT,MW297,data__->MW297,retain)
  __INIT_EXTERNAL(UINT,MW298,data__->MW298,retain)
  __INIT_EXTERNAL(UINT,MW299,data__->MW299,retain)
  __INIT_EXTERNAL(UINT,MW300,data__->MW300,retain)
  __INIT_EXTERNAL(UINT,MW301,data__->MW301,retain)
  __INIT_EXTERNAL(UINT,MW302,data__->MW302,retain)
  __INIT_EXTERNAL(UINT,MW303,data__->MW303,retain)
  __INIT_EXTERNAL(UINT,MW304,data__->MW304,retain)
  __INIT_EXTERNAL(UINT,MW305,data__->MW305,retain)
  __INIT_EXTERNAL(UINT,MW306,data__->MW306,retain)
  __INIT_EXTERNAL(UINT,MW307,data__->MW307,retain)
  __INIT_EXTERNAL(UINT,MW308,data__->MW308,retain)
  __INIT_EXTERNAL(UINT,MW309,data__->MW309,retain)
  __INIT_EXTERNAL(UINT,MW310,data__->MW310,retain)
  __INIT_EXTERNAL(UINT,MW311,data__->MW311,retain)
  __INIT_EXTERNAL(UINT,MW312,data__->MW312,retain)
  __INIT_EXTERNAL(UINT,MW313,data__->MW313,retain)
  __INIT_EXTERNAL(UINT,MW314,data__->MW314,retain)
  __INIT_EXTERNAL(UINT,MW315,data__->MW315,retain)
  __INIT_EXTERNAL(UINT,MW316,data__->MW316,retain)
  __INIT_EXTERNAL(UINT,MW317,data__->MW317,retain)
  __INIT_EXTERNAL(UINT,MW318,data__->MW318,retain)
  __INIT_EXTERNAL(UINT,MW319,data__->MW319,retain)
  __INIT_EXTERNAL(UINT,MW320,data__->MW320,retain)
  __INIT_EXTERNAL(UINT,MW321,data__->MW321,retain)
  __INIT_EXTERNAL(UINT,MW322,data__->MW322,retain)
  __INIT_EXTERNAL(UINT,MW323,data__->MW323,retain)
  __INIT_EXTERNAL(UINT,MW324,data__->MW324,retain)
  __INIT_EXTERNAL(UINT,MW325,data__->MW325,retain)
  __INIT_EXTERNAL(UINT,MW326,data__->MW326,retain)
  __INIT_EXTERNAL(UINT,MW327,data__->MW327,retain)
  __INIT_EXTERNAL(UINT,MW328,data__->MW328,retain)
  __INIT_EXTERNAL(UINT,MW329,data__->MW329,retain)
  __INIT_EXTERNAL(UINT,MW330,data__->MW330,retain)
  __INIT_EXTERNAL(UINT,MW331,data__->MW331,retain)
  __INIT_EXTERNAL(UINT,MW332,data__->MW332,retain)
  __INIT_EXTERNAL(UINT,MW333,data__->MW333,retain)
  __INIT_EXTERNAL(UINT,MW334,data__->MW334,retain)
  __INIT_EXTERNAL(UINT,MW335,data__->MW335,retain)
  __INIT_EXTERNAL(UINT,MW336,data__->MW336,retain)
  __INIT_EXTERNAL(UINT,MW337,data__->MW337,retain)
  __INIT_EXTERNAL(UINT,MW338,data__->MW338,retain)
  __INIT_EXTERNAL(UINT,MW339,data__->MW339,retain)
  __INIT_EXTERNAL(UINT,MW340,data__->MW340,retain)
  __INIT_EXTERNAL(UINT,MW341,data__->MW341,retain)
  __INIT_EXTERNAL(UINT,MW342,data__->MW342,retain)
  __INIT_EXTERNAL(UINT,MW343,data__->MW343,retain)
  __INIT_EXTERNAL(UINT,MW344,data__->MW344,retain)
  __INIT_EXTERNAL(UINT,MW345,data__->MW345,retain)
  __INIT_EXTERNAL(UINT,MW346,data__->MW346,retain)
  __INIT_EXTERNAL(UINT,MW347,data__->MW347,retain)
  __INIT_EXTERNAL(UINT,MW348,data__->MW348,retain)
  __INIT_EXTERNAL(UINT,MW349,data__->MW349,retain)
  __INIT_EXTERNAL(UINT,MW350,data__->MW350,retain)
  __INIT_EXTERNAL(UINT,MW351,data__->MW351,retain)
  __INIT_EXTERNAL(UINT,MW352,data__->MW352,retain)
  __INIT_EXTERNAL(UINT,MW353,data__->MW353,retain)
  __INIT_EXTERNAL(UINT,MW354,data__->MW354,retain)
  __INIT_EXTERNAL(UINT,MW355,data__->MW355,retain)
  __INIT_EXTERNAL(UINT,MW356,data__->MW356,retain)
  __INIT_EXTERNAL(UINT,MW357,data__->MW357,retain)
  __INIT_EXTERNAL(UINT,MW358,data__->MW358,retain)
  __INIT_EXTERNAL(UINT,MW359,data__->MW359,retain)
  __INIT_EXTERNAL(UINT,MW360,data__->MW360,retain)
  __INIT_EXTERNAL(UINT,MW361,data__->MW361,retain)
  __INIT_EXTERNAL(UINT,MW362,data__->MW362,retain)
  __INIT_EXTERNAL(UINT,MW363,data__->MW363,retain)
  __INIT_EXTERNAL(UINT,MW364,data__->MW364,retain)
  __INIT_EXTERNAL(UINT,MW365,data__->MW365,retain)
  __INIT_EXTERNAL(UINT,MW366,data__->MW366,retain)
  __INIT_EXTERNAL(UINT,MW367,data__->MW367,retain)
  __INIT_EXTERNAL(UINT,MW368,data__->MW368,retain)
  __INIT_EXTERNAL(UINT,MW369,data__->MW369,retain)
  __INIT_EXTERNAL(UINT,MW370,data__->MW370,retain)
  __INIT_EXTERNAL(UINT,MW371,data__->MW371,retain)
  __INIT_EXTERNAL(UINT,MW372,data__->MW372,retain)
  __INIT_EXTERNAL(UINT,MW373,data__->MW373,retain)
  __INIT_EXTERNAL(UINT,MW374,data__->MW374,retain)
  __INIT_EXTERNAL(UINT,MW375,data__->MW375,retain)
  __INIT_EXTERNAL(UINT,MW376,data__->MW376,retain)
  __INIT_EXTERNAL(UINT,MW377,data__->MW377,retain)
  __INIT_EXTERNAL(UINT,MW378,data__->MW378,retain)
  __INIT_EXTERNAL(UINT,MW379,data__->MW379,retain)
  __INIT_EXTERNAL(UINT,MW380,data__->MW380,retain)
  __INIT_EXTERNAL(UINT,MW381,data__->MW381,retain)
  __INIT_EXTERNAL(UINT,MW382,data__->MW382,retain)
  __INIT_EXTERNAL(UINT,MW383,data__->MW383,retain)
  __INIT_EXTERNAL(UINT,MW384,data__->MW384,retain)
  __INIT_EXTERNAL(UINT,MW385,data__->MW385,retain)
  __INIT_EXTERNAL(UINT,MW386,data__->MW386,retain)
  __INIT_EXTERNAL(UINT,MW387,data__->MW387,retain)
  __INIT_EXTERNAL(UINT,MW388,data__->MW388,retain)
  __INIT_EXTERNAL(UINT,MW389,data__->MW389,retain)
  __INIT_EXTERNAL(UINT,MW390,data__->MW390,retain)
  __INIT_EXTERNAL(UINT,MW391,data__->MW391,retain)
  __INIT_EXTERNAL(UINT,MW392,data__->MW392,retain)
  __INIT_EXTERNAL(UINT,MW393,data__->MW393,retain)
  __INIT_EXTERNAL(UINT,MW394,data__->MW394,retain)
  __INIT_EXTERNAL(UINT,MW395,data__->MW395,retain)
  __INIT_EXTERNAL(UINT,MW396,data__->MW396,retain)
  __INIT_EXTERNAL(UINT,MW397,data__->MW397,retain)
  __INIT_EXTERNAL(UINT,MW398,data__->MW398,retain)
  __INIT_EXTERNAL(UINT,MW399,data__->MW399,retain)
  __INIT_EXTERNAL(UINT,MW400,data__->MW400,retain)
  __INIT_EXTERNAL(UINT,MW401,data__->MW401,retain)
  __INIT_EXTERNAL(UINT,MW402,data__->MW402,retain)
  __INIT_EXTERNAL(UINT,MW403,data__->MW403,retain)
  __INIT_EXTERNAL(UINT,MW404,data__->MW404,retain)
  __INIT_EXTERNAL(UINT,MW405,data__->MW405,retain)
  __INIT_EXTERNAL(UINT,MW406,data__->MW406,retain)
  __INIT_EXTERNAL(UINT,MW407,data__->MW407,retain)
  __INIT_EXTERNAL(UINT,MW408,data__->MW408,retain)
  __INIT_EXTERNAL(UINT,MW409,data__->MW409,retain)
  __INIT_EXTERNAL(UINT,MW410,data__->MW410,retain)
  __INIT_EXTERNAL(UINT,MW411,data__->MW411,retain)
  __INIT_EXTERNAL(UINT,MW412,data__->MW412,retain)
  __INIT_EXTERNAL(UINT,MW413,data__->MW413,retain)
  __INIT_EXTERNAL(UINT,MW414,data__->MW414,retain)
  __INIT_EXTERNAL(UINT,MW415,data__->MW415,retain)
  __INIT_EXTERNAL(UINT,MW416,data__->MW416,retain)
  __INIT_EXTERNAL(UINT,MW417,data__->MW417,retain)
  __INIT_EXTERNAL(UINT,MW418,data__->MW418,retain)
  __INIT_EXTERNAL(UINT,MW419,data__->MW419,retain)
  __INIT_EXTERNAL(UINT,MW420,data__->MW420,retain)
  __INIT_EXTERNAL(UINT,MW421,data__->MW421,retain)
  __INIT_EXTERNAL(UINT,MW422,data__->MW422,retain)
  __INIT_EXTERNAL(UINT,MW423,data__->MW423,retain)
  __INIT_EXTERNAL(UINT,MW424,data__->MW424,retain)
  __INIT_EXTERNAL(UINT,MW425,data__->MW425,retain)
  __INIT_EXTERNAL(UINT,MW426,data__->MW426,retain)
  __INIT_EXTERNAL(UINT,MW427,data__->MW427,retain)
  __INIT_EXTERNAL(UINT,MW428,data__->MW428,retain)
  __INIT_EXTERNAL(UINT,MW429,data__->MW429,retain)
  __INIT_EXTERNAL(UINT,MW430,data__->MW430,retain)
  __INIT_EXTERNAL(UINT,MW431,data__->MW431,retain)
  __INIT_EXTERNAL(UINT,MW432,data__->MW432,retain)
  __INIT_EXTERNAL(UINT,MW433,data__->MW433,retain)
  __INIT_EXTERNAL(UINT,MW434,data__->MW434,retain)
  __INIT_EXTERNAL(UINT,MW435,data__->MW435,retain)
  __INIT_EXTERNAL(UINT,MW436,data__->MW436,retain)
  __INIT_EXTERNAL(UINT,MW437,data__->MW437,retain)
  __INIT_EXTERNAL(UINT,MW438,data__->MW438,retain)
  __INIT_EXTERNAL(UINT,MW439,data__->MW439,retain)
  __INIT_EXTERNAL(UINT,MW440,data__->MW440,retain)
  __INIT_EXTERNAL(UINT,MW441,data__->MW441,retain)
  __INIT_EXTERNAL(UINT,MW442,data__->MW442,retain)
  __INIT_EXTERNAL(UINT,MW443,data__->MW443,retain)
  __INIT_EXTERNAL(UINT,MW444,data__->MW444,retain)
  __INIT_EXTERNAL(UINT,MW445,data__->MW445,retain)
  __INIT_EXTERNAL(UINT,MW446,data__->MW446,retain)
  __INIT_EXTERNAL(UINT,MW447,data__->MW447,retain)
  __INIT_EXTERNAL(UINT,MW448,data__->MW448,retain)
  __INIT_EXTERNAL(UINT,MW449,data__->MW449,retain)
  __INIT_EXTERNAL(UINT,MW450,data__->MW450,retain)
  __INIT_EXTERNAL(UINT,MW451,data__->MW451,retain)
  __INIT_EXTERNAL(UINT,MW452,data__->MW452,retain)
  __INIT_EXTERNAL(UINT,MW453,data__->MW453,retain)
  __INIT_EXTERNAL(UINT,MW454,data__->MW454,retain)
  __INIT_EXTERNAL(UINT,MW455,data__->MW455,retain)
  __INIT_EXTERNAL(UINT,MW456,data__->MW456,retain)
  __INIT_EXTERNAL(UINT,MW457,data__->MW457,retain)
  __INIT_EXTERNAL(UINT,MW458,data__->MW458,retain)
  __INIT_EXTERNAL(UINT,MW459,data__->MW459,retain)
  __INIT_EXTERNAL(UINT,MW460,data__->MW460,retain)
  __INIT_EXTERNAL(UINT,MW461,data__->MW461,retain)
  __INIT_EXTERNAL(UINT,MW462,data__->MW462,retain)
  __INIT_EXTERNAL(UINT,MW463,data__->MW463,retain)
  __INIT_EXTERNAL(UINT,MW464,data__->MW464,retain)
  __INIT_EXTERNAL(UINT,MW465,data__->MW465,retain)
  __INIT_EXTERNAL(UINT,MW466,data__->MW466,retain)
  __INIT_EXTERNAL(UINT,MW467,data__->MW467,retain)
  __INIT_EXTERNAL(UINT,MW468,data__->MW468,retain)
  __INIT_EXTERNAL(UINT,MW469,data__->MW469,retain)
  __INIT_EXTERNAL(UINT,MW470,data__->MW470,retain)
  __INIT_EXTERNAL(UINT,MW471,data__->MW471,retain)
  __INIT_EXTERNAL(UINT,MW472,data__->MW472,retain)
  __INIT_EXTERNAL(UINT,MW473,data__->MW473,retain)
  __INIT_EXTERNAL(UINT,MW474,data__->MW474,retain)
  __INIT_EXTERNAL(UINT,MW475,data__->MW475,retain)
  __INIT_EXTERNAL(UINT,MW476,data__->MW476,retain)
  __INIT_EXTERNAL(UINT,MW477,data__->MW477,retain)
  __INIT_EXTERNAL(UINT,MW478,data__->MW478,retain)
  __INIT_EXTERNAL(UINT,MW479,data__->MW479,retain)
  __INIT_EXTERNAL(UINT,MW480,data__->MW480,retain)
  __INIT_EXTERNAL(UINT,MW481,data__->MW481,retain)
  __INIT_EXTERNAL(UINT,MW482,data__->MW482,retain)
  __INIT_EXTERNAL(UINT,MW483,data__->MW483,retain)
  __INIT_EXTERNAL(UINT,MW484,data__->MW484,retain)
  __INIT_EXTERNAL(UINT,MW485,data__->MW485,retain)
  __INIT_EXTERNAL(UINT,MW486,data__->MW486,retain)
  __INIT_EXTERNAL(UINT,MW487,data__->MW487,retain)
  __INIT_EXTERNAL(UINT,MW488,data__->MW488,retain)
  __INIT_EXTERNAL(UINT,MW489,data__->MW489,retain)
  __INIT_EXTERNAL(UINT,MW490,data__->MW490,retain)
  __INIT_EXTERNAL(UINT,MW491,data__->MW491,retain)
  __INIT_EXTERNAL(UINT,MW492,data__->MW492,retain)
  __INIT_EXTERNAL(UINT,MW493,data__->MW493,retain)
  __INIT_EXTERNAL(UINT,MW494,data__->MW494,retain)
  __INIT_EXTERNAL(UINT,MW495,data__->MW495,retain)
  __INIT_EXTERNAL(UINT,MW496,data__->MW496,retain)
  __INIT_EXTERNAL(UINT,MW497,data__->MW497,retain)
  __INIT_EXTERNAL(UINT,MW498,data__->MW498,retain)
  __INIT_EXTERNAL(UINT,MW499,data__->MW499,retain)
  __INIT_EXTERNAL(UINT,MW500,data__->MW500,retain)
  __INIT_EXTERNAL(UINT,MW501,data__->MW501,retain)
  __INIT_EXTERNAL(UINT,MW502,data__->MW502,retain)
  __INIT_EXTERNAL(UINT,MW503,data__->MW503,retain)
  __INIT_EXTERNAL(UINT,MW504,data__->MW504,retain)
  __INIT_EXTERNAL(UINT,MW505,data__->MW505,retain)
  __INIT_EXTERNAL(UINT,MW506,data__->MW506,retain)
  __INIT_EXTERNAL(UINT,MW507,data__->MW507,retain)
  __INIT_EXTERNAL(UINT,MW508,data__->MW508,retain)
  __INIT_EXTERNAL(UINT,MW509,data__->MW509,retain)
  __INIT_EXTERNAL(UINT,MW510,data__->MW510,retain)
  __INIT_EXTERNAL(UINT,MW511,data__->MW511,retain)
  __INIT_EXTERNAL(UINT,MW512,data__->MW512,retain)
  __INIT_EXTERNAL(UINT,MW513,data__->MW513,retain)
  __INIT_EXTERNAL(UINT,MW514,data__->MW514,retain)
  __INIT_EXTERNAL(UINT,MW515,data__->MW515,retain)
  __INIT_EXTERNAL(UINT,MW516,data__->MW516,retain)
  __INIT_EXTERNAL(UINT,MW517,data__->MW517,retain)
  __INIT_EXTERNAL(UINT,MW518,data__->MW518,retain)
  __INIT_EXTERNAL(UINT,MW519,data__->MW519,retain)
  __INIT_EXTERNAL(UINT,MW520,data__->MW520,retain)
  __INIT_EXTERNAL(UINT,MW521,data__->MW521,retain)
  __INIT_EXTERNAL(UINT,MW522,data__->MW522,retain)
  __INIT_EXTERNAL(UINT,MW523,data__->MW523,retain)
  __INIT_EXTERNAL(UINT,MW524,data__->MW524,retain)
  __INIT_EXTERNAL(UINT,MW525,data__->MW525,retain)
  __INIT_EXTERNAL(UINT,MW526,data__->MW526,retain)
  __INIT_EXTERNAL(UINT,MW527,data__->MW527,retain)
  __INIT_EXTERNAL(UINT,MW528,data__->MW528,retain)
  __INIT_EXTERNAL(UINT,MW529,data__->MW529,retain)
  __INIT_EXTERNAL(UINT,MW530,data__->MW530,retain)
  __INIT_EXTERNAL(UINT,MW531,data__->MW531,retain)
  __INIT_EXTERNAL(UINT,MW532,data__->MW532,retain)
  __INIT_EXTERNAL(UINT,MW533,data__->MW533,retain)
  __INIT_EXTERNAL(UINT,MW534,data__->MW534,retain)
  __INIT_EXTERNAL(UINT,MW535,data__->MW535,retain)
  __INIT_EXTERNAL(UINT,MW536,data__->MW536,retain)
  __INIT_EXTERNAL(UINT,MW537,data__->MW537,retain)
  __INIT_EXTERNAL(UINT,MW538,data__->MW538,retain)
  __INIT_EXTERNAL(UINT,MW539,data__->MW539,retain)
  __INIT_EXTERNAL(UINT,MW540,data__->MW540,retain)
  __INIT_EXTERNAL(UINT,MW541,data__->MW541,retain)
  __INIT_EXTERNAL(UINT,MW542,data__->MW542,retain)
  __INIT_EXTERNAL(UINT,MW543,data__->MW543,retain)
  __INIT_EXTERNAL(UINT,MW544,data__->MW544,retain)
  __INIT_EXTERNAL(UINT,MW545,data__->MW545,retain)
  __INIT_EXTERNAL(UINT,MW546,data__->MW546,retain)
  __INIT_EXTERNAL(UINT,MW547,data__->MW547,retain)
  __INIT_EXTERNAL(UINT,MW548,data__->MW548,retain)
  __INIT_EXTERNAL(UINT,MW549,data__->MW549,retain)
  __INIT_EXTERNAL(UINT,MW550,data__->MW550,retain)
  __INIT_EXTERNAL(UINT,MW551,data__->MW551,retain)
  __INIT_EXTERNAL(UINT,MW552,data__->MW552,retain)
  __INIT_EXTERNAL(UINT,MW553,data__->MW553,retain)
  __INIT_EXTERNAL(UINT,MW554,data__->MW554,retain)
  __INIT_EXTERNAL(UINT,MW555,data__->MW555,retain)
  __INIT_EXTERNAL(UINT,MW556,data__->MW556,retain)
  __INIT_EXTERNAL(UINT,MW557,data__->MW557,retain)
  __INIT_EXTERNAL(UINT,MW558,data__->MW558,retain)
  __INIT_EXTERNAL(UINT,MW559,data__->MW559,retain)
  __INIT_EXTERNAL(UINT,MW560,data__->MW560,retain)
  __INIT_EXTERNAL(UINT,MW561,data__->MW561,retain)
  __INIT_EXTERNAL(UINT,MW562,data__->MW562,retain)
  __INIT_EXTERNAL(UINT,MW563,data__->MW563,retain)
  __INIT_EXTERNAL(UINT,MW564,data__->MW564,retain)
  __INIT_EXTERNAL(UINT,MW565,data__->MW565,retain)
  __INIT_EXTERNAL(UINT,MW566,data__->MW566,retain)
  __INIT_EXTERNAL(UINT,MW567,data__->MW567,retain)
  __INIT_EXTERNAL(UINT,MW568,data__->MW568,retain)
  __INIT_EXTERNAL(UINT,MW569,data__->MW569,retain)
  __INIT_EXTERNAL(UINT,MW570,data__->MW570,retain)
  __INIT_EXTERNAL(UINT,MW571,data__->MW571,retain)
  __INIT_EXTERNAL(UINT,MW572,data__->MW572,retain)
  __INIT_EXTERNAL(UINT,MW573,data__->MW573,retain)
  __INIT_EXTERNAL(UINT,MW574,data__->MW574,retain)
  __INIT_EXTERNAL(UINT,MW575,data__->MW575,retain)
  __INIT_EXTERNAL(UINT,MW576,data__->MW576,retain)
  __INIT_EXTERNAL(UINT,MW577,data__->MW577,retain)
  __INIT_EXTERNAL(UINT,MW578,data__->MW578,retain)
  __INIT_EXTERNAL(UINT,MW579,data__->MW579,retain)
  __INIT_EXTERNAL(UINT,MW580,data__->MW580,retain)
  __INIT_EXTERNAL(UINT,MW581,data__->MW581,retain)
  __INIT_EXTERNAL(UINT,MW582,data__->MW582,retain)
  __INIT_EXTERNAL(UINT,MW583,data__->MW583,retain)
  __INIT_EXTERNAL(UINT,MW584,data__->MW584,retain)
  __INIT_EXTERNAL(UINT,MW585,data__->MW585,retain)
  __INIT_EXTERNAL(UINT,MW586,data__->MW586,retain)
  __INIT_EXTERNAL(UINT,MW587,data__->MW587,retain)
  __INIT_EXTERNAL(UINT,MW588,data__->MW588,retain)
  __INIT_EXTERNAL(UINT,MW589,data__->MW589,retain)
  __INIT_EXTERNAL(UINT,MW590,data__->MW590,retain)
  __INIT_EXTERNAL(UINT,MW591,data__->MW591,retain)
  __INIT_EXTERNAL(UINT,MW592,data__->MW592,retain)
  __INIT_EXTERNAL(UINT,MW593,data__->MW593,retain)
  __INIT_EXTERNAL(UINT,MW594,data__->MW594,retain)
  __INIT_EXTERNAL(UINT,MW595,data__->MW595,retain)
  __INIT_EXTERNAL(UINT,MW596,data__->MW596,retain)
  __INIT_EXTERNAL(UINT,MW597,data__->MW597,retain)
  __INIT_EXTERNAL(UINT,MW598,data__->MW598,retain)
  __INIT_EXTERNAL(UINT,MW599,data__->MW599,retain)
  __INIT_EXTERNAL(UINT,MW600,data__->MW600,retain)
  __INIT_EXTERNAL(UINT,MW601,data__->MW601,retain)
  __INIT_EXTERNAL(UINT,MW602,data__->MW602,retain)
  __INIT_EXTERNAL(UINT,MW603,data__->MW603,retain)
  __INIT_EXTERNAL(UINT,MW604,data__->MW604,retain)
  __INIT_EXTERNAL(UINT,MW605,data__->MW605,retain)
  __INIT_EXTERNAL(UINT,MW606,data__->MW606,retain)
  __INIT_EXTERNAL(UINT,MW607,data__->MW607,retain)
  __INIT_EXTERNAL(UINT,MW608,data__->MW608,retain)
  __INIT_EXTERNAL(UINT,MW609,data__->MW609,retain)
  __INIT_EXTERNAL(UINT,MW610,data__->MW610,retain)
  __INIT_EXTERNAL(UINT,MW611,data__->MW611,retain)
  __INIT_EXTERNAL(UINT,MW612,data__->MW612,retain)
  __INIT_EXTERNAL(UINT,MW613,data__->MW613,retain)
  __INIT_EXTERNAL(UINT,MW614,data__->MW614,retain)
  __INIT_EXTERNAL(UINT,MW615,data__->MW615,retain)
  __INIT_EXTERNAL(UINT,MW616,data__->MW616,retain)
  __INIT_EXTERNAL(UINT,MW617,data__->MW617,retain)
  __INIT_EXTERNAL(UINT,MW618,data__->MW618,retain)
  __INIT_EXTERNAL(UINT,MW619,data__->MW619,retain)
  __INIT_EXTERNAL(UINT,MW620,data__->MW620,retain)
  __INIT_EXTERNAL(UINT,MW621,data__->MW621,retain)
  __INIT_EXTERNAL(UINT,MW622,data__->MW622,retain)
  __INIT_EXTERNAL(UINT,MW623,data__->MW623,retain)
  __INIT_EXTERNAL(UINT,MW624,data__->MW624,retain)
  __INIT_EXTERNAL(UINT,MW625,data__->MW625,retain)
  __INIT_EXTERNAL(UINT,MW626,data__->MW626,retain)
  __INIT_EXTERNAL(UINT,MW627,data__->MW627,retain)
  __INIT_EXTERNAL(UINT,MW628,data__->MW628,retain)
  __INIT_EXTERNAL(UINT,MW629,data__->MW629,retain)
  __INIT_EXTERNAL(UINT,MW630,data__->MW630,retain)
  __INIT_EXTERNAL(UINT,MW631,data__->MW631,retain)
  __INIT_EXTERNAL(UINT,MW632,data__->MW632,retain)
  __INIT_EXTERNAL(UINT,MW633,data__->MW633,retain)
  __INIT_EXTERNAL(UINT,MW634,data__->MW634,retain)
  __INIT_EXTERNAL(UINT,MW635,data__->MW635,retain)
  __INIT_EXTERNAL(UINT,MW636,data__->MW636,retain)
  __INIT_EXTERNAL(UINT,MW637,data__->MW637,retain)
  __INIT_EXTERNAL(UINT,MW638,data__->MW638,retain)
  __INIT_EXTERNAL(UINT,MW639,data__->MW639,retain)
  __INIT_EXTERNAL(UINT,MW640,data__->MW640,retain)
  __INIT_EXTERNAL(UINT,MW641,data__->MW641,retain)
  __INIT_EXTERNAL(UINT,MW642,data__->MW642,retain)
  __INIT_EXTERNAL(UINT,MW643,data__->MW643,retain)
  __INIT_EXTERNAL(UINT,MW644,data__->MW644,retain)
  __INIT_EXTERNAL(UINT,MW645,data__->MW645,retain)
  __INIT_EXTERNAL(UINT,MW646,data__->MW646,retain)
  __INIT_EXTERNAL(UINT,MW647,data__->MW647,retain)
  __INIT_EXTERNAL(UINT,MW648,data__->MW648,retain)
  __INIT_EXTERNAL(UINT,MW649,data__->MW649,retain)
  __INIT_EXTERNAL(UINT,MW650,data__->MW650,retain)
  __INIT_EXTERNAL(UINT,MW651,data__->MW651,retain)
  __INIT_EXTERNAL(UINT,MW652,data__->MW652,retain)
  __INIT_EXTERNAL(UINT,MW653,data__->MW653,retain)
  __INIT_EXTERNAL(UINT,MW654,data__->MW654,retain)
  __INIT_EXTERNAL(UINT,MW655,data__->MW655,retain)
  __INIT_EXTERNAL(UINT,MW656,data__->MW656,retain)
  __INIT_EXTERNAL(UINT,MW657,data__->MW657,retain)
  __INIT_EXTERNAL(UINT,MW658,data__->MW658,retain)
  __INIT_EXTERNAL(UINT,MW659,data__->MW659,retain)
  __INIT_EXTERNAL(UINT,MW660,data__->MW660,retain)
  __INIT_EXTERNAL(UINT,MW661,data__->MW661,retain)
  __INIT_EXTERNAL(UINT,MW662,data__->MW662,retain)
  __INIT_EXTERNAL(UINT,MW663,data__->MW663,retain)
  __INIT_EXTERNAL(UINT,MW664,data__->MW664,retain)
  __INIT_EXTERNAL(UINT,MW665,data__->MW665,retain)
  __INIT_EXTERNAL(UINT,MW666,data__->MW666,retain)
  __INIT_EXTERNAL(UINT,MW667,data__->MW667,retain)
  __INIT_EXTERNAL(UINT,MW668,data__->MW668,retain)
  __INIT_EXTERNAL(UINT,MW669,data__->MW669,retain)
  __INIT_EXTERNAL(UINT,MW670,data__->MW670,retain)
  __INIT_EXTERNAL(UINT,MW671,data__->MW671,retain)
  __INIT_EXTERNAL(UINT,MW672,data__->MW672,retain)
  __INIT_EXTERNAL(UINT,MW673,data__->MW673,retain)
  __INIT_EXTERNAL(UINT,MW674,data__->MW674,retain)
  __INIT_EXTERNAL(UINT,MW675,data__->MW675,retain)
  __INIT_EXTERNAL(UINT,MW676,data__->MW676,retain)
  __INIT_EXTERNAL(UINT,MW677,data__->MW677,retain)
  __INIT_EXTERNAL(UINT,MW678,data__->MW678,retain)
  __INIT_EXTERNAL(UINT,MW679,data__->MW679,retain)
  __INIT_EXTERNAL(UINT,MW680,data__->MW680,retain)
  __INIT_EXTERNAL(UINT,MW681,data__->MW681,retain)
  __INIT_EXTERNAL(UINT,MW682,data__->MW682,retain)
  __INIT_EXTERNAL(UINT,MW683,data__->MW683,retain)
  __INIT_EXTERNAL(UINT,MW684,data__->MW684,retain)
  __INIT_EXTERNAL(UINT,MW685,data__->MW685,retain)
  __INIT_EXTERNAL(UINT,MW686,data__->MW686,retain)
  __INIT_EXTERNAL(UINT,MW687,data__->MW687,retain)
  __INIT_EXTERNAL(UINT,MW688,data__->MW688,retain)
  __INIT_EXTERNAL(UINT,MW689,data__->MW689,retain)
  __INIT_EXTERNAL(UINT,MW690,data__->MW690,retain)
  __INIT_EXTERNAL(UINT,MW691,data__->MW691,retain)
  __INIT_EXTERNAL(UINT,MW692,data__->MW692,retain)
  __INIT_EXTERNAL(UINT,MW693,data__->MW693,retain)
  __INIT_EXTERNAL(UINT,MW694,data__->MW694,retain)
  __INIT_EXTERNAL(UINT,MW695,data__->MW695,retain)
  __INIT_EXTERNAL(UINT,MW696,data__->MW696,retain)
  __INIT_EXTERNAL(UINT,MW697,data__->MW697,retain)
  __INIT_EXTERNAL(UINT,MW698,data__->MW698,retain)
  __INIT_EXTERNAL(UINT,MW699,data__->MW699,retain)
  __INIT_EXTERNAL(UINT,MW700,data__->MW700,retain)
  __INIT_EXTERNAL(UINT,MW701,data__->MW701,retain)
  __INIT_EXTERNAL(UINT,MW702,data__->MW702,retain)
  __INIT_EXTERNAL(UINT,MW703,data__->MW703,retain)
  __INIT_EXTERNAL(UINT,MW704,data__->MW704,retain)
  __INIT_EXTERNAL(UINT,MW705,data__->MW705,retain)
  __INIT_EXTERNAL(UINT,MW706,data__->MW706,retain)
  __INIT_EXTERNAL(UINT,MW707,data__->MW707,retain)
  __INIT_EXTERNAL(UINT,MW708,data__->MW708,retain)
  __INIT_EXTERNAL(UINT,MW709,data__->MW709,retain)
  __INIT_EXTERNAL(UINT,MW710,data__->MW710,retain)
  __INIT_EXTERNAL(UINT,MW711,data__->MW711,retain)
  __INIT_EXTERNAL(UINT,MW712,data__->MW712,retain)
  __INIT_EXTERNAL(UINT,MW713,data__->MW713,retain)
  __INIT_EXTERNAL(UINT,MW714,data__->MW714,retain)
  __INIT_EXTERNAL(UINT,MW715,data__->MW715,retain)
  __INIT_EXTERNAL(UINT,MW716,data__->MW716,retain)
  __INIT_EXTERNAL(UINT,MW717,data__->MW717,retain)
  __INIT_EXTERNAL(UINT,MW718,data__->MW718,retain)
  __INIT_EXTERNAL(UINT,MW719,data__->MW719,retain)
  __INIT_EXTERNAL(UINT,MW720,data__->MW720,retain)
  __INIT_EXTERNAL(UINT,MW721,data__->MW721,retain)
  __INIT_EXTERNAL(UINT,MW722,data__->MW722,retain)
  __INIT_EXTERNAL(UINT,MW723,data__->MW723,retain)
  __INIT_EXTERNAL(UINT,MW724,data__->MW724,retain)
  __INIT_EXTERNAL(UINT,MW725,data__->MW725,retain)
  __INIT_EXTERNAL(UINT,MW726,data__->MW726,retain)
  __INIT_EXTERNAL(UINT,MW727,data__->MW727,retain)
  __INIT_EXTERNAL(UINT,MW728,data__->MW728,retain)
  __INIT_EXTERNAL(UINT,MW729,data__->MW729,retain)
  __INIT_EXTERNAL(UINT,MW730,data__->MW730,retain)
  __INIT_EXTERNAL(UINT,MW731,data__->MW731,retain)
  __INIT_EXTERNAL(UINT,MW732,data__->MW732,retain)
  __INIT_EXTERNAL(UINT,MW733,data__->MW733,retain)
  __INIT_EXTERNAL(UINT,MW734,data__->MW734,retain)
  __INIT_EXTERNAL(UINT,MW735,data__->MW735,retain)
  __INIT_EXTERNAL(UINT,MW736,data__->MW736,retain)
  __INIT_EXTERNAL(UINT,MW737,data__->MW737,retain)
  __INIT_EXTERNAL(UINT,MW738,data__->MW738,retain)
  __INIT_EXTERNAL(UINT,MW739,data__->MW739,retain)
  __INIT_EXTERNAL(UINT,MW740,data__->MW740,retain)
  __INIT_EXTERNAL(UINT,MW741,data__->MW741,retain)
  __INIT_EXTERNAL(UINT,MW742,data__->MW742,retain)
  __INIT_EXTERNAL(UINT,MW743,data__->MW743,retain)
  __INIT_EXTERNAL(UINT,MW744,data__->MW744,retain)
  __INIT_EXTERNAL(UINT,MW745,data__->MW745,retain)
  __INIT_EXTERNAL(UINT,MW746,data__->MW746,retain)
  __INIT_EXTERNAL(UINT,MW747,data__->MW747,retain)
  __INIT_EXTERNAL(UINT,MW748,data__->MW748,retain)
  __INIT_EXTERNAL(UINT,MW749,data__->MW749,retain)
  __INIT_EXTERNAL(UINT,MW750,data__->MW750,retain)
  __INIT_EXTERNAL(UINT,MW751,data__->MW751,retain)
  __INIT_EXTERNAL(UINT,MW752,data__->MW752,retain)
  __INIT_EXTERNAL(UINT,MW753,data__->MW753,retain)
  __INIT_EXTERNAL(UINT,MW754,data__->MW754,retain)
  __INIT_EXTERNAL(UINT,MW755,data__->MW755,retain)
  __INIT_EXTERNAL(UINT,MW756,data__->MW756,retain)
  __INIT_EXTERNAL(UINT,MW757,data__->MW757,retain)
  __INIT_EXTERNAL(UINT,MW758,data__->MW758,retain)
  __INIT_EXTERNAL(UINT,MW759,data__->MW759,retain)
  __INIT_EXTERNAL(UINT,MW760,data__->MW760,retain)
  __INIT_EXTERNAL(UINT,MW761,data__->MW761,retain)
  __INIT_EXTERNAL(UINT,MW762,data__->MW762,retain)
  __INIT_EXTERNAL(UINT,MW763,data__->MW763,retain)
  __INIT_EXTERNAL(UINT,MW764,data__->MW764,retain)
  __INIT_EXTERNAL(UINT,MW765,data__->MW765,retain)
  __INIT_EXTERNAL(UINT,MW766,data__->MW766,retain)
  __INIT_EXTERNAL(UINT,MW767,data__->MW767,retain)
  __INIT_EXTERNAL(UINT,MW768,data__->MW768,retain)
  __INIT_EXTERNAL(UINT,MW769,data__->MW769,retain)
  __INIT_EXTERNAL(UINT,MW770,data__->MW770,retain)
  __INIT_EXTERNAL(UINT,MW771,data__->MW771,retain)
  __INIT_EXTERNAL(UINT,MW772,data__->MW772,retain)
  __INIT_EXTERNAL(UINT,MW773,data__->MW773,retain)
  __INIT_EXTERNAL(UINT,MW774,data__->MW774,retain)
  __INIT_EXTERNAL(UINT,MW775,data__->MW775,retain)
  __INIT_EXTERNAL(UINT,MW776,data__->MW776,retain)
  __INIT_EXTERNAL(UINT,MW777,data__->MW777,retain)
  __INIT_EXTERNAL(UINT,MW778,data__->MW778,retain)
  __INIT_EXTERNAL(UINT,MW779,data__->MW779,retain)
  __INIT_EXTERNAL(UINT,MW780,data__->MW780,retain)
  __INIT_EXTERNAL(UINT,MW781,data__->MW781,retain)
  __INIT_EXTERNAL(UINT,MW782,data__->MW782,retain)
  __INIT_EXTERNAL(UINT,MW783,data__->MW783,retain)
  __INIT_EXTERNAL(UINT,MW784,data__->MW784,retain)
  __INIT_EXTERNAL(UINT,MW785,data__->MW785,retain)
  __INIT_EXTERNAL(UINT,MW786,data__->MW786,retain)
  __INIT_EXTERNAL(UINT,MW787,data__->MW787,retain)
  __INIT_EXTERNAL(UINT,MW788,data__->MW788,retain)
  __INIT_EXTERNAL(UINT,MW789,data__->MW789,retain)
  __INIT_EXTERNAL(UINT,MW790,data__->MW790,retain)
  __INIT_EXTERNAL(UINT,MW791,data__->MW791,retain)
  __INIT_EXTERNAL(UINT,MW792,data__->MW792,retain)
  __INIT_EXTERNAL(UINT,MW793,data__->MW793,retain)
  __INIT_EXTERNAL(UINT,MW794,data__->MW794,retain)
  __INIT_EXTERNAL(UINT,MW795,data__->MW795,retain)
  __INIT_EXTERNAL(UINT,MW796,data__->MW796,retain)
  __INIT_EXTERNAL(UINT,MW797,data__->MW797,retain)
  __INIT_EXTERNAL(UINT,MW798,data__->MW798,retain)
  __INIT_EXTERNAL(UINT,MW799,data__->MW799,retain)
  __INIT_EXTERNAL(UINT,MW800,data__->MW800,retain)
  __INIT_EXTERNAL(UINT,MW801,data__->MW801,retain)
  __INIT_EXTERNAL(UINT,MW802,data__->MW802,retain)
  __INIT_EXTERNAL(UINT,MW803,data__->MW803,retain)
  __INIT_EXTERNAL(UINT,MW804,data__->MW804,retain)
  __INIT_EXTERNAL(UINT,MW805,data__->MW805,retain)
  __INIT_EXTERNAL(UINT,MW806,data__->MW806,retain)
  __INIT_EXTERNAL(UINT,MW807,data__->MW807,retain)
  __INIT_EXTERNAL(UINT,MW808,data__->MW808,retain)
  __INIT_EXTERNAL(UINT,MW809,data__->MW809,retain)
  __INIT_EXTERNAL(UINT,MW810,data__->MW810,retain)
  __INIT_EXTERNAL(UINT,MW811,data__->MW811,retain)
  __INIT_EXTERNAL(UINT,MW812,data__->MW812,retain)
  __INIT_EXTERNAL(UINT,MW813,data__->MW813,retain)
  __INIT_EXTERNAL(UINT,MW814,data__->MW814,retain)
  __INIT_EXTERNAL(UINT,MW815,data__->MW815,retain)
  __INIT_EXTERNAL(UINT,MW816,data__->MW816,retain)
  __INIT_EXTERNAL(UINT,MW817,data__->MW817,retain)
  __INIT_EXTERNAL(UINT,MW818,data__->MW818,retain)
  __INIT_EXTERNAL(UINT,MW819,data__->MW819,retain)
  __INIT_EXTERNAL(UINT,MW820,data__->MW820,retain)
  __INIT_EXTERNAL(UINT,MW821,data__->MW821,retain)
  __INIT_EXTERNAL(UINT,MW822,data__->MW822,retain)
  __INIT_EXTERNAL(UINT,MW823,data__->MW823,retain)
  __INIT_EXTERNAL(UINT,MW824,data__->MW824,retain)
  __INIT_EXTERNAL(UINT,MW825,data__->MW825,retain)
  __INIT_EXTERNAL(UINT,MW826,data__->MW826,retain)
  __INIT_EXTERNAL(UINT,MW827,data__->MW827,retain)
  __INIT_EXTERNAL(UINT,MW828,data__->MW828,retain)
  __INIT_EXTERNAL(UINT,MW829,data__->MW829,retain)
  __INIT_EXTERNAL(UINT,MW830,data__->MW830,retain)
  __INIT_EXTERNAL(UINT,MW831,data__->MW831,retain)
  __INIT_EXTERNAL(UINT,MW832,data__->MW832,retain)
  __INIT_EXTERNAL(UINT,MW833,data__->MW833,retain)
  __INIT_EXTERNAL(UINT,MW834,data__->MW834,retain)
  __INIT_EXTERNAL(UINT,MW835,data__->MW835,retain)
  __INIT_EXTERNAL(UINT,MW836,data__->MW836,retain)
  __INIT_EXTERNAL(UINT,MW837,data__->MW837,retain)
  __INIT_EXTERNAL(UINT,MW838,data__->MW838,retain)
  __INIT_EXTERNAL(UINT,MW839,data__->MW839,retain)
  __INIT_EXTERNAL(UINT,MW840,data__->MW840,retain)
  __INIT_EXTERNAL(UINT,MW841,data__->MW841,retain)
  __INIT_EXTERNAL(UINT,MW842,data__->MW842,retain)
  __INIT_EXTERNAL(UINT,MW843,data__->MW843,retain)
  __INIT_EXTERNAL(UINT,MW844,data__->MW844,retain)
  __INIT_EXTERNAL(UINT,MW845,data__->MW845,retain)
  __INIT_EXTERNAL(UINT,MW846,data__->MW846,retain)
  __INIT_EXTERNAL(UINT,MW847,data__->MW847,retain)
  __INIT_EXTERNAL(UINT,MW848,data__->MW848,retain)
  __INIT_EXTERNAL(UINT,MW849,data__->MW849,retain)
  __INIT_EXTERNAL(UINT,MW850,data__->MW850,retain)
  __INIT_EXTERNAL(UINT,MW851,data__->MW851,retain)
  __INIT_EXTERNAL(UINT,MW852,data__->MW852,retain)
  __INIT_EXTERNAL(UINT,MW853,data__->MW853,retain)
  __INIT_EXTERNAL(UINT,MW854,data__->MW854,retain)
  __INIT_EXTERNAL(UINT,MW855,data__->MW855,retain)
  __INIT_EXTERNAL(UINT,MW856,data__->MW856,retain)
  __INIT_EXTERNAL(UINT,MW857,data__->MW857,retain)
  __INIT_EXTERNAL(UINT,MW858,data__->MW858,retain)
  __INIT_EXTERNAL(UINT,MW859,data__->MW859,retain)
  __INIT_EXTERNAL(UINT,MW860,data__->MW860,retain)
  __INIT_EXTERNAL(UINT,MW861,data__->MW861,retain)
  __INIT_EXTERNAL(UINT,MW862,data__->MW862,retain)
  __INIT_EXTERNAL(UINT,MW863,data__->MW863,retain)
  __INIT_EXTERNAL(UINT,MW864,data__->MW864,retain)
  __INIT_EXTERNAL(UINT,MW865,data__->MW865,retain)
  __INIT_EXTERNAL(UINT,MW866,data__->MW866,retain)
  __INIT_EXTERNAL(UINT,MW867,data__->MW867,retain)
  __INIT_EXTERNAL(UINT,MW868,data__->MW868,retain)
  __INIT_EXTERNAL(UINT,MW869,data__->MW869,retain)
  __INIT_EXTERNAL(UINT,MW870,data__->MW870,retain)
  __INIT_EXTERNAL(UINT,MW871,data__->MW871,retain)
  __INIT_EXTERNAL(UINT,MW872,data__->MW872,retain)
  __INIT_EXTERNAL(UINT,MW873,data__->MW873,retain)
  __INIT_EXTERNAL(UINT,MW874,data__->MW874,retain)
  __INIT_EXTERNAL(UINT,MW875,data__->MW875,retain)
  __INIT_EXTERNAL(UINT,MW876,data__->MW876,retain)
  __INIT_EXTERNAL(UINT,MW877,data__->MW877,retain)
  __INIT_EXTERNAL(UINT,MW878,data__->MW878,retain)
  __INIT_EXTERNAL(UINT,MW879,data__->MW879,retain)
  __INIT_EXTERNAL(UINT,MW880,data__->MW880,retain)
  __INIT_EXTERNAL(UINT,MW881,data__->MW881,retain)
  __INIT_EXTERNAL(UINT,MW882,data__->MW882,retain)
  __INIT_EXTERNAL(UINT,MW883,data__->MW883,retain)
  __INIT_EXTERNAL(UINT,MW884,data__->MW884,retain)
  __INIT_EXTERNAL(UINT,MW885,data__->MW885,retain)
  __INIT_EXTERNAL(UINT,MW886,data__->MW886,retain)
  __INIT_EXTERNAL(UINT,MW887,data__->MW887,retain)
  __INIT_EXTERNAL(UINT,MW888,data__->MW888,retain)
  __INIT_EXTERNAL(UINT,MW889,data__->MW889,retain)
  __INIT_EXTERNAL(UINT,MW890,data__->MW890,retain)
  __INIT_EXTERNAL(UINT,MW891,data__->MW891,retain)
  __INIT_EXTERNAL(UINT,MW892,data__->MW892,retain)
  __INIT_EXTERNAL(UINT,MW893,data__->MW893,retain)
  __INIT_EXTERNAL(UINT,MW894,data__->MW894,retain)
  __INIT_EXTERNAL(UINT,MW895,data__->MW895,retain)
  __INIT_EXTERNAL(UINT,MW896,data__->MW896,retain)
  __INIT_EXTERNAL(UINT,MW897,data__->MW897,retain)
  __INIT_EXTERNAL(UINT,MW898,data__->MW898,retain)
  __INIT_EXTERNAL(UINT,MW899,data__->MW899,retain)
  __INIT_EXTERNAL(UINT,MW900,data__->MW900,retain)
  __INIT_EXTERNAL(UINT,MW901,data__->MW901,retain)
  __INIT_EXTERNAL(UINT,MW902,data__->MW902,retain)
  __INIT_EXTERNAL(UINT,MW903,data__->MW903,retain)
  __INIT_EXTERNAL(UINT,MW904,data__->MW904,retain)
  __INIT_EXTERNAL(UINT,MW905,data__->MW905,retain)
  __INIT_EXTERNAL(UINT,MW906,data__->MW906,retain)
  __INIT_EXTERNAL(UINT,MW907,data__->MW907,retain)
  __INIT_EXTERNAL(UINT,MW908,data__->MW908,retain)
  __INIT_EXTERNAL(UINT,MW909,data__->MW909,retain)
  __INIT_EXTERNAL(UINT,MW910,data__->MW910,retain)
  __INIT_EXTERNAL(UINT,MW911,data__->MW911,retain)
  __INIT_EXTERNAL(UINT,MW912,data__->MW912,retain)
  __INIT_EXTERNAL(UINT,MW913,data__->MW913,retain)
  __INIT_EXTERNAL(UINT,MW914,data__->MW914,retain)
  __INIT_EXTERNAL(UINT,MW915,data__->MW915,retain)
  __INIT_EXTERNAL(UINT,MW916,data__->MW916,retain)
  __INIT_EXTERNAL(UINT,MW917,data__->MW917,retain)
  __INIT_EXTERNAL(UINT,MW918,data__->MW918,retain)
  __INIT_EXTERNAL(UINT,MW919,data__->MW919,retain)
  __INIT_EXTERNAL(UINT,MW920,data__->MW920,retain)
  __INIT_EXTERNAL(UINT,MW921,data__->MW921,retain)
  __INIT_EXTERNAL(UINT,MW922,data__->MW922,retain)
  __INIT_EXTERNAL(UINT,MW923,data__->MW923,retain)
  __INIT_EXTERNAL(UINT,MW924,data__->MW924,retain)
  __INIT_EXTERNAL(UINT,MW925,data__->MW925,retain)
  __INIT_EXTERNAL(UINT,MW926,data__->MW926,retain)
  __INIT_EXTERNAL(UINT,MW927,data__->MW927,retain)
  __INIT_EXTERNAL(UINT,MW928,data__->MW928,retain)
  __INIT_EXTERNAL(UINT,MW929,data__->MW929,retain)
  __INIT_EXTERNAL(UINT,MW930,data__->MW930,retain)
  __INIT_EXTERNAL(UINT,MW931,data__->MW931,retain)
  __INIT_EXTERNAL(UINT,MW932,data__->MW932,retain)
  __INIT_EXTERNAL(UINT,MW933,data__->MW933,retain)
  __INIT_EXTERNAL(UINT,MW934,data__->MW934,retain)
  __INIT_EXTERNAL(UINT,MW935,data__->MW935,retain)
  __INIT_EXTERNAL(UINT,MW936,data__->MW936,retain)
  __INIT_EXTERNAL(UINT,MW937,data__->MW937,retain)
  __INIT_EXTERNAL(UINT,MW938,data__->MW938,retain)
  __INIT_EXTERNAL(UINT,MW939,data__->MW939,retain)
  __INIT_EXTERNAL(UINT,MW940,data__->MW940,retain)
  __INIT_EXTERNAL(UINT,MW941,data__->MW941,retain)
  __INIT_EXTERNAL(UINT,MW942,data__->MW942,retain)
  __INIT_EXTERNAL(UINT,MW943,data__->MW943,retain)
  __INIT_EXTERNAL(UINT,MW944,data__->MW944,retain)
  __INIT_EXTERNAL(UINT,MW945,data__->MW945,retain)
  __INIT_EXTERNAL(UINT,MW946,data__->MW946,retain)
  __INIT_EXTERNAL(UINT,MW947,data__->MW947,retain)
  __INIT_EXTERNAL(UINT,MW948,data__->MW948,retain)
  __INIT_EXTERNAL(UINT,MW949,data__->MW949,retain)
  __INIT_EXTERNAL(UINT,MW950,data__->MW950,retain)
  __INIT_EXTERNAL(UINT,MW951,data__->MW951,retain)
  __INIT_EXTERNAL(UINT,MW952,data__->MW952,retain)
  __INIT_EXTERNAL(UINT,MW953,data__->MW953,retain)
  __INIT_EXTERNAL(UINT,MW954,data__->MW954,retain)
  __INIT_EXTERNAL(UINT,MW955,data__->MW955,retain)
  __INIT_EXTERNAL(UINT,MW956,data__->MW956,retain)
  __INIT_EXTERNAL(UINT,MW957,data__->MW957,retain)
  __INIT_EXTERNAL(UINT,MW958,data__->MW958,retain)
  __INIT_EXTERNAL(UINT,MW959,data__->MW959,retain)
  __INIT_EXTERNAL(UINT,MW960,data__->MW960,retain)
  __INIT_EXTERNAL(UINT,MW961,data__->MW961,retain)
  __INIT_EXTERNAL(UINT,MW962,data__->MW962,retain)
  __INIT_EXTERNAL(UINT,MW963,data__->MW963,retain)
  __INIT_EXTERNAL(UINT,MW964,data__->MW964,retain)
  __INIT_EXTERNAL(UINT,MW965,data__->MW965,retain)
  __INIT_EXTERNAL(UINT,MW966,data__->MW966,retain)
  __INIT_EXTERNAL(UINT,MW967,data__->MW967,retain)
  __INIT_EXTERNAL(UINT,MW968,data__->MW968,retain)
  __INIT_EXTERNAL(UINT,MW969,data__->MW969,retain)
  __INIT_EXTERNAL(UINT,MW970,data__->MW970,retain)
  __INIT_EXTERNAL(UINT,MW971,data__->MW971,retain)
  __INIT_EXTERNAL(UINT,MW972,data__->MW972,retain)
  __INIT_EXTERNAL(UINT,MW973,data__->MW973,retain)
  __INIT_EXTERNAL(UINT,MW974,data__->MW974,retain)
  __INIT_EXTERNAL(UINT,MW975,data__->MW975,retain)
  __INIT_EXTERNAL(UINT,MW976,data__->MW976,retain)
  __INIT_EXTERNAL(UINT,MW977,data__->MW977,retain)
  __INIT_EXTERNAL(UINT,MW978,data__->MW978,retain)
  __INIT_EXTERNAL(UINT,MW979,data__->MW979,retain)
  __INIT_EXTERNAL(UINT,MW980,data__->MW980,retain)
  __INIT_EXTERNAL(UINT,MW981,data__->MW981,retain)
  __INIT_EXTERNAL(UINT,MW982,data__->MW982,retain)
  __INIT_EXTERNAL(UINT,MW983,data__->MW983,retain)
  __INIT_EXTERNAL(UINT,MW984,data__->MW984,retain)
  __INIT_EXTERNAL(UINT,MW985,data__->MW985,retain)
  __INIT_EXTERNAL(UINT,MW986,data__->MW986,retain)
  __INIT_EXTERNAL(UINT,MW987,data__->MW987,retain)
  __INIT_EXTERNAL(UINT,MW988,data__->MW988,retain)
  __INIT_EXTERNAL(UINT,MW989,data__->MW989,retain)
  __INIT_EXTERNAL(UINT,MW990,data__->MW990,retain)
  __INIT_EXTERNAL(UINT,MW991,data__->MW991,retain)
  __INIT_EXTERNAL(UINT,MW992,data__->MW992,retain)
  __INIT_EXTERNAL(UINT,MW993,data__->MW993,retain)
  __INIT_EXTERNAL(UINT,MW994,data__->MW994,retain)
  __INIT_EXTERNAL(UINT,MW995,data__->MW995,retain)
  __INIT_EXTERNAL(UINT,MW996,data__->MW996,retain)
  __INIT_EXTERNAL(UINT,MW997,data__->MW997,retain)
  __INIT_EXTERNAL(UINT,MW998,data__->MW998,retain)
  __INIT_EXTERNAL(UINT,MW999,data__->MW999,retain)
  __INIT_VAR(data__->I,-1,retain)
  {
    static const TDEF temp = {0,0,0,{{0,0,0}},{{100,100,100}},0,0,0};
    __SET_VAR(data__->,DEF,,temp);
  }
}

// Code part
void GETDEF_body__(GETDEF *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW0,),
        (UINT)__GET_EXTERNAL(data__->MW1,),
        (UINT)__GET_EXTERNAL(data__->MW2,),
        (UINT)__GET_EXTERNAL(data__->MW3,),
        (UINT)__GET_EXTERNAL(data__->MW4,),
        (UINT)__GET_EXTERNAL(data__->MW5,),
        (UINT)__GET_EXTERNAL(data__->MW6,),
        (UINT)__GET_EXTERNAL(data__->MW7,),
        (UINT)__GET_EXTERNAL(data__->MW8,),
        (UINT)__GET_EXTERNAL(data__->MW9,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW10,),
        (UINT)__GET_EXTERNAL(data__->MW11,),
        (UINT)__GET_EXTERNAL(data__->MW12,),
        (UINT)__GET_EXTERNAL(data__->MW13,),
        (UINT)__GET_EXTERNAL(data__->MW14,),
        (UINT)__GET_EXTERNAL(data__->MW15,),
        (UINT)__GET_EXTERNAL(data__->MW16,),
        (UINT)__GET_EXTERNAL(data__->MW17,),
        (UINT)__GET_EXTERNAL(data__->MW18,),
        (UINT)__GET_EXTERNAL(data__->MW19,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW20,),
        (UINT)__GET_EXTERNAL(data__->MW21,),
        (UINT)__GET_EXTERNAL(data__->MW22,),
        (UINT)__GET_EXTERNAL(data__->MW23,),
        (UINT)__GET_EXTERNAL(data__->MW24,),
        (UINT)__GET_EXTERNAL(data__->MW25,),
        (UINT)__GET_EXTERNAL(data__->MW26,),
        (UINT)__GET_EXTERNAL(data__->MW27,),
        (UINT)__GET_EXTERNAL(data__->MW28,),
        (UINT)__GET_EXTERNAL(data__->MW29,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW30,),
        (UINT)__GET_EXTERNAL(data__->MW31,),
        (UINT)__GET_EXTERNAL(data__->MW32,),
        (UINT)__GET_EXTERNAL(data__->MW33,),
        (UINT)__GET_EXTERNAL(data__->MW34,),
        (UINT)__GET_EXTERNAL(data__->MW35,),
        (UINT)__GET_EXTERNAL(data__->MW36,),
        (UINT)__GET_EXTERNAL(data__->MW37,),
        (UINT)__GET_EXTERNAL(data__->MW38,),
        (UINT)__GET_EXTERNAL(data__->MW39,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW40,),
        (UINT)__GET_EXTERNAL(data__->MW41,),
        (UINT)__GET_EXTERNAL(data__->MW42,),
        (UINT)__GET_EXTERNAL(data__->MW43,),
        (UINT)__GET_EXTERNAL(data__->MW44,),
        (UINT)__GET_EXTERNAL(data__->MW45,),
        (UINT)__GET_EXTERNAL(data__->MW46,),
        (UINT)__GET_EXTERNAL(data__->MW47,),
        (UINT)__GET_EXTERNAL(data__->MW48,),
        (UINT)__GET_EXTERNAL(data__->MW49,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW50,),
        (UINT)__GET_EXTERNAL(data__->MW51,),
        (UINT)__GET_EXTERNAL(data__->MW52,),
        (UINT)__GET_EXTERNAL(data__->MW53,),
        (UINT)__GET_EXTERNAL(data__->MW54,),
        (UINT)__GET_EXTERNAL(data__->MW55,),
        (UINT)__GET_EXTERNAL(data__->MW56,),
        (UINT)__GET_EXTERNAL(data__->MW57,),
        (UINT)__GET_EXTERNAL(data__->MW58,),
        (UINT)__GET_EXTERNAL(data__->MW59,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW60,),
        (UINT)__GET_EXTERNAL(data__->MW61,),
        (UINT)__GET_EXTERNAL(data__->MW62,),
        (UINT)__GET_EXTERNAL(data__->MW63,),
        (UINT)__GET_EXTERNAL(data__->MW64,),
        (UINT)__GET_EXTERNAL(data__->MW65,),
        (UINT)__GET_EXTERNAL(data__->MW66,),
        (UINT)__GET_EXTERNAL(data__->MW67,),
        (UINT)__GET_EXTERNAL(data__->MW68,),
        (UINT)__GET_EXTERNAL(data__->MW69,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW70,),
        (UINT)__GET_EXTERNAL(data__->MW71,),
        (UINT)__GET_EXTERNAL(data__->MW72,),
        (UINT)__GET_EXTERNAL(data__->MW73,),
        (UINT)__GET_EXTERNAL(data__->MW74,),
        (UINT)__GET_EXTERNAL(data__->MW75,),
        (UINT)__GET_EXTERNAL(data__->MW76,),
        (UINT)__GET_EXTERNAL(data__->MW77,),
        (UINT)__GET_EXTERNAL(data__->MW78,),
        (UINT)__GET_EXTERNAL(data__->MW79,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW80,),
        (UINT)__GET_EXTERNAL(data__->MW81,),
        (UINT)__GET_EXTERNAL(data__->MW82,),
        (UINT)__GET_EXTERNAL(data__->MW83,),
        (UINT)__GET_EXTERNAL(data__->MW84,),
        (UINT)__GET_EXTERNAL(data__->MW85,),
        (UINT)__GET_EXTERNAL(data__->MW86,),
        (UINT)__GET_EXTERNAL(data__->MW87,),
        (UINT)__GET_EXTERNAL(data__->MW88,),
        (UINT)__GET_EXTERNAL(data__->MW89,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW90,),
        (UINT)__GET_EXTERNAL(data__->MW91,),
        (UINT)__GET_EXTERNAL(data__->MW92,),
        (UINT)__GET_EXTERNAL(data__->MW93,),
        (UINT)__GET_EXTERNAL(data__->MW94,),
        (UINT)__GET_EXTERNAL(data__->MW95,),
        (UINT)__GET_EXTERNAL(data__->MW96,),
        (UINT)__GET_EXTERNAL(data__->MW97,),
        (UINT)__GET_EXTERNAL(data__->MW98,),
        (UINT)__GET_EXTERNAL(data__->MW99,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW100,),
        (UINT)__GET_EXTERNAL(data__->MW101,),
        (UINT)__GET_EXTERNAL(data__->MW102,),
        (UINT)__GET_EXTERNAL(data__->MW103,),
        (UINT)__GET_EXTERNAL(data__->MW104,),
        (UINT)__GET_EXTERNAL(data__->MW105,),
        (UINT)__GET_EXTERNAL(data__->MW106,),
        (UINT)__GET_EXTERNAL(data__->MW107,),
        (UINT)__GET_EXTERNAL(data__->MW108,),
        (UINT)__GET_EXTERNAL(data__->MW109,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW110,),
        (UINT)__GET_EXTERNAL(data__->MW111,),
        (UINT)__GET_EXTERNAL(data__->MW112,),
        (UINT)__GET_EXTERNAL(data__->MW113,),
        (UINT)__GET_EXTERNAL(data__->MW114,),
        (UINT)__GET_EXTERNAL(data__->MW115,),
        (UINT)__GET_EXTERNAL(data__->MW116,),
        (UINT)__GET_EXTERNAL(data__->MW117,),
        (UINT)__GET_EXTERNAL(data__->MW118,),
        (UINT)__GET_EXTERNAL(data__->MW119,)));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW120,),
        (UINT)__GET_EXTERNAL(data__->MW121,),
        (UINT)__GET_EXTERNAL(data__->MW122,),
        (UINT)__GET_EXTERNAL(data__->MW123,),
        (UINT)__GET_EXTERNAL(data__->MW124,),
        (UINT)__GET_EXTERNAL(data__->MW125,),
        (UINT)__GET_EXTERNAL(data__->MW126,),
        (UINT)__GET_EXTERNAL(data__->MW127,),
        (UINT)__GET_EXTERNAL(data__->MW128,),
        (UINT)__GET_EXTERNAL(data__->MW129,)));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW130,),
        (UINT)__GET_EXTERNAL(data__->MW131,),
        (UINT)__GET_EXTERNAL(data__->MW132,),
        (UINT)__GET_EXTERNAL(data__->MW133,),
        (UINT)__GET_EXTERNAL(data__->MW134,),
        (UINT)__GET_EXTERNAL(data__->MW135,),
        (UINT)__GET_EXTERNAL(data__->MW136,),
        (UINT)__GET_EXTERNAL(data__->MW137,),
        (UINT)__GET_EXTERNAL(data__->MW138,),
        (UINT)__GET_EXTERNAL(data__->MW139,)));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW140,),
        (UINT)__GET_EXTERNAL(data__->MW141,),
        (UINT)__GET_EXTERNAL(data__->MW142,),
        (UINT)__GET_EXTERNAL(data__->MW143,),
        (UINT)__GET_EXTERNAL(data__->MW144,),
        (UINT)__GET_EXTERNAL(data__->MW145,),
        (UINT)__GET_EXTERNAL(data__->MW146,),
        (UINT)__GET_EXTERNAL(data__->MW147,),
        (UINT)__GET_EXTERNAL(data__->MW148,),
        (UINT)__GET_EXTERNAL(data__->MW149,)));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW150,),
        (UINT)__GET_EXTERNAL(data__->MW151,),
        (UINT)__GET_EXTERNAL(data__->MW152,),
        (UINT)__GET_EXTERNAL(data__->MW153,),
        (UINT)__GET_EXTERNAL(data__->MW154,),
        (UINT)__GET_EXTERNAL(data__->MW155,),
        (UINT)__GET_EXTERNAL(data__->MW156,),
        (UINT)__GET_EXTERNAL(data__->MW157,),
        (UINT)__GET_EXTERNAL(data__->MW158,),
        (UINT)__GET_EXTERNAL(data__->MW159,)));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW160,),
        (UINT)__GET_EXTERNAL(data__->MW161,),
        (UINT)__GET_EXTERNAL(data__->MW162,),
        (UINT)__GET_EXTERNAL(data__->MW163,),
        (UINT)__GET_EXTERNAL(data__->MW164,),
        (UINT)__GET_EXTERNAL(data__->MW165,),
        (UINT)__GET_EXTERNAL(data__->MW166,),
        (UINT)__GET_EXTERNAL(data__->MW167,),
        (UINT)__GET_EXTERNAL(data__->MW168,),
        (UINT)__GET_EXTERNAL(data__->MW169,)));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW170,),
        (UINT)__GET_EXTERNAL(data__->MW171,),
        (UINT)__GET_EXTERNAL(data__->MW172,),
        (UINT)__GET_EXTERNAL(data__->MW173,),
        (UINT)__GET_EXTERNAL(data__->MW174,),
        (UINT)__GET_EXTERNAL(data__->MW175,),
        (UINT)__GET_EXTERNAL(data__->MW176,),
        (UINT)__GET_EXTERNAL(data__->MW177,),
        (UINT)__GET_EXTERNAL(data__->MW178,),
        (UINT)__GET_EXTERNAL(data__->MW179,)));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW180,),
        (UINT)__GET_EXTERNAL(data__->MW181,),
        (UINT)__GET_EXTERNAL(data__->MW182,),
        (UINT)__GET_EXTERNAL(data__->MW183,),
        (UINT)__GET_EXTERNAL(data__->MW184,),
        (UINT)__GET_EXTERNAL(data__->MW185,),
        (UINT)__GET_EXTERNAL(data__->MW186,),
        (UINT)__GET_EXTERNAL(data__->MW187,),
        (UINT)__GET_EXTERNAL(data__->MW188,),
        (UINT)__GET_EXTERNAL(data__->MW189,)));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW190,),
        (UINT)__GET_EXTERNAL(data__->MW191,),
        (UINT)__GET_EXTERNAL(data__->MW192,),
        (UINT)__GET_EXTERNAL(data__->MW193,),
        (UINT)__GET_EXTERNAL(data__->MW194,),
        (UINT)__GET_EXTERNAL(data__->MW195,),
        (UINT)__GET_EXTERNAL(data__->MW196,),
        (UINT)__GET_EXTERNAL(data__->MW197,),
        (UINT)__GET_EXTERNAL(data__->MW198,),
        (UINT)__GET_EXTERNAL(data__->MW199,)));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW200,),
        (UINT)__GET_EXTERNAL(data__->MW201,),
        (UINT)__GET_EXTERNAL(data__->MW202,),
        (UINT)__GET_EXTERNAL(data__->MW203,),
        (UINT)__GET_EXTERNAL(data__->MW204,),
        (UINT)__GET_EXTERNAL(data__->MW205,),
        (UINT)__GET_EXTERNAL(data__->MW206,),
        (UINT)__GET_EXTERNAL(data__->MW207,),
        (UINT)__GET_EXTERNAL(data__->MW208,),
        (UINT)__GET_EXTERNAL(data__->MW209,)));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW210,),
        (UINT)__GET_EXTERNAL(data__->MW211,),
        (UINT)__GET_EXTERNAL(data__->MW212,),
        (UINT)__GET_EXTERNAL(data__->MW213,),
        (UINT)__GET_EXTERNAL(data__->MW214,),
        (UINT)__GET_EXTERNAL(data__->MW215,),
        (UINT)__GET_EXTERNAL(data__->MW216,),
        (UINT)__GET_EXTERNAL(data__->MW217,),
        (UINT)__GET_EXTERNAL(data__->MW218,),
        (UINT)__GET_EXTERNAL(data__->MW219,)));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW220,),
        (UINT)__GET_EXTERNAL(data__->MW221,),
        (UINT)__GET_EXTERNAL(data__->MW222,),
        (UINT)__GET_EXTERNAL(data__->MW223,),
        (UINT)__GET_EXTERNAL(data__->MW224,),
        (UINT)__GET_EXTERNAL(data__->MW225,),
        (UINT)__GET_EXTERNAL(data__->MW226,),
        (UINT)__GET_EXTERNAL(data__->MW227,),
        (UINT)__GET_EXTERNAL(data__->MW228,),
        (UINT)__GET_EXTERNAL(data__->MW229,)));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW230,),
        (UINT)__GET_EXTERNAL(data__->MW231,),
        (UINT)__GET_EXTERNAL(data__->MW232,),
        (UINT)__GET_EXTERNAL(data__->MW233,),
        (UINT)__GET_EXTERNAL(data__->MW234,),
        (UINT)__GET_EXTERNAL(data__->MW235,),
        (UINT)__GET_EXTERNAL(data__->MW236,),
        (UINT)__GET_EXTERNAL(data__->MW237,),
        (UINT)__GET_EXTERNAL(data__->MW238,),
        (UINT)__GET_EXTERNAL(data__->MW239,)));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW240,),
        (UINT)__GET_EXTERNAL(data__->MW241,),
        (UINT)__GET_EXTERNAL(data__->MW242,),
        (UINT)__GET_EXTERNAL(data__->MW243,),
        (UINT)__GET_EXTERNAL(data__->MW244,),
        (UINT)__GET_EXTERNAL(data__->MW245,),
        (UINT)__GET_EXTERNAL(data__->MW246,),
        (UINT)__GET_EXTERNAL(data__->MW247,),
        (UINT)__GET_EXTERNAL(data__->MW248,),
        (UINT)__GET_EXTERNAL(data__->MW249,)));
    }
    else if ((__case_expression == 25)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW250,),
        (UINT)__GET_EXTERNAL(data__->MW251,),
        (UINT)__GET_EXTERNAL(data__->MW252,),
        (UINT)__GET_EXTERNAL(data__->MW253,),
        (UINT)__GET_EXTERNAL(data__->MW254,),
        (UINT)__GET_EXTERNAL(data__->MW255,),
        (UINT)__GET_EXTERNAL(data__->MW256,),
        (UINT)__GET_EXTERNAL(data__->MW257,),
        (UINT)__GET_EXTERNAL(data__->MW258,),
        (UINT)__GET_EXTERNAL(data__->MW259,)));
    }
    else if ((__case_expression == 26)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW260,),
        (UINT)__GET_EXTERNAL(data__->MW261,),
        (UINT)__GET_EXTERNAL(data__->MW262,),
        (UINT)__GET_EXTERNAL(data__->MW263,),
        (UINT)__GET_EXTERNAL(data__->MW264,),
        (UINT)__GET_EXTERNAL(data__->MW265,),
        (UINT)__GET_EXTERNAL(data__->MW266,),
        (UINT)__GET_EXTERNAL(data__->MW267,),
        (UINT)__GET_EXTERNAL(data__->MW268,),
        (UINT)__GET_EXTERNAL(data__->MW269,)));
    }
    else if ((__case_expression == 27)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW270,),
        (UINT)__GET_EXTERNAL(data__->MW271,),
        (UINT)__GET_EXTERNAL(data__->MW272,),
        (UINT)__GET_EXTERNAL(data__->MW273,),
        (UINT)__GET_EXTERNAL(data__->MW274,),
        (UINT)__GET_EXTERNAL(data__->MW275,),
        (UINT)__GET_EXTERNAL(data__->MW276,),
        (UINT)__GET_EXTERNAL(data__->MW277,),
        (UINT)__GET_EXTERNAL(data__->MW278,),
        (UINT)__GET_EXTERNAL(data__->MW279,)));
    }
    else if ((__case_expression == 28)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW280,),
        (UINT)__GET_EXTERNAL(data__->MW281,),
        (UINT)__GET_EXTERNAL(data__->MW282,),
        (UINT)__GET_EXTERNAL(data__->MW283,),
        (UINT)__GET_EXTERNAL(data__->MW284,),
        (UINT)__GET_EXTERNAL(data__->MW285,),
        (UINT)__GET_EXTERNAL(data__->MW286,),
        (UINT)__GET_EXTERNAL(data__->MW287,),
        (UINT)__GET_EXTERNAL(data__->MW288,),
        (UINT)__GET_EXTERNAL(data__->MW289,)));
    }
    else if ((__case_expression == 29)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW290,),
        (UINT)__GET_EXTERNAL(data__->MW291,),
        (UINT)__GET_EXTERNAL(data__->MW292,),
        (UINT)__GET_EXTERNAL(data__->MW293,),
        (UINT)__GET_EXTERNAL(data__->MW294,),
        (UINT)__GET_EXTERNAL(data__->MW295,),
        (UINT)__GET_EXTERNAL(data__->MW296,),
        (UINT)__GET_EXTERNAL(data__->MW297,),
        (UINT)__GET_EXTERNAL(data__->MW298,),
        (UINT)__GET_EXTERNAL(data__->MW299,)));
    }
    else if ((__case_expression == 30)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW300,),
        (UINT)__GET_EXTERNAL(data__->MW301,),
        (UINT)__GET_EXTERNAL(data__->MW302,),
        (UINT)__GET_EXTERNAL(data__->MW303,),
        (UINT)__GET_EXTERNAL(data__->MW304,),
        (UINT)__GET_EXTERNAL(data__->MW305,),
        (UINT)__GET_EXTERNAL(data__->MW306,),
        (UINT)__GET_EXTERNAL(data__->MW307,),
        (UINT)__GET_EXTERNAL(data__->MW308,),
        (UINT)__GET_EXTERNAL(data__->MW309,)));
    }
    else if ((__case_expression == 31)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW310,),
        (UINT)__GET_EXTERNAL(data__->MW311,),
        (UINT)__GET_EXTERNAL(data__->MW312,),
        (UINT)__GET_EXTERNAL(data__->MW313,),
        (UINT)__GET_EXTERNAL(data__->MW314,),
        (UINT)__GET_EXTERNAL(data__->MW315,),
        (UINT)__GET_EXTERNAL(data__->MW316,),
        (UINT)__GET_EXTERNAL(data__->MW317,),
        (UINT)__GET_EXTERNAL(data__->MW318,),
        (UINT)__GET_EXTERNAL(data__->MW319,)));
    }
    else if ((__case_expression == 32)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW320,),
        (UINT)__GET_EXTERNAL(data__->MW321,),
        (UINT)__GET_EXTERNAL(data__->MW322,),
        (UINT)__GET_EXTERNAL(data__->MW323,),
        (UINT)__GET_EXTERNAL(data__->MW324,),
        (UINT)__GET_EXTERNAL(data__->MW325,),
        (UINT)__GET_EXTERNAL(data__->MW326,),
        (UINT)__GET_EXTERNAL(data__->MW327,),
        (UINT)__GET_EXTERNAL(data__->MW328,),
        (UINT)__GET_EXTERNAL(data__->MW329,)));
    }
    else if ((__case_expression == 33)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW330,),
        (UINT)__GET_EXTERNAL(data__->MW331,),
        (UINT)__GET_EXTERNAL(data__->MW332,),
        (UINT)__GET_EXTERNAL(data__->MW333,),
        (UINT)__GET_EXTERNAL(data__->MW334,),
        (UINT)__GET_EXTERNAL(data__->MW335,),
        (UINT)__GET_EXTERNAL(data__->MW336,),
        (UINT)__GET_EXTERNAL(data__->MW337,),
        (UINT)__GET_EXTERNAL(data__->MW338,),
        (UINT)__GET_EXTERNAL(data__->MW339,)));
    }
    else if ((__case_expression == 34)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW340,),
        (UINT)__GET_EXTERNAL(data__->MW341,),
        (UINT)__GET_EXTERNAL(data__->MW342,),
        (UINT)__GET_EXTERNAL(data__->MW343,),
        (UINT)__GET_EXTERNAL(data__->MW344,),
        (UINT)__GET_EXTERNAL(data__->MW345,),
        (UINT)__GET_EXTERNAL(data__->MW346,),
        (UINT)__GET_EXTERNAL(data__->MW347,),
        (UINT)__GET_EXTERNAL(data__->MW348,),
        (UINT)__GET_EXTERNAL(data__->MW349,)));
    }
    else if ((__case_expression == 35)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW350,),
        (UINT)__GET_EXTERNAL(data__->MW351,),
        (UINT)__GET_EXTERNAL(data__->MW352,),
        (UINT)__GET_EXTERNAL(data__->MW353,),
        (UINT)__GET_EXTERNAL(data__->MW354,),
        (UINT)__GET_EXTERNAL(data__->MW355,),
        (UINT)__GET_EXTERNAL(data__->MW356,),
        (UINT)__GET_EXTERNAL(data__->MW357,),
        (UINT)__GET_EXTERNAL(data__->MW358,),
        (UINT)__GET_EXTERNAL(data__->MW359,)));
    }
    else if ((__case_expression == 36)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW360,),
        (UINT)__GET_EXTERNAL(data__->MW361,),
        (UINT)__GET_EXTERNAL(data__->MW362,),
        (UINT)__GET_EXTERNAL(data__->MW363,),
        (UINT)__GET_EXTERNAL(data__->MW364,),
        (UINT)__GET_EXTERNAL(data__->MW365,),
        (UINT)__GET_EXTERNAL(data__->MW366,),
        (UINT)__GET_EXTERNAL(data__->MW367,),
        (UINT)__GET_EXTERNAL(data__->MW368,),
        (UINT)__GET_EXTERNAL(data__->MW369,)));
    }
    else if ((__case_expression == 37)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW370,),
        (UINT)__GET_EXTERNAL(data__->MW371,),
        (UINT)__GET_EXTERNAL(data__->MW372,),
        (UINT)__GET_EXTERNAL(data__->MW373,),
        (UINT)__GET_EXTERNAL(data__->MW374,),
        (UINT)__GET_EXTERNAL(data__->MW375,),
        (UINT)__GET_EXTERNAL(data__->MW376,),
        (UINT)__GET_EXTERNAL(data__->MW377,),
        (UINT)__GET_EXTERNAL(data__->MW378,),
        (UINT)__GET_EXTERNAL(data__->MW379,)));
    }
    else if ((__case_expression == 38)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW380,),
        (UINT)__GET_EXTERNAL(data__->MW381,),
        (UINT)__GET_EXTERNAL(data__->MW382,),
        (UINT)__GET_EXTERNAL(data__->MW383,),
        (UINT)__GET_EXTERNAL(data__->MW384,),
        (UINT)__GET_EXTERNAL(data__->MW385,),
        (UINT)__GET_EXTERNAL(data__->MW386,),
        (UINT)__GET_EXTERNAL(data__->MW387,),
        (UINT)__GET_EXTERNAL(data__->MW388,),
        (UINT)__GET_EXTERNAL(data__->MW389,)));
    }
    else if ((__case_expression == 39)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW390,),
        (UINT)__GET_EXTERNAL(data__->MW391,),
        (UINT)__GET_EXTERNAL(data__->MW392,),
        (UINT)__GET_EXTERNAL(data__->MW393,),
        (UINT)__GET_EXTERNAL(data__->MW394,),
        (UINT)__GET_EXTERNAL(data__->MW395,),
        (UINT)__GET_EXTERNAL(data__->MW396,),
        (UINT)__GET_EXTERNAL(data__->MW397,),
        (UINT)__GET_EXTERNAL(data__->MW398,),
        (UINT)__GET_EXTERNAL(data__->MW399,)));
    }
    else if ((__case_expression == 40)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW400,),
        (UINT)__GET_EXTERNAL(data__->MW401,),
        (UINT)__GET_EXTERNAL(data__->MW402,),
        (UINT)__GET_EXTERNAL(data__->MW403,),
        (UINT)__GET_EXTERNAL(data__->MW404,),
        (UINT)__GET_EXTERNAL(data__->MW405,),
        (UINT)__GET_EXTERNAL(data__->MW406,),
        (UINT)__GET_EXTERNAL(data__->MW407,),
        (UINT)__GET_EXTERNAL(data__->MW408,),
        (UINT)__GET_EXTERNAL(data__->MW409,)));
    }
    else if ((__case_expression == 41)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW410,),
        (UINT)__GET_EXTERNAL(data__->MW411,),
        (UINT)__GET_EXTERNAL(data__->MW412,),
        (UINT)__GET_EXTERNAL(data__->MW413,),
        (UINT)__GET_EXTERNAL(data__->MW414,),
        (UINT)__GET_EXTERNAL(data__->MW415,),
        (UINT)__GET_EXTERNAL(data__->MW416,),
        (UINT)__GET_EXTERNAL(data__->MW417,),
        (UINT)__GET_EXTERNAL(data__->MW418,),
        (UINT)__GET_EXTERNAL(data__->MW419,)));
    }
    else if ((__case_expression == 42)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW420,),
        (UINT)__GET_EXTERNAL(data__->MW421,),
        (UINT)__GET_EXTERNAL(data__->MW422,),
        (UINT)__GET_EXTERNAL(data__->MW423,),
        (UINT)__GET_EXTERNAL(data__->MW424,),
        (UINT)__GET_EXTERNAL(data__->MW425,),
        (UINT)__GET_EXTERNAL(data__->MW426,),
        (UINT)__GET_EXTERNAL(data__->MW427,),
        (UINT)__GET_EXTERNAL(data__->MW428,),
        (UINT)__GET_EXTERNAL(data__->MW429,)));
    }
    else if ((__case_expression == 43)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW430,),
        (UINT)__GET_EXTERNAL(data__->MW431,),
        (UINT)__GET_EXTERNAL(data__->MW432,),
        (UINT)__GET_EXTERNAL(data__->MW433,),
        (UINT)__GET_EXTERNAL(data__->MW434,),
        (UINT)__GET_EXTERNAL(data__->MW435,),
        (UINT)__GET_EXTERNAL(data__->MW436,),
        (UINT)__GET_EXTERNAL(data__->MW437,),
        (UINT)__GET_EXTERNAL(data__->MW438,),
        (UINT)__GET_EXTERNAL(data__->MW439,)));
    }
    else if ((__case_expression == 44)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW440,),
        (UINT)__GET_EXTERNAL(data__->MW441,),
        (UINT)__GET_EXTERNAL(data__->MW442,),
        (UINT)__GET_EXTERNAL(data__->MW443,),
        (UINT)__GET_EXTERNAL(data__->MW444,),
        (UINT)__GET_EXTERNAL(data__->MW445,),
        (UINT)__GET_EXTERNAL(data__->MW446,),
        (UINT)__GET_EXTERNAL(data__->MW447,),
        (UINT)__GET_EXTERNAL(data__->MW448,),
        (UINT)__GET_EXTERNAL(data__->MW449,)));
    }
    else if ((__case_expression == 45)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW450,),
        (UINT)__GET_EXTERNAL(data__->MW451,),
        (UINT)__GET_EXTERNAL(data__->MW452,),
        (UINT)__GET_EXTERNAL(data__->MW453,),
        (UINT)__GET_EXTERNAL(data__->MW454,),
        (UINT)__GET_EXTERNAL(data__->MW455,),
        (UINT)__GET_EXTERNAL(data__->MW456,),
        (UINT)__GET_EXTERNAL(data__->MW457,),
        (UINT)__GET_EXTERNAL(data__->MW458,),
        (UINT)__GET_EXTERNAL(data__->MW459,)));
    }
    else if ((__case_expression == 46)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW460,),
        (UINT)__GET_EXTERNAL(data__->MW461,),
        (UINT)__GET_EXTERNAL(data__->MW462,),
        (UINT)__GET_EXTERNAL(data__->MW463,),
        (UINT)__GET_EXTERNAL(data__->MW464,),
        (UINT)__GET_EXTERNAL(data__->MW465,),
        (UINT)__GET_EXTERNAL(data__->MW466,),
        (UINT)__GET_EXTERNAL(data__->MW467,),
        (UINT)__GET_EXTERNAL(data__->MW468,),
        (UINT)__GET_EXTERNAL(data__->MW469,)));
    }
    else if ((__case_expression == 47)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW470,),
        (UINT)__GET_EXTERNAL(data__->MW471,),
        (UINT)__GET_EXTERNAL(data__->MW472,),
        (UINT)__GET_EXTERNAL(data__->MW473,),
        (UINT)__GET_EXTERNAL(data__->MW474,),
        (UINT)__GET_EXTERNAL(data__->MW475,),
        (UINT)__GET_EXTERNAL(data__->MW476,),
        (UINT)__GET_EXTERNAL(data__->MW477,),
        (UINT)__GET_EXTERNAL(data__->MW478,),
        (UINT)__GET_EXTERNAL(data__->MW479,)));
    }
    else if ((__case_expression == 48)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW480,),
        (UINT)__GET_EXTERNAL(data__->MW481,),
        (UINT)__GET_EXTERNAL(data__->MW482,),
        (UINT)__GET_EXTERNAL(data__->MW483,),
        (UINT)__GET_EXTERNAL(data__->MW484,),
        (UINT)__GET_EXTERNAL(data__->MW485,),
        (UINT)__GET_EXTERNAL(data__->MW486,),
        (UINT)__GET_EXTERNAL(data__->MW487,),
        (UINT)__GET_EXTERNAL(data__->MW488,),
        (UINT)__GET_EXTERNAL(data__->MW489,)));
    }
    else if ((__case_expression == 49)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW490,),
        (UINT)__GET_EXTERNAL(data__->MW491,),
        (UINT)__GET_EXTERNAL(data__->MW492,),
        (UINT)__GET_EXTERNAL(data__->MW493,),
        (UINT)__GET_EXTERNAL(data__->MW494,),
        (UINT)__GET_EXTERNAL(data__->MW495,),
        (UINT)__GET_EXTERNAL(data__->MW496,),
        (UINT)__GET_EXTERNAL(data__->MW497,),
        (UINT)__GET_EXTERNAL(data__->MW498,),
        (UINT)__GET_EXTERNAL(data__->MW499,)));
    }
    else if ((__case_expression == 50)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW500,),
        (UINT)__GET_EXTERNAL(data__->MW501,),
        (UINT)__GET_EXTERNAL(data__->MW502,),
        (UINT)__GET_EXTERNAL(data__->MW503,),
        (UINT)__GET_EXTERNAL(data__->MW504,),
        (UINT)__GET_EXTERNAL(data__->MW505,),
        (UINT)__GET_EXTERNAL(data__->MW506,),
        (UINT)__GET_EXTERNAL(data__->MW507,),
        (UINT)__GET_EXTERNAL(data__->MW508,),
        (UINT)__GET_EXTERNAL(data__->MW509,)));
    }
    else if ((__case_expression == 51)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW510,),
        (UINT)__GET_EXTERNAL(data__->MW511,),
        (UINT)__GET_EXTERNAL(data__->MW512,),
        (UINT)__GET_EXTERNAL(data__->MW513,),
        (UINT)__GET_EXTERNAL(data__->MW514,),
        (UINT)__GET_EXTERNAL(data__->MW515,),
        (UINT)__GET_EXTERNAL(data__->MW516,),
        (UINT)__GET_EXTERNAL(data__->MW517,),
        (UINT)__GET_EXTERNAL(data__->MW518,),
        (UINT)__GET_EXTERNAL(data__->MW519,)));
    }
    else if ((__case_expression == 52)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW520,),
        (UINT)__GET_EXTERNAL(data__->MW521,),
        (UINT)__GET_EXTERNAL(data__->MW522,),
        (UINT)__GET_EXTERNAL(data__->MW523,),
        (UINT)__GET_EXTERNAL(data__->MW524,),
        (UINT)__GET_EXTERNAL(data__->MW525,),
        (UINT)__GET_EXTERNAL(data__->MW526,),
        (UINT)__GET_EXTERNAL(data__->MW527,),
        (UINT)__GET_EXTERNAL(data__->MW528,),
        (UINT)__GET_EXTERNAL(data__->MW529,)));
    }
    else if ((__case_expression == 53)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW530,),
        (UINT)__GET_EXTERNAL(data__->MW531,),
        (UINT)__GET_EXTERNAL(data__->MW532,),
        (UINT)__GET_EXTERNAL(data__->MW533,),
        (UINT)__GET_EXTERNAL(data__->MW534,),
        (UINT)__GET_EXTERNAL(data__->MW535,),
        (UINT)__GET_EXTERNAL(data__->MW536,),
        (UINT)__GET_EXTERNAL(data__->MW537,),
        (UINT)__GET_EXTERNAL(data__->MW538,),
        (UINT)__GET_EXTERNAL(data__->MW539,)));
    }
    else if ((__case_expression == 54)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW540,),
        (UINT)__GET_EXTERNAL(data__->MW541,),
        (UINT)__GET_EXTERNAL(data__->MW542,),
        (UINT)__GET_EXTERNAL(data__->MW543,),
        (UINT)__GET_EXTERNAL(data__->MW544,),
        (UINT)__GET_EXTERNAL(data__->MW545,),
        (UINT)__GET_EXTERNAL(data__->MW546,),
        (UINT)__GET_EXTERNAL(data__->MW547,),
        (UINT)__GET_EXTERNAL(data__->MW548,),
        (UINT)__GET_EXTERNAL(data__->MW549,)));
    }
    else if ((__case_expression == 55)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW550,),
        (UINT)__GET_EXTERNAL(data__->MW551,),
        (UINT)__GET_EXTERNAL(data__->MW552,),
        (UINT)__GET_EXTERNAL(data__->MW553,),
        (UINT)__GET_EXTERNAL(data__->MW554,),
        (UINT)__GET_EXTERNAL(data__->MW555,),
        (UINT)__GET_EXTERNAL(data__->MW556,),
        (UINT)__GET_EXTERNAL(data__->MW557,),
        (UINT)__GET_EXTERNAL(data__->MW558,),
        (UINT)__GET_EXTERNAL(data__->MW559,)));
    }
    else if ((__case_expression == 56)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW560,),
        (UINT)__GET_EXTERNAL(data__->MW561,),
        (UINT)__GET_EXTERNAL(data__->MW562,),
        (UINT)__GET_EXTERNAL(data__->MW563,),
        (UINT)__GET_EXTERNAL(data__->MW564,),
        (UINT)__GET_EXTERNAL(data__->MW565,),
        (UINT)__GET_EXTERNAL(data__->MW566,),
        (UINT)__GET_EXTERNAL(data__->MW567,),
        (UINT)__GET_EXTERNAL(data__->MW568,),
        (UINT)__GET_EXTERNAL(data__->MW569,)));
    }
    else if ((__case_expression == 57)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW570,),
        (UINT)__GET_EXTERNAL(data__->MW571,),
        (UINT)__GET_EXTERNAL(data__->MW572,),
        (UINT)__GET_EXTERNAL(data__->MW573,),
        (UINT)__GET_EXTERNAL(data__->MW574,),
        (UINT)__GET_EXTERNAL(data__->MW575,),
        (UINT)__GET_EXTERNAL(data__->MW576,),
        (UINT)__GET_EXTERNAL(data__->MW577,),
        (UINT)__GET_EXTERNAL(data__->MW578,),
        (UINT)__GET_EXTERNAL(data__->MW579,)));
    }
    else if ((__case_expression == 58)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW580,),
        (UINT)__GET_EXTERNAL(data__->MW581,),
        (UINT)__GET_EXTERNAL(data__->MW582,),
        (UINT)__GET_EXTERNAL(data__->MW583,),
        (UINT)__GET_EXTERNAL(data__->MW584,),
        (UINT)__GET_EXTERNAL(data__->MW585,),
        (UINT)__GET_EXTERNAL(data__->MW586,),
        (UINT)__GET_EXTERNAL(data__->MW587,),
        (UINT)__GET_EXTERNAL(data__->MW588,),
        (UINT)__GET_EXTERNAL(data__->MW589,)));
    }
    else if ((__case_expression == 59)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW590,),
        (UINT)__GET_EXTERNAL(data__->MW591,),
        (UINT)__GET_EXTERNAL(data__->MW592,),
        (UINT)__GET_EXTERNAL(data__->MW593,),
        (UINT)__GET_EXTERNAL(data__->MW594,),
        (UINT)__GET_EXTERNAL(data__->MW595,),
        (UINT)__GET_EXTERNAL(data__->MW596,),
        (UINT)__GET_EXTERNAL(data__->MW597,),
        (UINT)__GET_EXTERNAL(data__->MW598,),
        (UINT)__GET_EXTERNAL(data__->MW599,)));
    }
    else if ((__case_expression == 60)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW600,),
        (UINT)__GET_EXTERNAL(data__->MW601,),
        (UINT)__GET_EXTERNAL(data__->MW602,),
        (UINT)__GET_EXTERNAL(data__->MW603,),
        (UINT)__GET_EXTERNAL(data__->MW604,),
        (UINT)__GET_EXTERNAL(data__->MW605,),
        (UINT)__GET_EXTERNAL(data__->MW606,),
        (UINT)__GET_EXTERNAL(data__->MW607,),
        (UINT)__GET_EXTERNAL(data__->MW608,),
        (UINT)__GET_EXTERNAL(data__->MW609,)));
    }
    else if ((__case_expression == 61)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW610,),
        (UINT)__GET_EXTERNAL(data__->MW611,),
        (UINT)__GET_EXTERNAL(data__->MW612,),
        (UINT)__GET_EXTERNAL(data__->MW613,),
        (UINT)__GET_EXTERNAL(data__->MW614,),
        (UINT)__GET_EXTERNAL(data__->MW615,),
        (UINT)__GET_EXTERNAL(data__->MW616,),
        (UINT)__GET_EXTERNAL(data__->MW617,),
        (UINT)__GET_EXTERNAL(data__->MW618,),
        (UINT)__GET_EXTERNAL(data__->MW619,)));
    }
    else if ((__case_expression == 62)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW620,),
        (UINT)__GET_EXTERNAL(data__->MW621,),
        (UINT)__GET_EXTERNAL(data__->MW622,),
        (UINT)__GET_EXTERNAL(data__->MW623,),
        (UINT)__GET_EXTERNAL(data__->MW624,),
        (UINT)__GET_EXTERNAL(data__->MW625,),
        (UINT)__GET_EXTERNAL(data__->MW626,),
        (UINT)__GET_EXTERNAL(data__->MW627,),
        (UINT)__GET_EXTERNAL(data__->MW628,),
        (UINT)__GET_EXTERNAL(data__->MW629,)));
    }
    else if ((__case_expression == 63)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW630,),
        (UINT)__GET_EXTERNAL(data__->MW631,),
        (UINT)__GET_EXTERNAL(data__->MW632,),
        (UINT)__GET_EXTERNAL(data__->MW633,),
        (UINT)__GET_EXTERNAL(data__->MW634,),
        (UINT)__GET_EXTERNAL(data__->MW635,),
        (UINT)__GET_EXTERNAL(data__->MW636,),
        (UINT)__GET_EXTERNAL(data__->MW637,),
        (UINT)__GET_EXTERNAL(data__->MW638,),
        (UINT)__GET_EXTERNAL(data__->MW639,)));
    }
    else if ((__case_expression == 64)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW640,),
        (UINT)__GET_EXTERNAL(data__->MW641,),
        (UINT)__GET_EXTERNAL(data__->MW642,),
        (UINT)__GET_EXTERNAL(data__->MW643,),
        (UINT)__GET_EXTERNAL(data__->MW644,),
        (UINT)__GET_EXTERNAL(data__->MW645,),
        (UINT)__GET_EXTERNAL(data__->MW646,),
        (UINT)__GET_EXTERNAL(data__->MW647,),
        (UINT)__GET_EXTERNAL(data__->MW648,),
        (UINT)__GET_EXTERNAL(data__->MW649,)));
    }
    else if ((__case_expression == 65)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW650,),
        (UINT)__GET_EXTERNAL(data__->MW651,),
        (UINT)__GET_EXTERNAL(data__->MW652,),
        (UINT)__GET_EXTERNAL(data__->MW653,),
        (UINT)__GET_EXTERNAL(data__->MW654,),
        (UINT)__GET_EXTERNAL(data__->MW655,),
        (UINT)__GET_EXTERNAL(data__->MW656,),
        (UINT)__GET_EXTERNAL(data__->MW657,),
        (UINT)__GET_EXTERNAL(data__->MW658,),
        (UINT)__GET_EXTERNAL(data__->MW659,)));
    }
    else if ((__case_expression == 66)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW660,),
        (UINT)__GET_EXTERNAL(data__->MW661,),
        (UINT)__GET_EXTERNAL(data__->MW662,),
        (UINT)__GET_EXTERNAL(data__->MW663,),
        (UINT)__GET_EXTERNAL(data__->MW664,),
        (UINT)__GET_EXTERNAL(data__->MW665,),
        (UINT)__GET_EXTERNAL(data__->MW666,),
        (UINT)__GET_EXTERNAL(data__->MW667,),
        (UINT)__GET_EXTERNAL(data__->MW668,),
        (UINT)__GET_EXTERNAL(data__->MW669,)));
    }
    else if ((__case_expression == 67)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW670,),
        (UINT)__GET_EXTERNAL(data__->MW671,),
        (UINT)__GET_EXTERNAL(data__->MW672,),
        (UINT)__GET_EXTERNAL(data__->MW673,),
        (UINT)__GET_EXTERNAL(data__->MW674,),
        (UINT)__GET_EXTERNAL(data__->MW675,),
        (UINT)__GET_EXTERNAL(data__->MW676,),
        (UINT)__GET_EXTERNAL(data__->MW677,),
        (UINT)__GET_EXTERNAL(data__->MW678,),
        (UINT)__GET_EXTERNAL(data__->MW679,)));
    }
    else if ((__case_expression == 68)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW680,),
        (UINT)__GET_EXTERNAL(data__->MW681,),
        (UINT)__GET_EXTERNAL(data__->MW682,),
        (UINT)__GET_EXTERNAL(data__->MW683,),
        (UINT)__GET_EXTERNAL(data__->MW684,),
        (UINT)__GET_EXTERNAL(data__->MW685,),
        (UINT)__GET_EXTERNAL(data__->MW686,),
        (UINT)__GET_EXTERNAL(data__->MW687,),
        (UINT)__GET_EXTERNAL(data__->MW688,),
        (UINT)__GET_EXTERNAL(data__->MW689,)));
    }
    else if ((__case_expression == 69)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW690,),
        (UINT)__GET_EXTERNAL(data__->MW691,),
        (UINT)__GET_EXTERNAL(data__->MW692,),
        (UINT)__GET_EXTERNAL(data__->MW693,),
        (UINT)__GET_EXTERNAL(data__->MW694,),
        (UINT)__GET_EXTERNAL(data__->MW695,),
        (UINT)__GET_EXTERNAL(data__->MW696,),
        (UINT)__GET_EXTERNAL(data__->MW697,),
        (UINT)__GET_EXTERNAL(data__->MW698,),
        (UINT)__GET_EXTERNAL(data__->MW699,)));
    }
    else if ((__case_expression == 70)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW700,),
        (UINT)__GET_EXTERNAL(data__->MW701,),
        (UINT)__GET_EXTERNAL(data__->MW702,),
        (UINT)__GET_EXTERNAL(data__->MW703,),
        (UINT)__GET_EXTERNAL(data__->MW704,),
        (UINT)__GET_EXTERNAL(data__->MW705,),
        (UINT)__GET_EXTERNAL(data__->MW706,),
        (UINT)__GET_EXTERNAL(data__->MW707,),
        (UINT)__GET_EXTERNAL(data__->MW708,),
        (UINT)__GET_EXTERNAL(data__->MW709,)));
    }
    else if ((__case_expression == 71)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW710,),
        (UINT)__GET_EXTERNAL(data__->MW711,),
        (UINT)__GET_EXTERNAL(data__->MW712,),
        (UINT)__GET_EXTERNAL(data__->MW713,),
        (UINT)__GET_EXTERNAL(data__->MW714,),
        (UINT)__GET_EXTERNAL(data__->MW715,),
        (UINT)__GET_EXTERNAL(data__->MW716,),
        (UINT)__GET_EXTERNAL(data__->MW717,),
        (UINT)__GET_EXTERNAL(data__->MW718,),
        (UINT)__GET_EXTERNAL(data__->MW719,)));
    }
    else if ((__case_expression == 72)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW720,),
        (UINT)__GET_EXTERNAL(data__->MW721,),
        (UINT)__GET_EXTERNAL(data__->MW722,),
        (UINT)__GET_EXTERNAL(data__->MW723,),
        (UINT)__GET_EXTERNAL(data__->MW724,),
        (UINT)__GET_EXTERNAL(data__->MW725,),
        (UINT)__GET_EXTERNAL(data__->MW726,),
        (UINT)__GET_EXTERNAL(data__->MW727,),
        (UINT)__GET_EXTERNAL(data__->MW728,),
        (UINT)__GET_EXTERNAL(data__->MW729,)));
    }
    else if ((__case_expression == 73)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW730,),
        (UINT)__GET_EXTERNAL(data__->MW731,),
        (UINT)__GET_EXTERNAL(data__->MW732,),
        (UINT)__GET_EXTERNAL(data__->MW733,),
        (UINT)__GET_EXTERNAL(data__->MW734,),
        (UINT)__GET_EXTERNAL(data__->MW735,),
        (UINT)__GET_EXTERNAL(data__->MW736,),
        (UINT)__GET_EXTERNAL(data__->MW737,),
        (UINT)__GET_EXTERNAL(data__->MW738,),
        (UINT)__GET_EXTERNAL(data__->MW739,)));
    }
    else if ((__case_expression == 74)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW740,),
        (UINT)__GET_EXTERNAL(data__->MW741,),
        (UINT)__GET_EXTERNAL(data__->MW742,),
        (UINT)__GET_EXTERNAL(data__->MW743,),
        (UINT)__GET_EXTERNAL(data__->MW744,),
        (UINT)__GET_EXTERNAL(data__->MW745,),
        (UINT)__GET_EXTERNAL(data__->MW746,),
        (UINT)__GET_EXTERNAL(data__->MW747,),
        (UINT)__GET_EXTERNAL(data__->MW748,),
        (UINT)__GET_EXTERNAL(data__->MW749,)));
    }
    else if ((__case_expression == 75)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW750,),
        (UINT)__GET_EXTERNAL(data__->MW751,),
        (UINT)__GET_EXTERNAL(data__->MW752,),
        (UINT)__GET_EXTERNAL(data__->MW753,),
        (UINT)__GET_EXTERNAL(data__->MW754,),
        (UINT)__GET_EXTERNAL(data__->MW755,),
        (UINT)__GET_EXTERNAL(data__->MW756,),
        (UINT)__GET_EXTERNAL(data__->MW757,),
        (UINT)__GET_EXTERNAL(data__->MW758,),
        (UINT)__GET_EXTERNAL(data__->MW759,)));
    }
    else if ((__case_expression == 76)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW760,),
        (UINT)__GET_EXTERNAL(data__->MW761,),
        (UINT)__GET_EXTERNAL(data__->MW762,),
        (UINT)__GET_EXTERNAL(data__->MW763,),
        (UINT)__GET_EXTERNAL(data__->MW764,),
        (UINT)__GET_EXTERNAL(data__->MW765,),
        (UINT)__GET_EXTERNAL(data__->MW766,),
        (UINT)__GET_EXTERNAL(data__->MW767,),
        (UINT)__GET_EXTERNAL(data__->MW768,),
        (UINT)__GET_EXTERNAL(data__->MW769,)));
    }
    else if ((__case_expression == 77)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW770,),
        (UINT)__GET_EXTERNAL(data__->MW771,),
        (UINT)__GET_EXTERNAL(data__->MW772,),
        (UINT)__GET_EXTERNAL(data__->MW773,),
        (UINT)__GET_EXTERNAL(data__->MW774,),
        (UINT)__GET_EXTERNAL(data__->MW775,),
        (UINT)__GET_EXTERNAL(data__->MW776,),
        (UINT)__GET_EXTERNAL(data__->MW777,),
        (UINT)__GET_EXTERNAL(data__->MW778,),
        (UINT)__GET_EXTERNAL(data__->MW779,)));
    }
    else if ((__case_expression == 78)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW780,),
        (UINT)__GET_EXTERNAL(data__->MW781,),
        (UINT)__GET_EXTERNAL(data__->MW782,),
        (UINT)__GET_EXTERNAL(data__->MW783,),
        (UINT)__GET_EXTERNAL(data__->MW784,),
        (UINT)__GET_EXTERNAL(data__->MW785,),
        (UINT)__GET_EXTERNAL(data__->MW786,),
        (UINT)__GET_EXTERNAL(data__->MW787,),
        (UINT)__GET_EXTERNAL(data__->MW788,),
        (UINT)__GET_EXTERNAL(data__->MW789,)));
    }
    else if ((__case_expression == 79)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW790,),
        (UINT)__GET_EXTERNAL(data__->MW791,),
        (UINT)__GET_EXTERNAL(data__->MW792,),
        (UINT)__GET_EXTERNAL(data__->MW793,),
        (UINT)__GET_EXTERNAL(data__->MW794,),
        (UINT)__GET_EXTERNAL(data__->MW795,),
        (UINT)__GET_EXTERNAL(data__->MW796,),
        (UINT)__GET_EXTERNAL(data__->MW797,),
        (UINT)__GET_EXTERNAL(data__->MW798,),
        (UINT)__GET_EXTERNAL(data__->MW799,)));
    }
    else if ((__case_expression == 80)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW800,),
        (UINT)__GET_EXTERNAL(data__->MW801,),
        (UINT)__GET_EXTERNAL(data__->MW802,),
        (UINT)__GET_EXTERNAL(data__->MW803,),
        (UINT)__GET_EXTERNAL(data__->MW804,),
        (UINT)__GET_EXTERNAL(data__->MW805,),
        (UINT)__GET_EXTERNAL(data__->MW806,),
        (UINT)__GET_EXTERNAL(data__->MW807,),
        (UINT)__GET_EXTERNAL(data__->MW808,),
        (UINT)__GET_EXTERNAL(data__->MW809,)));
    }
    else if ((__case_expression == 81)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW810,),
        (UINT)__GET_EXTERNAL(data__->MW811,),
        (UINT)__GET_EXTERNAL(data__->MW812,),
        (UINT)__GET_EXTERNAL(data__->MW813,),
        (UINT)__GET_EXTERNAL(data__->MW814,),
        (UINT)__GET_EXTERNAL(data__->MW815,),
        (UINT)__GET_EXTERNAL(data__->MW816,),
        (UINT)__GET_EXTERNAL(data__->MW817,),
        (UINT)__GET_EXTERNAL(data__->MW818,),
        (UINT)__GET_EXTERNAL(data__->MW819,)));
    }
    else if ((__case_expression == 82)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW820,),
        (UINT)__GET_EXTERNAL(data__->MW821,),
        (UINT)__GET_EXTERNAL(data__->MW822,),
        (UINT)__GET_EXTERNAL(data__->MW823,),
        (UINT)__GET_EXTERNAL(data__->MW824,),
        (UINT)__GET_EXTERNAL(data__->MW825,),
        (UINT)__GET_EXTERNAL(data__->MW826,),
        (UINT)__GET_EXTERNAL(data__->MW827,),
        (UINT)__GET_EXTERNAL(data__->MW828,),
        (UINT)__GET_EXTERNAL(data__->MW829,)));
    }
    else if ((__case_expression == 83)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW830,),
        (UINT)__GET_EXTERNAL(data__->MW831,),
        (UINT)__GET_EXTERNAL(data__->MW832,),
        (UINT)__GET_EXTERNAL(data__->MW833,),
        (UINT)__GET_EXTERNAL(data__->MW834,),
        (UINT)__GET_EXTERNAL(data__->MW835,),
        (UINT)__GET_EXTERNAL(data__->MW836,),
        (UINT)__GET_EXTERNAL(data__->MW837,),
        (UINT)__GET_EXTERNAL(data__->MW838,),
        (UINT)__GET_EXTERNAL(data__->MW839,)));
    }
    else if ((__case_expression == 84)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW840,),
        (UINT)__GET_EXTERNAL(data__->MW841,),
        (UINT)__GET_EXTERNAL(data__->MW842,),
        (UINT)__GET_EXTERNAL(data__->MW843,),
        (UINT)__GET_EXTERNAL(data__->MW844,),
        (UINT)__GET_EXTERNAL(data__->MW845,),
        (UINT)__GET_EXTERNAL(data__->MW846,),
        (UINT)__GET_EXTERNAL(data__->MW847,),
        (UINT)__GET_EXTERNAL(data__->MW848,),
        (UINT)__GET_EXTERNAL(data__->MW849,)));
    }
    else if ((__case_expression == 85)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW850,),
        (UINT)__GET_EXTERNAL(data__->MW851,),
        (UINT)__GET_EXTERNAL(data__->MW852,),
        (UINT)__GET_EXTERNAL(data__->MW853,),
        (UINT)__GET_EXTERNAL(data__->MW854,),
        (UINT)__GET_EXTERNAL(data__->MW855,),
        (UINT)__GET_EXTERNAL(data__->MW856,),
        (UINT)__GET_EXTERNAL(data__->MW857,),
        (UINT)__GET_EXTERNAL(data__->MW858,),
        (UINT)__GET_EXTERNAL(data__->MW859,)));
    }
    else if ((__case_expression == 86)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW860,),
        (UINT)__GET_EXTERNAL(data__->MW861,),
        (UINT)__GET_EXTERNAL(data__->MW862,),
        (UINT)__GET_EXTERNAL(data__->MW863,),
        (UINT)__GET_EXTERNAL(data__->MW864,),
        (UINT)__GET_EXTERNAL(data__->MW865,),
        (UINT)__GET_EXTERNAL(data__->MW866,),
        (UINT)__GET_EXTERNAL(data__->MW867,),
        (UINT)__GET_EXTERNAL(data__->MW868,),
        (UINT)__GET_EXTERNAL(data__->MW869,)));
    }
    else if ((__case_expression == 87)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW870,),
        (UINT)__GET_EXTERNAL(data__->MW871,),
        (UINT)__GET_EXTERNAL(data__->MW872,),
        (UINT)__GET_EXTERNAL(data__->MW873,),
        (UINT)__GET_EXTERNAL(data__->MW874,),
        (UINT)__GET_EXTERNAL(data__->MW875,),
        (UINT)__GET_EXTERNAL(data__->MW876,),
        (UINT)__GET_EXTERNAL(data__->MW877,),
        (UINT)__GET_EXTERNAL(data__->MW878,),
        (UINT)__GET_EXTERNAL(data__->MW879,)));
    }
    else if ((__case_expression == 88)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW880,),
        (UINT)__GET_EXTERNAL(data__->MW881,),
        (UINT)__GET_EXTERNAL(data__->MW882,),
        (UINT)__GET_EXTERNAL(data__->MW883,),
        (UINT)__GET_EXTERNAL(data__->MW884,),
        (UINT)__GET_EXTERNAL(data__->MW885,),
        (UINT)__GET_EXTERNAL(data__->MW886,),
        (UINT)__GET_EXTERNAL(data__->MW887,),
        (UINT)__GET_EXTERNAL(data__->MW888,),
        (UINT)__GET_EXTERNAL(data__->MW889,)));
    }
    else if ((__case_expression == 89)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW890,),
        (UINT)__GET_EXTERNAL(data__->MW891,),
        (UINT)__GET_EXTERNAL(data__->MW892,),
        (UINT)__GET_EXTERNAL(data__->MW893,),
        (UINT)__GET_EXTERNAL(data__->MW894,),
        (UINT)__GET_EXTERNAL(data__->MW895,),
        (UINT)__GET_EXTERNAL(data__->MW896,),
        (UINT)__GET_EXTERNAL(data__->MW897,),
        (UINT)__GET_EXTERNAL(data__->MW898,),
        (UINT)__GET_EXTERNAL(data__->MW899,)));
    }
    else if ((__case_expression == 90)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW900,),
        (UINT)__GET_EXTERNAL(data__->MW901,),
        (UINT)__GET_EXTERNAL(data__->MW902,),
        (UINT)__GET_EXTERNAL(data__->MW903,),
        (UINT)__GET_EXTERNAL(data__->MW904,),
        (UINT)__GET_EXTERNAL(data__->MW905,),
        (UINT)__GET_EXTERNAL(data__->MW906,),
        (UINT)__GET_EXTERNAL(data__->MW907,),
        (UINT)__GET_EXTERNAL(data__->MW908,),
        (UINT)__GET_EXTERNAL(data__->MW909,)));
    }
    else if ((__case_expression == 91)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW910,),
        (UINT)__GET_EXTERNAL(data__->MW911,),
        (UINT)__GET_EXTERNAL(data__->MW912,),
        (UINT)__GET_EXTERNAL(data__->MW913,),
        (UINT)__GET_EXTERNAL(data__->MW914,),
        (UINT)__GET_EXTERNAL(data__->MW915,),
        (UINT)__GET_EXTERNAL(data__->MW916,),
        (UINT)__GET_EXTERNAL(data__->MW917,),
        (UINT)__GET_EXTERNAL(data__->MW918,),
        (UINT)__GET_EXTERNAL(data__->MW919,)));
    }
    else if ((__case_expression == 92)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW920,),
        (UINT)__GET_EXTERNAL(data__->MW921,),
        (UINT)__GET_EXTERNAL(data__->MW922,),
        (UINT)__GET_EXTERNAL(data__->MW923,),
        (UINT)__GET_EXTERNAL(data__->MW924,),
        (UINT)__GET_EXTERNAL(data__->MW925,),
        (UINT)__GET_EXTERNAL(data__->MW926,),
        (UINT)__GET_EXTERNAL(data__->MW927,),
        (UINT)__GET_EXTERNAL(data__->MW928,),
        (UINT)__GET_EXTERNAL(data__->MW929,)));
    }
    else if ((__case_expression == 93)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW930,),
        (UINT)__GET_EXTERNAL(data__->MW931,),
        (UINT)__GET_EXTERNAL(data__->MW932,),
        (UINT)__GET_EXTERNAL(data__->MW933,),
        (UINT)__GET_EXTERNAL(data__->MW934,),
        (UINT)__GET_EXTERNAL(data__->MW935,),
        (UINT)__GET_EXTERNAL(data__->MW936,),
        (UINT)__GET_EXTERNAL(data__->MW937,),
        (UINT)__GET_EXTERNAL(data__->MW938,),
        (UINT)__GET_EXTERNAL(data__->MW939,)));
    }
    else if ((__case_expression == 94)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW940,),
        (UINT)__GET_EXTERNAL(data__->MW941,),
        (UINT)__GET_EXTERNAL(data__->MW942,),
        (UINT)__GET_EXTERNAL(data__->MW943,),
        (UINT)__GET_EXTERNAL(data__->MW944,),
        (UINT)__GET_EXTERNAL(data__->MW945,),
        (UINT)__GET_EXTERNAL(data__->MW946,),
        (UINT)__GET_EXTERNAL(data__->MW947,),
        (UINT)__GET_EXTERNAL(data__->MW948,),
        (UINT)__GET_EXTERNAL(data__->MW949,)));
    }
    else if ((__case_expression == 95)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW950,),
        (UINT)__GET_EXTERNAL(data__->MW951,),
        (UINT)__GET_EXTERNAL(data__->MW952,),
        (UINT)__GET_EXTERNAL(data__->MW953,),
        (UINT)__GET_EXTERNAL(data__->MW954,),
        (UINT)__GET_EXTERNAL(data__->MW955,),
        (UINT)__GET_EXTERNAL(data__->MW956,),
        (UINT)__GET_EXTERNAL(data__->MW957,),
        (UINT)__GET_EXTERNAL(data__->MW958,),
        (UINT)__GET_EXTERNAL(data__->MW959,)));
    }
    else if ((__case_expression == 96)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW960,),
        (UINT)__GET_EXTERNAL(data__->MW961,),
        (UINT)__GET_EXTERNAL(data__->MW962,),
        (UINT)__GET_EXTERNAL(data__->MW963,),
        (UINT)__GET_EXTERNAL(data__->MW964,),
        (UINT)__GET_EXTERNAL(data__->MW965,),
        (UINT)__GET_EXTERNAL(data__->MW966,),
        (UINT)__GET_EXTERNAL(data__->MW967,),
        (UINT)__GET_EXTERNAL(data__->MW968,),
        (UINT)__GET_EXTERNAL(data__->MW969,)));
    }
    else if ((__case_expression == 97)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW970,),
        (UINT)__GET_EXTERNAL(data__->MW971,),
        (UINT)__GET_EXTERNAL(data__->MW972,),
        (UINT)__GET_EXTERNAL(data__->MW973,),
        (UINT)__GET_EXTERNAL(data__->MW974,),
        (UINT)__GET_EXTERNAL(data__->MW975,),
        (UINT)__GET_EXTERNAL(data__->MW976,),
        (UINT)__GET_EXTERNAL(data__->MW977,),
        (UINT)__GET_EXTERNAL(data__->MW978,),
        (UINT)__GET_EXTERNAL(data__->MW979,)));
    }
    else if ((__case_expression == 98)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW980,),
        (UINT)__GET_EXTERNAL(data__->MW981,),
        (UINT)__GET_EXTERNAL(data__->MW982,),
        (UINT)__GET_EXTERNAL(data__->MW983,),
        (UINT)__GET_EXTERNAL(data__->MW984,),
        (UINT)__GET_EXTERNAL(data__->MW985,),
        (UINT)__GET_EXTERNAL(data__->MW986,),
        (UINT)__GET_EXTERNAL(data__->MW987,),
        (UINT)__GET_EXTERNAL(data__->MW988,),
        (UINT)__GET_EXTERNAL(data__->MW989,)));
    }
    else if ((__case_expression == 99)) {
      __SET_VAR(data__->,DEF,,M_DEF(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->MW990,),
        (UINT)__GET_EXTERNAL(data__->MW991,),
        (UINT)__GET_EXTERNAL(data__->MW992,),
        (UINT)__GET_EXTERNAL(data__->MW993,),
        (UINT)__GET_EXTERNAL(data__->MW994,),
        (UINT)__GET_EXTERNAL(data__->MW995,),
        (UINT)__GET_EXTERNAL(data__->MW996,),
        (UINT)__GET_EXTERNAL(data__->MW997,),
        (UINT)__GET_EXTERNAL(data__->MW998,),
        (UINT)__GET_EXTERNAL(data__->MW999,)));
    }
  };

  goto __end;

__end:
  return;
} // GETDEF_body__() 





// FUNCTION
TPOS8 SET_SH(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PSH, 
  TSHAPE SHAPE)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 SET_SH = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SET_SH;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (SET_SH = ( __GET_GLOBAL_ITS()->SH.table[PSH] = SHAPE, PSH) ); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SET_SH;
}


void READITEM_init__(READITEM *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(THEAD,HDR,data__->HDR,retain)
  __INIT_VAR(data__->PIT,-1,retain)
  __INIT_VAR(data__->IRES,TERROR__E_SUCCESS,retain)
  {
    static const TDEF temp = {0,0,0,{{0,0,0}},{{100,100,100}},0,0,0};
    __SET_VAR(data__->,DEF,,temp);
  }
  {
    static const TITEM temp = {0,-1,-1,{{__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0)}},-1,0,{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};
    __SET_VAR(data__->,ITEM,,temp);
  }
  {
    static const TSHAPE temp = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
    __SET_VAR(data__->,SHAPE,,temp);
  }
  {
    static const P_INT temp = {-1,-1};
    __SET_VAR(data__->,OFF,,temp);
  }
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  GETDEF_init__(&data__->_GETDEF,retain);
}

// Code part
void READITEM_body__(READITEM *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,IRES,,TERROR__E_SUCCESS);
  if (((__GET_VAR(data__->PIT,) < 0) || (__GET_VAR(data__->PIT,) >= __GET_EXTERNAL(data__->HDR,.NI)))) {
    __SET_VAR(data__->,IRES,,TERROR__E_INDEX);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->_GETDEF.,I,,__GET_VAR(data__->PIT,));
  GETDEF_body__(&data__->_GETDEF);
  __SET_VAR(data__->,DEF,,__GET_VAR(data__->_GETDEF.DEF));
  if (((__GET_EXTERNAL(data__->HDR,.NV) != 0) && (__GET_VAR(data__->DEF,.IV) >= __GET_EXTERNAL(data__->HDR,.NV)))) {
    __SET_VAR(data__->,IRES,,TERROR__E_VALUE);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((__GET_EXTERNAL(data__->HDR,.NM) == 0) || (__GET_VAR(data__->DEF,.IM) >= __GET_EXTERNAL(data__->HDR,.NM)))) {
    __SET_VAR(data__->,IRES,,TERROR__E_MATER);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((__GET_EXTERNAL(data__->HDR,.NG) == 0) || (__GET_VAR(data__->DEF,.IG) >= __GET_EXTERNAL(data__->HDR,.NG)))) {
    __SET_VAR(data__->,IRES,,TERROR__E_GRID);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,ITEM,.ID,__GET_VAR(data__->DEF,.ID));
  __SET_VAR(data__->,ITEM,.IM,__GET_VAR(data__->DEF,.IM));
  __SET_VAR(data__->,ITEM,.IV,__GET_VAR(data__->DEF,.IV));
  __SET_VAR(data__->,ITEM,.PAR,-1);
  __SET_VAR(data__->,ITEM,.NUM,0);
  __SET_VAR(data__->,SHAPE,.WF,__GET_VAR(data__->DEF,.CF));
  __SET_VAR(data__->,SHAPE,.KN.table[(0) - (0)],__GET_VAR(data__->DEF,.R0));
  __SET_VAR(data__->,SHAPE,.KN.table[(1) - (0)],WORD_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)SHR__WORD__WORD__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)(__GET_VAR(data__->DEF,.CF) & 0xF00),
      (SINT)8)));
  __SET_VAR(data__->,SHAPE,.KN.table[(2) - (0)],0);
  __SET_VAR(data__->,SHAPE,.PL.table[(0) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.XYZ.table[(0) - (0)])));
  __SET_VAR(data__->,SHAPE,.PL.table[(1) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.XYZ.table[(1) - (0)])));
  __SET_VAR(data__->,SHAPE,.PL.table[(2) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.XYZ.table[(2) - (0)])));
  __SET_VAR(data__->,SHAPE,.LX.table[(0) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.LWH.table[(0) - (0)])));
  __SET_VAR(data__->,SHAPE,.LX.table[(1) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.LWH.table[(1) - (0)])));
  __SET_VAR(data__->,SHAPE,.LX.table[(2) - (0)],INT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)__GET_VAR(data__->DEF,.LWH.table[(2) - (0)])));
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
__exit:
  #undef GetFbVar
  #undef SetFbVar
;
  if ((__GET_VAR(data__->IRES,) == TERROR__E_SUCCESS)) {
    __SET_VAR(data__->,PIT,,SET_SH(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)__GET_VAR(data__->PIT,),
      (TSHAPE)__GET_VAR(data__->SHAPE,)));
    __SET_VAR(data__->,PIT,,SET_IT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)__GET_VAR(data__->PIT,),
      (TITEM)__GET_VAR(data__->ITEM,)));
  };

  goto __end;

__end:
  return;
} // READITEM_body__() 





// FUNCTION
INT T2C(
  BOOL EN, 
  BOOL *__ENO, 
  REAL TEMP)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  INT T2C = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return T2C;
  }
  T2C = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(TEMP * 100.0));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return T2C;
}


// FUNCTION
TVAR _VAR(
  BOOL EN, 
  BOOL *__ENO, 
  INT A, 
  INT B, 
  BOOL C)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAR _VAR = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _VAR;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    union { // 32-бит (4 байта)
      TVAR tv;
      struct {  // Значение (var)
        USINT  R:1;     // Флаг R (для var = 0)
          INT  A:15;    // Значение A (актуальное)
        USINT  C:1;     // Флаг C (1-расчёт готов)
          INT  B:15;    // Значение B (предыдущее)
      };
      struct {  // Ссылка   (ref)
        USINT  r:1;     // Флаг r (для ref = 1)
        USINT  d:2;     // Направление (0,1,2,3)
        USINT  p:8;     // Позиция элемента
        USINT  i:7;     // Индекс сетки по I (0..127)
        USINT  j:7;     // Индекс сетки по J (0..127)
        USINT  k:7;     // Индекс сетки по K (0..127)
      };
    } var = {0};
    #pragma pack(pop)
    
    var.A = A;  // Значение A (текущее)
    var.B = B;  // Значение B (предыдущее)
    var.C = C;  // Флаг "расчёт выполнен" (A!=B)
    
    _VAR = var.tv;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _VAR;
}


// FUNCTION
TPOS8 IT_INITTEMP(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  REAL TEMP, 
  BOOL CLR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  INT I = 0;
  INT J = 0;
  INT K = 0;
  INT M = 0;
  P_INT OFF = {-1,-1};
  TPOS8 IT_INITTEMP = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_INITTEMP;
  }
  SH = GET_SH(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  for(I = 0; I <= (SH.KN.table[(0) - (0)] - 1); I++) {
    for(J = 0; J <= (SH.KN.table[(1) - (0)] - 1); J++) {
      for(K = 0; K <= (SH.KN.table[(2) - (0)] - 1); K++) {
        OFF = KNOFF(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)SH.KN.table[(0) - (0)],
          (INT)SH.KN.table[(1) - (0)],
          (INT)SH.KN.table[(2) - (0)],
          (INT)I,
          (INT)J,
          (INT)K);
        if (CLR) {
          PIT = SET_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (THANDLE)ITS_GR(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)0),
            (TPOS8)PIT,
            (P_INT)OFF,
            (TVAR)0,
            (USINT)0xFF);
        };
        PIT = SET_VAR(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (THANDLE)ITS_GR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)0),
          (TPOS8)PIT,
          (P_INT)OFF,
          (TVAR)_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)T2C(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (REAL)TEMP),
            (INT)T2C(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (REAL)TEMP),
            (BOOL)__BOOL_LITERAL(FALSE)),
          (USINT)0);
      };
    };
  };
  IT_INITTEMP = PIT;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_INITTEMP;
}


// FUNCTION
TITEM GET_IT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITEM GET_IT = {0,-1,-1,{{__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0)}},-1,0,{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_IT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_IT = __GET_GLOBAL_ITS()->IT.table[PIT]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_IT;
}


// FUNCTION
BOOL DO_VALIDATE(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  TITEM ITEM = {0,-1,-1,{{__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0)}},-1,0,{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  USINT AX = 0;
  BOOL BAX = __BOOL_LITERAL(FALSE);
  BOOL BCX = __BOOL_LITERAL(FALSE);
  BOOL BOX = __BOOL_LITERAL(FALSE);
  P_INT OFF = {-1,-1};
  INT I = 0;
  INT J = 0;
  INT K = 0;
  INT M = 0;
  TPOS8 IP = 0;
  __ARRAY_OF_REAL_3 P0 = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 LX = {{0.0,0.0,0.0}};
  TAXO O = {0,0,0};
  __ARRAY_OF_P_RESI_3 RI = {{{0.0,0},{0.0,0},{0.0,0}}};
  P_RESI TEMP = {0.0,0};
  REAL RTEMP = 0.0;
  BOOL BRES = __BOOL_LITERAL(FALSE);
  REAL PI = 180.0;
  REAL PI2 = 360.0;
  REAL PI_RAD = 3.1415926535897932384626433832795;
  BOOL DO_VALIDATE = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_VALIDATE;
  }
  DO_VALIDATE = ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE));
  if (!(DO_VALIDATE)) {
    goto __end;
  };
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0));
  while ((IT.ITEM != -1)) {
    ITEM = GET_IT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM);
    SH = GET_SH(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM);
    AX = WORD_TO_USINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)SHR__WORD__WORD__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (WORD)(SH.WF & 0x3000),
        (SINT)12));
    BCX = ((SH.WF & 0x4000) != 0);
    BAX = (AX != 0);
    BOX = (!(BCX) || BAX);
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_DOWN)) {
        if (((ITEM.NUM > 0) && BOX)) {
          P0.table[(0) - (0)] = (P0.table[(0) - (0)] + SH.PL.table[(0) - (0)]);
          P0.table[(1) - (0)] = (P0.table[(1) - (0)] + SH.PL.table[(1) - (0)]);
          P0.table[(2) - (0)] = (P0.table[(2) - (0)] + SH.PL.table[(2) - (0)]);
        };
      }
      else if ((__case_expression == TDIR__DIR_UP)) {
        if (((ITEM.NUM > 0) && BOX)) {
          P0.table[(0) - (0)] = (P0.table[(0) - (0)] - SH.PL.table[(0) - (0)]);
          P0.table[(1) - (0)] = (P0.table[(1) - (0)] - SH.PL.table[(1) - (0)]);
          P0.table[(2) - (0)] = (P0.table[(2) - (0)] - SH.PL.table[(2) - (0)]);
        };
        SH.P0.table[(0) - (0)] = P0.table[(0) - (0)];
        SH.P0.table[(1) - (0)] = P0.table[(1) - (0)];
        SH.P0.table[(2) - (0)] = P0.table[(2) - (0)];
        if (BCX) {
          if (!(BAX)) {
            IP = ITEM.PAR;
            while ((IP != -1)) {
              AX = SH_GET_AX(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TSHAPE)GET_SH(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (TPOS8)IP));
              IP = IT_IP(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IP);
              if ((AX != 0)) {
                break;
              };
            };
            if ((AX == 0)) {
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error
              #undef GetFbVar
              #undef SetFbVar
;
            };
          };
          O = AXO(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (USINT)AX,
            (BOOL)__BOOL_LITERAL(TRUE));
          if (BAX) {
            SH.P0.table[(0) - (0)] = (SH.P0.table[(0) - (0)] + SH.PL.table[(0) - (0)]);
            SH.P0.table[(1) - (0)] = (SH.P0.table[(1) - (0)] + SH.PL.table[(1) - (0)]);
            SH.P0.table[(2) - (0)] = (SH.P0.table[(2) - (0)] + SH.PL.table[(2) - (0)]);
            SH.PL.table[(O.X) - (0)] = INT_TO_REAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)SH.KN.table[(0) - (0)]);
            SH.PL.table[(O.Y) - (0)] = (INT_TO_REAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)SH.KN.table[(1) - (0)]) * (PI / 8.0));
            SH.PL.table[(O.Z) - (0)] = INT_TO_REAL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)SH.KN.table[(2) - (0)]);
          };
          SH.PL.table[(O.Y) - (0)] = ANGLE(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (REAL)SH.PL.table[(O.Y) - (0)],
            (REAL) -(PI),
            (REAL)360.0);
          SH.LX.table[(O.Y) - (0)] = ANGLE(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (REAL)SH.LX.table[(O.Y) - (0)],
            (REAL)0.0,
            (REAL)360.0);
          if ((SH.LX.table[(O.Y) - (0)] == 0.0)) {
            SH.LX.table[(O.Y) - (0)] = PI2;
          };
        } else {
          AX = 0;
        };
        SH = SH_SET_AX(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TSHAPE)SH,
          (USINT)AX);
        LX = SH.LX;
        if ((AX != 0)) {
          LX.table[(O.Y) - (0)] = (((LX.table[(O.X) - (0)] * LX.table[(O.Y) - (0)]) * PI_RAD) / 360.0);
        };
        RI.table[(0) - (0)].A = LX.table[(0) - (0)];
        RI.table[(0) - (0)].B = 0;
        RI.table[(1) - (0)].A = LX.table[(1) - (0)];
        RI.table[(1) - (0)].B = 1;
        RI.table[(2) - (0)].A = LX.table[(2) - (0)];
        RI.table[(2) - (0)].B = 2;
        for(I = 0; I <= 1; I++) {
          for(J = 0; J <= (1 - I); J++) {
            if ((RI.table[(J) - (0)].A > RI.table[((J + 1)) - (0)].A)) {
              TEMP = RI.table[(J) - (0)];
              RI.table[(J) - (0)] = RI.table[((J + 1)) - (0)];
              RI.table[((J + 1)) - (0)] = TEMP;
            };
          };
        };
        if ((((RI.table[(1) - (0)].A + RI.table[(2) - (0)].A) / RI.table[(0) - (0)].A) > 4.0)) {
          SH.KN.table[(RI.table[(0) - (0)].B) - (0)] = 8;
          if (((RI.table[(2) - (0)].A / RI.table[(1) - (0)].A) > 4.0)) {
            SH.KN.table[(RI.table[(1) - (0)].B) - (0)] = 8;
            SH.KN.table[(RI.table[(2) - (0)].B) - (0)] = 64;
          } else {
            SH.KN.table[(RI.table[(1) - (0)].B) - (0)] = 16;
            SH.KN.table[(RI.table[(2) - (0)].B) - (0)] = 32;
          };
        } else {
          SH.KN.table[(0) - (0)] = 16;
          SH.KN.table[(1) - (0)] = 16;
          SH.KN.table[(2) - (0)] = 16;
        };
      }
    };
    if (!(((IT.ITEM >= 1) && (IT.ITEM <= 99)))) {
      ITEM.IM = 0;
    };
    IT.ITEM = SET_SH(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM,
      (TSHAPE)SH);
    IT.ITEM = SET_IT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM,
      (TITEM)ITEM);
    IT.ITEM = IT_INITTEMP(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM,
      (REAL)20.0,
      (BOOL)__BOOL_LITERAL(TRUE));
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  DO_VALIDATE = __BOOL_LITERAL(TRUE);
  goto __end;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __error: 
  #undef GetFbVar
  #undef SetFbVar
;
  DO_VALIDATE = __BOOL_LITERAL(FALSE);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_VALIDATE;
}


// FUNCTION
TRES M_RES(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5, 
  UDINT MD6, 
  UDINT MD7, 
  UDINT MD8, 
  UDINT MD9)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TRES M_RES = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),0,0,{{0,0,0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_RES;
  }
  M_RES.DR = MD0;
  M_RES.TR = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_RES.FP = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_RES.ER = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD3 / 65536));
  M_RES.FL = UDINT_TO_WORD(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD3,
      (UDINT)65536));
  M_RES.RV.table[(0) - (0)] = MD4;
  M_RES.RV.table[(1) - (0)] = MD5;
  M_RES.RV.table[(2) - (0)] = MD6;
  M_RES.RV.table[(3) - (0)] = MD7;
  M_RES.RV.table[(4) - (0)] = MD8;
  M_RES.RV.table[(5) - (0)] = MD9;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_RES;
}


void GETRES_init__(GETRES *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD490,data__->MD490,retain)
  __INIT_EXTERNAL(UDINT,MD491,data__->MD491,retain)
  __INIT_EXTERNAL(UDINT,MD492,data__->MD492,retain)
  __INIT_EXTERNAL(UDINT,MD493,data__->MD493,retain)
  __INIT_EXTERNAL(UDINT,MD494,data__->MD494,retain)
  __INIT_EXTERNAL(UDINT,MD495,data__->MD495,retain)
  __INIT_EXTERNAL(UDINT,MD496,data__->MD496,retain)
  __INIT_EXTERNAL(UDINT,MD497,data__->MD497,retain)
  __INIT_EXTERNAL(UDINT,MD498,data__->MD498,retain)
  __INIT_EXTERNAL(UDINT,MD499,data__->MD499,retain)
  {
    static const TRES temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),0,0,{{0,0,0,0,0,0}}};
    __SET_VAR(data__->,RES,,temp);
  }
}

// Code part
void GETRES_body__(GETRES *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,RES,,M_RES(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_EXTERNAL(data__->MD490,),
    (UDINT)__GET_EXTERNAL(data__->MD491,),
    (UDINT)__GET_EXTERNAL(data__->MD492,),
    (UDINT)__GET_EXTERNAL(data__->MD493,),
    (UDINT)__GET_EXTERNAL(data__->MD494,),
    (UDINT)__GET_EXTERNAL(data__->MD495,),
    (UDINT)__GET_EXTERNAL(data__->MD496,),
    (UDINT)__GET_EXTERNAL(data__->MD497,),
    (UDINT)__GET_EXTERNAL(data__->MD498,),
    (UDINT)__GET_EXTERNAL(data__->MD499,)));

  goto __end;

__end:
  return;
} // GETRES_body__() 





void DISTRES_init__(DISTRES *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MD0,0,retain)
  __INIT_VAR(data__->MD1,0,retain)
  __INIT_VAR(data__->MD2,0,retain)
  __INIT_VAR(data__->MD3,0,retain)
  __INIT_VAR(data__->MD4,0,retain)
  __INIT_VAR(data__->MD5,0,retain)
  __INIT_VAR(data__->MD6,0,retain)
  __INIT_VAR(data__->MD7,0,retain)
  __INIT_VAR(data__->MD8,0,retain)
  __INIT_VAR(data__->MD9,0,retain)
  {
    static const TRES temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),0,0,{{0,0,0,0,0,0}}};
    __SET_VAR(data__->,RES,,temp);
  }
}

// Code part
void DISTRES_body__(DISTRES *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MD0,,__GET_VAR(data__->RES,.DR));
  __SET_VAR(data__->,MD1,,TIME_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->RES,.TR)));
  __SET_VAR(data__->,MD2,,TIME_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TIME)__GET_VAR(data__->RES,.FP)));
  __SET_VAR(data__->,MD3,,((UINT_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_VAR(data__->RES,.ER)) * 65536) + WORD_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (WORD)__GET_VAR(data__->RES,.FL))));
  __SET_VAR(data__->,MD4,,__GET_VAR(data__->RES,.RV.table[(0) - (0)]));
  __SET_VAR(data__->,MD5,,__GET_VAR(data__->RES,.RV.table[(1) - (0)]));
  __SET_VAR(data__->,MD6,,__GET_VAR(data__->RES,.RV.table[(2) - (0)]));
  __SET_VAR(data__->,MD7,,__GET_VAR(data__->RES,.RV.table[(3) - (0)]));
  __SET_VAR(data__->,MD8,,__GET_VAR(data__->RES,.RV.table[(4) - (0)]));
  __SET_VAR(data__->,MD9,,__GET_VAR(data__->RES,.RV.table[(5) - (0)]));

  goto __end;

__end:
  return;
} // DISTRES_body__() 





// FUNCTION
TMAT M_MAT(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TMAT M_MAT = {0.11,1666.0,880.3,198.1};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_MAT;
  }
  M_MAT.KT = UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD0);
  M_MAT.CP = UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_MAT.PL = UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_MAT.MD = UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_MAT;
}


void GETMAT_init__(GETMAT *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD22,data__->MD22,retain)
  __INIT_EXTERNAL(UDINT,MD23,data__->MD23,retain)
  __INIT_EXTERNAL(UDINT,MD24,data__->MD24,retain)
  __INIT_EXTERNAL(UDINT,MD25,data__->MD25,retain)
  __INIT_EXTERNAL(UDINT,MD26,data__->MD26,retain)
  __INIT_EXTERNAL(UDINT,MD27,data__->MD27,retain)
  __INIT_EXTERNAL(UDINT,MD28,data__->MD28,retain)
  __INIT_EXTERNAL(UDINT,MD29,data__->MD29,retain)
  __INIT_EXTERNAL(UDINT,MD30,data__->MD30,retain)
  __INIT_EXTERNAL(UDINT,MD31,data__->MD31,retain)
  __INIT_EXTERNAL(UDINT,MD32,data__->MD32,retain)
  __INIT_EXTERNAL(UDINT,MD33,data__->MD33,retain)
  __INIT_EXTERNAL(UDINT,MD34,data__->MD34,retain)
  __INIT_EXTERNAL(UDINT,MD35,data__->MD35,retain)
  __INIT_EXTERNAL(UDINT,MD36,data__->MD36,retain)
  __INIT_EXTERNAL(UDINT,MD37,data__->MD37,retain)
  __INIT_EXTERNAL(UDINT,MD38,data__->MD38,retain)
  __INIT_EXTERNAL(UDINT,MD39,data__->MD39,retain)
  __INIT_EXTERNAL(UDINT,MD40,data__->MD40,retain)
  __INIT_EXTERNAL(UDINT,MD41,data__->MD41,retain)
  __INIT_EXTERNAL(UDINT,MD42,data__->MD42,retain)
  __INIT_EXTERNAL(UDINT,MD43,data__->MD43,retain)
  __INIT_EXTERNAL(UDINT,MD44,data__->MD44,retain)
  __INIT_EXTERNAL(UDINT,MD45,data__->MD45,retain)
  __INIT_EXTERNAL(UDINT,MD46,data__->MD46,retain)
  __INIT_EXTERNAL(UDINT,MD47,data__->MD47,retain)
  __INIT_EXTERNAL(UDINT,MD48,data__->MD48,retain)
  __INIT_EXTERNAL(UDINT,MD49,data__->MD49,retain)
  __INIT_EXTERNAL(UDINT,MD50,data__->MD50,retain)
  __INIT_EXTERNAL(UDINT,MD51,data__->MD51,retain)
  __INIT_EXTERNAL(UDINT,MD52,data__->MD52,retain)
  __INIT_EXTERNAL(UDINT,MD53,data__->MD53,retain)
  __INIT_EXTERNAL(UDINT,MD54,data__->MD54,retain)
  __INIT_EXTERNAL(UDINT,MD55,data__->MD55,retain)
  __INIT_EXTERNAL(UDINT,MD56,data__->MD56,retain)
  __INIT_EXTERNAL(UDINT,MD57,data__->MD57,retain)
  __INIT_EXTERNAL(UDINT,MD58,data__->MD58,retain)
  __INIT_EXTERNAL(UDINT,MD59,data__->MD59,retain)
  __INIT_EXTERNAL(UDINT,MD60,data__->MD60,retain)
  __INIT_EXTERNAL(UDINT,MD61,data__->MD61,retain)
  __INIT_EXTERNAL(UDINT,MD62,data__->MD62,retain)
  __INIT_EXTERNAL(UDINT,MD63,data__->MD63,retain)
  __INIT_EXTERNAL(UDINT,MD64,data__->MD64,retain)
  __INIT_EXTERNAL(UDINT,MD65,data__->MD65,retain)
  __INIT_EXTERNAL(UDINT,MD66,data__->MD66,retain)
  __INIT_EXTERNAL(UDINT,MD67,data__->MD67,retain)
  __INIT_EXTERNAL(UDINT,MD68,data__->MD68,retain)
  __INIT_EXTERNAL(UDINT,MD69,data__->MD69,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TMAT temp = {0.11,1666.0,880.3,198.1};
    __SET_VAR(data__->,MAT,,temp);
  }
}

// Code part
void GETMAT_body__(GETMAT *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD22,),
        (UDINT)__GET_EXTERNAL(data__->MD23,),
        (UDINT)__GET_EXTERNAL(data__->MD24,),
        (UDINT)__GET_EXTERNAL(data__->MD25,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD26,),
        (UDINT)__GET_EXTERNAL(data__->MD27,),
        (UDINT)__GET_EXTERNAL(data__->MD28,),
        (UDINT)__GET_EXTERNAL(data__->MD29,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD30,),
        (UDINT)__GET_EXTERNAL(data__->MD31,),
        (UDINT)__GET_EXTERNAL(data__->MD32,),
        (UDINT)__GET_EXTERNAL(data__->MD33,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD34,),
        (UDINT)__GET_EXTERNAL(data__->MD35,),
        (UDINT)__GET_EXTERNAL(data__->MD36,),
        (UDINT)__GET_EXTERNAL(data__->MD37,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD38,),
        (UDINT)__GET_EXTERNAL(data__->MD39,),
        (UDINT)__GET_EXTERNAL(data__->MD40,),
        (UDINT)__GET_EXTERNAL(data__->MD41,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD42,),
        (UDINT)__GET_EXTERNAL(data__->MD43,),
        (UDINT)__GET_EXTERNAL(data__->MD44,),
        (UDINT)__GET_EXTERNAL(data__->MD45,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD46,),
        (UDINT)__GET_EXTERNAL(data__->MD47,),
        (UDINT)__GET_EXTERNAL(data__->MD48,),
        (UDINT)__GET_EXTERNAL(data__->MD49,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD50,),
        (UDINT)__GET_EXTERNAL(data__->MD51,),
        (UDINT)__GET_EXTERNAL(data__->MD52,),
        (UDINT)__GET_EXTERNAL(data__->MD53,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD54,),
        (UDINT)__GET_EXTERNAL(data__->MD55,),
        (UDINT)__GET_EXTERNAL(data__->MD56,),
        (UDINT)__GET_EXTERNAL(data__->MD57,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD58,),
        (UDINT)__GET_EXTERNAL(data__->MD59,),
        (UDINT)__GET_EXTERNAL(data__->MD60,),
        (UDINT)__GET_EXTERNAL(data__->MD61,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD62,),
        (UDINT)__GET_EXTERNAL(data__->MD63,),
        (UDINT)__GET_EXTERNAL(data__->MD64,),
        (UDINT)__GET_EXTERNAL(data__->MD65,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,MAT,,M_MAT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD66,),
        (UDINT)__GET_EXTERNAL(data__->MD67,),
        (UDINT)__GET_EXTERNAL(data__->MD68,),
        (UDINT)__GET_EXTERNAL(data__->MD69,)));
    }
  };

  goto __end;

__end:
  return;
} // GETMAT_body__() 





// FUNCTION
BOOL ST_SET_STAT(
  BOOL EN, 
  BOOL *__ENO, 
  TERROR ERR, 
  UINT PAR, 
  STRING STR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_SET_STAT = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_SET_STAT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    __GET_GLOBAL_STAT()->ERR=ERR; 
    __GET_GLOBAL_STAT()->PAR=PAR; 
    __GET_GLOBAL_STAT()->STR=STR;
    LOGMSG(1,NULL,STR,LOGLEVEL__DEBUG,ERR);
    return (ST_SET_STAT=ST_CHECK(1,NULL,FALSE));
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_SET_STAT;
}


// FUNCTION
TVAR VAR_UP(
  BOOL EN, 
  BOOL *__ENO, 
  TVAR TV)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAR VAR_UP = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return VAR_UP;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #pragma pack(push, 4)
    typedef union {
      TVAR tv;
      struct { USINT R:1;   INT A:15; USINT C:1;   INT B:15; };
      struct { USINT r:1; USINT d:2;   SINT p:8; USINT i:7; USINT j:7; USINT k:7; };
    } var_t, *pvar_t;
    #pragma pack(pop)
    pvar_t pvar = (pvar_t)&TV;
    // Если значение не ссылка - "поднимаем" значение A->B!
    if (!pvar->r) {
      //if (pvar->C) 
        pvar->B = (pvar->C=0, pvar->A);
    }
    VAR_UP = TV;
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return VAR_UP;
}


// FUNCTION
TPOS8 SET_CN(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  TCOND COND)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 SET_CN = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SET_CN;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
    __GET_GLOBAL_ITS()->CN.table[PIT] = COND;
    return (SET_CN = PIT);
  
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SET_CN;
}


// FUNCTION
__ARRAY_OF_REAL_3 SH_LOC2ABS(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH, 
  REAL X, 
  REAL Y, 
  REAL Z)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  USINT AX = 0;
  __ARRAY_OF_REAL_3 A = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 B = {{0.0,0.0,0.0}};
  TAXO O = {0,0,0};
  __ARRAY_OF_REAL_3 SH_LOC2ABS = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_LOC2ABS;
  }
  AX = SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH);
  A = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)X,
    (REAL)Y,
    (REAL)Z);
  if ((AX > 0)) {
    O = AXO(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)AX,
      (BOOL)__BOOL_LITERAL(TRUE));
    A.table[(O.Y) - (0)] = RADI(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)A.table[(O.Y) - (0)]);
    B.table[(O.X) - (0)] = (A.table[(O.X) - (0)] * COS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)A.table[(O.Y) - (0)]));
    B.table[(O.Y) - (0)] = (A.table[(O.X) - (0)] * SIN__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)A.table[(O.Y) - (0)]));
    B.table[(O.Z) - (0)] = A.table[(O.Z) - (0)];
  } else {
    B = A;
  };
  SH_LOC2ABS = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(B.table[(0) - (0)] + SH.P0.table[(0) - (0)]),
    (REAL)(B.table[(1) - (0)] + SH.P0.table[(1) - (0)]),
    (REAL)(B.table[(2) - (0)] + SH.P0.table[(2) - (0)]));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_LOC2ABS;
}


// FUNCTION
__ARRAY_OF_REAL_3 SH_DOT2POINT(
  BOOL EN, 
  BOOL *__ENO, 
  TSHAPE SH, 
  INT I, 
  INT J, 
  INT K, 
  BOOL BABS)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_REAL_3 HN = {{0.0,0.0,0.0}};
  USINT AX = 0;
  REAL ANG = 0.0;
  TAXO OX = {0,0,0};
  __ARRAY_OF_REAL_3 P = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 SH_DOT2POINT = {{0,0,0}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SH_DOT2POINT;
  }
  AX = SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH);
  if ((SH.KN.table[(0) - (0)] > 1)) {
    HN.table[(0) - (0)] = (SH.LX.table[(0) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(0) - (0)] - 1)));
  };
  if ((SH.KN.table[(1) - (0)] > 1)) {
    HN.table[(1) - (0)] = (SH.LX.table[(1) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(1) - (0)] - 1)));
  };
  if ((SH.KN.table[(2) - (0)] > 1)) {
    HN.table[(2) - (0)] = (SH.LX.table[(2) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(2) - (0)] - 1)));
  };
  SH_DOT2POINT = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(SH.PL.table[(0) - (0)] + (INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)I) * HN.table[(0) - (0)])),
    (REAL)(SH.PL.table[(1) - (0)] + (INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)J) * HN.table[(1) - (0)])),
    (REAL)(SH.PL.table[(2) - (0)] + (INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)K) * HN.table[(2) - (0)])));
  if ((AX != 0)) {
    OX = AXO(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)AX,
      (BOOL)__BOOL_LITERAL(TRUE));
    P = REFORM(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (WORD)SH.WF,
      (REAL)SH_DOT2POINT.table[(OX.Y) - (0)],
      (REAL)SH_DOT2POINT.table[(OX.X) - (0)],
      (REAL)SH.PL.table[(OX.X) - (0)],
      (REAL)SH.LX.table[(OX.X) - (0)]);
    SH_DOT2POINT.table[(OX.X) - (0)] = P.table[(0) - (0)];
  };
  if (BABS) {
    SH_DOT2POINT = SH_LOC2ABS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TSHAPE)SH,
      (REAL)SH_DOT2POINT.table[(0) - (0)],
      (REAL)SH_DOT2POINT.table[(1) - (0)],
      (REAL)SH_DOT2POINT.table[(2) - (0)]);
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SH_DOT2POINT;
}


// FUNCTION
TPOS8 IT_UPDATE(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_REAL_3 PT = {{0,0,0}};
  __ARRAY_OF_INT_3 KN = {{0,0,0}};
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  P_INT OFF = {-1,-1};
  INT IVAR = 0;
  TVAR TV = -1;
  REAL TMID = 0.0;
  INT COUNT = 0;
  INT I = 0;
  INT J = 0;
  INT K = 0;
  TCOND COND = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
  TPOS8 IT_UPDATE = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_UPDATE;
  }
  SH = GET_SH(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  KN = SH.KN;
  COND.TMIN.V = 16383;
  COND.TMAX.V = -16384;
  for(I = 0; I <= (KN.table[(0) - (0)] - 1); I++) {
    for(J = 0; J <= (KN.table[(1) - (0)] - 1); J++) {
      for(K = 0; K <= (KN.table[(2) - (0)] - 1); K++) {
        OFF = KNOFF(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)KN.table[(0) - (0)],
          (INT)KN.table[(1) - (0)],
          (INT)KN.table[(2) - (0)],
          (INT)I,
          (INT)J,
          (INT)K);
        TV = GET_VAR(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (THANDLE)ITS_GR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)0),
          (TPOS8)PIT,
          (P_INT)OFF,
          (USINT)0);
        IVAR = VAR_V(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TVAR)TV,
          (BOOL)__BOOL_LITERAL(TRUE));
        TMID = (((TMID * INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)COUNT)) + (INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)IVAR) / 100.0)) / INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)(COUNT + 1)));
        if ((IVAR < COND.TMIN.V)) {
          COND.TMIN = _DOT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)IVAR,
            (INT)I,
            (INT)J,
            (INT)K);
        };
        if ((IVAR > COND.TMAX.V)) {
          COND.TMAX = _DOT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)IVAR,
            (INT)I,
            (INT)J,
            (INT)K);
        };
        TV = VAR_UP(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TVAR)TV);
        PIT = SET_VAR(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (THANDLE)ITS_GR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)0),
          (TPOS8)PIT,
          (P_INT)OFF,
          (TVAR)TV,
          (USINT)0);
        COUNT = (COUNT + 1);
      };
    };
  };
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 COND.TMID = (INT)(TMID * 100.0); 
  #undef GetFbVar
  #undef SetFbVar
;
  PT = SH_DOT2POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH,
    (INT)COND.TMIN.A.table[(0) - (0)],
    (INT)COND.TMIN.A.table[(1) - (0)],
    (INT)COND.TMIN.A.table[(2) - (0)],
    (BOOL)__BOOL_LITERAL(TRUE));
  COND.TMIN.A.table[(0) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(0) - (0)]);
  COND.TMIN.A.table[(1) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(1) - (0)]);
  COND.TMIN.A.table[(2) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(2) - (0)]);
  PT = SH_DOT2POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH,
    (INT)COND.TMAX.A.table[(0) - (0)],
    (INT)COND.TMAX.A.table[(1) - (0)],
    (INT)COND.TMAX.A.table[(2) - (0)],
    (BOOL)__BOOL_LITERAL(TRUE));
  COND.TMAX.A.table[(0) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(0) - (0)]);
  COND.TMAX.A.table[(1) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(1) - (0)]);
  COND.TMAX.A.table[(2) - (0)] = REAL_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(2) - (0)]);
  PIT = SET_CN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT,
    (TCOND)COND);
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 // TEST
    if (PIT==53) *__GET_GLOBAL_RTEST() = TMID;
  
  #undef GetFbVar
  #undef SetFbVar
;
  IT_UPDATE = PIT;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_UPDATE;
}


// FUNCTION
BOOL DO_POSTPROC(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  BOOL DO_POSTPROC = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_POSTPROC;
  }
  DO_POSTPROC = ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE));
  if (!(DO_POSTPROC)) {
    goto __end;
  };
  DO_POSTPROC = __BOOL_LITERAL(TRUE);
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  while ((IT.ITEM != -1)) {
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_UP)) {
        IT.ITEM = IT_UPDATE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)IT.ITEM);
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __exit: 
  #undef GetFbVar
  #undef SetFbVar
;
  goto __end;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __error: 
  #undef GetFbVar
  #undef SetFbVar
;
  DO_POSTPROC = ST_SET_STAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TERROR)TERROR__E_POSTPROC,
    (UINT)IT_ID(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM),
    (STRING)__STRING_LITERAL(0,""));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_POSTPROC;
}


// FUNCTION
STRING BYTE2STR(
  BOOL EN, 
  BOOL *__ENO, 
  BYTE BT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  SINT I = 0;
  STRING STR = __STRING_LITERAL(2,"2#");
  STRING BYTE2STR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return BYTE2STR;
  }
  for(I = 7; ((-1) > 0)? (I <= (0)) : (I >= (0)); I += (-1)) {
    if (((BT & SHL__BYTE__BYTE__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (BYTE)1,
      (SINT)I)) != 0)) {
      STR = MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)STR,
        (STRING)__STRING_LITERAL(1,"1"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""));
    } else {
      STR = MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)STR,
        (STRING)__STRING_LITERAL(1,"0"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""));
    };
  };
  BYTE2STR = STR;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return BYTE2STR;
}


// FUNCTION
TVARI M_VAR_IN(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVARI M_VAR_IN = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_VAR_IN;
  }
  M_VAR_IN.DTI = MD0;
  M_VAR_IN.TMI = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_VAR_IN.TOV = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_VAR_IN.MHT = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_VAR_IN.RI1 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD4);
  M_VAR_IN.RI2 = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD5);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_VAR_IN;
}


// FUNCTION
P_RERE ALFA_03(
  BOOL EN, 
  BOOL *__ENO, 
  REAL HT, 
  TMATTER M, 
  REAL TN_0, 
  REAL TQ_0, 
  REAL QN_0, 
  REAL V_0, 
  REAL R_0, 
  BOOL BOUND3)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL D_0 = 0.0;
  REAL E_0 = 0.0;
  REAL B_0 = 0.0;
  REAL K_0 = 0.0;
  REAL H2 = 0.0;
  REAL AT2 = 0.0;
  REAL DE = 0.0;
  REAL DENOM = 0.0;
  P_RERE RES = {0.0,0.0};
  P_RERE ALFA_03 = {0.0,0.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ALFA_03;
  }
  if ((R_0 > 1.0E-5)) {
    if (!(BOUND3)) {
      M.K = 1.0;
    };
    B_0 = (M.K / M.L);
    K_0 = (B_0 * TQ_0);
    if (!(BOUND3)) {
      B_0 = 0.0;
    };
    if ((R_0 < 1.0E5)) {
      E_0 = (M.H / (2.0 * R_0));
    };
    D_0 = ((ABS__REAL__REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)V_0) * M.H) / (2.0 * M.A));
  } else {
    M.H = 0.0;
  };
  H2 = (M.H * M.H);
  AT2 = ((2.0 * M.A) * HT);
  DE = ((1.0 + D_0) - E_0);
  DENOM = (H2 + (AT2 * (1.0 + ((DE * M.H) * B_0))));
  ALFA_03.A = (AT2 / DENOM);
  ALFA_03.B = (((H2 * (TN_0 + (HT * QN_0))) + (((AT2 * DE) * M.H) * K_0)) / DENOM);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ALFA_03;
}


// FUNCTION
P_RERE ALFA_04(
  BOOL EN, 
  BOOL *__ENO, 
  REAL HT, 
  TMATTER M1, 
  TMATTER M2, 
  P_RERE ALFA, 
  REAL TN_0, 
  REAL Q1N_0, 
  REAL Q2N_0)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL A = 0.0;
  REAL B = 0.0;
  REAL F = 0.0;
  P_RERE ALFA_04 = {0.0,0.0};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ALFA_04;
  }
  if (((M1.H < 1.0E-4) || (M2.H < 1.0E-4))) {
    ALFA_04.A = 1.0;
    ALFA_04.B = 0.0;
  } else {
    A = (M1.L / M1.H);
    B = (((((M1.L / M1.H) + (M2.L / M2.H)) + ((M1.L * M1.H) / ((2.0 * M1.A) * HT))) + ((M2.L * M2.H) / ((2.0 * M2.A) * HT))) - ((M2.L / M2.H) * ALFA.A));
    F = (((( -(TN_0) * (((M1.L * M1.H) / ((2.0 * M1.A) * HT)) + ((M2.L * M2.H) / ((2.0 * M2.A) * HT)))) - (((M1.L * M1.H) / (2.0 * M1.A)) * Q1N_0)) - (((M2.L * M2.H) / (2.0 * M2.A)) * Q2N_0)) - ((M2.L / M2.H) * ALFA.B));
    ALFA_04.A = (A / B);
    ALFA_04.B = ( -(F) / B);
  };

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ALFA_04;
}


// FUNCTION
TPOS8 SET_PDT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  USINT IX, 
  DT CDT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 SET_PDT = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return SET_PDT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (SET_PDT = (__GET_GLOBAL_ITS()->IT.table[PIT].PDT.table[IX] = CDT, PIT)); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return SET_PDT;
}


// FUNCTION
TMAT GET_MT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PMT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TMAT GET_MT = {0.11,1666.0,880.3,198.1};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_MT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_MT = __GET_GLOBAL_STS()->MT.table[PMT]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_MT;
}


// FUNCTION
TDOT LINK_VAR(
  BOOL EN, 
  BOOL *__ENO, 
  THANDLE HGR, 
  TPOS8 PGR, 
  TSHAPE SH, 
  INT I, 
  INT J, 
  INT K, 
  USINT IX, 
  TPOS8 IGN, 
  REAL DX, 
  REAL DYZ)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL MX = 0.0;
  REAL MY = 0.0;
  REAL MZ = 0.0;
  __ARRAY_OF_REAL_3 PT = {{0.0,0.0,0.0}};
  TDOT DOT = {0,{{0,0,0}}};
  TDOT LINK_VAR = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return LINK_VAR;
  }
  if ((IX != 0)) {
    PT = SH_DOT2POINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TSHAPE)SH,
      (INT)I,
      (INT)J,
      (INT)K,
      (BOOL)__BOOL_LITERAL(FALSE));
    if ((I == 0)) {
      MX = 1.0;
    } else if ((I == (SH.KN.table[(0) - (0)] - 1))) {
      MX = -1.0;
    };
    if ((J == 0)) {
      MY = 1.0;
    } else if ((J == (SH.KN.table[(1) - (0)] - 1))) {
      MY = -1.0;
    };
    if ((K == 0)) {
      MZ = 1.0;
    } else if ((K == (SH.KN.table[(2) - (0)] - 1))) {
      MZ = -1.0;
    };
    {
      USINT __case_expression = IX;
      if ((__case_expression == 1)) {
        PT = _POINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(PT.table[(0) - (0)] - (MX * DX)),
          (REAL)(PT.table[(1) - (0)] + (MY * DYZ)),
          (REAL)(PT.table[(2) - (0)] + (MZ * DYZ)));
      }
      else if ((__case_expression == 2)) {
        PT = _POINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(PT.table[(0) - (0)] + (MX * DYZ)),
          (REAL)(PT.table[(1) - (0)] - (MY * DX)),
          (REAL)(PT.table[(2) - (0)] + (MZ * DYZ)));
      }
      else if ((__case_expression == 3)) {
        PT = _POINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(PT.table[(0) - (0)] + (MX * DYZ)),
          (REAL)(PT.table[(1) - (0)] + (MY * DYZ)),
          (REAL)(PT.table[(2) - (0)] - (MZ * DX)));
      }
    };
    PT = SH_LOC2ABS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TSHAPE)SH,
      (REAL)PT.table[(0) - (0)],
      (REAL)PT.table[(1) - (0)],
      (REAL)PT.table[(2) - (0)]);
  } else {
    PT = SH_DOT2POINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TSHAPE)SH,
      (INT)I,
      (INT)J,
      (INT)K,
      (BOOL)__BOOL_LITERAL(TRUE));
  };
  DOT = DO_FINDDOT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)PT.table[(0) - (0)],
    (REAL)PT.table[(1) - (0)],
    (REAL)PT.table[(2) - (0)],
    (TPOS8)IGN);
  PGR = SET_VAR(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (THANDLE)HGR,
    (TPOS8)PGR,
    (P_INT)KNOFF(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)SH.KN.table[(0) - (0)],
      (INT)SH.KN.table[(1) - (0)],
      (INT)SH.KN.table[(2) - (0)],
      (INT)I,
      (INT)J,
      (INT)K),
    (TVAR)_REF(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)INT_TO_SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)DOT.V),
      (TDOT)DOT,
      (USINT)0),
    (USINT)IX);
  LINK_VAR = DOT;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return LINK_VAR;
}


// FUNCTION
TSHAPE _SURF(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  USINT AX, 
  REAL X, 
  REAL Y, 
  REAL Z)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_REAL_3 PT = {{0.0,0.0,0.0}};
  TSHAPE _SURF = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return _SURF;
  }
  if ((PIT < 0)) {
    PIT = 0;
  };
  _SURF = GET_SH(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT);
  _SURF.WF = 0;
  _SURF.KN = _KNOT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (INT)64,
    (INT)64,
    (INT)64);
  _SURF.KN.table[(AX) - (0)] = 1;
  PT = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)X,
    (REAL)Y,
    (REAL)Z);
  _SURF.PL.table[(AX) - (0)] = PT.table[(AX) - (0)];
  _SURF.LX.table[(AX) - (0)] = 0.0;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return _SURF;
}


void P_RES_init__(P_RES *data__, BOOL retain) {
  __INIT_EXTERNAL(BOOL,F_RES,data__->F_RES,retain)
  __INIT_EXTERNAL(THEAD,HDR,data__->HDR,retain)
  __INIT_EXTERNAL(TITEMS,ITS,data__->ITS,retain)
  __INIT_VAR(data__->PIT,0,retain)
  {
    static const TSHAPE temp = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
    __SET_VAR(data__->,SH,,temp);
  }
  {
    static const __ARRAY_OF_REAL_3 temp = {{0,0,0}};
    __SET_VAR(data__->,PT,,temp);
  }
  {
    static const P_INT temp = {-1,-1};
    __SET_VAR(data__->,OFF,,temp);
  }
  __INIT_VAR(data__->PGR,-1,retain)
  __INIT_VAR(data__->I,0,retain)
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->K,0,retain)
  {
    static const TDOT temp = {0,{{0,0,0}}};
    __SET_VAR(data__->,DOT,,temp);
  }
  __INIT_VAR(data__->BRES,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->IRES,TERROR__E_SUCCESS,retain)
  __INIT_VAR(data__->ILOG,0,retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  WRITEITEM_init__(&data__->_WRITEITEM,retain);
  GRID2UL_init__(&data__->_GRID2UL,retain);
  GETHEAD_init__(&data__->_GETHEAD,retain);
}

// Code part
void P_RES_body__(P_RES *data__) {
  // Initialise TEMP variables

  GETHEAD_body__(&data__->_GETHEAD);
  __SET_EXTERNAL(data__->,HDR,,__GET_VAR(data__->_GETHEAD.HEAD));
  __SET_VAR(data__->,BRES,,DO_LOGCOND(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0)));
  for(__GET_VAR(data__->PIT,) = 0; __GET_VAR(data__->PIT,) <= (__GET_EXTERNAL(data__->HDR,.NI) - 1); __GET_VAR(data__->PIT,)++) {
    __SET_VAR(data__->_WRITEITEM.,PIT,,__GET_VAR(data__->PIT,));
    WRITEITEM_body__(&data__->_WRITEITEM);
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)__STRING_LITERAL(25,"===== T-Field START ====="),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,PIT,,UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)__GET_EXTERNAL(data__->HDR,.ID)));
  if (((__GET_VAR(data__->PIT,) >= 0) && (__GET_VAR(data__->PIT,) < __GET_EXTERNAL(data__->HDR,.NI)))) {
    __SET_VAR(data__->,SH,,GET_SH(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)__GET_VAR(data__->PIT,)));
    __SET_VAR(data__->_GRID2UL.,HGR,,ITS_GR(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)0));
    __SET_VAR(data__->_GRID2UL.,PGR,,__GET_VAR(data__->PIT,));
    __SET_VAR(data__->_GRID2UL.,SH,,__GET_VAR(data__->SH,));
    GRID2UL_body__(&data__->_GRID2UL);
    __SET_VAR(data__->,IRES,,__GET_VAR(data__->_GRID2UL.IRES));
  } else if ((__GET_VAR(data__->PIT,) == 100)) {
    __SET_VAR(data__->,SH,,_SURF(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)ID2PIT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)0),
      (USINT)UINT_TO_USINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)__GET_EXTERNAL(data__->HDR,.AX)),
      (REAL)INT_TO_REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)__GET_EXTERNAL(data__->HDR,.PX)),
      (REAL)INT_TO_REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)__GET_EXTERNAL(data__->HDR,.PY)),
      (REAL)INT_TO_REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)__GET_EXTERNAL(data__->HDR,.PZ))));
    __SET_EXTERNAL(data__->,ITS,.SH.table[(__GET_VAR(data__->PIT,)) - (0)],__GET_VAR(data__->SH,));
    __SET_VAR(data__->,ILOG,,0);
    for(__GET_VAR(data__->I,) = 0; __GET_VAR(data__->I,) <= (__GET_VAR(data__->SH,.KN.table[(0) - (0)]) - 1); __GET_VAR(data__->I,)++) {
      for(__GET_VAR(data__->J,) = 0; __GET_VAR(data__->J,) <= (__GET_VAR(data__->SH,.KN.table[(1) - (0)]) - 1); __GET_VAR(data__->J,)++) {
        for(__GET_VAR(data__->K,) = 0; __GET_VAR(data__->K,) <= (__GET_VAR(data__->SH,.KN.table[(2) - (0)]) - 1); __GET_VAR(data__->K,)++) {
          __SET_VAR(data__->,DOT,,LINK_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (THANDLE)ITS_GR2(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)0),
            (TPOS8)0,
            (TSHAPE)__GET_VAR(data__->SH,),
            (INT)__GET_VAR(data__->I,),
            (INT)__GET_VAR(data__->J,),
            (INT)__GET_VAR(data__->K,),
            (USINT)0,
            (TPOS8)-1,
            (REAL)0.1,
            (REAL)0.1));
        };
      };
    };
    if ((LEN__ULINT__STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,)) > 0)) {
      __SET_VAR(data__->,MSG,,LOGMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)__GET_VAR(data__->MSG,),
          (STRING)__STRING_LITERAL(1,";"),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,"")),
        (LOGLEVEL)LOGLEVEL__DEBUG,
        (TERROR)TERROR__E_SUCCESS));
    };
    __SET_VAR(data__->_GRID2UL.,HGR,,ITS_GR2(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)0));
    __SET_VAR(data__->_GRID2UL.,PGR,,0);
    __SET_VAR(data__->_GRID2UL.,SH,,__GET_VAR(data__->SH,));
    GRID2UL_body__(&data__->_GRID2UL);
    __SET_VAR(data__->,IRES,,__GET_VAR(data__->_GRID2UL.IRES));
  } else {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)__STRING_LITERAL(25,"===== T-Field (END) ====="),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_EXTERNAL(data__->,F_RES,,__BOOL_LITERAL(FALSE));

  goto __end;

__end:
  return;
} // P_RES_body__() 





// FUNCTION
TVAL M_VAL(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TVAL M_VAL = {0,{{0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_VAL;
  }
  M_VAL.IV = UDINT_TO_INT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD0 / 65536));
  M_VAL.VI.table[(0) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD0,
        (UDINT)65536)) / 256));
  M_VAL.VI.table[(0) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD0,
          (UDINT)65536)),
      (UINT)256));
  M_VAL.VI.table[(1) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD1 / 65536)) / 256));
  M_VAL.VI.table[(1) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD1 / 65536)),
      (UINT)256));
  M_VAL.VI.table[(2) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD1,
        (UDINT)65536)) / 256));
  M_VAL.VI.table[(2) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD1,
          (UDINT)65536)),
      (UINT)256));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_VAL;
}


void GETVAL_init__(GETVAL *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD70,data__->MD70,retain)
  __INIT_EXTERNAL(UDINT,MD71,data__->MD71,retain)
  __INIT_EXTERNAL(UDINT,MD72,data__->MD72,retain)
  __INIT_EXTERNAL(UDINT,MD73,data__->MD73,retain)
  __INIT_EXTERNAL(UDINT,MD74,data__->MD74,retain)
  __INIT_EXTERNAL(UDINT,MD75,data__->MD75,retain)
  __INIT_EXTERNAL(UDINT,MD76,data__->MD76,retain)
  __INIT_EXTERNAL(UDINT,MD77,data__->MD77,retain)
  __INIT_EXTERNAL(UDINT,MD78,data__->MD78,retain)
  __INIT_EXTERNAL(UDINT,MD79,data__->MD79,retain)
  __INIT_EXTERNAL(UDINT,MD80,data__->MD80,retain)
  __INIT_EXTERNAL(UDINT,MD81,data__->MD81,retain)
  __INIT_EXTERNAL(UDINT,MD82,data__->MD82,retain)
  __INIT_EXTERNAL(UDINT,MD83,data__->MD83,retain)
  __INIT_EXTERNAL(UDINT,MD84,data__->MD84,retain)
  __INIT_EXTERNAL(UDINT,MD85,data__->MD85,retain)
  __INIT_EXTERNAL(UDINT,MD86,data__->MD86,retain)
  __INIT_EXTERNAL(UDINT,MD87,data__->MD87,retain)
  __INIT_EXTERNAL(UDINT,MD88,data__->MD88,retain)
  __INIT_EXTERNAL(UDINT,MD89,data__->MD89,retain)
  __INIT_EXTERNAL(UDINT,MD90,data__->MD90,retain)
  __INIT_EXTERNAL(UDINT,MD91,data__->MD91,retain)
  __INIT_EXTERNAL(UDINT,MD92,data__->MD92,retain)
  __INIT_EXTERNAL(UDINT,MD93,data__->MD93,retain)
  __INIT_EXTERNAL(UDINT,MD94,data__->MD94,retain)
  __INIT_EXTERNAL(UDINT,MD95,data__->MD95,retain)
  __INIT_EXTERNAL(UDINT,MD96,data__->MD96,retain)
  __INIT_EXTERNAL(UDINT,MD97,data__->MD97,retain)
  __INIT_EXTERNAL(UDINT,MD98,data__->MD98,retain)
  __INIT_EXTERNAL(UDINT,MD99,data__->MD99,retain)
  __INIT_EXTERNAL(UDINT,MD100,data__->MD100,retain)
  __INIT_EXTERNAL(UDINT,MD101,data__->MD101,retain)
  __INIT_EXTERNAL(UDINT,MD102,data__->MD102,retain)
  __INIT_EXTERNAL(UDINT,MD103,data__->MD103,retain)
  __INIT_EXTERNAL(UDINT,MD104,data__->MD104,retain)
  __INIT_EXTERNAL(UDINT,MD105,data__->MD105,retain)
  __INIT_EXTERNAL(UDINT,MD106,data__->MD106,retain)
  __INIT_EXTERNAL(UDINT,MD107,data__->MD107,retain)
  __INIT_EXTERNAL(UDINT,MD108,data__->MD108,retain)
  __INIT_EXTERNAL(UDINT,MD109,data__->MD109,retain)
  __INIT_EXTERNAL(UDINT,MD110,data__->MD110,retain)
  __INIT_EXTERNAL(UDINT,MD111,data__->MD111,retain)
  __INIT_EXTERNAL(UDINT,MD112,data__->MD112,retain)
  __INIT_EXTERNAL(UDINT,MD113,data__->MD113,retain)
  __INIT_EXTERNAL(UDINT,MD114,data__->MD114,retain)
  __INIT_EXTERNAL(UDINT,MD115,data__->MD115,retain)
  __INIT_EXTERNAL(UDINT,MD116,data__->MD116,retain)
  __INIT_EXTERNAL(UDINT,MD117,data__->MD117,retain)
  __INIT_EXTERNAL(UDINT,MD118,data__->MD118,retain)
  __INIT_EXTERNAL(UDINT,MD119,data__->MD119,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TVAL temp = {0,{{0,0,0}}};
    __SET_VAR(data__->,VAL,,temp);
  }
}

// Code part
void GETVAL_body__(GETVAL *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD70,),
        (UDINT)__GET_EXTERNAL(data__->MD71,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD72,),
        (UDINT)__GET_EXTERNAL(data__->MD73,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD74,),
        (UDINT)__GET_EXTERNAL(data__->MD75,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD76,),
        (UDINT)__GET_EXTERNAL(data__->MD77,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD78,),
        (UDINT)__GET_EXTERNAL(data__->MD79,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD80,),
        (UDINT)__GET_EXTERNAL(data__->MD81,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD82,),
        (UDINT)__GET_EXTERNAL(data__->MD83,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD84,),
        (UDINT)__GET_EXTERNAL(data__->MD85,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD86,),
        (UDINT)__GET_EXTERNAL(data__->MD87,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD88,),
        (UDINT)__GET_EXTERNAL(data__->MD89,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD90,),
        (UDINT)__GET_EXTERNAL(data__->MD91,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD92,),
        (UDINT)__GET_EXTERNAL(data__->MD93,)));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD94,),
        (UDINT)__GET_EXTERNAL(data__->MD95,)));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD96,),
        (UDINT)__GET_EXTERNAL(data__->MD97,)));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD98,),
        (UDINT)__GET_EXTERNAL(data__->MD99,)));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD100,),
        (UDINT)__GET_EXTERNAL(data__->MD101,)));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD102,),
        (UDINT)__GET_EXTERNAL(data__->MD103,)));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD104,),
        (UDINT)__GET_EXTERNAL(data__->MD105,)));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD106,),
        (UDINT)__GET_EXTERNAL(data__->MD107,)));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD108,),
        (UDINT)__GET_EXTERNAL(data__->MD109,)));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD110,),
        (UDINT)__GET_EXTERNAL(data__->MD111,)));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD112,),
        (UDINT)__GET_EXTERNAL(data__->MD113,)));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD114,),
        (UDINT)__GET_EXTERNAL(data__->MD115,)));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD116,),
        (UDINT)__GET_EXTERNAL(data__->MD117,)));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->,VAL,,M_VAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD118,),
        (UDINT)__GET_EXTERNAL(data__->MD119,)));
    }
  };

  goto __end;

__end:
  return;
} // GETVAL_body__() 





void SORT_IDS_init__(SORT_IDS *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(TITEMS,ITS,data__->ITS,retain)
  __INIT_VAR(data__->IBEGIN,0,retain)
  __INIT_VAR(data__->IEND,0,retain)
  __INIT_VAR(data__->IRES,TERROR__E_SUCCESS,retain)
  __INIT_VAR(data__->IL,-1,retain)
  __INIT_VAR(data__->IR,-1,retain)
  __INIT_VAR(data__->LL,-1,retain)
  __INIT_VAR(data__->RR,-1,retain)
  {
    static const P_IDPIT temp = {0,-1};
    __SET_VAR(data__->,Z,,temp);
  }
  __INIT_VAR(data__->IS,-1,retain)
  {
    static const __ARRAY_OF_TPOS8_50 temp = {{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
    __SET_VAR(data__->,STACK,,temp);
  }
  __INIT_VAR(data__->FBREAK,__BOOL_LITERAL(FALSE),retain)
  {
    static const P_IDPIT temp = {0,-1};
    __SET_VAR(data__->,TMP,,temp);
  }
}

// Code part
void SORT_IDS_body__(SORT_IDS *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,IRES,,TERROR__E_SUCCESS);
  __SET_VAR(data__->,IS,,0);
  __SET_VAR(data__->,IL,,__GET_VAR(data__->IBEGIN,));
  __SET_VAR(data__->,IR,,__GET_VAR(data__->IEND,));
  __SET_VAR(data__->,FBREAK,,__BOOL_LITERAL(FALSE));
  while (!(__GET_VAR(data__->FBREAK,))) {
    if ((__GET_VAR(data__->IL,) < __GET_VAR(data__->IR,))) {
      __SET_VAR(data__->,Z,,__GET_EXTERNAL(data__->ITS,.PR.table[(WORD_TO_SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (WORD)SHR__WORD__WORD__SINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (WORD)UINT_TO_WORD(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (UINT)(SINT_TO_UINT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (SINT)__GET_VAR(data__->IR,)) + SINT_TO_UINT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (SINT)__GET_VAR(data__->IL,)))),
          (SINT)1))) - (0)]));
      __SET_VAR(data__->,LL,,__GET_VAR(data__->IL,));
      __SET_VAR(data__->,RR,,__GET_VAR(data__->IR,));
      while ((__GET_VAR(data__->LL,) <= __GET_VAR(data__->RR,))) {
        while ((__GET_EXTERNAL(data__->ITS,.PR.table[(__GET_VAR(data__->LL,)) - (0)].A) < __GET_VAR(data__->Z,.A))) {
          __SET_VAR(data__->,LL,,(__GET_VAR(data__->LL,) + 1));
        };
        while ((__GET_EXTERNAL(data__->ITS,.PR.table[(__GET_VAR(data__->RR,)) - (0)].A) > __GET_VAR(data__->Z,.A))) {
          __SET_VAR(data__->,RR,,(__GET_VAR(data__->RR,) - 1));
        };
        if ((__GET_VAR(data__->LL,) <= __GET_VAR(data__->RR,))) {
          if ((__GET_VAR(data__->LL,) != __GET_VAR(data__->RR,))) {
            __SET_VAR(data__->,TMP,,__GET_EXTERNAL(data__->ITS,.PR.table[(__GET_VAR(data__->RR,)) - (0)]));
            __SET_EXTERNAL(data__->,ITS,.PR.table[(__GET_VAR(data__->RR,)) - (0)],__GET_EXTERNAL(data__->ITS,.PR.table[(__GET_VAR(data__->LL,)) - (0)]));
            __SET_EXTERNAL(data__->,ITS,.PR.table[(__GET_VAR(data__->LL,)) - (0)],__GET_VAR(data__->TMP,));
          };
          __SET_VAR(data__->,LL,,(__GET_VAR(data__->LL,) + 1));
          __SET_VAR(data__->,RR,,(__GET_VAR(data__->RR,) - 1));
        };
      };
      if ((__GET_VAR(data__->IS,) < 49)) {
        __SET_VAR(data__->,STACK,.table[(__GET_VAR(data__->IS,)) - (0)],__GET_VAR(data__->IR,));
        __SET_VAR(data__->,IS,,(__GET_VAR(data__->IS,) + 1));
      } else {
        __SET_VAR(data__->,FBREAK,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->,IRES,,TERROR__E_STACKSIZE);
      };
      __SET_VAR(data__->,IR,,MAX__SINT__SINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)2,
        (SINT)__GET_VAR(data__->IL,),
        (SINT)(__GET_VAR(data__->LL,) - 1)));
    } else {
      if ((__GET_VAR(data__->IS,) > 0)) {
        __SET_VAR(data__->,IL,,(__GET_VAR(data__->IR,) + 1));
        __SET_VAR(data__->,IS,,(__GET_VAR(data__->IS,) - 1));
        __SET_VAR(data__->,IR,,__GET_VAR(data__->STACK,.table[(__GET_VAR(data__->IS,)) - (0)]));
      } else {
        __SET_VAR(data__->,FBREAK,,__BOOL_LITERAL(TRUE));
      };
    };
  };

  goto __end;

__end:
  return;
} // SORT_IDS_body__() 





// FUNCTION
BOOL ST_IS_READY(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL TMP)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_IS_READY = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_IS_READY;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (ST_IS_READY=__GET_GLOBAL_STAT()->RDY); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_IS_READY;
}


// FUNCTION
REAL KTO_AIR(
  BOOL EN, 
  BOOL *__ENO, 
  REAL L)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  REAL KTO_AIR = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return KTO_AIR;
  }
  KTO_AIR = 10.0;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return KTO_AIR;
}


// FUNCTION
DT GET_PDT(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  USINT IX)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  DT GET_PDT = __dt_to_timespec(0, 0, 0, 1, 1, 1970);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_PDT;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_PDT = __GET_GLOBAL_ITS()->IT.table[PIT].PDT.table[IX]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_PDT;
}


// FUNCTION
THEAD GET_H(
  BOOL EN, 
  BOOL *__ENO, 
  DINT DUMMY)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  THEAD GET_H = {0,0,0,0,0,0,0,{{__time_to_timespec(1, 0, 60, 0, 0, 0),__time_to_timespec(1, 0, 30, 0, 0, 0),__time_to_timespec(1, 0, 10, 0, 0, 0),__time_to_timespec(1, 0, 5, 0, 0, 0)}},0,0,0,0,{{0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_H;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_H = *__GET_GLOBAL_HDR()); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_H;
}


// FUNCTION
__ARRAY_OF_P_SINT_12 GET_PR(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PPR)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  __ARRAY_OF_P_SINT_12 GET_PR = {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return GET_PR;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (GET_PR = __GET_GLOBAL_STS()->PR.table[PPR]); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return GET_PR;
}


// FUNCTION
INT CN_MID(
  BOOL EN, 
  BOOL *__ENO, 
  TCOND COND)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  INT CN_MID = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return CN_MID;
  }
  CN_MID = COND.TMID;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return CN_MID;
}


// FUNCTION
TERROR IT_PROCESS(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT, 
  USINT IX, 
  DT CDT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  DT PDT = __dt_to_timespec(0, 0, 0, 1, 1, 2000);
  TITEM IT = {0,-1,-1,{{__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0)}},-1,0,{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};
  THEAD HD = {0,0,0,0,0,0,0,{{__time_to_timespec(1, 0, 60, 0, 0, 0),__time_to_timespec(1, 0, 30, 0, 0, 0),__time_to_timespec(1, 0, 10, 0, 0, 0),__time_to_timespec(1, 0, 5, 0, 0, 0)}},0,0,0,0,{{0,0}}};
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  USINT AX = 0;
  TAXO OX = {0,0,0};
  TAXO CX = {0,0,0};
  SINT Q = 0;
  REAL HT = 0.0;
  __ARRAY_OF_INT_3 K = {{0,0,0}};
  __ARRAY_OF_INT_3 L = {{0,0,0}};
  __ARRAY_OF_REAL_3 H0 = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 HX2 = {{0.0,0.0,0.0}};
  __ARRAY_OF_REAL_3 PR = {{0.0,0.0,0.0}};
  SINT IV = 0;
  SINT IM = 0;
  TVAL V = {0,{{0,0,0}}};
  REAL VX = 0.0;
  __ARRAY_OF_P_SINT_12 PX = {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
  TMAT CM = {0.11,1666.0,880.3,198.1};
  TPROPS PM = {__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE)};
  __ARRAY_OF_REAL_3 P0 = {{0.0,0.0,0.0}};
  REAL HI = 0.0;
  REAL HI2 = 0.0;
  __ARRAY_OF_REAL_3 PI = {{0.0,0.0,0.0}};
  REAL RI = 0.0;
  REAL LI = 0.0;
  REAL VI1 = 0.0;
  REAL QI1 = 0.0;
  REAL TI1 = 0.0;
  TMATTER M = {0.0001,1.0,0.001,1.0};
  __ARRAY_OF_REAL_3 P = {{0.0,0.0,0.0}};
  TVAR TV = 0;
  __ARRAY_OF_P_BOOL_4 LR = {{__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE)}};
  TPOS8 PIT2 = -1;
  __ARRAY_OF_INT_3 KN2 = {{0,0,0}};
  SINT IM2 = 0;
  TMAT CM2 = {0.11,1666.0,880.3,198.1};
  TPROPS PM2 = {__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE),__BOOL_LITERAL(FALSE)};
  SINT IV2 = 0;
  TVAL V2 = {0,{{0,0,0}}};
  REAL VX2 = 0.0;
  __ARRAY_OF_P_SINT_12 PX2 = {{{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0},{0,0}}};
  REAL VI2 = 0.0;
  REAL QI2 = 0.0;
  REAL TI2 = 0.0;
  TMATTER M2 = {0.0001,1.0,0.001,1.0};
  REAL TMID2 = 0.0;
  INT I = 0;
  INT N = 0;
  P_INT OFF = {-1,-1};
  REAL XX = 0.0;
  INT II = 0;
  P_RERE ALFA = {0.0,0.0};
  __ARRAY_OF_P_RERE_64 ALFAS = {{{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0},{0.0,0.0}}};
  TERROR IRES = TERROR__E_SUCCESS;
  BOOL BRES = __BOOL_LITERAL(FALSE);
  STRING MSG = __STRING_LITERAL(0,"");
  REAL KT = 300.0;
  REAL HMIN = 1.0E-5;
  TERROR IT_PROCESS = TERROR__E_SUCCESS;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_PROCESS;
  }
  PDT = GET_PDT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT,
    (USINT)IX);
  PIT = SET_PDT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT,
    (USINT)IX,
    (DT)CDT);
  HD = GET_H(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (DINT)0);
  IT = GET_IT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT);
  SH = GET_SH(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT);
  AX = SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)SH);
  IM = IT.IM;
  IV = IT.IV;
  CM = GET_MT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT.IM);
  if (((IV > 0) && (IV < HD.NV))) {
    V = GET_VL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.IV);
    VX = (GET_BF(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS16)V.IV) * SINT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)V.VI.table[(IX) - (0)].A));
    PX = GET_PR(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)V.VI.table[(IX) - (0)].B);
  };
  OX = AXO(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (USINT)AX,
    (BOOL)__BOOL_LITERAL(TRUE));
  CX = AXO(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (USINT)(IX + 1),
    (BOOL)__BOOL_LITERAL(FALSE));
  PM.AIR = (IM == 0);
  PM.OIL = (CM.MD != 0.0);
  PM.FLUID = (PM.OIL || PM.AIR);
  PM.SOLID = !(PM.FLUID);
  if (PM.AIR) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  HT = 300.0;
  if ((HT < 1.0)) {
    IRES = TERROR__E_TIMESIZE;
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  H0 = _POINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)(SH.LX.table[(0) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(0) - (0)] - 1))),
    (REAL)(SH.LX.table[(1) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(1) - (0)] - 1))),
    (REAL)(SH.LX.table[(2) - (0)] / INT_TO_REAL(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (INT)(SH.KN.table[(2) - (0)] - 1))));
  if ((((H0.table[(0) - (0)] < HMIN) || (H0.table[(1) - (0)] < HMIN)) || (H0.table[(2) - (0)] < HMIN))) {
    IRES = TERROR__E_STEPSIZE;
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((PIT == 21) || (PIT == 31))) {
    VX = 5.0;
  };
  if ((((PIT == 38) || (PIT == 59)) || (PIT == 80))) {
    VX = 3.0;
  };
  if ((((PIT == 42) || (PIT == 63)) || (PIT == 84))) {
    VX = 12.0;
  };
  if (((((((((((PIT == 45) || (PIT == 46)) || (PIT == 47)) || (PIT == 48)) || (PIT == 49)) || (PIT == 50)) || (PIT == 51)) || (PIT == 52)) || (PIT == 53)) || (PIT == 54))) {
    VX = 20.0;
  };
  if (((((((((((PIT == 66) || (PIT == 67)) || (PIT == 68)) || (PIT == 69)) || (PIT == 70)) || (PIT == 71)) || (PIT == 72)) || (PIT == 73)) || (PIT == 74)) || (PIT == 75))) {
    VX = 20.0;
  };
  if (((((((((((PIT == 87) || (PIT == 88)) || (PIT == 89)) || (PIT == 90)) || (PIT == 91)) || (PIT == 92)) || (PIT == 93)) || (PIT == 94)) || (PIT == 95)) || (PIT == 96))) {
    VX = 20.0;
  };
  if ((VX == 0.0)) {
    VI1 = 0.0;
    QI1 = 0.0;
  } else {
    if (PM.FLUID) {
      VI1 = ABS__REAL__REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)VX);
    } else {
      QI1 = (VX / INT_TO_REAL(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (INT)((SH.KN.table[(0) - (0)] * SH.KN.table[(1) - (0)]) * SH.KN.table[(2) - (0)])));
    };
  };
  L.table[(CX.X) - (0)] = (SH.KN.table[(0) - (0)] - 1);
  L.table[(CX.Y) - (0)] = (SH.KN.table[(1) - (0)] - 1);
  L.table[(CX.Z) - (0)] = (SH.KN.table[(2) - (0)] - 1);
  N = L.table[(2) - (0)];
  K.table[(0) - (0)] = 0;
  while ((K.table[(0) - (0)] <= L.table[(0) - (0)])) {
    K.table[(1) - (0)] = 0;
    while ((K.table[(1) - (0)] <= L.table[(1) - (0)])) {
      K.table[(2) - (0)] = 0;
      P0 = _POINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)(SH.PL.table[(0) - (0)] + (H0.table[(0) - (0)] * INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)K.table[(CX.X) - (0)]))),
        (REAL)(SH.PL.table[(1) - (0)] + (H0.table[(1) - (0)] * INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)K.table[(CX.Y) - (0)]))),
        (REAL)(SH.PL.table[(2) - (0)] + (H0.table[(2) - (0)] * INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)K.table[(CX.Z) - (0)]))));
      if ((AX != 0)) {
        P0.table[(OX.Y) - (0)] = ANGLE(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)P0.table[(OX.Y) - (0)],
          (REAL)SH.PL.table[(OX.Y) - (0)],
          (REAL)360.0);
        P = REFORM(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (WORD)SH.WF,
          (REAL)P0.table[(OX.Y) - (0)],
          (REAL)P0.table[(OX.X) - (0)],
          (REAL)SH.PL.table[(OX.X) - (0)],
          (REAL)SH.LX.table[(OX.X) - (0)]);
        P0.table[(OX.X) - (0)] = P.table[(0) - (0)];
        H0.table[(OX.X) - (0)] = (P.table[(2) - (0)] / INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)N));
      };
      for(I = 0; I <= N; I++) {
        K.table[(2) - (0)] = I;
        PI = P0;
        PI.table[(IX) - (0)] = (P0.table[(IX) - (0)] + (H0.table[(IX) - (0)] * INT_TO_REAL(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)I)));
        if (((AX != 0) && (IX == OX.X))) {
          RI = (PI.table[(IX) - (0)] * 0.001);
          HI = (H0.table[(IX) - (0)] * 0.001);
        } else if (((AX != 0) && (IX == OX.Y))) {
          P = REFORM(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (WORD)SH.WF,
            (REAL)PI.table[(OX.Y) - (0)],
            (REAL)PI.table[(OX.X) - (0)],
            (REAL)SH.PL.table[(OX.X) - (0)],
            (REAL)SH.LX.table[(OX.X) - (0)]);
          PI.table[(OX.X) - (0)] = P.table[(0) - (0)];
          RI = (PI.table[(OX.X) - (0)] * 0.001);
          HI = (RI * RADI(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (REAL)H0.table[(IX) - (0)]));
        } else {
          RI = 1.0E6;
          HI = (H0.table[(IX) - (0)] * 0.001);
        };
        M = _MATTER(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (REAL)(CM.KT / (CM.PL * CM.CP)),
          (REAL)CM.KT,
          (REAL)HI,
          (REAL)0.0);
        OFF = KNOFF(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)SH.KN.table[(0) - (0)],
          (INT)SH.KN.table[(1) - (0)],
          (INT)SH.KN.table[(2) - (0)],
          (INT)K.table[(CX.X) - (0)],
          (INT)K.table[(CX.Y) - (0)],
          (INT)K.table[(CX.Z) - (0)]);
        TI1 = C2T(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)VAR_V(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TVAR)GET_VAR(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (THANDLE)ITS_GR(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)0),
              (TPOS8)PIT,
              (P_INT)OFF,
              (USINT)0),
            (BOOL)__BOOL_LITERAL(TRUE)));
        if (((I == 0) || (I == N))) {
          TV = GET_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (THANDLE)ITS_GR(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)0),
            (TPOS8)PIT,
            (P_INT)OFF,
            (USINT)(IX + 1));
          PIT2 = VAR_P(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TVAR)TV);
          #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
          #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

            // Доступ к свойствам элемента-2
            TITEM *pItem2 = ((PIT2==-1) ? NULL : &(__GET_GLOBAL_ITS()->IT.table[PIT2]));
            IM2 = ((pItem2==NULL) ? 0 : pItem2->IM);  // Индекс материала
            CM2 = GET_MT(1,NULL,IM2);                 // Материал
            
            if (IM2==0) { // воздух =>
              VX2 = 0.0;                              // динимаческая величина = 0
            } else {      // обычный элемент =>
              IM2 = pItem2->IM;                       // Индекс материала
              IV2 = pItem2->IV;                       // Индекс величины

              __ARRAY_OF_TVAL_25  *pVAL = &__GET_GLOBAL_STS()->VL; // Связанные величины
              __ARRAY_OF_TPROF_30 *pPRO = &__GET_GLOBAL_STS()->PR; // Профили
              __ARRAY_OF_REAL_32  *pBUF = &__GET_GLOBAL_STS()->BF; // Буфер величин
                          
              if (IV2 > 0 && IV2 < HD.NV) {
                VX2 = pVAL->table[IV2].VI.table[IX].A * pBUF->table[pVAL->table[IV2].IV];
                PX2 = pPRO->table[pVAL->table[IV2].VI.table[IX].B];
              }
            }
            
          
          #undef GetFbVar
          #undef SetFbVar
;
          TMID2 = C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)CN_MID(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TCOND)GET_CN(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)PIT2)));
          PM2.AIR = (IM2 == 0);
          PM2.OIL = (CM2.MD != 0.0);
          PM2.FLUID = (PM2.OIL || PM2.AIR);
          PM2.SOLID = !(PM2.FLUID);
          if ((VX2 == 0.0)) {
            VI2 = 0.0;
            QI2 = 0.0;
          } else {
            if (PM2.FLUID) {
              VI2 = ABS__REAL__REAL(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)VX2);
            } else {
              QI2 = (VX2 / INT_TO_REAL(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (INT)4096));
            };
          };
          TI2 = C2T(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)VAR_V(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TVAR)TV,
              (BOOL)__BOOL_LITERAL(TRUE)));
          if ((((K.table[(0) - (0)] == 0) && (K.table[(1) - (0)] == 0)) && (PIT == 3))) {
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)__STRING_LITERAL(8,"-> Ti2= "),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)TI2),
              (STRING)__STRING_LITERAL(0,""),
              (STRING)__STRING_LITERAL(0,""));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(6," off= "),
              (STRING)INT_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (INT)OFF.A),
              (STRING)__STRING_LITERAL(0,""));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(6," PIT= "),
              (STRING)SINT_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (SINT)PIT2),
              (STRING)__STRING_LITERAL(0,""));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(6," Hi2= "),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)HI2),
              (STRING)__STRING_LITERAL(0,""));
            MSG = LOGMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (LOGLEVEL)LOGLEVEL__DEBUG,
              (TERROR)TERROR__E_SUCCESS);
          };
          M2 = _MATTER(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (REAL)(CM2.KT / (CM2.PL * CM2.CP)),
            (REAL)CM2.KT,
            (REAL)0.001,
            (REAL)0.0);
          if ((I == 0)) {
            if (PM2.AIR) {
              if (__BOOL_LITERAL(TRUE)) {
                M.K = KTO_AIR(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)1.0);
                ALFAS.table[(0) - (0)] = ALFA_03(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (REAL)TI1,
                  (REAL)TI2,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI,
                  (BOOL)__BOOL_LITERAL(TRUE));
              } else {
                ALFA.A = 0.0;
                ALFA.B = TI2;
                ALFAS.table[(0) - (0)] = ALFA_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (P_RERE)ALFA,
                  (REAL)TI1,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI);
              };
            } else if ((PM.SOLID && PM2.OIL)) {
              M.K = KTO_OIL(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)1.0,
                (REAL)0.0);
              ALFAS.table[(0) - (0)] = ALFA_03(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)HT,
                (TMATTER)M,
                (REAL)TI1,
                (REAL)(TMID2 - ((TMID2 - 20.0) / 2.2)),
                (REAL)QI1,
                (REAL)VI1,
                (REAL)RI,
                (BOOL)__BOOL_LITERAL(TRUE));
            } else {
              ALFA.A = 0.0;
              ALFA.B = TI2;
              if (__BOOL_LITERAL(TRUE)) {
                ALFAS.table[(0) - (0)] = ALFA_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (P_RERE)ALFA,
                  (REAL)TI1,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI);
              } else {
                M2.H = 0.001;
                ALFAS.table[(0) - (0)] = ALFA_04(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (TMATTER)M2,
                  (P_RERE)ALFA,
                  (REAL)TI1,
                  (REAL)QI1,
                  (REAL)QI2);
              };
            };
          } else if ((I == N)) {
            if (PM2.AIR) {
              if (__BOOL_LITERAL(TRUE)) {
                M.K = KTO_AIR(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)1.0);
                XX = BETA_N3(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (P_RERE)ALFAS.table[((N - 1)) - (0)],
                  (REAL)TI1,
                  (REAL)TI2,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI,
                  (BOOL)__BOOL_LITERAL(TRUE));
              } else {
                ALFAS.table[(N) - (0)] = ALFA_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (P_RERE)ALFAS.table[((N - 1)) - (0)],
                  (REAL)TI1,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI);
                XX = TEMP_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (P_RERE)ALFAS.table[(N) - (0)],
                  (REAL)TI2);
              };
            } else if ((PM.SOLID && PM2.OIL)) {
              M.K = KTO_OIL(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)1.0,
                (REAL)0.0);
              XX = BETA_N3(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)HT,
                (TMATTER)M,
                (P_RERE)ALFAS.table[((N - 1)) - (0)],
                (REAL)TI1,
                (REAL)(TMID2 - ((TMID2 - 20.0) / 2.2)),
                (REAL)QI1,
                (REAL)VI1,
                (REAL)RI,
                (BOOL)__BOOL_LITERAL(TRUE));
            } else {
              if (__BOOL_LITERAL(TRUE)) {
                ALFAS.table[(N) - (0)] = ALFA_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (P_RERE)ALFAS.table[((N - 1)) - (0)],
                  (REAL)TI1,
                  (REAL)QI1,
                  (REAL)VI1,
                  (REAL)RI);
                XX = TEMP_I(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (P_RERE)ALFAS.table[(N) - (0)],
                  (REAL)TI2);
              } else {
                M2.H = 0.001;
                XX = BETA_N4(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)HT,
                  (TMATTER)M,
                  (TMATTER)M2,
                  (P_RERE)ALFAS.table[((N - 1)) - (0)],
                  (REAL)TI1,
                  (REAL)TI2,
                  (REAL)QI1,
                  (REAL)QI2);
              };
            };
            PIT = SET_VAR(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (THANDLE)ITS_GR(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)0),
              (TPOS8)PIT,
              (P_INT)OFF,
              (TVAR)_VAR(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (INT)T2C(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)XX),
                (INT)-16384,
                (BOOL)__BOOL_LITERAL(FALSE)),
              (USINT)0);
            if ((((K.table[(0) - (0)] == 0) && (K.table[(1) - (0)] == 0)) && (PIT == 3))) {
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)__STRING_LITERAL(3," T["),
                (STRING)INT_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (INT)I),
                (STRING)__STRING_LITERAL(3,"]= "),
                (STRING)REAL_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)XX));
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(5," M.a="),
                (STRING)REAL_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)M.A),
                (STRING)__STRING_LITERAL(0,""));
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(5," M.h="),
                (STRING)REAL_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)M.H),
                (STRING)__STRING_LITERAL(0,""));
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(5," M.l="),
                (STRING)REAL_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)M.L),
                (STRING)__STRING_LITERAL(0,""));
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(3," R="),
                (STRING)REAL_TO_STRING(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (REAL)RI),
                (STRING)__STRING_LITERAL(0,""));
              MSG = LOGMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (LOGLEVEL)LOGLEVEL__DEBUG,
                (TERROR)TERROR__E_SUCCESS);
            };
          };
        } else {
          ALFAS.table[(I) - (0)] = ALFA_I(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (REAL)HT,
            (TMATTER)M,
            (P_RERE)ALFAS.table[((I - 1)) - (0)],
            (REAL)TI1,
            (REAL)QI1,
            (REAL)VI1,
            (REAL)RI);
        };
      };
      for(I = (N - 1); ((-1) > 0)? (I <= (0)) : (I >= (0)); I += (-1)) {
        K.table[(2) - (0)] = I;
        XX = TEMP_I(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (P_RERE)ALFAS.table[(I) - (0)],
          (REAL)XX);
        OFF = KNOFF(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)SH.KN.table[(0) - (0)],
          (INT)SH.KN.table[(1) - (0)],
          (INT)SH.KN.table[(2) - (0)],
          (INT)K.table[(CX.X) - (0)],
          (INT)K.table[(CX.Y) - (0)],
          (INT)K.table[(CX.Z) - (0)]);
        PIT = SET_VAR(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (THANDLE)ITS_GR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)0),
          (TPOS8)PIT,
          (P_INT)OFF,
          (TVAR)_VAR(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (INT)T2C(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (REAL)XX),
            (INT)-16384,
            (BOOL)__BOOL_LITERAL(FALSE)),
          (USINT)0);
        if ((((K.table[(0) - (0)] == 0) && (K.table[(1) - (0)] == 0)) && (PIT == 3))) {
          MSG = MAKEMSG(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)__STRING_LITERAL(2,"T["),
            (STRING)INT_TO_STRING(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (INT)I),
            (STRING)__STRING_LITERAL(3,"]= "),
            (STRING)REAL_TO_STRING(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (REAL)XX));
          MSG = LOGMSG(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)MSG,
            (LOGLEVEL)LOGLEVEL__DEBUG,
            (TERROR)TERROR__E_SUCCESS);
        };
      };
      K.table[(1) - (0)] = (K.table[(1) - (0)] + 1);
    };
    K.table[(0) - (0)] = (K.table[(0) - (0)] + 1);
  };
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __exit: 
  #undef GetFbVar
  #undef SetFbVar
;
  IT_PROCESS = IRES;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_PROCESS;
}


void PROCESS_XYZ_init__(PROCESS_XYZ *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(REAL,RTEST,data__->RTEST,retain)
  __INIT_EXTERNAL(THEAD,HDR,data__->HDR,retain)
  __INIT_EXTERNAL(TITEMS,ITS,data__->ITS,retain)
  __INIT_VAR(data__->IN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->IX,0,retain)
  __INIT_VAR(data__->N,-1,retain)
  __INIT_VAR(data__->BRES,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->IERR,TERROR__E_SUCCESS,retain)
  __INIT_VAR(data__->I,0,retain)
  __INIT_VAR(data__->IX_LOCAL,0,retain)
  __INIT_VAR(data__->BRESTART,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->BBREAK,__BOOL_LITERAL(FALSE),retain)
  {
    static const TITER temp = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
    __SET_VAR(data__->,IT,,temp);
  }
  __INIT_VAR(data__->CDT,__dt_to_timespec(0, 0, 0, 1, 1, 2000),retain)
  __INIT_VAR(data__->PDT,__dt_to_timespec(0, 0, 0, 1, 1, 2000),retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  __INIT_VAR(data__->RR,0.0,retain)
  RTC_init__(&data__->RTIME,retain);
  TON_init__(&data__->DTIME,retain);
}

// Code part
void PROCESS_XYZ_body__(PROCESS_XYZ *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  if (__GET_VAR(data__->IN,)) {
    if (__GET_VAR(data__->BRESTART,)) {
      if (((__GET_VAR(data__->IX,) < 0) || (__GET_VAR(data__->IX,) > 2))) {
        __SET_VAR(data__->,IERR,,TERROR__E_AXIS);
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error;
        #undef GetFbVar
        #undef SetFbVar
;
      };
      if (__BOOL_LITERAL(TRUE)) {
        __SET_VAR(data__->,MSG,,MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)__STRING_LITERAL(20,"== PROCESS init ... "),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,"")));
        __SET_VAR(data__->,I,,0);
        __SET_VAR(data__->,IT,,IT_END(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)-1));
        __SET_VAR(data__->,BRES,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->,BRESTART,,__BOOL_LITERAL(FALSE));
        __SET_VAR(data__->,BBREAK,,__BOOL_LITERAL(FALSE));
        __SET_VAR(data__->,IX_LOCAL,,__GET_VAR(data__->IX,));
        __SET_VAR(data__->RTIME.,EN,,__BOOL_LITERAL(FALSE));
        RTC_body__(&data__->RTIME);
        __SET_VAR(data__->RTIME.,EN,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->RTIME.,PDT,,__dt_to_timespec(0, 0, 0, 1, 1, 2000));
        RTC_body__(&data__->RTIME);
        __SET_VAR(data__->,CDT,,__GET_VAR(data__->RTIME.CDT));
        __SET_VAR(data__->DTIME.,IN,,__BOOL_LITERAL(FALSE));
        TON_body__(&data__->DTIME);
        __SET_VAR(data__->DTIME.,IN,,__BOOL_LITERAL(TRUE));
        __SET_VAR(data__->DTIME.,PT,,__time_to_timespec(1, 0, 0, 0, 24, 0));
        TON_body__(&data__->DTIME);
        __SET_VAR(data__->,PDT,,__GET_VAR(data__->CDT,));
        __SET_VAR(data__->,IT,,IT_BEGIN(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)ID2PIT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (UINT)0)));
        while ((__GET_VAR(data__->IT,.ITEM) != -1)) {
          if ((__GET_VAR(data__->IT,.DIR) == TDIR__DIR_UP)) {
            __SET_EXTERNAL(data__->,ITS,.IT.table[(__GET_VAR(data__->IT,.ITEM)) - (0)].PDT.table[(__GET_VAR(data__->IX,)) - (0)],__GET_VAR(data__->CDT,));
          };
          __SET_VAR(data__->,IT,,IT_NEXT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TITER)__GET_VAR(data__->IT,)));
        };
        __SET_VAR(data__->,MSG,,LOGMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)MAKEMSG(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (STRING)__GET_VAR(data__->MSG,),
            (STRING)__STRING_LITERAL(10,"Ok! [time="),
            (STRING)DT_TO_STRING(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (DT)__GET_VAR(data__->CDT,)),
            (STRING)__STRING_LITERAL(2,"];")),
          (LOGLEVEL)LOGLEVEL__DEBUG,
          (TERROR)TERROR__E_SUCCESS));
      };
      goto __end;
    };
    if (!(ST_IS_READY(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (BOOL)0))) {
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error;
      #undef GetFbVar
      #undef SetFbVar
;
    };
    if (((__GET_VAR(data__->N,) != 0) && (__GET_VAR(data__->IT,.ITEM) == -1))) {
      __SET_VAR(data__->,IT,,IT_BEGIN(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (TPOS8)ID2PIT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UINT)0)));
    };
    if ((__GET_VAR(data__->IX_LOCAL,) == 0)) {
      __SET_VAR(data__->,MSG,,LOGMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)__GET_VAR(data__->MSG,),
          (STRING)__STRING_LITERAL(5,"START"),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,"")),
        (LOGLEVEL)LOGLEVEL__DEBUG,
        (TERROR)TERROR__E_SUCCESS));
    };
    while ((!(__GET_VAR(data__->BBREAK,)) && (__GET_VAR(data__->IT,.ITEM) != -1))) {
      {
        TDIR __case_expression = __GET_VAR(data__->IT,.DIR);
        if ((__case_expression == TDIR__DIR_UP)) {
          if (!(IS_POLY(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (TPOS8)__GET_VAR(data__->IT,.ITEM)))) {
            TON_body__(&data__->DTIME);
            __SET_VAR(data__->,CDT,,ULINT_TO_DT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (ULINT)ADD__ULINT__ULINT(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (UINT)2,
                (ULINT)DT_TO_ULINT(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (DT)__GET_VAR(data__->PDT,)),
                (ULINT)TIME_TO_ULINT(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (TIME)__GET_VAR(data__->DTIME.ET,)))));
            if (((__GET_VAR(data__->IT,.ITEM) >= 1) && (__GET_VAR(data__->IT,.ITEM) <= 99))) {
              __SET_VAR(data__->,MSG,,MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)__GET_VAR(data__->MSG,),
                (STRING)__STRING_LITERAL(16,"Process item ID="),
                (STRING)ID2STR(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (UINT)IT_ID(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (TPOS8)__GET_VAR(data__->IT,.ITEM))),
                (STRING)__STRING_LITERAL(5," ... ")));
              __SET_VAR(data__->,IERR,,IT_PROCESS(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)__GET_VAR(data__->IT,.ITEM),
                (USINT)__GET_VAR(data__->IX_LOCAL,),
                (DT)__GET_VAR(data__->CDT,)));
              __SET_VAR(data__->,BRES,,(__GET_VAR(data__->IERR,) == TERROR__E_SUCCESS));
              if (!(__GET_VAR(data__->BRES,))) {
                __SET_VAR(data__->,MSG,,LOGMSG(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (STRING)MAKEMSG(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (STRING)__GET_VAR(data__->MSG,),
                    (STRING)__STRING_LITERAL(7,"FAILED!"),
                    (STRING)__STRING_LITERAL(0,""),
                    (STRING)__STRING_LITERAL(0,"")),
                  (LOGLEVEL)LOGLEVEL__DEBUG,
                  (TERROR)TERROR__E_SUCCESS));
                #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
                #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error;
                #undef GetFbVar
                #undef SetFbVar
;
              } else {
                __SET_VAR(data__->,MSG,,LOGMSG(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (STRING)__STRING_LITERAL(0,""),
                  (LOGLEVEL)LOGLEVEL__DEBUG,
                  (TERROR)TERROR__E_SUCCESS));
              };
            };
          };
        }
      };
      __SET_VAR(data__->,IT,,IT_NEXT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (TITER)__GET_VAR(data__->IT,)));
      if ((!(__GET_VAR(data__->BBREAK,)) && (__GET_VAR(data__->N,) != -1))) {
        __SET_VAR(data__->,I,,(__GET_VAR(data__->I,) + 1));
        if ((__GET_VAR(data__->I,) >= __GET_VAR(data__->N,))) {
          __SET_VAR(data__->,I,,0);
          __SET_VAR(data__->,BBREAK,,__BOOL_LITERAL(TRUE));
        };
      };
    };
    __SET_VAR(data__->,BBREAK,,__BOOL_LITERAL(FALSE));
    if ((__GET_VAR(data__->IX_LOCAL,) == 0)) {
      __SET_VAR(data__->,MSG,,LOGMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)__GET_VAR(data__->MSG,),
          (STRING)__STRING_LITERAL(3,"END"),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,"")),
        (LOGLEVEL)LOGLEVEL__DEBUG,
        (TERROR)TERROR__E_SUCCESS));
    };
    if (GT_TIME(__BOOL_LITERAL(TRUE), NULL, 2, __GET_VAR(data__->DTIME.ET,), __time_to_timespec(1, 0, 0, 0, 1, 0))) {
      __SET_VAR(data__->,PDT,,__GET_VAR(data__->CDT,));
      __SET_VAR(data__->DTIME.,IN,,__BOOL_LITERAL(FALSE));
      TON_body__(&data__->DTIME);
      __SET_VAR(data__->DTIME.,IN,,__BOOL_LITERAL(TRUE));
      TON_body__(&data__->DTIME);
    };
    goto __end;
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
__error:
    #undef GetFbVar
    #undef SetFbVar
;
    if ((__GET_VAR(data__->IERR,) == TERROR__E_SUCCESS)) {
      __SET_VAR(data__->,IERR,,TERROR__E_PROCESS);
    };
    __SET_VAR(data__->,BRES,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,BRESTART,,__BOOL_LITERAL(TRUE));
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__STRING_LITERAL(45,"== PROCESS ERROR -> will be re-started! [ERR="),
        (STRING)ERR2STR(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TERROR)__GET_VAR(data__->IERR,)),
        (STRING)__STRING_LITERAL(1,"]"),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__WARNING,
      (TERROR)__GET_VAR(data__->IERR,)));
  } else {
    __SET_VAR(data__->,BRES,,__BOOL_LITERAL(FALSE));
    __SET_VAR(data__->,BRESTART,,__BOOL_LITERAL(TRUE));
  };

  goto __end;

__end:
  return;
} // PROCESS_XYZ_body__() 





// FUNCTION
BOOL ST_SET_READY(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL RDY)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_SET_READY = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_SET_READY;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (ST_SET_READY=(__GET_GLOBAL_STAT()->RDY=RDY)); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_SET_READY;
}


// FUNCTION
BOOL IS_CYL(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL IS_CYL = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IS_CYL;
  }
  IS_CYL = (SH_GET_AX(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TSHAPE)GET_SH(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT)) != 0);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IS_CYL;
}


// FUNCTION
BOOL DO_CHECKVALID(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 PIT2 = 0;
  BOOL BRES = __BOOL_LITERAL(FALSE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  __ARRAY_OF_TPOS8_100 STACK = {{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
  __ARRAY_OF_TPOS8_16 KIDS = {{-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1,-1}};
  SINT N = 0;
  SINT M = 0;
  SINT IM = 0;
  SINT J = 0;
  TDOT CHK = {0,{{0,0,0}}};
  BOOL BC = __BOOL_LITERAL(FALSE);
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  __ARRAY_OF_REAL_3 P0 = {{0,0,0}};
  __ARRAY_OF_REAL_3 P1 = {{0,0,0}};
  __ARRAY_OF_REAL_3 P2 = {{0,0,0}};
  STRING MSG = __STRING_LITERAL(0,"");
  BOOL DO_CHECKVALID = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_CHECKVALID;
  }
  DO_CHECKVALID = ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE));
  if (!(DO_CHECKVALID)) {
    goto __end;
  };
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0));
  while ((IT.ITEM != -1)) {
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_DOWN)) {
        if ((N > 99)) {
          MSG = __STRING_LITERAL(26,"CheckValid: Stack overflow");
          #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
          #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error
          #undef GetFbVar
          #undef SetFbVar
;
        };
        STACK.table[(N) - (0)] = IT.ITEM;
        N = (N + 1);
      }
      else if ((__case_expression == TDIR__DIR_UP)) {
        if (IS_POLY(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)IT.ITEM)) {
          M = 0;
          while ((STACK.table[((N - 1)) - (0)] != IT.ITEM)) {
            N = (N - 1);
            if ((M > 15)) {
              MSG = __STRING_LITERAL(25,"CheckValid: Kids overflow");
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error
              #undef GetFbVar
              #undef SetFbVar
;
            };
            KIDS.table[(M) - (0)] = STACK.table[(N) - (0)];
            M = (M + 1);
          };
          for(IM = 0; IM <= (M - 1); IM++) {
            PIT = KIDS.table[(IM) - (0)];
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)__STRING_LITERAL(14,"CheckValid: P="),
              (STRING)ID2STR(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (UINT)IT_ID(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (TPOS8)IT.ITEM)),
              (STRING)__STRING_LITERAL(4,", C="),
              (STRING)ID2STR(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (UINT)IT_ID(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (TPOS8)PIT)));
            if ((IS_CYL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)IT.ITEM) && !(IS_CYL(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)PIT)))) {
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(22,", Er=CS does not match"),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,""));
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 goto __exit;  
              #undef GetFbVar
              #undef SetFbVar
;
            };
            SH = GET_SH(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)PIT);
            P0 = SH.P0;
            P1 = SH.PL;
            P2 = SH.LX;
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(6," LWH=("),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(0) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(1) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(2) - (0)]),
              (STRING)__STRING_LITERAL(2,");"));
            if ((((P2.table[(0) - (0)] <= 0.1) || (P2.table[(1) - (0)] <= 0.1)) || (P2.table[(2) - (0)] <= 0.1))) {
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(24,", Er=LWH must be nonzero"),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,""));
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
              #undef GetFbVar
              #undef SetFbVar
;
            };
            P2 = _POINT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (REAL)(P1.table[(0) - (0)] + P2.table[(0) - (0)]),
              (REAL)(P1.table[(1) - (0)] + P2.table[(1) - (0)]),
              (REAL)(P1.table[(2) - (0)] + P2.table[(2) - (0)]));
            P1 = SH_LOC2ABS(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)SH,
              (REAL)P1.table[(0) - (0)],
              (REAL)P1.table[(1) - (0)],
              (REAL)P1.table[(2) - (0)]);
            P2 = SH_LOC2ABS(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)SH,
              (REAL)P2.table[(0) - (0)],
              (REAL)P2.table[(1) - (0)],
              (REAL)P2.table[(2) - (0)]);
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(5," P1=("),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P1.table[(0) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P1.table[(1) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P1.table[(2) - (0)]),
              (STRING)__STRING_LITERAL(2,");"));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(5," P2=("),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(0) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(1) - (0)]),
              (STRING)__STRING_LITERAL(1,","));
            MSG = MAKEMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (STRING)__STRING_LITERAL(0,""),
              (STRING)REAL_TO_STRING(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (REAL)P2.table[(2) - (0)]),
              (STRING)__STRING_LITERAL(2,");"));
            CHK = SH_POINT2DOT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)GET_SH(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IT.ITEM),
              (REAL)P1.table[(0) - (0)],
              (REAL)P1.table[(1) - (0)],
              (REAL)P1.table[(2) - (0)],
              (BOOL)__BOOL_LITERAL(TRUE));
            if ((CHK.V <= 0)) {
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(21,", Er=P1 out of parent"),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,""));
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
              #undef GetFbVar
              #undef SetFbVar
;
            };
            CHK = SH_POINT2DOT(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TSHAPE)GET_SH(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IT.ITEM),
              (REAL)P2.table[(0) - (0)],
              (REAL)P2.table[(1) - (0)],
              (REAL)P2.table[(2) - (0)],
              (BOOL)__BOOL_LITERAL(TRUE));
            if ((CHK.V <= 0)) {
              MSG = MAKEMSG(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (STRING)MSG,
                (STRING)__STRING_LITERAL(21,", Er=P2 out of parent"),
                (STRING)__STRING_LITERAL(0,""),
                (STRING)__STRING_LITERAL(0,""));
              #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
              #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
              #undef GetFbVar
              #undef SetFbVar
;
            };
            if (!(IS_POLY(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (TPOS8)PIT))) {
              for(J = 0; J <= (M - 1); J++) {
                if ((J != IM)) {
                  PIT2 = KIDS.table[(J) - (0)];
                  CHK = SH_POINT2DOT(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (TSHAPE)GET_SH(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (TPOS8)PIT2),
                    (REAL)P1.table[(0) - (0)],
                    (REAL)P1.table[(1) - (0)],
                    (REAL)P1.table[(2) - (0)],
                    (BOOL)__BOOL_LITERAL(TRUE));
                  if (((CHK.V == 0x1) || (CHK.V == 0xFF))) {
                    MSG = MAKEMSG(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (STRING)MSG,
                      (STRING)__STRING_LITERAL(13,", Err: P1 of "),
                      (STRING)SINT_TO_STRING(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (SINT)PIT),
                      (STRING)__STRING_LITERAL(0,""));
                    MSG = MAKEMSG(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (STRING)MSG,
                      (STRING)__STRING_LITERAL(9," is into "),
                      (STRING)SINT_TO_STRING(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (SINT)PIT2),
                      (STRING)__STRING_LITERAL(0,""));
                    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
                    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
                    #undef GetFbVar
                    #undef SetFbVar
;
                  };
                  CHK = SH_POINT2DOT(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (TSHAPE)GET_SH(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (TPOS8)PIT2),
                    (REAL)P2.table[(0) - (0)],
                    (REAL)P2.table[(1) - (0)],
                    (REAL)P2.table[(2) - (0)],
                    (BOOL)__BOOL_LITERAL(TRUE));
                  if (((CHK.V == 0x1) || (CHK.V == 0xFF))) {
                    MSG = MAKEMSG(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (STRING)MSG,
                      (STRING)__STRING_LITERAL(13,", Err: P2 of "),
                      (STRING)SINT_TO_STRING(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (SINT)PIT),
                      (STRING)__STRING_LITERAL(0,""));
                    MSG = MAKEMSG(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (STRING)MSG,
                      (STRING)__STRING_LITERAL(9," is into "),
                      (STRING)SINT_TO_STRING(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (SINT)PIT2),
                      (STRING)__STRING_LITERAL(0,""));
                    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
                    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
                    #undef GetFbVar
                    #undef SetFbVar
;
                  };
                };
              };
            };
            MSG = LOGMSG(
              (BOOL)__BOOL_LITERAL(TRUE),
              NULL,
              (STRING)MSG,
              (LOGLEVEL)LOGLEVEL__DEBUG,
              (TERROR)TERROR__E_SUCCESS);
          };
        } else {
          if ((N > 99)) {
            MSG = __STRING_LITERAL(26,"CheckValid: Stack overflow");
            #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
            #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __error
            #undef GetFbVar
            #undef SetFbVar
;
          };
          STACK.table[(N) - (0)] = IT.ITEM;
          N = (N + 1);
        };
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  BRES = __BOOL_LITERAL(TRUE);
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __exit: 
  #undef GetFbVar
  #undef SetFbVar
;
  MSG = LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS);
  DO_CHECKVALID = BRES;
  goto __end;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __error: 
  #undef GetFbVar
  #undef SetFbVar
;
  DO_CHECKVALID = ST_SET_STAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TERROR)TERROR__E_CHECKVALID,
    (UINT)IT_ID(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM),
    (STRING)MSG);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_CHECKVALID;
}


// FUNCTION
INT DO_LINKITEMS(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  BYTE B = 0;
  INT I = 0;
  INT J = 0;
  INT K = 0;
  SINT NPOS = 0;
  INT NAIR = 0;
  INT NITEMS = 0;
  TSHAPE SH = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  TDOT DOT = {0,{{0,0,0}}};
  __ARRAY_OF_REAL_3 PT = {{0,0,0}};
  INT DO_LINKITEMS = 0;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_LINKITEMS;
  }
  DO_LINKITEMS = -1;
  if (!(ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE)))) {
    goto __end;
  };
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  while ((IT.ITEM != -1)) {
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_UP)) {
        B = 0;
        NAIR = 0;
        SH = GET_SH(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)IT.ITEM);
        for(I = 0; I <= (SH.KN.table[(0) - (0)] - 1); I++) {
          for(J = 0; J <= (SH.KN.table[(1) - (0)] - 1); J++) {
            for(K = 0; K <= (SH.KN.table[(2) - (0)] - 1); K++) {
              if (!(IS_POLY(
                (BOOL)__BOOL_LITERAL(TRUE),
                NULL,
                (TPOS8)IT.ITEM))) {
                if (((I == 0) || (I == (SH.KN.table[(0) - (0)] - 1)))) {
                  DOT = LINK_VAR(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (THANDLE)ITS_GR(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (TPOS8)0),
                    (TPOS8)IT.ITEM,
                    (TSHAPE)SH,
                    (INT)I,
                    (INT)J,
                    (INT)K,
                    (USINT)1,
                    (TPOS8)IT.ITEM,
                    (REAL)0.1,
                    (REAL)0.1);
                  if ((DOT.V == -1)) {
                    if ((I == 0)) {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)1));
                    } else {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)2));
                    };
                  };
                };
                if (((J == 0) || (J == (SH.KN.table[(1) - (0)] - 1)))) {
                  DOT = LINK_VAR(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (THANDLE)ITS_GR(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (TPOS8)0),
                    (TPOS8)IT.ITEM,
                    (TSHAPE)SH,
                    (INT)I,
                    (INT)J,
                    (INT)K,
                    (USINT)2,
                    (TPOS8)IT.ITEM,
                    (REAL)0.1,
                    (REAL)0.1);
                  if ((DOT.V == -1)) {
                    if ((J == 0)) {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)3));
                    } else {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)4));
                    };
                  };
                };
                if (((K == 0) || (K == (SH.KN.table[(2) - (0)] - 1)))) {
                  DOT = LINK_VAR(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (THANDLE)ITS_GR(
                      (BOOL)__BOOL_LITERAL(TRUE),
                      NULL,
                      (TPOS8)0),
                    (TPOS8)IT.ITEM,
                    (TSHAPE)SH,
                    (INT)I,
                    (INT)J,
                    (INT)K,
                    (USINT)3,
                    (TPOS8)IT.ITEM,
                    (REAL)0.1,
                    (REAL)0.1);
                  if ((DOT.V == -1)) {
                    if ((K == 0)) {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)5));
                    } else {
                      B = (B | SHL__BYTE__BYTE__SINT(
                        (BOOL)__BOOL_LITERAL(TRUE),
                        NULL,
                        (BYTE)0x1,
                        (SINT)6));
                    };
                  };
                };
              } else {
                DOT = LINK_VAR(
                  (BOOL)__BOOL_LITERAL(TRUE),
                  NULL,
                  (THANDLE)ITS_GR(
                    (BOOL)__BOOL_LITERAL(TRUE),
                    NULL,
                    (TPOS8)0),
                  (TPOS8)IT.ITEM,
                  (TSHAPE)SH,
                  (INT)I,
                  (INT)J,
                  (INT)K,
                  (USINT)0,
                  (TPOS8)-1,
                  (REAL)0.1,
                  (REAL)0.1);
              };
            };
          };
        };
        for(I = 1; I <= 6; I++) {
          if (((B & SHL__BYTE__BYTE__INT(
            (BOOL)__BOOL_LITERAL(TRUE),
            NULL,
            (BYTE)0x1,
            (INT)I)) != 0)) {
            NAIR = (NAIR + 1);
          };
        };
        if ((NAIR > 0)) {
          NITEMS = (NITEMS + 1);
        };
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  DO_LINKITEMS = NITEMS;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_LINKITEMS;
}


// FUNCTION
BOOL ST_SET_DEBUG(
  BOOL EN, 
  BOOL *__ENO, 
  BOOL DBG)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  BOOL ST_SET_DEBUG = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return ST_SET_DEBUG;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (ST_SET_DEBUG=(__GET_GLOBAL_STAT()->DBG=DBG)); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return ST_SET_DEBUG;
}


void P_CONF_init__(P_CONF *data__, BOOL retain) {
  __INIT_EXTERNAL(TSTAT,STAT,data__->STAT,retain)
  __INIT_EXTERNAL(BOOL,F_CONF,data__->F_CONF,retain)
  __INIT_EXTERNAL(THEAD,HDR,data__->HDR,retain)
  __INIT_EXTERNAL(TSETS,STS,data__->STS,retain)
  __INIT_EXTERNAL(TITEMS,ITS,data__->ITS,retain)
  __INIT_VAR(data__->MSG,__STRING_LITERAL(0,""),retain)
  GETHEAD_init__(&data__->_GETHEAD,retain);
  GETMAT_init__(&data__->_GETMAT,retain);
  GETVAL_init__(&data__->_GETVAL,retain);
  GETPROF_init__(&data__->_GETPROF,retain);
  READITEM_init__(&data__->_READITEM,retain);
  SORT_IDS_init__(&data__->_SORT_IDS,retain);
  PROCESS_XYZ_init__(&data__->_PROCESS_X,retain);
  __INIT_VAR(data__->I,0,retain)
  __INIT_VAR(data__->J,0,retain)
  __INIT_VAR(data__->K,0,retain)
  __INIT_VAR(data__->L,0,retain)
  __INIT_VAR(data__->ILEV,0,retain)
  __INIT_VAR(data__->PIT,-1,retain)
  __INIT_VAR(data__->IDX,-1,retain)
  __INIT_VAR(data__->IPAR,-1,retain)
  __INIT_VAR(data__->IPREV,-1,retain)
  __INIT_VAR(data__->NRES,TERROR__E_SUCCESS,retain)
  __INIT_VAR(data__->IRES,0,retain)
  {
    static const TITER temp = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
    __SET_VAR(data__->,IT,,temp);
  }
  __INIT_VAR(data__->BTRES,0,retain)
  __INIT_VAR(data__->BRES,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->RRES,0,retain)
  __INIT_VAR(data__->II,0,retain)
  {
    static const P_SIBT temp = {0,0};
    __SET_VAR(data__->,SIBT,,temp);
  }
}

// Code part
void P_CONF_body__(P_CONF *data__) {
  // Initialise TEMP variables

  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)

    // Инициализация фиктивного элемента
    //TITEM *pItem0 = __GET_GLOBAL_DUMMY();
    //memset(pItem0,0x00,sizeof(TITEM));
    //pItem0->ID = 0xffff;
    
    // Инициализация состояния ресурса
    TSTAT *pStat = __GET_GLOBAL_STAT();
    *pStat = (TSTAT) {FALSE, TRUE, TERROR__E_SUCCESS, 0, __INIT_STRING};
  
  #undef GetFbVar
  #undef SetFbVar
;
  __SET_VAR(data__->,NRES,,TERROR__E_SUCCESS);
  __SET_VAR(data__->,BRES,,ST_SET_DEBUG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(TRUE)));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(13,"== CONFIG ..."),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  GETHEAD_body__(&data__->_GETHEAD);
  __SET_EXTERNAL(data__->,HDR,,__GET_VAR(data__->_GETHEAD.HEAD));
  __SET_VAR(data__->,MSG,,MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(20," - Read header ... ("),
    (STRING)__STRING_LITERAL(0,""),
    (STRING)__STRING_LITERAL(0,""),
    (STRING)__STRING_LITERAL(0,"")));
  __SET_VAR(data__->,MSG,,MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,),
    (STRING)SINT_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)__GET_EXTERNAL(data__->HDR,.NI)),
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)__STRING_LITERAL(0,"")));
  __SET_VAR(data__->,MSG,,MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,),
    (STRING)SINT_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)__GET_EXTERNAL(data__->HDR,.NM)),
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)__STRING_LITERAL(0,"")));
  __SET_VAR(data__->,MSG,,MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,),
    (STRING)SINT_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)__GET_EXTERNAL(data__->HDR,.NV)),
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)__STRING_LITERAL(0,"")));
  __SET_VAR(data__->,MSG,,MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,),
    (STRING)SINT_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)__GET_EXTERNAL(data__->HDR,.NP)),
    (STRING)__STRING_LITERAL(1,")"),
    (STRING)__STRING_LITERAL(0,"")));
  if (((__GET_EXTERNAL(data__->HDR,.NI) == 0) || (__GET_EXTERNAL(data__->HDR,.NI) > 100))) {
    __SET_VAR(data__->,NRES,,TERROR__E_HEAD);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((__GET_EXTERNAL(data__->HDR,.NM) == 0) || (__GET_EXTERNAL(data__->HDR,.NM) > 12))) {
    __SET_VAR(data__->,NRES,,TERROR__E_HEAD);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((__GET_EXTERNAL(data__->HDR,.NV) < 0) || (__GET_EXTERNAL(data__->HDR,.NV) > 25))) {
    __SET_VAR(data__->,NRES,,TERROR__E_HEAD);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if (((__GET_EXTERNAL(data__->HDR,.NP) < 0) || (__GET_EXTERNAL(data__->HDR,.NP) > 30))) {
    __SET_VAR(data__->,NRES,,TERROR__E_HEAD);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)__STRING_LITERAL(1,";"),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  if (EQ_TIME(__BOOL_LITERAL(TRUE), NULL, 2, __GET_EXTERNAL(data__->HDR,.TR.table[(0) - (0)]), __time_to_timespec(1, 0, 0, 0, 0, 0))) {
    __SET_EXTERNAL(data__->,HDR,.TR.table[(0) - (0)],__time_to_timespec(1, 0, 15, 0, 0, 0));
  };
  if (EQ_TIME(__BOOL_LITERAL(TRUE), NULL, 2, __GET_EXTERNAL(data__->HDR,.TR.table[(1) - (0)]), __time_to_timespec(1, 0, 0, 0, 0, 0))) {
    __SET_EXTERNAL(data__->,HDR,.TR.table[(1) - (0)],__time_to_timespec(1, 0, 30, 0, 0, 0));
  };
  if (EQ_TIME(__BOOL_LITERAL(TRUE), NULL, 2, __GET_EXTERNAL(data__->HDR,.TR.table[(2) - (0)]), __time_to_timespec(1, 0, 0, 0, 0, 0))) {
    __SET_EXTERNAL(data__->,HDR,.TR.table[(2) - (0)],__time_to_timespec(1, 0, 45, 0, 0, 0));
  };
  if (EQ_TIME(__BOOL_LITERAL(TRUE), NULL, 2, __GET_EXTERNAL(data__->HDR,.TR.table[(3) - (0)]), __time_to_timespec(1, 0, 0, 0, 0, 0))) {
    __SET_EXTERNAL(data__->,HDR,.TR.table[(3) - (0)],__time_to_timespec(1, 0, 60, 0, 0, 0));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(19,"Read materials ... "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  for(__GET_VAR(data__->I,) = 0; __GET_VAR(data__->I,) <= (__GET_EXTERNAL(data__->HDR,.NM) - 1); __GET_VAR(data__->I,)++) {
    __SET_VAR(data__->_GETMAT.,I,,__GET_VAR(data__->I,));
    GETMAT_body__(&data__->_GETMAT);
    __SET_EXTERNAL(data__->,STS,.MT.table[(__GET_VAR(data__->I,)) - (0)],__GET_VAR(data__->_GETMAT.MAT));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(17," - Get material ["),
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)__GET_VAR(data__->I,)),
      (STRING)__STRING_LITERAL(7,"] ... ("),
      (STRING)__STRING_LITERAL(0,"")));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)REAL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].KT)),
      (STRING)__STRING_LITERAL(2,", "),
      (STRING)__STRING_LITERAL(0,"")));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)REAL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].CP)),
      (STRING)__STRING_LITERAL(2,", "),
      (STRING)__STRING_LITERAL(0,"")));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)REAL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].PL)),
      (STRING)__STRING_LITERAL(2,", "),
      (STRING)__STRING_LITERAL(0,"")));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)REAL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (REAL)__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].MD)),
      (STRING)__STRING_LITERAL(1,")"),
      (STRING)__STRING_LITERAL(0,"")));
    if ((__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].KT) < 1.0E-8)) {
      __SET_VAR(data__->,NRES,,TERROR__E_MATER);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    if ((__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].CP) < 1.0E-8)) {
      __SET_VAR(data__->,NRES,,TERROR__E_MATER);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    if ((__GET_EXTERNAL(data__->STS,.MT.table[(__GET_VAR(data__->I,)) - (0)].PL) < 1.0E-8)) {
      __SET_VAR(data__->,NRES,,TERROR__E_MATER);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(1,";"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(18,"Read profiles ... "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  for(__GET_VAR(data__->I,) = 0; __GET_VAR(data__->I,) <= (__GET_EXTERNAL(data__->HDR,.NP) - 1); __GET_VAR(data__->I,)++) {
    __SET_VAR(data__->_GETPROF.,I,,__GET_VAR(data__->I,));
    GETPROF_body__(&data__->_GETPROF);
    __SET_EXTERNAL(data__->,STS,.PR.table[(__GET_VAR(data__->I,)) - (0)],__GET_VAR(data__->_GETPROF.PROF));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(16," - Get profile ["),
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)__GET_VAR(data__->I,)),
      (STRING)__STRING_LITERAL(5,"] ..."),
      (STRING)__STRING_LITERAL(0,"")));
    for(__GET_VAR(data__->J,) = 0; __GET_VAR(data__->J,) <= 11; __GET_VAR(data__->J,)++) {
      __SET_VAR(data__->,MSG,,MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(2," ("),
        (STRING)SINT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].A)),
        (STRING)__STRING_LITERAL(1,",")));
      __SET_VAR(data__->,MSG,,MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)SINT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].B)),
        (STRING)__STRING_LITERAL(1,")"),
        (STRING)__STRING_LITERAL(0,"")));
      if (((__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].A) < 0) || (__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].A) > 100))) {
        __SET_VAR(data__->,NRES,,TERROR__E_PROFILE);
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
        #undef GetFbVar
        #undef SetFbVar
;
      };
      if (((__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].B) < -100) || (__GET_EXTERNAL(data__->STS,.PR.table[(__GET_VAR(data__->I,)) - (0)].table[(__GET_VAR(data__->J,)) - (0)].B) > 100))) {
        __SET_VAR(data__->,NRES,,TERROR__E_PROFILE);
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
        #undef GetFbVar
        #undef SetFbVar
;
      };
    };
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(1,";"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(16,"Read values ... "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  for(__GET_VAR(data__->I,) = 0; __GET_VAR(data__->I,) <= (__GET_EXTERNAL(data__->HDR,.NV) - 1); __GET_VAR(data__->I,)++) {
    __SET_VAR(data__->_GETVAL.,I,,__GET_VAR(data__->I,));
    GETVAL_body__(&data__->_GETVAL);
    __SET_EXTERNAL(data__->,STS,.VL.table[(__GET_VAR(data__->I,)) - (0)],__GET_VAR(data__->_GETVAL.VAL));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(14," - Get value ["),
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)__GET_VAR(data__->I,)),
      (STRING)__STRING_LITERAL(5,"] ..."),
      (STRING)__STRING_LITERAL(0,"")));
    if (((__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].IV) >= USINT_TO_INT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (USINT)30)) && (__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].IV) != -1))) {
      __SET_VAR(data__->,NRES,,TERROR__E_VALUE);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    for(__GET_VAR(data__->J,) = 0; __GET_VAR(data__->J,) <= 2; __GET_VAR(data__->J,)++) {
      __SET_VAR(data__->,MSG,,MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(2," ("),
        (STRING)SINT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].A)),
        (STRING)__STRING_LITERAL(1,",")));
      __SET_VAR(data__->,MSG,,MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)SINT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (SINT)__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].B)),
        (STRING)__STRING_LITERAL(1,")"),
        (STRING)__STRING_LITERAL(0,"")));
      if (((__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].A) < 0) || (__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].A) > 100))) {
        __SET_VAR(data__->,NRES,,TERROR__E_VALUE);
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
        #undef GetFbVar
        #undef SetFbVar
;
      };
      if (((__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].B) < 0) || (__GET_EXTERNAL(data__->STS,.VL.table[(__GET_VAR(data__->I,)) - (0)].VI.table[(__GET_VAR(data__->J,)) - (0)].B) >= __GET_EXTERNAL(data__->HDR,.NP)))) {
        __SET_VAR(data__->,NRES,,TERROR__E_VALUE);
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
        #undef GetFbVar
        #undef SetFbVar
;
      };
    };
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(1,";"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(15,"Read items ... "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  for(__GET_VAR(data__->PIT,) = 0; __GET_VAR(data__->PIT,) <= (__GET_EXTERNAL(data__->HDR,.NI) - 1); __GET_VAR(data__->PIT,)++) {
    __SET_VAR(data__->_READITEM.,PIT,,__GET_VAR(data__->PIT,));
    READITEM_body__(&data__->_READITEM);
    __SET_VAR(data__->,NRES,,__GET_VAR(data__->_READITEM.IRES));
    if ((LEN__ULINT__STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,)) == 0)) {
      __SET_VAR(data__->,MSG,,MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__STRING_LITERAL(18," - Updated items: "),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")));
    };
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)__STRING_LITERAL(2," ["),
      (STRING)ID2STR(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UINT)IT_ID(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (TPOS8)__GET_VAR(data__->PIT,))),
      (STRING)__STRING_LITERAL(1,",")));
    __SET_VAR(data__->,MSG,,MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (STRING)SINT_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (SINT)__GET_VAR(data__->PIT,)),
      (STRING)__STRING_LITERAL(1,"]"),
      (STRING)__STRING_LITERAL(0,"")));
    if ((MOD__SINT__SINT__SINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)(__GET_VAR(data__->PIT,) + 1),
      (SINT)5) == 0)) {
      __SET_VAR(data__->,MSG,,LOGMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)MAKEMSG(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (STRING)__GET_VAR(data__->MSG,),
          (STRING)__STRING_LITERAL(1,";"),
          (STRING)__STRING_LITERAL(0,""),
          (STRING)__STRING_LITERAL(0,"")),
        (LOGLEVEL)LOGLEVEL__DEBUG,
        (TERROR)TERROR__E_SUCCESS));
    };
    if ((__GET_VAR(data__->NRES,) != TERROR__E_SUCCESS)) {
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    __SET_EXTERNAL(data__->,ITS,.PR.table[(__GET_VAR(data__->PIT,)) - (0)].A,__GET_EXTERNAL(data__->ITS,.IT.table[(__GET_VAR(data__->PIT,)) - (0)].ID));
    __SET_EXTERNAL(data__->,ITS,.PR.table[(__GET_VAR(data__->PIT,)) - (0)].B,__GET_VAR(data__->PIT,));
  };
  if ((LEN__ULINT__STRING(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_VAR(data__->MSG,)) > 0)) {
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__GET_VAR(data__->MSG,),
        (STRING)__STRING_LITERAL(1,";"),
        (STRING)__STRING_LITERAL(0,""),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(15,"Sort items ... "),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->_SORT_IDS.,IBEGIN,,0);
  __SET_VAR(data__->_SORT_IDS.,IEND,,(__GET_EXTERNAL(data__->HDR,.NI) - 1));
  SORT_IDS_body__(&data__->_SORT_IDS);
  __SET_VAR(data__->,NRES,,__GET_VAR(data__->_SORT_IDS.IRES));
  if ((__GET_VAR(data__->NRES,) != TERROR__E_SUCCESS)) {
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  if ((__GET_EXTERNAL(data__->ITS,.PR.table[(0) - (0)].A) != 0)) {
    __SET_VAR(data__->,NRES,,TERROR__E_ROOT);
    #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
    #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
    #undef GetFbVar
    #undef SetFbVar
;
  };
  __SET_VAR(data__->,IPREV,,__GET_EXTERNAL(data__->ITS,.PR.table[(0) - (0)].B));
  __SET_VAR(data__->,IPAR,,__GET_VAR(data__->IPREV,));
  __SET_VAR(data__->,ILEV,,-1);
  __SET_EXTERNAL(data__->,ITS,.IT.table[(__GET_VAR(data__->IPAR,)) - (0)].PAR,-1);
  for(__GET_VAR(data__->IDX,) = 1; __GET_VAR(data__->IDX,) <= (__GET_EXTERNAL(data__->HDR,.NI) - 1); __GET_VAR(data__->IDX,)++) {
    __SET_VAR(data__->,PIT,,__GET_EXTERNAL(data__->ITS,.PR.table[(__GET_VAR(data__->IDX,)) - (0)].B));
    __SET_VAR(data__->,L,,IT_LEV(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)__GET_VAR(data__->PIT,)));
    if ((__GET_VAR(data__->L,) < 0)) {
      __SET_VAR(data__->,NRES,,TERROR__E_STRUCT);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    if ((__GET_VAR(data__->L,) != __GET_VAR(data__->ILEV,))) {
      if ((__GET_VAR(data__->L,) > __GET_VAR(data__->ILEV,))) {
        if (((__GET_VAR(data__->L,) - __GET_VAR(data__->ILEV,)) != 1)) {
          __SET_VAR(data__->,NRES,,TERROR__E_STRUCT);
          #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
          #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
          #undef GetFbVar
          #undef SetFbVar
;
        };
        __SET_VAR(data__->,IPAR,,__GET_VAR(data__->IPREV,));
      } else {
        __SET_VAR(data__->,IPAR,,__GET_VAR(data__->IPREV,));
        for(__GET_VAR(data__->K,) = __GET_VAR(data__->L,); __GET_VAR(data__->K,) <= __GET_VAR(data__->ILEV,); __GET_VAR(data__->K,)++) {
          if ((__GET_VAR(data__->IPAR,) != -1)) {
            __SET_VAR(data__->,IPAR,,__GET_EXTERNAL(data__->ITS,.IT.table[(__GET_VAR(data__->IPAR,)) - (0)].PAR));
          };
        };
      };
    } else {
      __SET_VAR(data__->,IPAR,,__GET_VAR(data__->IPAR,));
    };
    if ((__GET_VAR(data__->IPAR,) == -1)) {
      __SET_VAR(data__->,NRES,,TERROR__E_STRUCT);
      #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
      #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
goto __exit
      #undef GetFbVar
      #undef SetFbVar
;
    };
    __SET_EXTERNAL(data__->,ITS,.IT.table[(__GET_VAR(data__->PIT,)) - (0)].PAR,__GET_VAR(data__->IPAR,));
    __SET_VAR(data__->,K,,__GET_EXTERNAL(data__->ITS,.IT.table[(__GET_VAR(data__->IPAR,)) - (0)].NUM));
    __SET_EXTERNAL(data__->,ITS,.IT.table[(__GET_VAR(data__->IPAR,)) - (0)].KIDS.table[(__GET_VAR(data__->K,)) - (0)],__GET_VAR(data__->PIT,));
    __SET_EXTERNAL(data__->,ITS,.IT.table[(__GET_VAR(data__->IPAR,)) - (0)].NUM,(__GET_VAR(data__->K,) + 1));
    __SET_VAR(data__->,ILEV,,__GET_VAR(data__->L,));
    __SET_VAR(data__->,IPREV,,__GET_VAR(data__->PIT,));
  };
  __SET_VAR(data__->,BRES,,DO_VALIDATE(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0)));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(19,"Validate model ... "),
      (STRING)BOOL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BOOL)__GET_VAR(data__->BRES,)),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__GET_EXTERNAL(data__->STAT,.STR),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,BRES,,DO_CHECKVALID(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0)));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(21,"Model CheckValid ... "),
      (STRING)BOOL_TO_STRING(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (BOOL)__GET_VAR(data__->BRES,)),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_EXTERNAL(data__->STAT,.STR),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)__STRING_LITERAL(20,"Model LinkItems ... "),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)TERROR__E_SUCCESS));
  __SET_VAR(data__->,IRES,,DO_LINKITEMS(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)ID2PIT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)0)));
  if ((__GET_VAR(data__->IRES,) != -1)) {
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)MAKEMSG(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (STRING)__STRING_LITERAL(39,"Model LinkItems ... OK [items -> Air = "),
        (STRING)INT_TO_STRING(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (INT)__GET_VAR(data__->IRES,)),
        (STRING)__STRING_LITERAL(2,"];"),
        (STRING)__STRING_LITERAL(0,"")),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  } else {
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(26,"Model LinkItems ... FAILED"),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,BRES,,ST_SET_READY(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(TRUE)));
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
__exit:
  #undef GetFbVar
  #undef SetFbVar
;
  if ((__GET_VAR(data__->NRES,) != TERROR__E_SUCCESS)) {
    __SET_VAR(data__->,MSG,,LOGMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__GET_VAR(data__->MSG,),
      (LOGLEVEL)LOGLEVEL__DEBUG,
      (TERROR)TERROR__E_SUCCESS));
  };
  __SET_VAR(data__->,MSG,,LOGMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MAKEMSG(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (STRING)__STRING_LITERAL(13,"== CONFIG -> "),
      (STRING)ERR2STR(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (TERROR)__GET_VAR(data__->NRES,)),
      (STRING)__STRING_LITERAL(0,""),
      (STRING)__STRING_LITERAL(0,"")),
    (LOGLEVEL)LOGLEVEL__DEBUG,
    (TERROR)__GET_VAR(data__->NRES,)));
  __SET_EXTERNAL(data__->,F_CONF,,__BOOL_LITERAL(FALSE));

  goto __end;

__end:
  return;
} // P_CONF_body__() 





void GETPHASEO_init__(GETPHASEO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD466,data__->MD466,retain)
  __INIT_EXTERNAL(UDINT,MD467,data__->MD467,retain)
  __INIT_EXTERNAL(UDINT,MD468,data__->MD468,retain)
  __INIT_EXTERNAL(UDINT,MD469,data__->MD469,retain)
  __INIT_EXTERNAL(UDINT,MD470,data__->MD470,retain)
  __INIT_EXTERNAL(UDINT,MD471,data__->MD471,retain)
  __INIT_EXTERNAL(UDINT,MD472,data__->MD472,retain)
  __INIT_EXTERNAL(UDINT,MD473,data__->MD473,retain)
  __INIT_EXTERNAL(UDINT,MD474,data__->MD474,retain)
  __INIT_EXTERNAL(UDINT,MD475,data__->MD475,retain)
  __INIT_EXTERNAL(UDINT,MD476,data__->MD476,retain)
  __INIT_EXTERNAL(UDINT,MD477,data__->MD477,retain)
  __INIT_EXTERNAL(UDINT,MD478,data__->MD478,retain)
  __INIT_EXTERNAL(UDINT,MD479,data__->MD479,retain)
  __INIT_EXTERNAL(UDINT,MD480,data__->MD480,retain)
  __INIT_EXTERNAL(UDINT,MD481,data__->MD481,retain)
  __INIT_EXTERNAL(UDINT,MD482,data__->MD482,retain)
  __INIT_EXTERNAL(UDINT,MD483,data__->MD483,retain)
  __INIT_EXTERNAL(UDINT,MD484,data__->MD484,retain)
  __INIT_EXTERNAL(UDINT,MD485,data__->MD485,retain)
  __INIT_EXTERNAL(UDINT,MD486,data__->MD486,retain)
  __INIT_EXTERNAL(UDINT,MD487,data__->MD487,retain)
  __INIT_EXTERNAL(UDINT,MD488,data__->MD488,retain)
  __INIT_EXTERNAL(UDINT,MD489,data__->MD489,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TPHASEO temp = {0.0,0.0,0.0,20.0,80.0,0.01,0.01,0.01};
    __SET_VAR(data__->,PHASE,,temp);
  }
}

// Code part
void GETPHASEO_body__(GETPHASEO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_OUT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD466,),
        (UDINT)__GET_EXTERNAL(data__->MD467,),
        (UDINT)__GET_EXTERNAL(data__->MD468,),
        (UDINT)__GET_EXTERNAL(data__->MD469,),
        (UDINT)__GET_EXTERNAL(data__->MD470,),
        (UDINT)__GET_EXTERNAL(data__->MD471,),
        (UDINT)__GET_EXTERNAL(data__->MD472,),
        (UDINT)__GET_EXTERNAL(data__->MD473,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_OUT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD474,),
        (UDINT)__GET_EXTERNAL(data__->MD475,),
        (UDINT)__GET_EXTERNAL(data__->MD476,),
        (UDINT)__GET_EXTERNAL(data__->MD477,),
        (UDINT)__GET_EXTERNAL(data__->MD478,),
        (UDINT)__GET_EXTERNAL(data__->MD479,),
        (UDINT)__GET_EXTERNAL(data__->MD480,),
        (UDINT)__GET_EXTERNAL(data__->MD481,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_OUT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD482,),
        (UDINT)__GET_EXTERNAL(data__->MD483,),
        (UDINT)__GET_EXTERNAL(data__->MD484,),
        (UDINT)__GET_EXTERNAL(data__->MD485,),
        (UDINT)__GET_EXTERNAL(data__->MD486,),
        (UDINT)__GET_EXTERNAL(data__->MD487,),
        (UDINT)__GET_EXTERNAL(data__->MD488,),
        (UDINT)__GET_EXTERNAL(data__->MD489,)));
    }
  };

  goto __end;

__end:
  return;
} // GETPHASEO_body__() 





void BUFFER32_init__(BUFFER32 *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MD0,0,retain)
  __INIT_VAR(data__->MD1,0,retain)
  __INIT_VAR(data__->MD2,0,retain)
  __INIT_VAR(data__->MD3,0,retain)
  __INIT_VAR(data__->MD4,0,retain)
  __INIT_VAR(data__->MD5,0,retain)
  __INIT_VAR(data__->MD6,0,retain)
  __INIT_VAR(data__->MD7,0,retain)
  __INIT_VAR(data__->MD8,0,retain)
  __INIT_VAR(data__->MD9,0,retain)
  __INIT_VAR(data__->MD10,0,retain)
  __INIT_VAR(data__->MD11,0,retain)
  __INIT_VAR(data__->MD12,0,retain)
  __INIT_VAR(data__->MD13,0,retain)
  __INIT_VAR(data__->MD14,0,retain)
  __INIT_VAR(data__->MD15,0,retain)
  __INIT_VAR(data__->MD16,0,retain)
  __INIT_VAR(data__->MD17,0,retain)
  __INIT_VAR(data__->MD18,0,retain)
  __INIT_VAR(data__->MD19,0,retain)
  __INIT_VAR(data__->MD20,0,retain)
  __INIT_VAR(data__->MD21,0,retain)
  __INIT_VAR(data__->MD22,0,retain)
  __INIT_VAR(data__->MD23,0,retain)
  __INIT_VAR(data__->MD24,0,retain)
  __INIT_VAR(data__->MD25,0,retain)
  __INIT_VAR(data__->MD26,0,retain)
  __INIT_VAR(data__->MD27,0,retain)
  __INIT_VAR(data__->MD28,0,retain)
  __INIT_VAR(data__->MD29,0,retain)
  __INIT_VAR(data__->MD30,0,retain)
  __INIT_VAR(data__->MD31,0,retain)
  {
    static const __ARRAY_OF_REAL_32 temp = {{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}};
    __SET_VAR(data__->,BUF,,temp);
  }
}

// Code part
void BUFFER32_body__(BUFFER32 *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,BUF,.table[(0) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD0,)));
  __SET_VAR(data__->,BUF,.table[(1) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD1,)));
  __SET_VAR(data__->,BUF,.table[(2) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD2,)));
  __SET_VAR(data__->,BUF,.table[(3) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD3,)));
  __SET_VAR(data__->,BUF,.table[(4) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD4,)));
  __SET_VAR(data__->,BUF,.table[(5) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD5,)));
  __SET_VAR(data__->,BUF,.table[(6) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD6,)));
  __SET_VAR(data__->,BUF,.table[(7) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD7,)));
  __SET_VAR(data__->,BUF,.table[(8) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD8,)));
  __SET_VAR(data__->,BUF,.table[(9) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD9,)));
  __SET_VAR(data__->,BUF,.table[(10) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD10,)));
  __SET_VAR(data__->,BUF,.table[(11) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD11,)));
  __SET_VAR(data__->,BUF,.table[(12) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD12,)));
  __SET_VAR(data__->,BUF,.table[(13) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD13,)));
  __SET_VAR(data__->,BUF,.table[(14) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD14,)));
  __SET_VAR(data__->,BUF,.table[(15) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD15,)));
  __SET_VAR(data__->,BUF,.table[(16) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD16,)));
  __SET_VAR(data__->,BUF,.table[(17) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD17,)));
  __SET_VAR(data__->,BUF,.table[(18) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD18,)));
  __SET_VAR(data__->,BUF,.table[(19) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD19,)));
  __SET_VAR(data__->,BUF,.table[(20) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD20,)));
  __SET_VAR(data__->,BUF,.table[(21) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD21,)));
  __SET_VAR(data__->,BUF,.table[(22) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD22,)));
  __SET_VAR(data__->,BUF,.table[(23) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD23,)));
  __SET_VAR(data__->,BUF,.table[(24) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD24,)));
  __SET_VAR(data__->,BUF,.table[(25) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD25,)));
  __SET_VAR(data__->,BUF,.table[(26) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD26,)));
  __SET_VAR(data__->,BUF,.table[(27) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD27,)));
  __SET_VAR(data__->,BUF,.table[(28) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD28,)));
  __SET_VAR(data__->,BUF,.table[(29) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD29,)));
  __SET_VAR(data__->,BUF,.table[(30) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD30,)));
  __SET_VAR(data__->,BUF,.table[(31) - (0)],UDI2REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_VAR(data__->MD31,)));

  goto __end;

__end:
  return;
} // BUFFER32_body__() 





void GETVARI_init__(GETVARI *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD430,data__->MD430,retain)
  __INIT_EXTERNAL(UDINT,MD431,data__->MD431,retain)
  __INIT_EXTERNAL(UDINT,MD432,data__->MD432,retain)
  __INIT_EXTERNAL(UDINT,MD433,data__->MD433,retain)
  __INIT_EXTERNAL(UDINT,MD434,data__->MD434,retain)
  __INIT_EXTERNAL(UDINT,MD435,data__->MD435,retain)
  {
    static const TVARI temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};
    __SET_VAR(data__->,VARI,,temp);
  }
}

// Code part
void GETVARI_body__(GETVARI *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,VARI,,M_VAR_IN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_EXTERNAL(data__->MD430,),
    (UDINT)__GET_EXTERNAL(data__->MD431,),
    (UDINT)__GET_EXTERNAL(data__->MD432,),
    (UDINT)__GET_EXTERNAL(data__->MD433,),
    (UDINT)__GET_EXTERNAL(data__->MD434,),
    (UDINT)__GET_EXTERNAL(data__->MD435,)));

  goto __end;

__end:
  return;
} // GETVARI_body__() 





void GETVARO_init__(GETVARO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD460,data__->MD460,retain)
  __INIT_EXTERNAL(UDINT,MD461,data__->MD461,retain)
  __INIT_EXTERNAL(UDINT,MD462,data__->MD462,retain)
  __INIT_EXTERNAL(UDINT,MD463,data__->MD463,retain)
  __INIT_EXTERNAL(UDINT,MD464,data__->MD464,retain)
  __INIT_EXTERNAL(UDINT,MD465,data__->MD465,retain)
  {
    static const TVARO temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};
    __SET_VAR(data__->,VARO,,temp);
  }
}

// Code part
void GETVARO_body__(GETVARO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,VARO,,M_VAR_OUT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_EXTERNAL(data__->MD460,),
    (UDINT)__GET_EXTERNAL(data__->MD461,),
    (UDINT)__GET_EXTERNAL(data__->MD462,),
    (UDINT)__GET_EXTERNAL(data__->MD463,),
    (UDINT)__GET_EXTERNAL(data__->MD464,),
    (UDINT)__GET_EXTERNAL(data__->MD465,)));

  goto __end;

__end:
  return;
} // GETVARO_body__() 





// FUNCTION
TPHASEI M_PHASE_IN(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1, 
  UDINT MD2, 
  UDINT MD3, 
  UDINT MD4, 
  UDINT MD5, 
  UDINT MD6, 
  UDINT MD7)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPHASEI M_PHASE_IN = {100.0,40.0,80.0,0xFFFF,{{0,0,0,0,0,0,0,0}}};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_PHASE_IN;
  }
  M_PHASE_IN.IC = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD0);
  M_PHASE_IN.TIN = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);
  M_PHASE_IN.TOUT = UDINT_TO_REAL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD2);
  M_PHASE_IN.RN = UDINT_TO_DWORD(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD3);
  M_PHASE_IN.RD.table[(0) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD4 / 65536)) / 256));
  M_PHASE_IN.RD.table[(0) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD4 / 65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(1) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD4,
        (UDINT)65536)) / 256));
  M_PHASE_IN.RD.table[(1) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD4,
          (UDINT)65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(2) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD5 / 65536)) / 256));
  M_PHASE_IN.RD.table[(2) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD5 / 65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(3) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD5,
        (UDINT)65536)) / 256));
  M_PHASE_IN.RD.table[(3) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD5,
          (UDINT)65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(4) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD6 / 65536)) / 256));
  M_PHASE_IN.RD.table[(4) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD6 / 65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(5) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD6,
        (UDINT)65536)) / 256));
  M_PHASE_IN.RD.table[(5) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD6,
          (UDINT)65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(6) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)(MD7 / 65536)) / 256));
  M_PHASE_IN.RD.table[(6) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)(MD7 / 65536)),
      (UINT)256));
  M_PHASE_IN.RD.table[(7) - (0)].A = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)(UDINT_TO_UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MOD__UDINT__UDINT__UDINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MD7,
        (UDINT)65536)) / 256));
  M_PHASE_IN.RD.table[(7) - (0)].B = UINT_TO_SINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)MOD__UINT__UINT__UINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)UDINT_TO_UINT(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)MOD__UDINT__UDINT__UDINT(
          (BOOL)__BOOL_LITERAL(TRUE),
          NULL,
          (UDINT)MD7,
          (UDINT)65536)),
      (UINT)256));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_PHASE_IN;
}


// FUNCTION
TCONF M_CONF(
  BOOL EN, 
  BOOL *__ENO, 
  UDINT MD0, 
  UDINT MD1)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TCONF M_CONF = {0,0,__time_to_timespec(1, 0, 10, 0, 0, 0)};

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return M_CONF;
  }
  M_CONF.NM = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)(MD0 / 65536));
  M_CONF.NR = UDINT_TO_UINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MOD__UDINT__UDINT__UDINT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UDINT)MD0,
      (UDINT)65536));
  M_CONF.TC = UDINT_TO_TIME(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)MD1);

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return M_CONF;
}


// FUNCTION
BOOL DO_PREPROC(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITER IT = {TDIR__DIR_UP,-1,-1,-1,-1,{{0,0,0,0}}};
  BOOL DO_PREPROC = __BOOL_LITERAL(FALSE);

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return DO_PREPROC;
  }
  DO_PREPROC = ST_CHECK(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (BOOL)__BOOL_LITERAL(FALSE));
  if (!(DO_PREPROC)) {
    goto __end;
  };
  DO_PREPROC = __BOOL_LITERAL(TRUE);
  IT = IT_BEGIN(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  while ((IT.ITEM != -1)) {
    {
      TDIR __case_expression = IT.DIR;
      if ((__case_expression == TDIR__DIR_UP)) {
        #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
        #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 
        #undef GetFbVar
        #undef SetFbVar
;
      }
    };
    IT = IT_NEXT(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TITER)IT);
  };
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __exit: 
  #undef GetFbVar
  #undef SetFbVar
;
  goto __end;
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 __error: 
  #undef GetFbVar
  #undef SetFbVar
;
  DO_PREPROC = ST_SET_STAT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TERROR)TERROR__E_PREPROC,
    (UINT)IT_ID(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)IT.ITEM),
    (STRING)__STRING_LITERAL(0,""));

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return DO_PREPROC;
}


inline BOOL __P_MOD1_DO_PREPROC1(BOOL EN,
  TPOS8 PIT,
  P_MOD1 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->DO_PREPROC19_ENO,);
  __res = DO_PREPROC(EN,
    &__TMP_ENO,
    PIT);
  __SET_VAR(,data__->DO_PREPROC19_ENO,,__TMP_ENO);
  return __res;
}

inline BOOL __P_MOD1_DO_POSTPROC2(BOOL EN,
  TPOS8 PIT,
  P_MOD1 *data__)
{
  BOOL __res;
  BOOL __TMP_ENO = __GET_VAR(data__->DO_POSTPROC37_ENO,);
  __res = DO_POSTPROC(EN,
    &__TMP_ENO,
    PIT);
  __SET_VAR(,data__->DO_POSTPROC37_ENO,,__TMP_ENO);
  return __res;
}

void P_MOD1_init__(P_MOD1 *data__, BOOL retain) {
  __INIT_EXTERNAL(TSTAT,STAT,data__->STAT,retain)
  __INIT_EXTERNAL(BOOL,F_RES,data__->F_RES,retain)
  __INIT_VAR(data__->CDT,__dt_to_timespec(0, 0, 0, 1, 1, 1970),retain)
  __INIT_VAR(data__->BRES,__BOOL_LITERAL(FALSE),retain)
  PROCESS_XYZ_init__(&data__->PROCESS_X1,retain);
  PROCESS_XYZ_init__(&data__->PROCESS_X2,retain);
  PROCESS_XYZ_init__(&data__->PROCESS_X0,retain);
  __INIT_VAR(data__->NOT33_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->AND32_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DO_PREPROC19_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DO_PREPROC19_OUT,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DO_POSTPROC37_ENO,__BOOL_LITERAL(FALSE),retain)
  __INIT_VAR(data__->DO_POSTPROC37_OUT,__BOOL_LITERAL(FALSE),retain)
}

// Code part
void P_MOD1_body__(P_MOD1 *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,NOT33_OUT,,!(__GET_EXTERNAL(data__->F_RES,)));
  __SET_VAR(data__->,AND32_OUT,,AND__BOOL__BOOL(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UINT)2,
    (BOOL)__GET_EXTERNAL(data__->STAT,.RDY),
    (BOOL)__GET_VAR(data__->NOT33_OUT,)));
  __SET_VAR(data__->,DO_PREPROC19_OUT,,__P_MOD1_DO_PREPROC1(
    (BOOL)__GET_VAR(data__->AND32_OUT,),
    (TPOS8)0,
    data__));
  __SET_VAR(data__->PROCESS_X0.,IN,,__GET_VAR(data__->DO_PREPROC19_ENO,));
  __SET_VAR(data__->PROCESS_X0.,IX,,0);
  __SET_VAR(data__->PROCESS_X0.,N,,-1);
  PROCESS_XYZ_body__(&data__->PROCESS_X0);
  __SET_VAR(data__->PROCESS_X1.,IN,,__GET_VAR(data__->PROCESS_X0.BRES,));
  __SET_VAR(data__->PROCESS_X1.,IX,,1);
  __SET_VAR(data__->PROCESS_X1.,N,,-1);
  PROCESS_XYZ_body__(&data__->PROCESS_X1);
  __SET_VAR(data__->PROCESS_X2.,IN,,__GET_VAR(data__->PROCESS_X1.BRES,));
  __SET_VAR(data__->PROCESS_X2.,IX,,2);
  __SET_VAR(data__->PROCESS_X2.,N,,-1);
  PROCESS_XYZ_body__(&data__->PROCESS_X2);
  __SET_VAR(data__->,DO_POSTPROC37_OUT,,__P_MOD1_DO_POSTPROC2(
    (BOOL)__GET_VAR(data__->PROCESS_X2.BRES,),
    (TPOS8)0,
    data__));
  if (__GET_VAR(data__->DO_POSTPROC37_ENO,)) {
    __SET_EXTERNAL(data__->,STAT,.RDY,__GET_VAR(data__->DO_POSTPROC37_ENO,));
  };
  __SET_EXTERNAL(data__->,F_RES,,__GET_EXTERNAL(data__->STAT,.RDY));

  goto __end;

__end:
  return;
} // P_MOD1_body__() 





void P_MOD2_init__(P_MOD2 *data__, BOOL retain) {
  __INIT_EXTERNAL(TSETS,STS,data__->STS,retain)
  __INIT_EXTERNAL(UDINT,MD460,data__->MD460,retain)
  __INIT_EXTERNAL(UDINT,MD461,data__->MD461,retain)
  __INIT_EXTERNAL(UDINT,MD462,data__->MD462,retain)
  __INIT_EXTERNAL(UDINT,MD463,data__->MD463,retain)
  __INIT_EXTERNAL(UDINT,MD464,data__->MD464,retain)
  __INIT_EXTERNAL(UDINT,MD465,data__->MD465,retain)
  __INIT_EXTERNAL(UDINT,MD466,data__->MD466,retain)
  __INIT_EXTERNAL(UDINT,MD467,data__->MD467,retain)
  __INIT_EXTERNAL(UDINT,MD468,data__->MD468,retain)
  __INIT_EXTERNAL(UDINT,MD469,data__->MD469,retain)
  __INIT_EXTERNAL(UDINT,MD470,data__->MD470,retain)
  __INIT_EXTERNAL(UDINT,MD471,data__->MD471,retain)
  __INIT_EXTERNAL(UDINT,MD472,data__->MD472,retain)
  __INIT_EXTERNAL(UDINT,MD473,data__->MD473,retain)
  __INIT_EXTERNAL(UDINT,MD474,data__->MD474,retain)
  __INIT_EXTERNAL(UDINT,MD475,data__->MD475,retain)
  __INIT_EXTERNAL(UDINT,MD476,data__->MD476,retain)
  __INIT_EXTERNAL(UDINT,MD477,data__->MD477,retain)
  __INIT_EXTERNAL(UDINT,MD478,data__->MD478,retain)
  __INIT_EXTERNAL(UDINT,MD479,data__->MD479,retain)
  __INIT_EXTERNAL(UDINT,MD480,data__->MD480,retain)
  __INIT_EXTERNAL(UDINT,MD481,data__->MD481,retain)
  __INIT_EXTERNAL(UDINT,MD482,data__->MD482,retain)
  __INIT_EXTERNAL(UDINT,MD483,data__->MD483,retain)
  __INIT_EXTERNAL(UDINT,MD484,data__->MD484,retain)
  __INIT_EXTERNAL(UDINT,MD485,data__->MD485,retain)
  __INIT_EXTERNAL(UDINT,MD486,data__->MD486,retain)
  __INIT_EXTERNAL(UDINT,MD487,data__->MD487,retain)
  __INIT_EXTERNAL(UDINT,MD488,data__->MD488,retain)
  __INIT_EXTERNAL(UDINT,MD489,data__->MD489,retain)
}

// Code part
void P_MOD2_body__(P_MOD2 *data__) {
  // Initialise TEMP variables

  __SET_EXTERNAL(data__->,MD460,,0);

  goto __end;

__end:
  return;
} // P_MOD2_body__() 





void GETPHASEI_init__(GETPHASEI *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD436,data__->MD436,retain)
  __INIT_EXTERNAL(UDINT,MD437,data__->MD437,retain)
  __INIT_EXTERNAL(UDINT,MD438,data__->MD438,retain)
  __INIT_EXTERNAL(UDINT,MD439,data__->MD439,retain)
  __INIT_EXTERNAL(UDINT,MD440,data__->MD440,retain)
  __INIT_EXTERNAL(UDINT,MD441,data__->MD441,retain)
  __INIT_EXTERNAL(UDINT,MD442,data__->MD442,retain)
  __INIT_EXTERNAL(UDINT,MD443,data__->MD443,retain)
  __INIT_EXTERNAL(UDINT,MD444,data__->MD444,retain)
  __INIT_EXTERNAL(UDINT,MD445,data__->MD445,retain)
  __INIT_EXTERNAL(UDINT,MD446,data__->MD446,retain)
  __INIT_EXTERNAL(UDINT,MD447,data__->MD447,retain)
  __INIT_EXTERNAL(UDINT,MD448,data__->MD448,retain)
  __INIT_EXTERNAL(UDINT,MD449,data__->MD449,retain)
  __INIT_EXTERNAL(UDINT,MD450,data__->MD450,retain)
  __INIT_EXTERNAL(UDINT,MD451,data__->MD451,retain)
  __INIT_EXTERNAL(UDINT,MD452,data__->MD452,retain)
  __INIT_EXTERNAL(UDINT,MD453,data__->MD453,retain)
  __INIT_EXTERNAL(UDINT,MD454,data__->MD454,retain)
  __INIT_EXTERNAL(UDINT,MD455,data__->MD455,retain)
  __INIT_EXTERNAL(UDINT,MD456,data__->MD456,retain)
  __INIT_EXTERNAL(UDINT,MD457,data__->MD457,retain)
  __INIT_EXTERNAL(UDINT,MD458,data__->MD458,retain)
  __INIT_EXTERNAL(UDINT,MD459,data__->MD459,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TPHASEI temp = {100.0,40.0,80.0,0xFFFF,{{0,0,0,0,0,0,0,0}}};
    __SET_VAR(data__->,PHASE,,temp);
  }
}

// Code part
void GETPHASEI_body__(GETPHASEI *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_IN(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD436,),
        (UDINT)__GET_EXTERNAL(data__->MD437,),
        (UDINT)__GET_EXTERNAL(data__->MD438,),
        (UDINT)__GET_EXTERNAL(data__->MD439,),
        (UDINT)__GET_EXTERNAL(data__->MD440,),
        (UDINT)__GET_EXTERNAL(data__->MD441,),
        (UDINT)__GET_EXTERNAL(data__->MD442,),
        (UDINT)__GET_EXTERNAL(data__->MD443,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_IN(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD444,),
        (UDINT)__GET_EXTERNAL(data__->MD445,),
        (UDINT)__GET_EXTERNAL(data__->MD446,),
        (UDINT)__GET_EXTERNAL(data__->MD447,),
        (UDINT)__GET_EXTERNAL(data__->MD448,),
        (UDINT)__GET_EXTERNAL(data__->MD449,),
        (UDINT)__GET_EXTERNAL(data__->MD450,),
        (UDINT)__GET_EXTERNAL(data__->MD451,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,PHASE,,M_PHASE_IN(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD452,),
        (UDINT)__GET_EXTERNAL(data__->MD453,),
        (UDINT)__GET_EXTERNAL(data__->MD454,),
        (UDINT)__GET_EXTERNAL(data__->MD455,),
        (UDINT)__GET_EXTERNAL(data__->MD456,),
        (UDINT)__GET_EXTERNAL(data__->MD457,),
        (UDINT)__GET_EXTERNAL(data__->MD458,),
        (UDINT)__GET_EXTERNAL(data__->MD459,)));
    }
  };

  goto __end;

__end:
  return;
} // GETPHASEI_body__() 





void SETVARO_init__(SETVARO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD460,data__->MD460,retain)
  __INIT_EXTERNAL(UDINT,MD461,data__->MD461,retain)
  __INIT_EXTERNAL(UDINT,MD462,data__->MD462,retain)
  __INIT_EXTERNAL(UDINT,MD463,data__->MD463,retain)
  __INIT_EXTERNAL(UDINT,MD464,data__->MD464,retain)
  __INIT_EXTERNAL(UDINT,MD465,data__->MD465,retain)
  {
    static const TVARO temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),0.0,0.0,0.0,0.0};
    __SET_VAR(data__->,VARO,,temp);
  }
  DISTVARO_init__(&data__->DIST,retain);
}

// Code part
void SETVARO_body__(SETVARO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->DIST.,VARO,,__GET_VAR(data__->VARO,));
  DISTVARO_body__(&data__->DIST);
  __SET_EXTERNAL(data__->,MD460,,__GET_VAR(data__->DIST.MD0));
  __SET_EXTERNAL(data__->,MD461,,__GET_VAR(data__->DIST.MD1));
  __SET_EXTERNAL(data__->,MD462,,__GET_VAR(data__->DIST.MD2));
  __SET_EXTERNAL(data__->,MD463,,__GET_VAR(data__->DIST.MD3));
  __SET_EXTERNAL(data__->,MD464,,__GET_VAR(data__->DIST.MD4));
  __SET_EXTERNAL(data__->,MD465,,__GET_VAR(data__->DIST.MD5));

  goto __end;

__end:
  return;
} // SETVARO_body__() 





void DISTPHASEO_init__(DISTPHASEO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->MD0,0,retain)
  __INIT_VAR(data__->MD1,0,retain)
  __INIT_VAR(data__->MD2,0,retain)
  __INIT_VAR(data__->MD3,0,retain)
  __INIT_VAR(data__->MD4,0,retain)
  __INIT_VAR(data__->MD5,0,retain)
  __INIT_VAR(data__->MD6,0,retain)
  __INIT_VAR(data__->MD7,0,retain)
  {
    static const TPHASEO temp = {0.0,0.0,0.0,20.0,80.0,0.01,0.01,0.01};
    __SET_VAR(data__->,PHASEO,,temp);
  }
}

// Code part
void DISTPHASEO_body__(DISTPHASEO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,MD0,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.Q0)));
  __SET_VAR(data__->,MD1,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.Q1)));
  __SET_VAR(data__->,MD2,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.Q2)));
  __SET_VAR(data__->,MD3,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.TIN)));
  __SET_VAR(data__->,MD4,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.TOUT)));
  __SET_VAR(data__->,MD5,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.QM)));
  __SET_VAR(data__->,MD6,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.SE)));
  __SET_VAR(data__->,MD7,,REAL_TO_UDINT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (REAL)__GET_VAR(data__->PHASEO,.VE)));

  goto __end;

__end:
  return;
} // DISTPHASEO_body__() 





void SETPHASEO_init__(SETPHASEO *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD466,data__->MD466,retain)
  __INIT_EXTERNAL(UDINT,MD467,data__->MD467,retain)
  __INIT_EXTERNAL(UDINT,MD468,data__->MD468,retain)
  __INIT_EXTERNAL(UDINT,MD469,data__->MD469,retain)
  __INIT_EXTERNAL(UDINT,MD470,data__->MD470,retain)
  __INIT_EXTERNAL(UDINT,MD471,data__->MD471,retain)
  __INIT_EXTERNAL(UDINT,MD472,data__->MD472,retain)
  __INIT_EXTERNAL(UDINT,MD473,data__->MD473,retain)
  __INIT_EXTERNAL(UDINT,MD474,data__->MD474,retain)
  __INIT_EXTERNAL(UDINT,MD475,data__->MD475,retain)
  __INIT_EXTERNAL(UDINT,MD476,data__->MD476,retain)
  __INIT_EXTERNAL(UDINT,MD477,data__->MD477,retain)
  __INIT_EXTERNAL(UDINT,MD478,data__->MD478,retain)
  __INIT_EXTERNAL(UDINT,MD479,data__->MD479,retain)
  __INIT_EXTERNAL(UDINT,MD480,data__->MD480,retain)
  __INIT_EXTERNAL(UDINT,MD481,data__->MD481,retain)
  __INIT_EXTERNAL(UDINT,MD482,data__->MD482,retain)
  __INIT_EXTERNAL(UDINT,MD483,data__->MD483,retain)
  __INIT_EXTERNAL(UDINT,MD484,data__->MD484,retain)
  __INIT_EXTERNAL(UDINT,MD485,data__->MD485,retain)
  __INIT_EXTERNAL(UDINT,MD486,data__->MD486,retain)
  __INIT_EXTERNAL(UDINT,MD487,data__->MD487,retain)
  __INIT_EXTERNAL(UDINT,MD488,data__->MD488,retain)
  __INIT_EXTERNAL(UDINT,MD489,data__->MD489,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TPHASEO temp = {0.0,0.0,0.0,20.0,80.0,0.01,0.01,0.01};
    __SET_VAR(data__->,PHASE,,temp);
  }
  DISTPHASEO_init__(&data__->DIST,retain);
}

// Code part
void SETPHASEO_body__(SETPHASEO *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    UINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->DIST.,PHASEO,,__GET_VAR(data__->PHASE,));
      DISTPHASEO_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD466,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD467,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD468,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD469,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD470,,__GET_VAR(data__->DIST.MD4));
      __SET_EXTERNAL(data__->,MD471,,__GET_VAR(data__->DIST.MD5));
      __SET_EXTERNAL(data__->,MD472,,__GET_VAR(data__->DIST.MD6));
      __SET_EXTERNAL(data__->,MD473,,__GET_VAR(data__->DIST.MD7));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->DIST.,PHASEO,,__GET_VAR(data__->PHASE,));
      DISTPHASEO_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD474,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD475,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD476,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD477,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD478,,__GET_VAR(data__->DIST.MD4));
      __SET_EXTERNAL(data__->,MD479,,__GET_VAR(data__->DIST.MD5));
      __SET_EXTERNAL(data__->,MD480,,__GET_VAR(data__->DIST.MD6));
      __SET_EXTERNAL(data__->,MD481,,__GET_VAR(data__->DIST.MD7));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->DIST.,PHASEO,,__GET_VAR(data__->PHASE,));
      DISTPHASEO_body__(&data__->DIST);
      __SET_EXTERNAL(data__->,MD482,,__GET_VAR(data__->DIST.MD0));
      __SET_EXTERNAL(data__->,MD483,,__GET_VAR(data__->DIST.MD1));
      __SET_EXTERNAL(data__->,MD484,,__GET_VAR(data__->DIST.MD2));
      __SET_EXTERNAL(data__->,MD485,,__GET_VAR(data__->DIST.MD3));
      __SET_EXTERNAL(data__->,MD486,,__GET_VAR(data__->DIST.MD4));
      __SET_EXTERNAL(data__->,MD487,,__GET_VAR(data__->DIST.MD5));
      __SET_EXTERNAL(data__->,MD488,,__GET_VAR(data__->DIST.MD6));
      __SET_EXTERNAL(data__->,MD489,,__GET_VAR(data__->DIST.MD7));
    }
  };

  goto __end;

__end:
  return;
} // SETPHASEO_body__() 





void P_EVAL_init__(P_EVAL *data__, BOOL retain) {
  __INIT_VAR(data__->LOCALVAR0,0,retain)
}

// Code part
void P_EVAL_body__(P_EVAL *data__) {
  // Initialise TEMP variables

  __SET_VAR(data__->,LOCALVAR0,,0);

  goto __end;

__end:
  return;
} // P_EVAL_body__() 





void SETRES_init__(SETRES *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD490,data__->MD490,retain)
  __INIT_EXTERNAL(UDINT,MD491,data__->MD491,retain)
  __INIT_EXTERNAL(UDINT,MD492,data__->MD492,retain)
  __INIT_EXTERNAL(UDINT,MD493,data__->MD493,retain)
  __INIT_EXTERNAL(UDINT,MD494,data__->MD494,retain)
  __INIT_EXTERNAL(UDINT,MD495,data__->MD495,retain)
  __INIT_EXTERNAL(UDINT,MD496,data__->MD496,retain)
  __INIT_EXTERNAL(UDINT,MD497,data__->MD497,retain)
  __INIT_EXTERNAL(UDINT,MD498,data__->MD498,retain)
  __INIT_EXTERNAL(UDINT,MD499,data__->MD499,retain)
  {
    static const TRES temp = {0,__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),0,0,{{0,0,0,0,0,0}}};
    __SET_VAR(data__->,RES,,temp);
  }
  DISTRES_init__(&data__->DIST,retain);
}

// Code part
void SETRES_body__(SETRES *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->DIST.,RES,,__GET_VAR(data__->RES,));
  DISTRES_body__(&data__->DIST);
  __SET_EXTERNAL(data__->,MD490,,__GET_VAR(data__->DIST.MD0));
  __SET_EXTERNAL(data__->,MD491,,__GET_VAR(data__->DIST.MD1));
  __SET_EXTERNAL(data__->,MD492,,__GET_VAR(data__->DIST.MD2));
  __SET_EXTERNAL(data__->,MD493,,__GET_VAR(data__->DIST.MD3));
  __SET_EXTERNAL(data__->,MD494,,__GET_VAR(data__->DIST.MD4));
  __SET_EXTERNAL(data__->,MD495,,__GET_VAR(data__->DIST.MD5));
  __SET_EXTERNAL(data__->,MD496,,__GET_VAR(data__->DIST.MD6));
  __SET_EXTERNAL(data__->,MD497,,__GET_VAR(data__->DIST.MD7));
  __SET_EXTERNAL(data__->,MD498,,__GET_VAR(data__->DIST.MD8));
  __SET_EXTERNAL(data__->,MD499,,__GET_VAR(data__->DIST.MD9));

  goto __end;

__end:
  return;
} // SETRES_body__() 





void GETRAD_init__(GETRAD *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD302,data__->MD302,retain)
  __INIT_EXTERNAL(UDINT,MD303,data__->MD303,retain)
  __INIT_EXTERNAL(UDINT,MD304,data__->MD304,retain)
  __INIT_EXTERNAL(UDINT,MD305,data__->MD305,retain)
  __INIT_EXTERNAL(UDINT,MD306,data__->MD306,retain)
  __INIT_EXTERNAL(UDINT,MD307,data__->MD307,retain)
  __INIT_EXTERNAL(UDINT,MD308,data__->MD308,retain)
  __INIT_EXTERNAL(UDINT,MD309,data__->MD309,retain)
  __INIT_EXTERNAL(UDINT,MD310,data__->MD310,retain)
  __INIT_EXTERNAL(UDINT,MD311,data__->MD311,retain)
  __INIT_EXTERNAL(UDINT,MD312,data__->MD312,retain)
  __INIT_EXTERNAL(UDINT,MD313,data__->MD313,retain)
  __INIT_EXTERNAL(UDINT,MD314,data__->MD314,retain)
  __INIT_EXTERNAL(UDINT,MD315,data__->MD315,retain)
  __INIT_EXTERNAL(UDINT,MD316,data__->MD316,retain)
  __INIT_EXTERNAL(UDINT,MD317,data__->MD317,retain)
  __INIT_EXTERNAL(UDINT,MD318,data__->MD318,retain)
  __INIT_EXTERNAL(UDINT,MD319,data__->MD319,retain)
  __INIT_EXTERNAL(UDINT,MD320,data__->MD320,retain)
  __INIT_EXTERNAL(UDINT,MD321,data__->MD321,retain)
  __INIT_EXTERNAL(UDINT,MD322,data__->MD322,retain)
  __INIT_EXTERNAL(UDINT,MD323,data__->MD323,retain)
  __INIT_EXTERNAL(UDINT,MD324,data__->MD324,retain)
  __INIT_EXTERNAL(UDINT,MD325,data__->MD325,retain)
  __INIT_EXTERNAL(UDINT,MD326,data__->MD326,retain)
  __INIT_EXTERNAL(UDINT,MD327,data__->MD327,retain)
  __INIT_EXTERNAL(UDINT,MD328,data__->MD328,retain)
  __INIT_EXTERNAL(UDINT,MD329,data__->MD329,retain)
  __INIT_EXTERNAL(UDINT,MD330,data__->MD330,retain)
  __INIT_EXTERNAL(UDINT,MD331,data__->MD331,retain)
  __INIT_EXTERNAL(UDINT,MD332,data__->MD332,retain)
  __INIT_EXTERNAL(UDINT,MD333,data__->MD333,retain)
  __INIT_EXTERNAL(UDINT,MD334,data__->MD334,retain)
  __INIT_EXTERNAL(UDINT,MD335,data__->MD335,retain)
  __INIT_EXTERNAL(UDINT,MD336,data__->MD336,retain)
  __INIT_EXTERNAL(UDINT,MD337,data__->MD337,retain)
  __INIT_EXTERNAL(UDINT,MD338,data__->MD338,retain)
  __INIT_EXTERNAL(UDINT,MD339,data__->MD339,retain)
  __INIT_EXTERNAL(UDINT,MD340,data__->MD340,retain)
  __INIT_EXTERNAL(UDINT,MD341,data__->MD341,retain)
  __INIT_EXTERNAL(UDINT,MD342,data__->MD342,retain)
  __INIT_EXTERNAL(UDINT,MD343,data__->MD343,retain)
  __INIT_EXTERNAL(UDINT,MD344,data__->MD344,retain)
  __INIT_EXTERNAL(UDINT,MD345,data__->MD345,retain)
  __INIT_EXTERNAL(UDINT,MD346,data__->MD346,retain)
  __INIT_EXTERNAL(UDINT,MD347,data__->MD347,retain)
  __INIT_EXTERNAL(UDINT,MD348,data__->MD348,retain)
  __INIT_EXTERNAL(UDINT,MD349,data__->MD349,retain)
  __INIT_EXTERNAL(UDINT,MD350,data__->MD350,retain)
  __INIT_EXTERNAL(UDINT,MD351,data__->MD351,retain)
  __INIT_EXTERNAL(UDINT,MD352,data__->MD352,retain)
  __INIT_EXTERNAL(UDINT,MD353,data__->MD353,retain)
  __INIT_EXTERNAL(UDINT,MD354,data__->MD354,retain)
  __INIT_EXTERNAL(UDINT,MD355,data__->MD355,retain)
  __INIT_EXTERNAL(UDINT,MD356,data__->MD356,retain)
  __INIT_EXTERNAL(UDINT,MD357,data__->MD357,retain)
  __INIT_EXTERNAL(UDINT,MD358,data__->MD358,retain)
  __INIT_EXTERNAL(UDINT,MD359,data__->MD359,retain)
  __INIT_EXTERNAL(UDINT,MD360,data__->MD360,retain)
  __INIT_EXTERNAL(UDINT,MD361,data__->MD361,retain)
  __INIT_EXTERNAL(UDINT,MD362,data__->MD362,retain)
  __INIT_EXTERNAL(UDINT,MD363,data__->MD363,retain)
  __INIT_EXTERNAL(UDINT,MD364,data__->MD364,retain)
  __INIT_EXTERNAL(UDINT,MD365,data__->MD365,retain)
  __INIT_EXTERNAL(UDINT,MD366,data__->MD366,retain)
  __INIT_EXTERNAL(UDINT,MD367,data__->MD367,retain)
  __INIT_EXTERNAL(UDINT,MD368,data__->MD368,retain)
  __INIT_EXTERNAL(UDINT,MD369,data__->MD369,retain)
  __INIT_EXTERNAL(UDINT,MD370,data__->MD370,retain)
  __INIT_EXTERNAL(UDINT,MD371,data__->MD371,retain)
  __INIT_EXTERNAL(UDINT,MD372,data__->MD372,retain)
  __INIT_EXTERNAL(UDINT,MD373,data__->MD373,retain)
  __INIT_EXTERNAL(UDINT,MD374,data__->MD374,retain)
  __INIT_EXTERNAL(UDINT,MD375,data__->MD375,retain)
  __INIT_EXTERNAL(UDINT,MD376,data__->MD376,retain)
  __INIT_EXTERNAL(UDINT,MD377,data__->MD377,retain)
  __INIT_EXTERNAL(UDINT,MD378,data__->MD378,retain)
  __INIT_EXTERNAL(UDINT,MD379,data__->MD379,retain)
  __INIT_EXTERNAL(UDINT,MD380,data__->MD380,retain)
  __INIT_EXTERNAL(UDINT,MD381,data__->MD381,retain)
  __INIT_EXTERNAL(UDINT,MD382,data__->MD382,retain)
  __INIT_EXTERNAL(UDINT,MD383,data__->MD383,retain)
  __INIT_EXTERNAL(UDINT,MD384,data__->MD384,retain)
  __INIT_EXTERNAL(UDINT,MD385,data__->MD385,retain)
  __INIT_EXTERNAL(UDINT,MD386,data__->MD386,retain)
  __INIT_EXTERNAL(UDINT,MD387,data__->MD387,retain)
  __INIT_EXTERNAL(UDINT,MD388,data__->MD388,retain)
  __INIT_EXTERNAL(UDINT,MD389,data__->MD389,retain)
  __INIT_EXTERNAL(UDINT,MD390,data__->MD390,retain)
  __INIT_EXTERNAL(UDINT,MD391,data__->MD391,retain)
  __INIT_EXTERNAL(UDINT,MD392,data__->MD392,retain)
  __INIT_EXTERNAL(UDINT,MD393,data__->MD393,retain)
  __INIT_EXTERNAL(UDINT,MD394,data__->MD394,retain)
  __INIT_EXTERNAL(UDINT,MD395,data__->MD395,retain)
  __INIT_EXTERNAL(UDINT,MD396,data__->MD396,retain)
  __INIT_EXTERNAL(UDINT,MD397,data__->MD397,retain)
  __INIT_EXTERNAL(UDINT,MD398,data__->MD398,retain)
  __INIT_EXTERNAL(UDINT,MD399,data__->MD399,retain)
  __INIT_EXTERNAL(UDINT,MD400,data__->MD400,retain)
  __INIT_EXTERNAL(UDINT,MD401,data__->MD401,retain)
  __INIT_EXTERNAL(UDINT,MD402,data__->MD402,retain)
  __INIT_EXTERNAL(UDINT,MD403,data__->MD403,retain)
  __INIT_EXTERNAL(UDINT,MD404,data__->MD404,retain)
  __INIT_EXTERNAL(UDINT,MD405,data__->MD405,retain)
  __INIT_EXTERNAL(UDINT,MD406,data__->MD406,retain)
  __INIT_EXTERNAL(UDINT,MD407,data__->MD407,retain)
  __INIT_EXTERNAL(UDINT,MD408,data__->MD408,retain)
  __INIT_EXTERNAL(UDINT,MD409,data__->MD409,retain)
  __INIT_EXTERNAL(UDINT,MD410,data__->MD410,retain)
  __INIT_EXTERNAL(UDINT,MD411,data__->MD411,retain)
  __INIT_EXTERNAL(UDINT,MD412,data__->MD412,retain)
  __INIT_EXTERNAL(UDINT,MD413,data__->MD413,retain)
  __INIT_EXTERNAL(UDINT,MD414,data__->MD414,retain)
  __INIT_EXTERNAL(UDINT,MD415,data__->MD415,retain)
  __INIT_EXTERNAL(UDINT,MD416,data__->MD416,retain)
  __INIT_EXTERNAL(UDINT,MD417,data__->MD417,retain)
  __INIT_EXTERNAL(UDINT,MD418,data__->MD418,retain)
  __INIT_EXTERNAL(UDINT,MD419,data__->MD419,retain)
  __INIT_EXTERNAL(UDINT,MD420,data__->MD420,retain)
  __INIT_EXTERNAL(UDINT,MD421,data__->MD421,retain)
  __INIT_EXTERNAL(UDINT,MD422,data__->MD422,retain)
  __INIT_EXTERNAL(UDINT,MD423,data__->MD423,retain)
  __INIT_EXTERNAL(UDINT,MD424,data__->MD424,retain)
  __INIT_EXTERNAL(UDINT,MD425,data__->MD425,retain)
  __INIT_EXTERNAL(UDINT,MD426,data__->MD426,retain)
  __INIT_EXTERNAL(UDINT,MD427,data__->MD427,retain)
  __INIT_EXTERNAL(UDINT,MD428,data__->MD428,retain)
  __INIT_EXTERNAL(UDINT,MD429,data__->MD429,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TRAD temp = {0.02,1.1,0.003,0.01,{{0.2,0.6,0.85,1.0}}};
    __SET_VAR(data__->,RAD,,temp);
  }
}

// Code part
void GETRAD_body__(GETRAD *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    SINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD302,),
        (UDINT)__GET_EXTERNAL(data__->MD303,),
        (UDINT)__GET_EXTERNAL(data__->MD304,),
        (UDINT)__GET_EXTERNAL(data__->MD305,),
        (UDINT)__GET_EXTERNAL(data__->MD306,),
        (UDINT)__GET_EXTERNAL(data__->MD307,),
        (UDINT)__GET_EXTERNAL(data__->MD308,),
        (UDINT)__GET_EXTERNAL(data__->MD309,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD310,),
        (UDINT)__GET_EXTERNAL(data__->MD311,),
        (UDINT)__GET_EXTERNAL(data__->MD312,),
        (UDINT)__GET_EXTERNAL(data__->MD313,),
        (UDINT)__GET_EXTERNAL(data__->MD314,),
        (UDINT)__GET_EXTERNAL(data__->MD315,),
        (UDINT)__GET_EXTERNAL(data__->MD316,),
        (UDINT)__GET_EXTERNAL(data__->MD317,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD318,),
        (UDINT)__GET_EXTERNAL(data__->MD319,),
        (UDINT)__GET_EXTERNAL(data__->MD320,),
        (UDINT)__GET_EXTERNAL(data__->MD321,),
        (UDINT)__GET_EXTERNAL(data__->MD322,),
        (UDINT)__GET_EXTERNAL(data__->MD323,),
        (UDINT)__GET_EXTERNAL(data__->MD324,),
        (UDINT)__GET_EXTERNAL(data__->MD325,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD326,),
        (UDINT)__GET_EXTERNAL(data__->MD327,),
        (UDINT)__GET_EXTERNAL(data__->MD328,),
        (UDINT)__GET_EXTERNAL(data__->MD329,),
        (UDINT)__GET_EXTERNAL(data__->MD330,),
        (UDINT)__GET_EXTERNAL(data__->MD331,),
        (UDINT)__GET_EXTERNAL(data__->MD332,),
        (UDINT)__GET_EXTERNAL(data__->MD333,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD334,),
        (UDINT)__GET_EXTERNAL(data__->MD335,),
        (UDINT)__GET_EXTERNAL(data__->MD336,),
        (UDINT)__GET_EXTERNAL(data__->MD337,),
        (UDINT)__GET_EXTERNAL(data__->MD338,),
        (UDINT)__GET_EXTERNAL(data__->MD339,),
        (UDINT)__GET_EXTERNAL(data__->MD340,),
        (UDINT)__GET_EXTERNAL(data__->MD341,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD342,),
        (UDINT)__GET_EXTERNAL(data__->MD343,),
        (UDINT)__GET_EXTERNAL(data__->MD344,),
        (UDINT)__GET_EXTERNAL(data__->MD345,),
        (UDINT)__GET_EXTERNAL(data__->MD346,),
        (UDINT)__GET_EXTERNAL(data__->MD347,),
        (UDINT)__GET_EXTERNAL(data__->MD348,),
        (UDINT)__GET_EXTERNAL(data__->MD349,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD350,),
        (UDINT)__GET_EXTERNAL(data__->MD351,),
        (UDINT)__GET_EXTERNAL(data__->MD352,),
        (UDINT)__GET_EXTERNAL(data__->MD353,),
        (UDINT)__GET_EXTERNAL(data__->MD354,),
        (UDINT)__GET_EXTERNAL(data__->MD355,),
        (UDINT)__GET_EXTERNAL(data__->MD356,),
        (UDINT)__GET_EXTERNAL(data__->MD357,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD358,),
        (UDINT)__GET_EXTERNAL(data__->MD359,),
        (UDINT)__GET_EXTERNAL(data__->MD360,),
        (UDINT)__GET_EXTERNAL(data__->MD361,),
        (UDINT)__GET_EXTERNAL(data__->MD362,),
        (UDINT)__GET_EXTERNAL(data__->MD363,),
        (UDINT)__GET_EXTERNAL(data__->MD364,),
        (UDINT)__GET_EXTERNAL(data__->MD365,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD366,),
        (UDINT)__GET_EXTERNAL(data__->MD367,),
        (UDINT)__GET_EXTERNAL(data__->MD368,),
        (UDINT)__GET_EXTERNAL(data__->MD369,),
        (UDINT)__GET_EXTERNAL(data__->MD370,),
        (UDINT)__GET_EXTERNAL(data__->MD371,),
        (UDINT)__GET_EXTERNAL(data__->MD372,),
        (UDINT)__GET_EXTERNAL(data__->MD373,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD374,),
        (UDINT)__GET_EXTERNAL(data__->MD375,),
        (UDINT)__GET_EXTERNAL(data__->MD376,),
        (UDINT)__GET_EXTERNAL(data__->MD377,),
        (UDINT)__GET_EXTERNAL(data__->MD378,),
        (UDINT)__GET_EXTERNAL(data__->MD379,),
        (UDINT)__GET_EXTERNAL(data__->MD380,),
        (UDINT)__GET_EXTERNAL(data__->MD381,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD382,),
        (UDINT)__GET_EXTERNAL(data__->MD383,),
        (UDINT)__GET_EXTERNAL(data__->MD384,),
        (UDINT)__GET_EXTERNAL(data__->MD385,),
        (UDINT)__GET_EXTERNAL(data__->MD386,),
        (UDINT)__GET_EXTERNAL(data__->MD387,),
        (UDINT)__GET_EXTERNAL(data__->MD388,),
        (UDINT)__GET_EXTERNAL(data__->MD389,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD390,),
        (UDINT)__GET_EXTERNAL(data__->MD391,),
        (UDINT)__GET_EXTERNAL(data__->MD392,),
        (UDINT)__GET_EXTERNAL(data__->MD393,),
        (UDINT)__GET_EXTERNAL(data__->MD394,),
        (UDINT)__GET_EXTERNAL(data__->MD395,),
        (UDINT)__GET_EXTERNAL(data__->MD396,),
        (UDINT)__GET_EXTERNAL(data__->MD397,)));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD398,),
        (UDINT)__GET_EXTERNAL(data__->MD399,),
        (UDINT)__GET_EXTERNAL(data__->MD400,),
        (UDINT)__GET_EXTERNAL(data__->MD401,),
        (UDINT)__GET_EXTERNAL(data__->MD402,),
        (UDINT)__GET_EXTERNAL(data__->MD403,),
        (UDINT)__GET_EXTERNAL(data__->MD404,),
        (UDINT)__GET_EXTERNAL(data__->MD405,)));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD406,),
        (UDINT)__GET_EXTERNAL(data__->MD407,),
        (UDINT)__GET_EXTERNAL(data__->MD408,),
        (UDINT)__GET_EXTERNAL(data__->MD409,),
        (UDINT)__GET_EXTERNAL(data__->MD410,),
        (UDINT)__GET_EXTERNAL(data__->MD411,),
        (UDINT)__GET_EXTERNAL(data__->MD412,),
        (UDINT)__GET_EXTERNAL(data__->MD413,)));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD414,),
        (UDINT)__GET_EXTERNAL(data__->MD415,),
        (UDINT)__GET_EXTERNAL(data__->MD416,),
        (UDINT)__GET_EXTERNAL(data__->MD417,),
        (UDINT)__GET_EXTERNAL(data__->MD418,),
        (UDINT)__GET_EXTERNAL(data__->MD419,),
        (UDINT)__GET_EXTERNAL(data__->MD420,),
        (UDINT)__GET_EXTERNAL(data__->MD421,)));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->,RAD,,M_RAD(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD422,),
        (UDINT)__GET_EXTERNAL(data__->MD423,),
        (UDINT)__GET_EXTERNAL(data__->MD424,),
        (UDINT)__GET_EXTERNAL(data__->MD425,),
        (UDINT)__GET_EXTERNAL(data__->MD426,),
        (UDINT)__GET_EXTERNAL(data__->MD427,),
        (UDINT)__GET_EXTERNAL(data__->MD428,),
        (UDINT)__GET_EXTERNAL(data__->MD429,)));
    }
  };

  goto __end;

__end:
  return;
} // GETRAD_body__() 





// FUNCTION
STRING IT_INFOSTR(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TITEM ITEM = {0,-1,-1,{{__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0),__time_to_timespec(1, 0, 0, 0, 0, 0)}},-1,0,{{0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0}}};
  TSHAPE SHAPE = {0,{{0,0,0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}},{{0.0,0.0,0.0}}};
  STRING MSG = __STRING_LITERAL(0,"");
  STRING IT_INFOSTR = __STRING_LITERAL(0,"");

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_INFOSTR;
  }
  ITEM = GET_IT(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)IT_POS(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (TPOS8)PIT,
      (BOOL)__BOOL_LITERAL(FALSE)));
  SHAPE = GET_SH(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (TPOS8)PIT);
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2," ["),
    (STRING)ID2STR(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (UINT)ITEM.ID),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(4,", P="),
    (STRING)SINT_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (SINT)ITEM.PAR),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(5,", O=("),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.P0.table[(0) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.P0.table[(1) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.P0.table[(2) - (0)]),
    (STRING)__STRING_LITERAL(1,")"));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(5,", N=("),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.PL.table[(0) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.PL.table[(1) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.PL.table[(2) - (0)]),
    (STRING)__STRING_LITERAL(1,")"));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(5,", W=("),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.LX.table[(0) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.LX.table[(1) - (0)]),
    (STRING)__STRING_LITERAL(0,""));
  MSG = MAKEMSG(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (STRING)MSG,
    (STRING)__STRING_LITERAL(2,", "),
    (STRING)REAL_TO_STRING(
      (BOOL)__BOOL_LITERAL(TRUE),
      NULL,
      (REAL)SHAPE.LX.table[(2) - (0)]),
    (STRING)__STRING_LITERAL(2,")]"));
  IT_INFOSTR = MSG;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_INFOSTR;
}


void GETCONF_init__(GETCONF *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD300,data__->MD300,retain)
  __INIT_EXTERNAL(UDINT,MD301,data__->MD301,retain)
  {
    static const TCONF temp = {0,0,__time_to_timespec(1, 0, 10, 0, 0, 0)};
    __SET_VAR(data__->,CONF,,temp);
  }
}

// Code part
void GETCONF_body__(GETCONF *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  __SET_VAR(data__->,CONF,,M_CONF(
    (BOOL)__BOOL_LITERAL(TRUE),
    NULL,
    (UDINT)__GET_EXTERNAL(data__->MD300,),
    (UDINT)__GET_EXTERNAL(data__->MD301,)));

  goto __end;

__end:
  return;
} // GETCONF_body__() 





void GETCOND_init__(GETCOND *data__, BOOL retain) {
  __INIT_VAR(data__->EN,__BOOL_LITERAL(TRUE),retain)
  __INIT_VAR(data__->ENO,__BOOL_LITERAL(TRUE),retain)
  __INIT_EXTERNAL(UDINT,MD500,data__->MD500,retain)
  __INIT_EXTERNAL(UDINT,MD501,data__->MD501,retain)
  __INIT_EXTERNAL(UDINT,MD502,data__->MD502,retain)
  __INIT_EXTERNAL(UDINT,MD503,data__->MD503,retain)
  __INIT_EXTERNAL(UDINT,MD504,data__->MD504,retain)
  __INIT_EXTERNAL(UDINT,MD505,data__->MD505,retain)
  __INIT_EXTERNAL(UDINT,MD506,data__->MD506,retain)
  __INIT_EXTERNAL(UDINT,MD507,data__->MD507,retain)
  __INIT_EXTERNAL(UDINT,MD508,data__->MD508,retain)
  __INIT_EXTERNAL(UDINT,MD509,data__->MD509,retain)
  __INIT_EXTERNAL(UDINT,MD510,data__->MD510,retain)
  __INIT_EXTERNAL(UDINT,MD511,data__->MD511,retain)
  __INIT_EXTERNAL(UDINT,MD512,data__->MD512,retain)
  __INIT_EXTERNAL(UDINT,MD513,data__->MD513,retain)
  __INIT_EXTERNAL(UDINT,MD514,data__->MD514,retain)
  __INIT_EXTERNAL(UDINT,MD515,data__->MD515,retain)
  __INIT_EXTERNAL(UDINT,MD516,data__->MD516,retain)
  __INIT_EXTERNAL(UDINT,MD517,data__->MD517,retain)
  __INIT_EXTERNAL(UDINT,MD518,data__->MD518,retain)
  __INIT_EXTERNAL(UDINT,MD519,data__->MD519,retain)
  __INIT_EXTERNAL(UDINT,MD520,data__->MD520,retain)
  __INIT_EXTERNAL(UDINT,MD521,data__->MD521,retain)
  __INIT_EXTERNAL(UDINT,MD522,data__->MD522,retain)
  __INIT_EXTERNAL(UDINT,MD523,data__->MD523,retain)
  __INIT_EXTERNAL(UDINT,MD524,data__->MD524,retain)
  __INIT_EXTERNAL(UDINT,MD525,data__->MD525,retain)
  __INIT_EXTERNAL(UDINT,MD526,data__->MD526,retain)
  __INIT_EXTERNAL(UDINT,MD527,data__->MD527,retain)
  __INIT_EXTERNAL(UDINT,MD528,data__->MD528,retain)
  __INIT_EXTERNAL(UDINT,MD529,data__->MD529,retain)
  __INIT_EXTERNAL(UDINT,MD530,data__->MD530,retain)
  __INIT_EXTERNAL(UDINT,MD531,data__->MD531,retain)
  __INIT_EXTERNAL(UDINT,MD532,data__->MD532,retain)
  __INIT_EXTERNAL(UDINT,MD533,data__->MD533,retain)
  __INIT_EXTERNAL(UDINT,MD534,data__->MD534,retain)
  __INIT_EXTERNAL(UDINT,MD535,data__->MD535,retain)
  __INIT_EXTERNAL(UDINT,MD536,data__->MD536,retain)
  __INIT_EXTERNAL(UDINT,MD537,data__->MD537,retain)
  __INIT_EXTERNAL(UDINT,MD538,data__->MD538,retain)
  __INIT_EXTERNAL(UDINT,MD539,data__->MD539,retain)
  __INIT_EXTERNAL(UDINT,MD540,data__->MD540,retain)
  __INIT_EXTERNAL(UDINT,MD541,data__->MD541,retain)
  __INIT_EXTERNAL(UDINT,MD542,data__->MD542,retain)
  __INIT_EXTERNAL(UDINT,MD543,data__->MD543,retain)
  __INIT_EXTERNAL(UDINT,MD544,data__->MD544,retain)
  __INIT_EXTERNAL(UDINT,MD545,data__->MD545,retain)
  __INIT_EXTERNAL(UDINT,MD546,data__->MD546,retain)
  __INIT_EXTERNAL(UDINT,MD547,data__->MD547,retain)
  __INIT_EXTERNAL(UDINT,MD548,data__->MD548,retain)
  __INIT_EXTERNAL(UDINT,MD549,data__->MD549,retain)
  __INIT_EXTERNAL(UDINT,MD550,data__->MD550,retain)
  __INIT_EXTERNAL(UDINT,MD551,data__->MD551,retain)
  __INIT_EXTERNAL(UDINT,MD552,data__->MD552,retain)
  __INIT_EXTERNAL(UDINT,MD553,data__->MD553,retain)
  __INIT_EXTERNAL(UDINT,MD554,data__->MD554,retain)
  __INIT_EXTERNAL(UDINT,MD555,data__->MD555,retain)
  __INIT_EXTERNAL(UDINT,MD556,data__->MD556,retain)
  __INIT_EXTERNAL(UDINT,MD557,data__->MD557,retain)
  __INIT_EXTERNAL(UDINT,MD558,data__->MD558,retain)
  __INIT_EXTERNAL(UDINT,MD559,data__->MD559,retain)
  __INIT_EXTERNAL(UDINT,MD560,data__->MD560,retain)
  __INIT_EXTERNAL(UDINT,MD561,data__->MD561,retain)
  __INIT_EXTERNAL(UDINT,MD562,data__->MD562,retain)
  __INIT_EXTERNAL(UDINT,MD563,data__->MD563,retain)
  __INIT_EXTERNAL(UDINT,MD564,data__->MD564,retain)
  __INIT_EXTERNAL(UDINT,MD565,data__->MD565,retain)
  __INIT_EXTERNAL(UDINT,MD566,data__->MD566,retain)
  __INIT_EXTERNAL(UDINT,MD567,data__->MD567,retain)
  __INIT_EXTERNAL(UDINT,MD568,data__->MD568,retain)
  __INIT_EXTERNAL(UDINT,MD569,data__->MD569,retain)
  __INIT_EXTERNAL(UDINT,MD570,data__->MD570,retain)
  __INIT_EXTERNAL(UDINT,MD571,data__->MD571,retain)
  __INIT_EXTERNAL(UDINT,MD572,data__->MD572,retain)
  __INIT_EXTERNAL(UDINT,MD573,data__->MD573,retain)
  __INIT_EXTERNAL(UDINT,MD574,data__->MD574,retain)
  __INIT_EXTERNAL(UDINT,MD575,data__->MD575,retain)
  __INIT_EXTERNAL(UDINT,MD576,data__->MD576,retain)
  __INIT_EXTERNAL(UDINT,MD577,data__->MD577,retain)
  __INIT_EXTERNAL(UDINT,MD578,data__->MD578,retain)
  __INIT_EXTERNAL(UDINT,MD579,data__->MD579,retain)
  __INIT_EXTERNAL(UDINT,MD580,data__->MD580,retain)
  __INIT_EXTERNAL(UDINT,MD581,data__->MD581,retain)
  __INIT_EXTERNAL(UDINT,MD582,data__->MD582,retain)
  __INIT_EXTERNAL(UDINT,MD583,data__->MD583,retain)
  __INIT_EXTERNAL(UDINT,MD584,data__->MD584,retain)
  __INIT_EXTERNAL(UDINT,MD585,data__->MD585,retain)
  __INIT_EXTERNAL(UDINT,MD586,data__->MD586,retain)
  __INIT_EXTERNAL(UDINT,MD587,data__->MD587,retain)
  __INIT_EXTERNAL(UDINT,MD588,data__->MD588,retain)
  __INIT_EXTERNAL(UDINT,MD589,data__->MD589,retain)
  __INIT_EXTERNAL(UDINT,MD590,data__->MD590,retain)
  __INIT_EXTERNAL(UDINT,MD591,data__->MD591,retain)
  __INIT_EXTERNAL(UDINT,MD592,data__->MD592,retain)
  __INIT_EXTERNAL(UDINT,MD593,data__->MD593,retain)
  __INIT_EXTERNAL(UDINT,MD594,data__->MD594,retain)
  __INIT_EXTERNAL(UDINT,MD595,data__->MD595,retain)
  __INIT_EXTERNAL(UDINT,MD596,data__->MD596,retain)
  __INIT_EXTERNAL(UDINT,MD597,data__->MD597,retain)
  __INIT_EXTERNAL(UDINT,MD598,data__->MD598,retain)
  __INIT_EXTERNAL(UDINT,MD599,data__->MD599,retain)
  __INIT_EXTERNAL(UDINT,MD600,data__->MD600,retain)
  __INIT_EXTERNAL(UDINT,MD601,data__->MD601,retain)
  __INIT_EXTERNAL(UDINT,MD602,data__->MD602,retain)
  __INIT_EXTERNAL(UDINT,MD603,data__->MD603,retain)
  __INIT_EXTERNAL(UDINT,MD604,data__->MD604,retain)
  __INIT_EXTERNAL(UDINT,MD605,data__->MD605,retain)
  __INIT_EXTERNAL(UDINT,MD606,data__->MD606,retain)
  __INIT_EXTERNAL(UDINT,MD607,data__->MD607,retain)
  __INIT_EXTERNAL(UDINT,MD608,data__->MD608,retain)
  __INIT_EXTERNAL(UDINT,MD609,data__->MD609,retain)
  __INIT_EXTERNAL(UDINT,MD610,data__->MD610,retain)
  __INIT_EXTERNAL(UDINT,MD611,data__->MD611,retain)
  __INIT_EXTERNAL(UDINT,MD612,data__->MD612,retain)
  __INIT_EXTERNAL(UDINT,MD613,data__->MD613,retain)
  __INIT_EXTERNAL(UDINT,MD614,data__->MD614,retain)
  __INIT_EXTERNAL(UDINT,MD615,data__->MD615,retain)
  __INIT_EXTERNAL(UDINT,MD616,data__->MD616,retain)
  __INIT_EXTERNAL(UDINT,MD617,data__->MD617,retain)
  __INIT_EXTERNAL(UDINT,MD618,data__->MD618,retain)
  __INIT_EXTERNAL(UDINT,MD619,data__->MD619,retain)
  __INIT_EXTERNAL(UDINT,MD620,data__->MD620,retain)
  __INIT_EXTERNAL(UDINT,MD621,data__->MD621,retain)
  __INIT_EXTERNAL(UDINT,MD622,data__->MD622,retain)
  __INIT_EXTERNAL(UDINT,MD623,data__->MD623,retain)
  __INIT_EXTERNAL(UDINT,MD624,data__->MD624,retain)
  __INIT_EXTERNAL(UDINT,MD625,data__->MD625,retain)
  __INIT_EXTERNAL(UDINT,MD626,data__->MD626,retain)
  __INIT_EXTERNAL(UDINT,MD627,data__->MD627,retain)
  __INIT_EXTERNAL(UDINT,MD628,data__->MD628,retain)
  __INIT_EXTERNAL(UDINT,MD629,data__->MD629,retain)
  __INIT_EXTERNAL(UDINT,MD630,data__->MD630,retain)
  __INIT_EXTERNAL(UDINT,MD631,data__->MD631,retain)
  __INIT_EXTERNAL(UDINT,MD632,data__->MD632,retain)
  __INIT_EXTERNAL(UDINT,MD633,data__->MD633,retain)
  __INIT_EXTERNAL(UDINT,MD634,data__->MD634,retain)
  __INIT_EXTERNAL(UDINT,MD635,data__->MD635,retain)
  __INIT_EXTERNAL(UDINT,MD636,data__->MD636,retain)
  __INIT_EXTERNAL(UDINT,MD637,data__->MD637,retain)
  __INIT_EXTERNAL(UDINT,MD638,data__->MD638,retain)
  __INIT_EXTERNAL(UDINT,MD639,data__->MD639,retain)
  __INIT_EXTERNAL(UDINT,MD640,data__->MD640,retain)
  __INIT_EXTERNAL(UDINT,MD641,data__->MD641,retain)
  __INIT_EXTERNAL(UDINT,MD642,data__->MD642,retain)
  __INIT_EXTERNAL(UDINT,MD643,data__->MD643,retain)
  __INIT_EXTERNAL(UDINT,MD644,data__->MD644,retain)
  __INIT_EXTERNAL(UDINT,MD645,data__->MD645,retain)
  __INIT_EXTERNAL(UDINT,MD646,data__->MD646,retain)
  __INIT_EXTERNAL(UDINT,MD647,data__->MD647,retain)
  __INIT_EXTERNAL(UDINT,MD648,data__->MD648,retain)
  __INIT_EXTERNAL(UDINT,MD649,data__->MD649,retain)
  __INIT_EXTERNAL(UDINT,MD650,data__->MD650,retain)
  __INIT_EXTERNAL(UDINT,MD651,data__->MD651,retain)
  __INIT_EXTERNAL(UDINT,MD652,data__->MD652,retain)
  __INIT_EXTERNAL(UDINT,MD653,data__->MD653,retain)
  __INIT_EXTERNAL(UDINT,MD654,data__->MD654,retain)
  __INIT_EXTERNAL(UDINT,MD655,data__->MD655,retain)
  __INIT_EXTERNAL(UDINT,MD656,data__->MD656,retain)
  __INIT_EXTERNAL(UDINT,MD657,data__->MD657,retain)
  __INIT_EXTERNAL(UDINT,MD658,data__->MD658,retain)
  __INIT_EXTERNAL(UDINT,MD659,data__->MD659,retain)
  __INIT_EXTERNAL(UDINT,MD660,data__->MD660,retain)
  __INIT_EXTERNAL(UDINT,MD661,data__->MD661,retain)
  __INIT_EXTERNAL(UDINT,MD662,data__->MD662,retain)
  __INIT_EXTERNAL(UDINT,MD663,data__->MD663,retain)
  __INIT_EXTERNAL(UDINT,MD664,data__->MD664,retain)
  __INIT_EXTERNAL(UDINT,MD665,data__->MD665,retain)
  __INIT_EXTERNAL(UDINT,MD666,data__->MD666,retain)
  __INIT_EXTERNAL(UDINT,MD667,data__->MD667,retain)
  __INIT_EXTERNAL(UDINT,MD668,data__->MD668,retain)
  __INIT_EXTERNAL(UDINT,MD669,data__->MD669,retain)
  __INIT_EXTERNAL(UDINT,MD670,data__->MD670,retain)
  __INIT_EXTERNAL(UDINT,MD671,data__->MD671,retain)
  __INIT_EXTERNAL(UDINT,MD672,data__->MD672,retain)
  __INIT_EXTERNAL(UDINT,MD673,data__->MD673,retain)
  __INIT_EXTERNAL(UDINT,MD674,data__->MD674,retain)
  __INIT_EXTERNAL(UDINT,MD675,data__->MD675,retain)
  __INIT_EXTERNAL(UDINT,MD676,data__->MD676,retain)
  __INIT_EXTERNAL(UDINT,MD677,data__->MD677,retain)
  __INIT_EXTERNAL(UDINT,MD678,data__->MD678,retain)
  __INIT_EXTERNAL(UDINT,MD679,data__->MD679,retain)
  __INIT_EXTERNAL(UDINT,MD680,data__->MD680,retain)
  __INIT_EXTERNAL(UDINT,MD681,data__->MD681,retain)
  __INIT_EXTERNAL(UDINT,MD682,data__->MD682,retain)
  __INIT_EXTERNAL(UDINT,MD683,data__->MD683,retain)
  __INIT_EXTERNAL(UDINT,MD684,data__->MD684,retain)
  __INIT_EXTERNAL(UDINT,MD685,data__->MD685,retain)
  __INIT_EXTERNAL(UDINT,MD686,data__->MD686,retain)
  __INIT_EXTERNAL(UDINT,MD687,data__->MD687,retain)
  __INIT_EXTERNAL(UDINT,MD688,data__->MD688,retain)
  __INIT_EXTERNAL(UDINT,MD689,data__->MD689,retain)
  __INIT_EXTERNAL(UDINT,MD690,data__->MD690,retain)
  __INIT_EXTERNAL(UDINT,MD691,data__->MD691,retain)
  __INIT_EXTERNAL(UDINT,MD692,data__->MD692,retain)
  __INIT_EXTERNAL(UDINT,MD693,data__->MD693,retain)
  __INIT_EXTERNAL(UDINT,MD694,data__->MD694,retain)
  __INIT_EXTERNAL(UDINT,MD695,data__->MD695,retain)
  __INIT_EXTERNAL(UDINT,MD696,data__->MD696,retain)
  __INIT_EXTERNAL(UDINT,MD697,data__->MD697,retain)
  __INIT_EXTERNAL(UDINT,MD698,data__->MD698,retain)
  __INIT_EXTERNAL(UDINT,MD699,data__->MD699,retain)
  __INIT_EXTERNAL(UDINT,MD700,data__->MD700,retain)
  __INIT_EXTERNAL(UDINT,MD701,data__->MD701,retain)
  __INIT_EXTERNAL(UDINT,MD702,data__->MD702,retain)
  __INIT_EXTERNAL(UDINT,MD703,data__->MD703,retain)
  __INIT_EXTERNAL(UDINT,MD704,data__->MD704,retain)
  __INIT_EXTERNAL(UDINT,MD705,data__->MD705,retain)
  __INIT_EXTERNAL(UDINT,MD706,data__->MD706,retain)
  __INIT_EXTERNAL(UDINT,MD707,data__->MD707,retain)
  __INIT_EXTERNAL(UDINT,MD708,data__->MD708,retain)
  __INIT_EXTERNAL(UDINT,MD709,data__->MD709,retain)
  __INIT_EXTERNAL(UDINT,MD710,data__->MD710,retain)
  __INIT_EXTERNAL(UDINT,MD711,data__->MD711,retain)
  __INIT_EXTERNAL(UDINT,MD712,data__->MD712,retain)
  __INIT_EXTERNAL(UDINT,MD713,data__->MD713,retain)
  __INIT_EXTERNAL(UDINT,MD714,data__->MD714,retain)
  __INIT_EXTERNAL(UDINT,MD715,data__->MD715,retain)
  __INIT_EXTERNAL(UDINT,MD716,data__->MD716,retain)
  __INIT_EXTERNAL(UDINT,MD717,data__->MD717,retain)
  __INIT_EXTERNAL(UDINT,MD718,data__->MD718,retain)
  __INIT_EXTERNAL(UDINT,MD719,data__->MD719,retain)
  __INIT_EXTERNAL(UDINT,MD720,data__->MD720,retain)
  __INIT_EXTERNAL(UDINT,MD721,data__->MD721,retain)
  __INIT_EXTERNAL(UDINT,MD722,data__->MD722,retain)
  __INIT_EXTERNAL(UDINT,MD723,data__->MD723,retain)
  __INIT_EXTERNAL(UDINT,MD724,data__->MD724,retain)
  __INIT_EXTERNAL(UDINT,MD725,data__->MD725,retain)
  __INIT_EXTERNAL(UDINT,MD726,data__->MD726,retain)
  __INIT_EXTERNAL(UDINT,MD727,data__->MD727,retain)
  __INIT_EXTERNAL(UDINT,MD728,data__->MD728,retain)
  __INIT_EXTERNAL(UDINT,MD729,data__->MD729,retain)
  __INIT_EXTERNAL(UDINT,MD730,data__->MD730,retain)
  __INIT_EXTERNAL(UDINT,MD731,data__->MD731,retain)
  __INIT_EXTERNAL(UDINT,MD732,data__->MD732,retain)
  __INIT_EXTERNAL(UDINT,MD733,data__->MD733,retain)
  __INIT_EXTERNAL(UDINT,MD734,data__->MD734,retain)
  __INIT_EXTERNAL(UDINT,MD735,data__->MD735,retain)
  __INIT_EXTERNAL(UDINT,MD736,data__->MD736,retain)
  __INIT_EXTERNAL(UDINT,MD737,data__->MD737,retain)
  __INIT_EXTERNAL(UDINT,MD738,data__->MD738,retain)
  __INIT_EXTERNAL(UDINT,MD739,data__->MD739,retain)
  __INIT_EXTERNAL(UDINT,MD740,data__->MD740,retain)
  __INIT_EXTERNAL(UDINT,MD741,data__->MD741,retain)
  __INIT_EXTERNAL(UDINT,MD742,data__->MD742,retain)
  __INIT_EXTERNAL(UDINT,MD743,data__->MD743,retain)
  __INIT_EXTERNAL(UDINT,MD744,data__->MD744,retain)
  __INIT_EXTERNAL(UDINT,MD745,data__->MD745,retain)
  __INIT_EXTERNAL(UDINT,MD746,data__->MD746,retain)
  __INIT_EXTERNAL(UDINT,MD747,data__->MD747,retain)
  __INIT_EXTERNAL(UDINT,MD748,data__->MD748,retain)
  __INIT_EXTERNAL(UDINT,MD749,data__->MD749,retain)
  __INIT_EXTERNAL(UDINT,MD750,data__->MD750,retain)
  __INIT_EXTERNAL(UDINT,MD751,data__->MD751,retain)
  __INIT_EXTERNAL(UDINT,MD752,data__->MD752,retain)
  __INIT_EXTERNAL(UDINT,MD753,data__->MD753,retain)
  __INIT_EXTERNAL(UDINT,MD754,data__->MD754,retain)
  __INIT_EXTERNAL(UDINT,MD755,data__->MD755,retain)
  __INIT_EXTERNAL(UDINT,MD756,data__->MD756,retain)
  __INIT_EXTERNAL(UDINT,MD757,data__->MD757,retain)
  __INIT_EXTERNAL(UDINT,MD758,data__->MD758,retain)
  __INIT_EXTERNAL(UDINT,MD759,data__->MD759,retain)
  __INIT_EXTERNAL(UDINT,MD760,data__->MD760,retain)
  __INIT_EXTERNAL(UDINT,MD761,data__->MD761,retain)
  __INIT_EXTERNAL(UDINT,MD762,data__->MD762,retain)
  __INIT_EXTERNAL(UDINT,MD763,data__->MD763,retain)
  __INIT_EXTERNAL(UDINT,MD764,data__->MD764,retain)
  __INIT_EXTERNAL(UDINT,MD765,data__->MD765,retain)
  __INIT_EXTERNAL(UDINT,MD766,data__->MD766,retain)
  __INIT_EXTERNAL(UDINT,MD767,data__->MD767,retain)
  __INIT_EXTERNAL(UDINT,MD768,data__->MD768,retain)
  __INIT_EXTERNAL(UDINT,MD769,data__->MD769,retain)
  __INIT_EXTERNAL(UDINT,MD770,data__->MD770,retain)
  __INIT_EXTERNAL(UDINT,MD771,data__->MD771,retain)
  __INIT_EXTERNAL(UDINT,MD772,data__->MD772,retain)
  __INIT_EXTERNAL(UDINT,MD773,data__->MD773,retain)
  __INIT_EXTERNAL(UDINT,MD774,data__->MD774,retain)
  __INIT_EXTERNAL(UDINT,MD775,data__->MD775,retain)
  __INIT_EXTERNAL(UDINT,MD776,data__->MD776,retain)
  __INIT_EXTERNAL(UDINT,MD777,data__->MD777,retain)
  __INIT_EXTERNAL(UDINT,MD778,data__->MD778,retain)
  __INIT_EXTERNAL(UDINT,MD779,data__->MD779,retain)
  __INIT_EXTERNAL(UDINT,MD780,data__->MD780,retain)
  __INIT_EXTERNAL(UDINT,MD781,data__->MD781,retain)
  __INIT_EXTERNAL(UDINT,MD782,data__->MD782,retain)
  __INIT_EXTERNAL(UDINT,MD783,data__->MD783,retain)
  __INIT_EXTERNAL(UDINT,MD784,data__->MD784,retain)
  __INIT_EXTERNAL(UDINT,MD785,data__->MD785,retain)
  __INIT_EXTERNAL(UDINT,MD786,data__->MD786,retain)
  __INIT_EXTERNAL(UDINT,MD787,data__->MD787,retain)
  __INIT_EXTERNAL(UDINT,MD788,data__->MD788,retain)
  __INIT_EXTERNAL(UDINT,MD789,data__->MD789,retain)
  __INIT_EXTERNAL(UDINT,MD790,data__->MD790,retain)
  __INIT_EXTERNAL(UDINT,MD791,data__->MD791,retain)
  __INIT_EXTERNAL(UDINT,MD792,data__->MD792,retain)
  __INIT_EXTERNAL(UDINT,MD793,data__->MD793,retain)
  __INIT_EXTERNAL(UDINT,MD794,data__->MD794,retain)
  __INIT_EXTERNAL(UDINT,MD795,data__->MD795,retain)
  __INIT_EXTERNAL(UDINT,MD796,data__->MD796,retain)
  __INIT_EXTERNAL(UDINT,MD797,data__->MD797,retain)
  __INIT_EXTERNAL(UDINT,MD798,data__->MD798,retain)
  __INIT_EXTERNAL(UDINT,MD799,data__->MD799,retain)
  __INIT_EXTERNAL(UDINT,MD800,data__->MD800,retain)
  __INIT_EXTERNAL(UDINT,MD801,data__->MD801,retain)
  __INIT_EXTERNAL(UDINT,MD802,data__->MD802,retain)
  __INIT_EXTERNAL(UDINT,MD803,data__->MD803,retain)
  __INIT_EXTERNAL(UDINT,MD804,data__->MD804,retain)
  __INIT_EXTERNAL(UDINT,MD805,data__->MD805,retain)
  __INIT_EXTERNAL(UDINT,MD806,data__->MD806,retain)
  __INIT_EXTERNAL(UDINT,MD807,data__->MD807,retain)
  __INIT_EXTERNAL(UDINT,MD808,data__->MD808,retain)
  __INIT_EXTERNAL(UDINT,MD809,data__->MD809,retain)
  __INIT_EXTERNAL(UDINT,MD810,data__->MD810,retain)
  __INIT_EXTERNAL(UDINT,MD811,data__->MD811,retain)
  __INIT_EXTERNAL(UDINT,MD812,data__->MD812,retain)
  __INIT_EXTERNAL(UDINT,MD813,data__->MD813,retain)
  __INIT_EXTERNAL(UDINT,MD814,data__->MD814,retain)
  __INIT_EXTERNAL(UDINT,MD815,data__->MD815,retain)
  __INIT_EXTERNAL(UDINT,MD816,data__->MD816,retain)
  __INIT_EXTERNAL(UDINT,MD817,data__->MD817,retain)
  __INIT_EXTERNAL(UDINT,MD818,data__->MD818,retain)
  __INIT_EXTERNAL(UDINT,MD819,data__->MD819,retain)
  __INIT_EXTERNAL(UDINT,MD820,data__->MD820,retain)
  __INIT_EXTERNAL(UDINT,MD821,data__->MD821,retain)
  __INIT_EXTERNAL(UDINT,MD822,data__->MD822,retain)
  __INIT_EXTERNAL(UDINT,MD823,data__->MD823,retain)
  __INIT_EXTERNAL(UDINT,MD824,data__->MD824,retain)
  __INIT_EXTERNAL(UDINT,MD825,data__->MD825,retain)
  __INIT_EXTERNAL(UDINT,MD826,data__->MD826,retain)
  __INIT_EXTERNAL(UDINT,MD827,data__->MD827,retain)
  __INIT_EXTERNAL(UDINT,MD828,data__->MD828,retain)
  __INIT_EXTERNAL(UDINT,MD829,data__->MD829,retain)
  __INIT_EXTERNAL(UDINT,MD830,data__->MD830,retain)
  __INIT_EXTERNAL(UDINT,MD831,data__->MD831,retain)
  __INIT_EXTERNAL(UDINT,MD832,data__->MD832,retain)
  __INIT_EXTERNAL(UDINT,MD833,data__->MD833,retain)
  __INIT_EXTERNAL(UDINT,MD834,data__->MD834,retain)
  __INIT_EXTERNAL(UDINT,MD835,data__->MD835,retain)
  __INIT_EXTERNAL(UDINT,MD836,data__->MD836,retain)
  __INIT_EXTERNAL(UDINT,MD837,data__->MD837,retain)
  __INIT_EXTERNAL(UDINT,MD838,data__->MD838,retain)
  __INIT_EXTERNAL(UDINT,MD839,data__->MD839,retain)
  __INIT_EXTERNAL(UDINT,MD840,data__->MD840,retain)
  __INIT_EXTERNAL(UDINT,MD841,data__->MD841,retain)
  __INIT_EXTERNAL(UDINT,MD842,data__->MD842,retain)
  __INIT_EXTERNAL(UDINT,MD843,data__->MD843,retain)
  __INIT_EXTERNAL(UDINT,MD844,data__->MD844,retain)
  __INIT_EXTERNAL(UDINT,MD845,data__->MD845,retain)
  __INIT_EXTERNAL(UDINT,MD846,data__->MD846,retain)
  __INIT_EXTERNAL(UDINT,MD847,data__->MD847,retain)
  __INIT_EXTERNAL(UDINT,MD848,data__->MD848,retain)
  __INIT_EXTERNAL(UDINT,MD849,data__->MD849,retain)
  __INIT_EXTERNAL(UDINT,MD850,data__->MD850,retain)
  __INIT_EXTERNAL(UDINT,MD851,data__->MD851,retain)
  __INIT_EXTERNAL(UDINT,MD852,data__->MD852,retain)
  __INIT_EXTERNAL(UDINT,MD853,data__->MD853,retain)
  __INIT_EXTERNAL(UDINT,MD854,data__->MD854,retain)
  __INIT_EXTERNAL(UDINT,MD855,data__->MD855,retain)
  __INIT_EXTERNAL(UDINT,MD856,data__->MD856,retain)
  __INIT_EXTERNAL(UDINT,MD857,data__->MD857,retain)
  __INIT_EXTERNAL(UDINT,MD858,data__->MD858,retain)
  __INIT_EXTERNAL(UDINT,MD859,data__->MD859,retain)
  __INIT_EXTERNAL(UDINT,MD860,data__->MD860,retain)
  __INIT_EXTERNAL(UDINT,MD861,data__->MD861,retain)
  __INIT_EXTERNAL(UDINT,MD862,data__->MD862,retain)
  __INIT_EXTERNAL(UDINT,MD863,data__->MD863,retain)
  __INIT_EXTERNAL(UDINT,MD864,data__->MD864,retain)
  __INIT_EXTERNAL(UDINT,MD865,data__->MD865,retain)
  __INIT_EXTERNAL(UDINT,MD866,data__->MD866,retain)
  __INIT_EXTERNAL(UDINT,MD867,data__->MD867,retain)
  __INIT_EXTERNAL(UDINT,MD868,data__->MD868,retain)
  __INIT_EXTERNAL(UDINT,MD869,data__->MD869,retain)
  __INIT_EXTERNAL(UDINT,MD870,data__->MD870,retain)
  __INIT_EXTERNAL(UDINT,MD871,data__->MD871,retain)
  __INIT_EXTERNAL(UDINT,MD872,data__->MD872,retain)
  __INIT_EXTERNAL(UDINT,MD873,data__->MD873,retain)
  __INIT_EXTERNAL(UDINT,MD874,data__->MD874,retain)
  __INIT_EXTERNAL(UDINT,MD875,data__->MD875,retain)
  __INIT_EXTERNAL(UDINT,MD876,data__->MD876,retain)
  __INIT_EXTERNAL(UDINT,MD877,data__->MD877,retain)
  __INIT_EXTERNAL(UDINT,MD878,data__->MD878,retain)
  __INIT_EXTERNAL(UDINT,MD879,data__->MD879,retain)
  __INIT_EXTERNAL(UDINT,MD880,data__->MD880,retain)
  __INIT_EXTERNAL(UDINT,MD881,data__->MD881,retain)
  __INIT_EXTERNAL(UDINT,MD882,data__->MD882,retain)
  __INIT_EXTERNAL(UDINT,MD883,data__->MD883,retain)
  __INIT_EXTERNAL(UDINT,MD884,data__->MD884,retain)
  __INIT_EXTERNAL(UDINT,MD885,data__->MD885,retain)
  __INIT_EXTERNAL(UDINT,MD886,data__->MD886,retain)
  __INIT_EXTERNAL(UDINT,MD887,data__->MD887,retain)
  __INIT_EXTERNAL(UDINT,MD888,data__->MD888,retain)
  __INIT_EXTERNAL(UDINT,MD889,data__->MD889,retain)
  __INIT_EXTERNAL(UDINT,MD890,data__->MD890,retain)
  __INIT_EXTERNAL(UDINT,MD891,data__->MD891,retain)
  __INIT_EXTERNAL(UDINT,MD892,data__->MD892,retain)
  __INIT_EXTERNAL(UDINT,MD893,data__->MD893,retain)
  __INIT_EXTERNAL(UDINT,MD894,data__->MD894,retain)
  __INIT_EXTERNAL(UDINT,MD895,data__->MD895,retain)
  __INIT_EXTERNAL(UDINT,MD896,data__->MD896,retain)
  __INIT_EXTERNAL(UDINT,MD897,data__->MD897,retain)
  __INIT_EXTERNAL(UDINT,MD898,data__->MD898,retain)
  __INIT_EXTERNAL(UDINT,MD899,data__->MD899,retain)
  __INIT_EXTERNAL(UDINT,MD900,data__->MD900,retain)
  __INIT_EXTERNAL(UDINT,MD901,data__->MD901,retain)
  __INIT_EXTERNAL(UDINT,MD902,data__->MD902,retain)
  __INIT_EXTERNAL(UDINT,MD903,data__->MD903,retain)
  __INIT_EXTERNAL(UDINT,MD904,data__->MD904,retain)
  __INIT_EXTERNAL(UDINT,MD905,data__->MD905,retain)
  __INIT_EXTERNAL(UDINT,MD906,data__->MD906,retain)
  __INIT_EXTERNAL(UDINT,MD907,data__->MD907,retain)
  __INIT_EXTERNAL(UDINT,MD908,data__->MD908,retain)
  __INIT_EXTERNAL(UDINT,MD909,data__->MD909,retain)
  __INIT_EXTERNAL(UDINT,MD910,data__->MD910,retain)
  __INIT_EXTERNAL(UDINT,MD911,data__->MD911,retain)
  __INIT_EXTERNAL(UDINT,MD912,data__->MD912,retain)
  __INIT_EXTERNAL(UDINT,MD913,data__->MD913,retain)
  __INIT_EXTERNAL(UDINT,MD914,data__->MD914,retain)
  __INIT_EXTERNAL(UDINT,MD915,data__->MD915,retain)
  __INIT_EXTERNAL(UDINT,MD916,data__->MD916,retain)
  __INIT_EXTERNAL(UDINT,MD917,data__->MD917,retain)
  __INIT_EXTERNAL(UDINT,MD918,data__->MD918,retain)
  __INIT_EXTERNAL(UDINT,MD919,data__->MD919,retain)
  __INIT_EXTERNAL(UDINT,MD920,data__->MD920,retain)
  __INIT_EXTERNAL(UDINT,MD921,data__->MD921,retain)
  __INIT_EXTERNAL(UDINT,MD922,data__->MD922,retain)
  __INIT_EXTERNAL(UDINT,MD923,data__->MD923,retain)
  __INIT_EXTERNAL(UDINT,MD924,data__->MD924,retain)
  __INIT_EXTERNAL(UDINT,MD925,data__->MD925,retain)
  __INIT_EXTERNAL(UDINT,MD926,data__->MD926,retain)
  __INIT_EXTERNAL(UDINT,MD927,data__->MD927,retain)
  __INIT_EXTERNAL(UDINT,MD928,data__->MD928,retain)
  __INIT_EXTERNAL(UDINT,MD929,data__->MD929,retain)
  __INIT_EXTERNAL(UDINT,MD930,data__->MD930,retain)
  __INIT_EXTERNAL(UDINT,MD931,data__->MD931,retain)
  __INIT_EXTERNAL(UDINT,MD932,data__->MD932,retain)
  __INIT_EXTERNAL(UDINT,MD933,data__->MD933,retain)
  __INIT_EXTERNAL(UDINT,MD934,data__->MD934,retain)
  __INIT_EXTERNAL(UDINT,MD935,data__->MD935,retain)
  __INIT_EXTERNAL(UDINT,MD936,data__->MD936,retain)
  __INIT_EXTERNAL(UDINT,MD937,data__->MD937,retain)
  __INIT_EXTERNAL(UDINT,MD938,data__->MD938,retain)
  __INIT_EXTERNAL(UDINT,MD939,data__->MD939,retain)
  __INIT_EXTERNAL(UDINT,MD940,data__->MD940,retain)
  __INIT_EXTERNAL(UDINT,MD941,data__->MD941,retain)
  __INIT_EXTERNAL(UDINT,MD942,data__->MD942,retain)
  __INIT_EXTERNAL(UDINT,MD943,data__->MD943,retain)
  __INIT_EXTERNAL(UDINT,MD944,data__->MD944,retain)
  __INIT_EXTERNAL(UDINT,MD945,data__->MD945,retain)
  __INIT_EXTERNAL(UDINT,MD946,data__->MD946,retain)
  __INIT_EXTERNAL(UDINT,MD947,data__->MD947,retain)
  __INIT_EXTERNAL(UDINT,MD948,data__->MD948,retain)
  __INIT_EXTERNAL(UDINT,MD949,data__->MD949,retain)
  __INIT_EXTERNAL(UDINT,MD950,data__->MD950,retain)
  __INIT_EXTERNAL(UDINT,MD951,data__->MD951,retain)
  __INIT_EXTERNAL(UDINT,MD952,data__->MD952,retain)
  __INIT_EXTERNAL(UDINT,MD953,data__->MD953,retain)
  __INIT_EXTERNAL(UDINT,MD954,data__->MD954,retain)
  __INIT_EXTERNAL(UDINT,MD955,data__->MD955,retain)
  __INIT_EXTERNAL(UDINT,MD956,data__->MD956,retain)
  __INIT_EXTERNAL(UDINT,MD957,data__->MD957,retain)
  __INIT_EXTERNAL(UDINT,MD958,data__->MD958,retain)
  __INIT_EXTERNAL(UDINT,MD959,data__->MD959,retain)
  __INIT_EXTERNAL(UDINT,MD960,data__->MD960,retain)
  __INIT_EXTERNAL(UDINT,MD961,data__->MD961,retain)
  __INIT_EXTERNAL(UDINT,MD962,data__->MD962,retain)
  __INIT_EXTERNAL(UDINT,MD963,data__->MD963,retain)
  __INIT_EXTERNAL(UDINT,MD964,data__->MD964,retain)
  __INIT_EXTERNAL(UDINT,MD965,data__->MD965,retain)
  __INIT_EXTERNAL(UDINT,MD966,data__->MD966,retain)
  __INIT_EXTERNAL(UDINT,MD967,data__->MD967,retain)
  __INIT_EXTERNAL(UDINT,MD968,data__->MD968,retain)
  __INIT_EXTERNAL(UDINT,MD969,data__->MD969,retain)
  __INIT_EXTERNAL(UDINT,MD970,data__->MD970,retain)
  __INIT_EXTERNAL(UDINT,MD971,data__->MD971,retain)
  __INIT_EXTERNAL(UDINT,MD972,data__->MD972,retain)
  __INIT_EXTERNAL(UDINT,MD973,data__->MD973,retain)
  __INIT_EXTERNAL(UDINT,MD974,data__->MD974,retain)
  __INIT_EXTERNAL(UDINT,MD975,data__->MD975,retain)
  __INIT_EXTERNAL(UDINT,MD976,data__->MD976,retain)
  __INIT_EXTERNAL(UDINT,MD977,data__->MD977,retain)
  __INIT_EXTERNAL(UDINT,MD978,data__->MD978,retain)
  __INIT_EXTERNAL(UDINT,MD979,data__->MD979,retain)
  __INIT_EXTERNAL(UDINT,MD980,data__->MD980,retain)
  __INIT_EXTERNAL(UDINT,MD981,data__->MD981,retain)
  __INIT_EXTERNAL(UDINT,MD982,data__->MD982,retain)
  __INIT_EXTERNAL(UDINT,MD983,data__->MD983,retain)
  __INIT_EXTERNAL(UDINT,MD984,data__->MD984,retain)
  __INIT_EXTERNAL(UDINT,MD985,data__->MD985,retain)
  __INIT_EXTERNAL(UDINT,MD986,data__->MD986,retain)
  __INIT_EXTERNAL(UDINT,MD987,data__->MD987,retain)
  __INIT_EXTERNAL(UDINT,MD988,data__->MD988,retain)
  __INIT_EXTERNAL(UDINT,MD989,data__->MD989,retain)
  __INIT_EXTERNAL(UDINT,MD990,data__->MD990,retain)
  __INIT_EXTERNAL(UDINT,MD991,data__->MD991,retain)
  __INIT_EXTERNAL(UDINT,MD992,data__->MD992,retain)
  __INIT_EXTERNAL(UDINT,MD993,data__->MD993,retain)
  __INIT_EXTERNAL(UDINT,MD994,data__->MD994,retain)
  __INIT_EXTERNAL(UDINT,MD995,data__->MD995,retain)
  __INIT_EXTERNAL(UDINT,MD996,data__->MD996,retain)
  __INIT_EXTERNAL(UDINT,MD997,data__->MD997,retain)
  __INIT_EXTERNAL(UDINT,MD998,data__->MD998,retain)
  __INIT_EXTERNAL(UDINT,MD999,data__->MD999,retain)
  __INIT_VAR(data__->I,0,retain)
  {
    static const TCOND temp = {0,0,{0,{{0,0,0}}},{0,{{0,0,0}}}};
    __SET_VAR(data__->,COND,,temp);
  }
}

// Code part
void GETCOND_body__(GETCOND *data__) {
  // Control execution
  if (!__GET_VAR(data__->EN)) {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(FALSE));
    return;
  }
  else {
    __SET_VAR(data__->,ENO,,__BOOL_LITERAL(TRUE));
  }
  // Initialise TEMP variables

  {
    UINT __case_expression = __GET_VAR(data__->I,);
    if ((__case_expression == 0)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD500,),
        (UDINT)__GET_EXTERNAL(data__->MD501,),
        (UDINT)__GET_EXTERNAL(data__->MD502,),
        (UDINT)__GET_EXTERNAL(data__->MD503,),
        (UDINT)__GET_EXTERNAL(data__->MD504,)));
    }
    else if ((__case_expression == 1)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD505,),
        (UDINT)__GET_EXTERNAL(data__->MD506,),
        (UDINT)__GET_EXTERNAL(data__->MD507,),
        (UDINT)__GET_EXTERNAL(data__->MD508,),
        (UDINT)__GET_EXTERNAL(data__->MD509,)));
    }
    else if ((__case_expression == 2)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD510,),
        (UDINT)__GET_EXTERNAL(data__->MD511,),
        (UDINT)__GET_EXTERNAL(data__->MD512,),
        (UDINT)__GET_EXTERNAL(data__->MD513,),
        (UDINT)__GET_EXTERNAL(data__->MD514,)));
    }
    else if ((__case_expression == 3)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD515,),
        (UDINT)__GET_EXTERNAL(data__->MD516,),
        (UDINT)__GET_EXTERNAL(data__->MD517,),
        (UDINT)__GET_EXTERNAL(data__->MD518,),
        (UDINT)__GET_EXTERNAL(data__->MD519,)));
    }
    else if ((__case_expression == 4)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD520,),
        (UDINT)__GET_EXTERNAL(data__->MD521,),
        (UDINT)__GET_EXTERNAL(data__->MD522,),
        (UDINT)__GET_EXTERNAL(data__->MD523,),
        (UDINT)__GET_EXTERNAL(data__->MD524,)));
    }
    else if ((__case_expression == 5)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD525,),
        (UDINT)__GET_EXTERNAL(data__->MD526,),
        (UDINT)__GET_EXTERNAL(data__->MD527,),
        (UDINT)__GET_EXTERNAL(data__->MD528,),
        (UDINT)__GET_EXTERNAL(data__->MD529,)));
    }
    else if ((__case_expression == 6)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD530,),
        (UDINT)__GET_EXTERNAL(data__->MD531,),
        (UDINT)__GET_EXTERNAL(data__->MD532,),
        (UDINT)__GET_EXTERNAL(data__->MD533,),
        (UDINT)__GET_EXTERNAL(data__->MD534,)));
    }
    else if ((__case_expression == 7)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD535,),
        (UDINT)__GET_EXTERNAL(data__->MD536,),
        (UDINT)__GET_EXTERNAL(data__->MD537,),
        (UDINT)__GET_EXTERNAL(data__->MD538,),
        (UDINT)__GET_EXTERNAL(data__->MD539,)));
    }
    else if ((__case_expression == 8)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD540,),
        (UDINT)__GET_EXTERNAL(data__->MD541,),
        (UDINT)__GET_EXTERNAL(data__->MD542,),
        (UDINT)__GET_EXTERNAL(data__->MD543,),
        (UDINT)__GET_EXTERNAL(data__->MD544,)));
    }
    else if ((__case_expression == 9)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD545,),
        (UDINT)__GET_EXTERNAL(data__->MD546,),
        (UDINT)__GET_EXTERNAL(data__->MD547,),
        (UDINT)__GET_EXTERNAL(data__->MD548,),
        (UDINT)__GET_EXTERNAL(data__->MD549,)));
    }
    else if ((__case_expression == 10)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD550,),
        (UDINT)__GET_EXTERNAL(data__->MD551,),
        (UDINT)__GET_EXTERNAL(data__->MD552,),
        (UDINT)__GET_EXTERNAL(data__->MD553,),
        (UDINT)__GET_EXTERNAL(data__->MD554,)));
    }
    else if ((__case_expression == 11)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD555,),
        (UDINT)__GET_EXTERNAL(data__->MD556,),
        (UDINT)__GET_EXTERNAL(data__->MD557,),
        (UDINT)__GET_EXTERNAL(data__->MD558,),
        (UDINT)__GET_EXTERNAL(data__->MD559,)));
    }
    else if ((__case_expression == 12)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD560,),
        (UDINT)__GET_EXTERNAL(data__->MD561,),
        (UDINT)__GET_EXTERNAL(data__->MD562,),
        (UDINT)__GET_EXTERNAL(data__->MD563,),
        (UDINT)__GET_EXTERNAL(data__->MD564,)));
    }
    else if ((__case_expression == 13)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD565,),
        (UDINT)__GET_EXTERNAL(data__->MD566,),
        (UDINT)__GET_EXTERNAL(data__->MD567,),
        (UDINT)__GET_EXTERNAL(data__->MD568,),
        (UDINT)__GET_EXTERNAL(data__->MD569,)));
    }
    else if ((__case_expression == 14)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD570,),
        (UDINT)__GET_EXTERNAL(data__->MD571,),
        (UDINT)__GET_EXTERNAL(data__->MD572,),
        (UDINT)__GET_EXTERNAL(data__->MD573,),
        (UDINT)__GET_EXTERNAL(data__->MD574,)));
    }
    else if ((__case_expression == 15)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD575,),
        (UDINT)__GET_EXTERNAL(data__->MD576,),
        (UDINT)__GET_EXTERNAL(data__->MD577,),
        (UDINT)__GET_EXTERNAL(data__->MD578,),
        (UDINT)__GET_EXTERNAL(data__->MD579,)));
    }
    else if ((__case_expression == 16)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD580,),
        (UDINT)__GET_EXTERNAL(data__->MD581,),
        (UDINT)__GET_EXTERNAL(data__->MD582,),
        (UDINT)__GET_EXTERNAL(data__->MD583,),
        (UDINT)__GET_EXTERNAL(data__->MD584,)));
    }
    else if ((__case_expression == 17)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD585,),
        (UDINT)__GET_EXTERNAL(data__->MD586,),
        (UDINT)__GET_EXTERNAL(data__->MD587,),
        (UDINT)__GET_EXTERNAL(data__->MD588,),
        (UDINT)__GET_EXTERNAL(data__->MD589,)));
    }
    else if ((__case_expression == 18)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD590,),
        (UDINT)__GET_EXTERNAL(data__->MD591,),
        (UDINT)__GET_EXTERNAL(data__->MD592,),
        (UDINT)__GET_EXTERNAL(data__->MD593,),
        (UDINT)__GET_EXTERNAL(data__->MD594,)));
    }
    else if ((__case_expression == 19)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD595,),
        (UDINT)__GET_EXTERNAL(data__->MD596,),
        (UDINT)__GET_EXTERNAL(data__->MD597,),
        (UDINT)__GET_EXTERNAL(data__->MD598,),
        (UDINT)__GET_EXTERNAL(data__->MD599,)));
    }
    else if ((__case_expression == 20)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD600,),
        (UDINT)__GET_EXTERNAL(data__->MD601,),
        (UDINT)__GET_EXTERNAL(data__->MD602,),
        (UDINT)__GET_EXTERNAL(data__->MD603,),
        (UDINT)__GET_EXTERNAL(data__->MD604,)));
    }
    else if ((__case_expression == 21)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD605,),
        (UDINT)__GET_EXTERNAL(data__->MD606,),
        (UDINT)__GET_EXTERNAL(data__->MD607,),
        (UDINT)__GET_EXTERNAL(data__->MD608,),
        (UDINT)__GET_EXTERNAL(data__->MD609,)));
    }
    else if ((__case_expression == 22)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD610,),
        (UDINT)__GET_EXTERNAL(data__->MD611,),
        (UDINT)__GET_EXTERNAL(data__->MD612,),
        (UDINT)__GET_EXTERNAL(data__->MD613,),
        (UDINT)__GET_EXTERNAL(data__->MD614,)));
    }
    else if ((__case_expression == 23)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD615,),
        (UDINT)__GET_EXTERNAL(data__->MD616,),
        (UDINT)__GET_EXTERNAL(data__->MD617,),
        (UDINT)__GET_EXTERNAL(data__->MD618,),
        (UDINT)__GET_EXTERNAL(data__->MD619,)));
    }
    else if ((__case_expression == 24)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD620,),
        (UDINT)__GET_EXTERNAL(data__->MD621,),
        (UDINT)__GET_EXTERNAL(data__->MD622,),
        (UDINT)__GET_EXTERNAL(data__->MD623,),
        (UDINT)__GET_EXTERNAL(data__->MD624,)));
    }
    else if ((__case_expression == 25)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD625,),
        (UDINT)__GET_EXTERNAL(data__->MD626,),
        (UDINT)__GET_EXTERNAL(data__->MD627,),
        (UDINT)__GET_EXTERNAL(data__->MD628,),
        (UDINT)__GET_EXTERNAL(data__->MD629,)));
    }
    else if ((__case_expression == 26)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD630,),
        (UDINT)__GET_EXTERNAL(data__->MD631,),
        (UDINT)__GET_EXTERNAL(data__->MD632,),
        (UDINT)__GET_EXTERNAL(data__->MD633,),
        (UDINT)__GET_EXTERNAL(data__->MD634,)));
    }
    else if ((__case_expression == 27)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD635,),
        (UDINT)__GET_EXTERNAL(data__->MD636,),
        (UDINT)__GET_EXTERNAL(data__->MD637,),
        (UDINT)__GET_EXTERNAL(data__->MD638,),
        (UDINT)__GET_EXTERNAL(data__->MD639,)));
    }
    else if ((__case_expression == 28)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD640,),
        (UDINT)__GET_EXTERNAL(data__->MD641,),
        (UDINT)__GET_EXTERNAL(data__->MD642,),
        (UDINT)__GET_EXTERNAL(data__->MD643,),
        (UDINT)__GET_EXTERNAL(data__->MD644,)));
    }
    else if ((__case_expression == 29)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD645,),
        (UDINT)__GET_EXTERNAL(data__->MD646,),
        (UDINT)__GET_EXTERNAL(data__->MD647,),
        (UDINT)__GET_EXTERNAL(data__->MD648,),
        (UDINT)__GET_EXTERNAL(data__->MD649,)));
    }
    else if ((__case_expression == 30)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD650,),
        (UDINT)__GET_EXTERNAL(data__->MD651,),
        (UDINT)__GET_EXTERNAL(data__->MD652,),
        (UDINT)__GET_EXTERNAL(data__->MD653,),
        (UDINT)__GET_EXTERNAL(data__->MD654,)));
    }
    else if ((__case_expression == 31)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD655,),
        (UDINT)__GET_EXTERNAL(data__->MD656,),
        (UDINT)__GET_EXTERNAL(data__->MD657,),
        (UDINT)__GET_EXTERNAL(data__->MD658,),
        (UDINT)__GET_EXTERNAL(data__->MD659,)));
    }
    else if ((__case_expression == 32)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD660,),
        (UDINT)__GET_EXTERNAL(data__->MD661,),
        (UDINT)__GET_EXTERNAL(data__->MD662,),
        (UDINT)__GET_EXTERNAL(data__->MD663,),
        (UDINT)__GET_EXTERNAL(data__->MD664,)));
    }
    else if ((__case_expression == 33)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD665,),
        (UDINT)__GET_EXTERNAL(data__->MD666,),
        (UDINT)__GET_EXTERNAL(data__->MD667,),
        (UDINT)__GET_EXTERNAL(data__->MD668,),
        (UDINT)__GET_EXTERNAL(data__->MD669,)));
    }
    else if ((__case_expression == 34)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD670,),
        (UDINT)__GET_EXTERNAL(data__->MD671,),
        (UDINT)__GET_EXTERNAL(data__->MD672,),
        (UDINT)__GET_EXTERNAL(data__->MD673,),
        (UDINT)__GET_EXTERNAL(data__->MD674,)));
    }
    else if ((__case_expression == 35)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD675,),
        (UDINT)__GET_EXTERNAL(data__->MD676,),
        (UDINT)__GET_EXTERNAL(data__->MD677,),
        (UDINT)__GET_EXTERNAL(data__->MD678,),
        (UDINT)__GET_EXTERNAL(data__->MD679,)));
    }
    else if ((__case_expression == 36)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD680,),
        (UDINT)__GET_EXTERNAL(data__->MD681,),
        (UDINT)__GET_EXTERNAL(data__->MD682,),
        (UDINT)__GET_EXTERNAL(data__->MD683,),
        (UDINT)__GET_EXTERNAL(data__->MD684,)));
    }
    else if ((__case_expression == 37)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD685,),
        (UDINT)__GET_EXTERNAL(data__->MD686,),
        (UDINT)__GET_EXTERNAL(data__->MD687,),
        (UDINT)__GET_EXTERNAL(data__->MD688,),
        (UDINT)__GET_EXTERNAL(data__->MD689,)));
    }
    else if ((__case_expression == 38)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD690,),
        (UDINT)__GET_EXTERNAL(data__->MD691,),
        (UDINT)__GET_EXTERNAL(data__->MD692,),
        (UDINT)__GET_EXTERNAL(data__->MD693,),
        (UDINT)__GET_EXTERNAL(data__->MD694,)));
    }
    else if ((__case_expression == 39)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD695,),
        (UDINT)__GET_EXTERNAL(data__->MD696,),
        (UDINT)__GET_EXTERNAL(data__->MD697,),
        (UDINT)__GET_EXTERNAL(data__->MD698,),
        (UDINT)__GET_EXTERNAL(data__->MD699,)));
    }
    else if ((__case_expression == 40)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD700,),
        (UDINT)__GET_EXTERNAL(data__->MD701,),
        (UDINT)__GET_EXTERNAL(data__->MD702,),
        (UDINT)__GET_EXTERNAL(data__->MD703,),
        (UDINT)__GET_EXTERNAL(data__->MD704,)));
    }
    else if ((__case_expression == 41)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD705,),
        (UDINT)__GET_EXTERNAL(data__->MD706,),
        (UDINT)__GET_EXTERNAL(data__->MD707,),
        (UDINT)__GET_EXTERNAL(data__->MD708,),
        (UDINT)__GET_EXTERNAL(data__->MD709,)));
    }
    else if ((__case_expression == 42)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD710,),
        (UDINT)__GET_EXTERNAL(data__->MD711,),
        (UDINT)__GET_EXTERNAL(data__->MD712,),
        (UDINT)__GET_EXTERNAL(data__->MD713,),
        (UDINT)__GET_EXTERNAL(data__->MD714,)));
    }
    else if ((__case_expression == 43)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD715,),
        (UDINT)__GET_EXTERNAL(data__->MD716,),
        (UDINT)__GET_EXTERNAL(data__->MD717,),
        (UDINT)__GET_EXTERNAL(data__->MD718,),
        (UDINT)__GET_EXTERNAL(data__->MD719,)));
    }
    else if ((__case_expression == 44)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD720,),
        (UDINT)__GET_EXTERNAL(data__->MD721,),
        (UDINT)__GET_EXTERNAL(data__->MD722,),
        (UDINT)__GET_EXTERNAL(data__->MD723,),
        (UDINT)__GET_EXTERNAL(data__->MD724,)));
    }
    else if ((__case_expression == 45)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD725,),
        (UDINT)__GET_EXTERNAL(data__->MD726,),
        (UDINT)__GET_EXTERNAL(data__->MD727,),
        (UDINT)__GET_EXTERNAL(data__->MD728,),
        (UDINT)__GET_EXTERNAL(data__->MD729,)));
    }
    else if ((__case_expression == 46)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD730,),
        (UDINT)__GET_EXTERNAL(data__->MD731,),
        (UDINT)__GET_EXTERNAL(data__->MD732,),
        (UDINT)__GET_EXTERNAL(data__->MD733,),
        (UDINT)__GET_EXTERNAL(data__->MD734,)));
    }
    else if ((__case_expression == 47)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD735,),
        (UDINT)__GET_EXTERNAL(data__->MD736,),
        (UDINT)__GET_EXTERNAL(data__->MD737,),
        (UDINT)__GET_EXTERNAL(data__->MD738,),
        (UDINT)__GET_EXTERNAL(data__->MD739,)));
    }
    else if ((__case_expression == 48)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD740,),
        (UDINT)__GET_EXTERNAL(data__->MD741,),
        (UDINT)__GET_EXTERNAL(data__->MD742,),
        (UDINT)__GET_EXTERNAL(data__->MD743,),
        (UDINT)__GET_EXTERNAL(data__->MD744,)));
    }
    else if ((__case_expression == 49)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD745,),
        (UDINT)__GET_EXTERNAL(data__->MD746,),
        (UDINT)__GET_EXTERNAL(data__->MD747,),
        (UDINT)__GET_EXTERNAL(data__->MD748,),
        (UDINT)__GET_EXTERNAL(data__->MD749,)));
    }
    else if ((__case_expression == 50)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD750,),
        (UDINT)__GET_EXTERNAL(data__->MD751,),
        (UDINT)__GET_EXTERNAL(data__->MD752,),
        (UDINT)__GET_EXTERNAL(data__->MD753,),
        (UDINT)__GET_EXTERNAL(data__->MD754,)));
    }
    else if ((__case_expression == 51)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD755,),
        (UDINT)__GET_EXTERNAL(data__->MD756,),
        (UDINT)__GET_EXTERNAL(data__->MD757,),
        (UDINT)__GET_EXTERNAL(data__->MD758,),
        (UDINT)__GET_EXTERNAL(data__->MD759,)));
    }
    else if ((__case_expression == 52)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD760,),
        (UDINT)__GET_EXTERNAL(data__->MD761,),
        (UDINT)__GET_EXTERNAL(data__->MD762,),
        (UDINT)__GET_EXTERNAL(data__->MD763,),
        (UDINT)__GET_EXTERNAL(data__->MD764,)));
    }
    else if ((__case_expression == 53)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD765,),
        (UDINT)__GET_EXTERNAL(data__->MD766,),
        (UDINT)__GET_EXTERNAL(data__->MD767,),
        (UDINT)__GET_EXTERNAL(data__->MD768,),
        (UDINT)__GET_EXTERNAL(data__->MD769,)));
    }
    else if ((__case_expression == 54)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD770,),
        (UDINT)__GET_EXTERNAL(data__->MD771,),
        (UDINT)__GET_EXTERNAL(data__->MD772,),
        (UDINT)__GET_EXTERNAL(data__->MD773,),
        (UDINT)__GET_EXTERNAL(data__->MD774,)));
    }
    else if ((__case_expression == 55)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD775,),
        (UDINT)__GET_EXTERNAL(data__->MD776,),
        (UDINT)__GET_EXTERNAL(data__->MD777,),
        (UDINT)__GET_EXTERNAL(data__->MD778,),
        (UDINT)__GET_EXTERNAL(data__->MD779,)));
    }
    else if ((__case_expression == 56)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD780,),
        (UDINT)__GET_EXTERNAL(data__->MD781,),
        (UDINT)__GET_EXTERNAL(data__->MD782,),
        (UDINT)__GET_EXTERNAL(data__->MD783,),
        (UDINT)__GET_EXTERNAL(data__->MD784,)));
    }
    else if ((__case_expression == 57)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD785,),
        (UDINT)__GET_EXTERNAL(data__->MD786,),
        (UDINT)__GET_EXTERNAL(data__->MD787,),
        (UDINT)__GET_EXTERNAL(data__->MD788,),
        (UDINT)__GET_EXTERNAL(data__->MD789,)));
    }
    else if ((__case_expression == 58)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD790,),
        (UDINT)__GET_EXTERNAL(data__->MD791,),
        (UDINT)__GET_EXTERNAL(data__->MD792,),
        (UDINT)__GET_EXTERNAL(data__->MD793,),
        (UDINT)__GET_EXTERNAL(data__->MD794,)));
    }
    else if ((__case_expression == 59)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD795,),
        (UDINT)__GET_EXTERNAL(data__->MD796,),
        (UDINT)__GET_EXTERNAL(data__->MD797,),
        (UDINT)__GET_EXTERNAL(data__->MD798,),
        (UDINT)__GET_EXTERNAL(data__->MD799,)));
    }
    else if ((__case_expression == 60)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD800,),
        (UDINT)__GET_EXTERNAL(data__->MD801,),
        (UDINT)__GET_EXTERNAL(data__->MD802,),
        (UDINT)__GET_EXTERNAL(data__->MD803,),
        (UDINT)__GET_EXTERNAL(data__->MD804,)));
    }
    else if ((__case_expression == 61)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD805,),
        (UDINT)__GET_EXTERNAL(data__->MD806,),
        (UDINT)__GET_EXTERNAL(data__->MD807,),
        (UDINT)__GET_EXTERNAL(data__->MD808,),
        (UDINT)__GET_EXTERNAL(data__->MD809,)));
    }
    else if ((__case_expression == 62)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD810,),
        (UDINT)__GET_EXTERNAL(data__->MD811,),
        (UDINT)__GET_EXTERNAL(data__->MD812,),
        (UDINT)__GET_EXTERNAL(data__->MD813,),
        (UDINT)__GET_EXTERNAL(data__->MD814,)));
    }
    else if ((__case_expression == 63)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD815,),
        (UDINT)__GET_EXTERNAL(data__->MD816,),
        (UDINT)__GET_EXTERNAL(data__->MD817,),
        (UDINT)__GET_EXTERNAL(data__->MD818,),
        (UDINT)__GET_EXTERNAL(data__->MD819,)));
    }
    else if ((__case_expression == 64)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD820,),
        (UDINT)__GET_EXTERNAL(data__->MD821,),
        (UDINT)__GET_EXTERNAL(data__->MD822,),
        (UDINT)__GET_EXTERNAL(data__->MD823,),
        (UDINT)__GET_EXTERNAL(data__->MD824,)));
    }
    else if ((__case_expression == 65)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD825,),
        (UDINT)__GET_EXTERNAL(data__->MD826,),
        (UDINT)__GET_EXTERNAL(data__->MD827,),
        (UDINT)__GET_EXTERNAL(data__->MD828,),
        (UDINT)__GET_EXTERNAL(data__->MD829,)));
    }
    else if ((__case_expression == 66)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD830,),
        (UDINT)__GET_EXTERNAL(data__->MD831,),
        (UDINT)__GET_EXTERNAL(data__->MD832,),
        (UDINT)__GET_EXTERNAL(data__->MD833,),
        (UDINT)__GET_EXTERNAL(data__->MD834,)));
    }
    else if ((__case_expression == 67)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD835,),
        (UDINT)__GET_EXTERNAL(data__->MD836,),
        (UDINT)__GET_EXTERNAL(data__->MD837,),
        (UDINT)__GET_EXTERNAL(data__->MD838,),
        (UDINT)__GET_EXTERNAL(data__->MD839,)));
    }
    else if ((__case_expression == 68)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD840,),
        (UDINT)__GET_EXTERNAL(data__->MD841,),
        (UDINT)__GET_EXTERNAL(data__->MD842,),
        (UDINT)__GET_EXTERNAL(data__->MD843,),
        (UDINT)__GET_EXTERNAL(data__->MD844,)));
    }
    else if ((__case_expression == 69)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD845,),
        (UDINT)__GET_EXTERNAL(data__->MD846,),
        (UDINT)__GET_EXTERNAL(data__->MD847,),
        (UDINT)__GET_EXTERNAL(data__->MD848,),
        (UDINT)__GET_EXTERNAL(data__->MD849,)));
    }
    else if ((__case_expression == 70)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD850,),
        (UDINT)__GET_EXTERNAL(data__->MD851,),
        (UDINT)__GET_EXTERNAL(data__->MD852,),
        (UDINT)__GET_EXTERNAL(data__->MD853,),
        (UDINT)__GET_EXTERNAL(data__->MD854,)));
    }
    else if ((__case_expression == 71)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD855,),
        (UDINT)__GET_EXTERNAL(data__->MD856,),
        (UDINT)__GET_EXTERNAL(data__->MD857,),
        (UDINT)__GET_EXTERNAL(data__->MD858,),
        (UDINT)__GET_EXTERNAL(data__->MD859,)));
    }
    else if ((__case_expression == 72)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD860,),
        (UDINT)__GET_EXTERNAL(data__->MD861,),
        (UDINT)__GET_EXTERNAL(data__->MD862,),
        (UDINT)__GET_EXTERNAL(data__->MD863,),
        (UDINT)__GET_EXTERNAL(data__->MD864,)));
    }
    else if ((__case_expression == 73)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD865,),
        (UDINT)__GET_EXTERNAL(data__->MD866,),
        (UDINT)__GET_EXTERNAL(data__->MD867,),
        (UDINT)__GET_EXTERNAL(data__->MD868,),
        (UDINT)__GET_EXTERNAL(data__->MD869,)));
    }
    else if ((__case_expression == 74)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD870,),
        (UDINT)__GET_EXTERNAL(data__->MD871,),
        (UDINT)__GET_EXTERNAL(data__->MD872,),
        (UDINT)__GET_EXTERNAL(data__->MD873,),
        (UDINT)__GET_EXTERNAL(data__->MD874,)));
    }
    else if ((__case_expression == 75)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD875,),
        (UDINT)__GET_EXTERNAL(data__->MD876,),
        (UDINT)__GET_EXTERNAL(data__->MD877,),
        (UDINT)__GET_EXTERNAL(data__->MD878,),
        (UDINT)__GET_EXTERNAL(data__->MD879,)));
    }
    else if ((__case_expression == 76)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD880,),
        (UDINT)__GET_EXTERNAL(data__->MD881,),
        (UDINT)__GET_EXTERNAL(data__->MD882,),
        (UDINT)__GET_EXTERNAL(data__->MD883,),
        (UDINT)__GET_EXTERNAL(data__->MD884,)));
    }
    else if ((__case_expression == 77)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD885,),
        (UDINT)__GET_EXTERNAL(data__->MD886,),
        (UDINT)__GET_EXTERNAL(data__->MD887,),
        (UDINT)__GET_EXTERNAL(data__->MD888,),
        (UDINT)__GET_EXTERNAL(data__->MD889,)));
    }
    else if ((__case_expression == 78)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD890,),
        (UDINT)__GET_EXTERNAL(data__->MD891,),
        (UDINT)__GET_EXTERNAL(data__->MD892,),
        (UDINT)__GET_EXTERNAL(data__->MD893,),
        (UDINT)__GET_EXTERNAL(data__->MD894,)));
    }
    else if ((__case_expression == 79)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD895,),
        (UDINT)__GET_EXTERNAL(data__->MD896,),
        (UDINT)__GET_EXTERNAL(data__->MD897,),
        (UDINT)__GET_EXTERNAL(data__->MD898,),
        (UDINT)__GET_EXTERNAL(data__->MD899,)));
    }
    else if ((__case_expression == 80)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD900,),
        (UDINT)__GET_EXTERNAL(data__->MD901,),
        (UDINT)__GET_EXTERNAL(data__->MD902,),
        (UDINT)__GET_EXTERNAL(data__->MD903,),
        (UDINT)__GET_EXTERNAL(data__->MD904,)));
    }
    else if ((__case_expression == 81)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD905,),
        (UDINT)__GET_EXTERNAL(data__->MD906,),
        (UDINT)__GET_EXTERNAL(data__->MD907,),
        (UDINT)__GET_EXTERNAL(data__->MD908,),
        (UDINT)__GET_EXTERNAL(data__->MD909,)));
    }
    else if ((__case_expression == 82)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD910,),
        (UDINT)__GET_EXTERNAL(data__->MD911,),
        (UDINT)__GET_EXTERNAL(data__->MD912,),
        (UDINT)__GET_EXTERNAL(data__->MD913,),
        (UDINT)__GET_EXTERNAL(data__->MD914,)));
    }
    else if ((__case_expression == 83)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD915,),
        (UDINT)__GET_EXTERNAL(data__->MD916,),
        (UDINT)__GET_EXTERNAL(data__->MD917,),
        (UDINT)__GET_EXTERNAL(data__->MD918,),
        (UDINT)__GET_EXTERNAL(data__->MD919,)));
    }
    else if ((__case_expression == 84)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD920,),
        (UDINT)__GET_EXTERNAL(data__->MD921,),
        (UDINT)__GET_EXTERNAL(data__->MD922,),
        (UDINT)__GET_EXTERNAL(data__->MD923,),
        (UDINT)__GET_EXTERNAL(data__->MD924,)));
    }
    else if ((__case_expression == 85)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD925,),
        (UDINT)__GET_EXTERNAL(data__->MD926,),
        (UDINT)__GET_EXTERNAL(data__->MD927,),
        (UDINT)__GET_EXTERNAL(data__->MD928,),
        (UDINT)__GET_EXTERNAL(data__->MD929,)));
    }
    else if ((__case_expression == 86)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD930,),
        (UDINT)__GET_EXTERNAL(data__->MD931,),
        (UDINT)__GET_EXTERNAL(data__->MD932,),
        (UDINT)__GET_EXTERNAL(data__->MD933,),
        (UDINT)__GET_EXTERNAL(data__->MD934,)));
    }
    else if ((__case_expression == 87)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD935,),
        (UDINT)__GET_EXTERNAL(data__->MD936,),
        (UDINT)__GET_EXTERNAL(data__->MD937,),
        (UDINT)__GET_EXTERNAL(data__->MD938,),
        (UDINT)__GET_EXTERNAL(data__->MD939,)));
    }
    else if ((__case_expression == 88)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD940,),
        (UDINT)__GET_EXTERNAL(data__->MD941,),
        (UDINT)__GET_EXTERNAL(data__->MD942,),
        (UDINT)__GET_EXTERNAL(data__->MD943,),
        (UDINT)__GET_EXTERNAL(data__->MD944,)));
    }
    else if ((__case_expression == 89)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD945,),
        (UDINT)__GET_EXTERNAL(data__->MD946,),
        (UDINT)__GET_EXTERNAL(data__->MD947,),
        (UDINT)__GET_EXTERNAL(data__->MD948,),
        (UDINT)__GET_EXTERNAL(data__->MD949,)));
    }
    else if ((__case_expression == 90)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD950,),
        (UDINT)__GET_EXTERNAL(data__->MD951,),
        (UDINT)__GET_EXTERNAL(data__->MD952,),
        (UDINT)__GET_EXTERNAL(data__->MD953,),
        (UDINT)__GET_EXTERNAL(data__->MD954,)));
    }
    else if ((__case_expression == 91)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD955,),
        (UDINT)__GET_EXTERNAL(data__->MD956,),
        (UDINT)__GET_EXTERNAL(data__->MD957,),
        (UDINT)__GET_EXTERNAL(data__->MD958,),
        (UDINT)__GET_EXTERNAL(data__->MD959,)));
    }
    else if ((__case_expression == 92)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD960,),
        (UDINT)__GET_EXTERNAL(data__->MD961,),
        (UDINT)__GET_EXTERNAL(data__->MD962,),
        (UDINT)__GET_EXTERNAL(data__->MD963,),
        (UDINT)__GET_EXTERNAL(data__->MD964,)));
    }
    else if ((__case_expression == 93)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD965,),
        (UDINT)__GET_EXTERNAL(data__->MD966,),
        (UDINT)__GET_EXTERNAL(data__->MD967,),
        (UDINT)__GET_EXTERNAL(data__->MD968,),
        (UDINT)__GET_EXTERNAL(data__->MD969,)));
    }
    else if ((__case_expression == 94)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD970,),
        (UDINT)__GET_EXTERNAL(data__->MD971,),
        (UDINT)__GET_EXTERNAL(data__->MD972,),
        (UDINT)__GET_EXTERNAL(data__->MD973,),
        (UDINT)__GET_EXTERNAL(data__->MD974,)));
    }
    else if ((__case_expression == 95)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD975,),
        (UDINT)__GET_EXTERNAL(data__->MD976,),
        (UDINT)__GET_EXTERNAL(data__->MD977,),
        (UDINT)__GET_EXTERNAL(data__->MD978,),
        (UDINT)__GET_EXTERNAL(data__->MD979,)));
    }
    else if ((__case_expression == 96)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD980,),
        (UDINT)__GET_EXTERNAL(data__->MD981,),
        (UDINT)__GET_EXTERNAL(data__->MD982,),
        (UDINT)__GET_EXTERNAL(data__->MD983,),
        (UDINT)__GET_EXTERNAL(data__->MD984,)));
    }
    else if ((__case_expression == 97)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD985,),
        (UDINT)__GET_EXTERNAL(data__->MD986,),
        (UDINT)__GET_EXTERNAL(data__->MD987,),
        (UDINT)__GET_EXTERNAL(data__->MD988,),
        (UDINT)__GET_EXTERNAL(data__->MD989,)));
    }
    else if ((__case_expression == 98)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD990,),
        (UDINT)__GET_EXTERNAL(data__->MD991,),
        (UDINT)__GET_EXTERNAL(data__->MD992,),
        (UDINT)__GET_EXTERNAL(data__->MD993,),
        (UDINT)__GET_EXTERNAL(data__->MD994,)));
    }
    else if ((__case_expression == 99)) {
      __SET_VAR(data__->,COND,,M_COND(
        (BOOL)__BOOL_LITERAL(TRUE),
        NULL,
        (UDINT)__GET_EXTERNAL(data__->MD995,),
        (UDINT)__GET_EXTERNAL(data__->MD996,),
        (UDINT)__GET_EXTERNAL(data__->MD997,),
        (UDINT)__GET_EXTERNAL(data__->MD998,),
        (UDINT)__GET_EXTERNAL(data__->MD999,)));
    }
  };

  goto __end;

__end:
  return;
} // GETCOND_body__() 





// FUNCTION
TPOS8 IT_IM(
  BOOL EN, 
  BOOL *__ENO, 
  TPOS8 PIT)
{
  BOOL ENO = __BOOL_LITERAL(TRUE);
  TPOS8 IT_IM = -1;

  // Control execution
  if (!EN) {
    if (__ENO != NULL) {
      *__ENO = __BOOL_LITERAL(FALSE);
    }
    return IT_IM;
  }
  #define GetFbVar(var,...) __GET_VAR(data__->var,__VA_ARGS__)
  #define SetFbVar(var,val,...) __SET_VAR(data__->,var,__VA_ARGS__,val)
 return (IT_IM = __GET_GLOBAL_ITS()->IT.table[PIT].IM); 
  #undef GetFbVar
  #undef SetFbVar
;

  goto __end;

__end:
  if (__ENO != NULL) {
    *__ENO = ENO;
  }
  return IT_IM;
}


