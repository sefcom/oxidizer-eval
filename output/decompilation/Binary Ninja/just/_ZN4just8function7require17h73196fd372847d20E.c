
  int64_t* just::function::require::h73196fd372847d20(int64_t* arg1, int64_t* arg2, int64_t arg3, uint64_t arg4)

{
    int64_t var_28 = arg3;
    uint64_t var_20 = arg4;
    int32_t var_68;
    uint64_t rdx = just::which::which::hd176e22496e4e776(&var_68, *arg2, arg3, arg4);
    int64_t rax_1;
    int64_t var_60;
    int128_t var_58;
    
    if (var_68 == 1)
    {
        *(arg1 + 0x10) = var_58;
        arg1[1] = var_60;
        rax_1 = 1;
    }
    else if (-(var_60) != -0x8000000000000000)
    {
        *(arg1 + 0x10) = var_58;
        arg1[1] = var_60;
        rax_1 = 0;
    }
    else
    {
        int64_t* var_18 = &var_28;
        int64_t (* var_10_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
        var_68 = &data_830000;
        int64_t var_60_1 = 2;
        int64_t var_48_1 = 0;
        var_58 = &var_18;
        *var_58[8] = 1;
        core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&arg1[1], 0, rdx, &var_68);
        rax_1 = 1;
    }
    *arg1 = rax_1;
    return arg1;
}
