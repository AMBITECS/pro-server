#ifndef __ACCESSOR_H
#define __ACCESSOR_H

// variable definition 
#define __IEC_T(type) __IEC_##type##_t
#define __IEC_P(type) __IEC_##type##_p

// variable primitive 
#ifdef __cplusplus
    #define __DEFINE_IEC_T(type, name) __IEC_T(type) name={};
    #define __DEFINE_IEC_P(type, name) __IEC_P(type) name={};
    #define __DEFINE_VAR(type, zone, name)\
                   type  zone##__##name = {};\
            static type* GLOBAL__##name = &(zone##__##name);
#else
    #define __DEFINE_IEC_T(type, name) __IEC_T(type) name;
    #define __DEFINE_IEC_P(type, name) __IEC_P(type) name;
    #define __DEFINE_VAR(type, zone, name)\
                   type  zone##__##name;\
            static type* GLOBAL__##name = &(zone##__##name);
#endif

// variable definition 
#define __DEFINE_GLOBAL(type, domain, name)             __DEFINE_VAR(__IEC_T(type), domain, name);\
        type*    __GET_GLOBAL_##name(void)              {return &((*GLOBAL__##name).value);}\
        void    __INIT_GLOBAL_##name(type value)        {(*GLOBAL__##name).value = value; (*GLOBAL__##name).flags = 0;}\
        IEC_BYTE    __IS_GLOBAL_##name##_FORCED(void)   {return (*GLOBAL__##name).flags & __IEC_FORCE_FLAG;}

#define __DEFINE_GLOBAL_LOCATED(type, resource, name)   __DEFINE_VAR(__IEC_P(type), resource, name);\
        type*    __GET_GLOBAL_##name(void)              {return (*GLOBAL__##name).value;}\
        void    __INIT_GLOBAL_##name(type value)        {*((*GLOBAL__##name).value) = value; (*GLOBAL__##name).flags = 0;}\
        void    __INIT_GLOBAL_PTR_##name(type* ptr)     {(*GLOBAL__##name).value = ptr;}\
        IEC_BYTE    __IS_GLOBAL_##name##_FORCED(void)   {return (*GLOBAL__##name).flags & __IEC_FORCE_FLAG;}

#define __DEFINE_GLOBAL_FB(type, domain, name)          __DEFINE_VAR(type, domain, name);\
        type*    __GET_GLOBAL_##name(void)              {return &(*GLOBAL__##name);}\
        extern void    type##_init__(type* data__, BOOL retain);

// variable declaration (i.e. definition) 
#define __DECLARE_VAR(type, name)                       __DEFINE_IEC_T(type, name);
#define __DECLARE_GLOBAL(type, domain, name)            __DEFINE_GLOBAL(type, domain, name);
#define __DECLARE_GLOBAL_LOCATED(type, resource, name)  __DEFINE_GLOBAL_LOCATED(type, resource, name);
#define __DECLARE_GLOBAL_FB(type, domain, name)         __DEFINE_GLOBAL_FB(type, domain, name);

// variable declaration 
#define __DECLARE_GLOBAL_LOCATION(type, g_ptr)          extern type* g_ptr;
#define __DECLARE_GLOBAL_PROTOTYPE(type, name)          extern type* __GET_GLOBAL_##name(void);

#define __DECLARE_LOCATED(type, name)                   __DEFINE_IEC_P(type, name)
#define __DECLARE_EXTERNAL(type, name)                  __DECLARE_LOCATED(type, name);
#define __DECLARE_EXTERNAL_FB(type, name)               type* name=NULL;

// variable initialization 
#define __INITIAL_VALUE(...) __VA_ARGS__

#define __SET_FLAGS(name, new_flags)                        name.flags = new_flags
#define __ADD_FLAGS(name, add_flags)                        name.flags |= add_flags
#define __INIT_FLAGS(name, new_flags)                       __SET_FLAGS(name, new_flags)
#define __INIT_RETAIN(name, add_flags)                      (__ADD_FLAGS(name, add_flags)?__IEC_RETAIN_FLAG:0);

#define __INIT_VAR(name, new_pval, flags)                   name.value = new_pval;                __INIT_RETAIN(name, flags)
#define __INIT_VAR_FB(name, new_pval)                       name = new_pval
#define __INIT_VAL(name, new_val, flags)                    *name.value = new_val;                __INIT_RETAIN(name, flags)
#define __INIT_VAL_FB(name, new_val)                        *name = new_val

#define __INIT_GLOBAL(type, name, new_val, flags)           __INIT_GLOBAL_##name((type)new_val);        __INIT_RETAIN((*GLOBAL__##name), flags);
#define __INIT_GLOBAL_LOCATED(zone, name, new_pval, flags)  zone##__##name.value = new_pval;            __INIT_RETAIN((*GLOBAL__##name), flags);
#define __INIT_GLOBAL_LOCATED2(type, name, new_pval, flags) __INIT_GLOBAL_PTR_##name((type*)new_pval);  __INIT_RETAIN((*GLOBAL__##name), flags);
#define __INIT_GLOBAL_FB(type, name, flags)                 type##_init__(&(*GLOBAL__##name), flags);

#define __INIT_LOCATED_VALUE(name, initval)                 *(name.value) = initval;
#define __INIT_LOCATED(type, g_ptr, g_name, flags)          {extern type *g_ptr; g_name.value = g_ptr;  __INIT_RETAIN(g_name, flags);}
#define __INIT_EXTERNAL(type, g_name, l_name, flags)        l_name.value = __GET_GLOBAL_##g_name();     __INIT_RETAIN(l_name, flags);
#define __INIT_EXTERNAL_FB(type, g_name, l_name, ...)       l_name = __GET_GLOBAL_##g_name();

// variable getting 
#define __GET_VAR(name, ...)                                (name.value __VA_ARGS__)
#define __GET_VAR_FB(name, ...)                             (name __VA_ARGS__)
#define __GET_VAR_REF(name, ...)                            (&__GET_VAR(name, __VA_ARGS__))
#define __GET_VAR_DREF(name, ...)                           (*__GET_VAR(name, __VA_ARGS__))

#define __GET_VAL(name, ...)                                ((*(name.value)) __VA_ARGS__)
#define __GET_VAL_FB(name, ...)                             ((*name) __VA_ARGS__)
#define __GET_VAL_REF(name, ...)                            (&__GET_VAL(name, __VA_ARGS__))
#define __GET_VAL_DREF(name, ...)                           (*__GET_VAL(name, __VA_ARGS__))

#define __GET_VAL2(name, ...)                               ((name.flags & __IEC_FORCE_FLAG) ?   name.fvalue __VA_ARGS__ :    (*(name.value)) __VA_ARGS__)
#define __GET_VAL2_PTR(name, ...)                           ((name.flags & __IEC_FORCE_FLAG) ? &(name.fvalue __VA_ARGS__) : &((*(name.value)) __VA_ARGS__))

/*OLD&BAD*///#define __GET_VAR_BY_REF(name, ...)            ((name.flags & __IEC_FORCE_FLAG) ? &(name.fvalue __VA_ARGS__) : &(name.value __VA_ARGS__))
#define __GET_VAR_BY_REF(name, ...)                         __GET_VAL2_PTR(name, __VA_ARGS__)

#define __GET_LOCATED(name, ...)                            __GET_VAL2(name, __VA_ARGS__)
#define __GET_LOCATED_BY_REF(name, ...)                     __GET_VAL2_PTR(name, __VA_ARGS__)
#define __GET_LOCATED_REF(name, ...)                        __GET_VAL_REF(name, __VA_ARGS__)
#define __GET_LOCATED_DREF(name, ...)                       __GET_VAL_DREF(name, __VA_ARGS__)

#define __GET_EXTERNAL(name, ...)                           __GET_LOCATED(name, __VA_ARGS__)
#define __GET_EXTERNAL_BY_REF(name, ...)                    __GET_LOCATED_BY_REF(name, __VA_ARGS__)
#define __GET_EXTERNAL_REF(name, ...)                       __GET_LOCATED_REF(name, __VA_ARGS__)
#define __GET_EXTERNAL_DREF(name, ...)                      __GET_LOCATED_DREF(name, __VA_ARGS__)

#define __GET_EXTERNAL_FB(name, ...)                        __GET_VAL_FB(name, __VA_ARGS__)
#define __GET_EXTERNAL_FB_BY_REF(name, ...)                 (&__GET_VAL_FB(name, __VA_ARGS__))
#define __GET_EXTERNAL_FB_REF(name, ...)                    (&__GET_VAL_FB(name, __VA_ARGS__))
#define __GET_EXTERNAL_FB_DREF(name, ...)                   (*__GET_VAL_FB(name, __VA_ARGS__))

// variable setting 
#define __SET_VAR1(prefix, name, suffix, new_value)         (prefix name.value) suffix = new_value
#define __SET_VAR1_FB(prefix, name, suffix, new_value)      (prefix name) suffix = new_value
#define __SET_VAR2(prefix, name, suffix, new_value)         if (!(prefix name.flags & __IEC_FORCE_FLAG)) __SET_VAR1(prefix, name, suffix, new_value)

#define __SET_VAL1(prefix, name, suffix, new_value)         (*(prefix name.value)) suffix = new_value
#define __SET_VAL1_FB(prefix, name, suffix, new_value)      (*(prefix name)) suffix = new_value
#define __SET_VAL2(prefix, name, suffix, new_value)         if (!(prefix name.flags & __IEC_FORCE_FLAG)) __SET_VAL1(prefix, name, suffix, new_value)

/*OLD*///#define __SET_VAR(prefix, name, suffix, new_value) __SET_VAR2(prefix, name, suffix, new_value)
#define __SET_VAR(prefix, name, suffix, new_value)          __SET_VAR1(prefix, name, suffix, new_value)
#define __SET_VAR_FB(prefix, name, suffix, new_value)       __SET_VAR1_FB(prefix, name, suffix, new_value)
#define __SET_VAL(prefix, name, suffix, new_value)          __SET_VAL1(prefix, name, suffix, new_value)
#define __SET_VAL_FB(prefix, name, suffix, new_value)       __SET_VAL1_FB(prefix, name, suffix, new_value)

#define __SET_LOCATED(prefix, name, suffix, new_value)      __SET_VAL2(prefix, name, suffix, new_value)

#define __SET_EXTERNAL(prefix, name, suffix, new_value)     {extern IEC_BYTE __IS_GLOBAL_##name##_FORCED();\
                                                                if (!(prefix name.flags & __IEC_FORCE_FLAG || __IS_GLOBAL_##name##_FORCED()))\
                                                                (*(prefix name.value)) suffix = new_value;}

#define __SET_EXTERNAL_FB(prefix, name, suffix, new_value)  __SET_VAL_FB(prefix, name, suffix, new_value)

#endif //__ACCESSOR_H
