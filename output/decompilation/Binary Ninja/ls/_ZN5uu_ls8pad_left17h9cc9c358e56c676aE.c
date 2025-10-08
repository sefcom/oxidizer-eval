
  int128_t* uu_ls::pad_left::h9cc9c358e56c676a(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4)

{
    int64_t var_30 = arg2;
    int64_t var_28 = arg3;
    void* const var_60;
    
    if (arg4 > 0xffff)
    {
        var_60 = &data_6864a8;
        int64_t var_58_1 = 1;
        int64_t var_50_1 = 8;
        int128_t var_48_1 = {0};
        core::panicking::panic_fmt::h96f341d36638c225(&var_60);
        /* no return */
    }
    
    int64_t* var_20 = &var_30;
    int64_t (* var_18)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hf27cb4f53db833cd;
    int64_t var_10 = 0;
    int16_t var_8 = arg4;
    var_60 = &data_4cf290;
    int64_t var_58 = 1;
    int128_t var_48;
    *var_48[8] = &data_4d41d0;
    int64_t var_38 = 1;
    int64_t** var_50 = &var_20;
    var_48 = 2;
    return core::option::Option$LT$T$GT$::map_or_else::h69a0b1154707aabf(arg1, &var_60);
}
