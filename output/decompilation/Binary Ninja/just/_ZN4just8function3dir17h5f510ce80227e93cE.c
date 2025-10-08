
  int64_t just::function::dir::h5f510ce80227e93c(int64_t* arg1, int64_t arg2)

{
    int64_t var_50 = arg2;
    int64_t rdx;
    int64_t var_48 = rdx;
    int64_t var_40;
    int64_t rcx;
    uint64_t rdx_1 = rcx(&var_40);
    int32_t var_80;
    
    if (0 + -(var_40))
    {
        int64_t* var_28 = &var_50;
        int64_t (* var_20_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_80 = &data_82fe08;
        int64_t var_78_1 = 2;
        int64_t var_60_1 = 0;
        int64_t** var_70_1 = &var_28;
        int64_t var_68_1 = 1;
        int64_t result = core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, 
            rdx_1, &var_80);
        *arg1 = 1;
        return result;
    }
    
    char* var_38;
    uint64_t var_30;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_80, var_38, var_30);
    uint64_t var_70;
    
    if (var_80 != 1)
    {
        int64_t var_78;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::he141d0e2f3955eab(&var_80, var_78, var_70);
        int64_t rax_1 = var_80;
        *(arg1 + 0x10) = var_78;
        arg1[1] = rax_1;
        *arg1 = 0;
    }
    else
    {
        just::function::dir::_$u7b$$u7b$closure$u7d$$u7d$::h71277bd26d076cbf(&var_80, var_38, 
            var_30, &var_50);
        arg1[3] = var_70;
        *(arg1 + 8) = var_80;
        *arg1 = 1;
    }
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h775cb89257c230e4(&var_40);
}
