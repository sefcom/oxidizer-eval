
  int64_t just::executor::Executor::script_filename::he1d781f6fc31137a(int64_t* arg1, int64_t* arg2, uint64_t arg3, int64_t arg4, char* arg5)

{
    uint64_t var_78 = arg3;
    int64_t var_70 = arg4;
    uint64_t r9;
    
    if (!arg5)
    {
        char* rax_1;
        rax_1 = just::executor::Executor::script_filename::_$u7b$$u7b$closure$u7d$$u7d$::hc27e29dca0ced4a6(arg2);
        arg5 = rax_1;
        r9 = arg3;
    }
    
    char* var_68 = arg5;
    uint64_t var_60 = r9;
    int64_t* var_58 = &var_78;
    int64_t (* var_50)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
    char** var_48 = &var_68;
    int64_t (* var_40)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
    char const* const var_38 = &data_46ca80;
    int64_t var_30 = 2;
    int64_t var_18 = 0;
    int64_t** var_28 = &var_58;
    int64_t var_20 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(arg1, 0, arg3, &var_38);
}
