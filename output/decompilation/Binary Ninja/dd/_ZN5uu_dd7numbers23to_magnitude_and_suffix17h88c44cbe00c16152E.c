
  int128_t* uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(int128_t* arg1, int64_t arg2, int64_t arg3, char arg4)

{
    double** var_b8;
    uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(&var_b8, arg4, arg2, arg3);
    int128_t var_a8;
    int128_t var_40 = var_a8;
    int64_t u;
    double u_1 = __floatuntidf(u);
    double x = u_1 / __floatuntidf(u_1);
    double x_1 = x;
    double*** rsi_1;
    double** var_108;
    double* var_d8;
    
    if (10.0 <= x)
    {
        var_d8 = round(x);
        var_108 = &var_d8;
        int64_t (* var_100_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        int128_t* var_f8_1 = &var_40;
        int64_t (* var_f0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        var_b8 = &data_561a88;
        int64_t var_b0_1 = 2;
        int64_t var_98_1 = 0;
        var_a8 = &var_108;
        *var_a8[8] = 2;
        rsi_1 = &var_b8;
    }
    else
    {
        var_d8 = &x_1;
        int64_t (* var_d0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        int128_t* var_c8_1 = &var_40;
        int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        var_b8 = nullptr;
        int64_t var_b0 = 1;
        var_a8 = 2;
        int64_t var_98 = 0;
        int64_t var_90_1 = 0x20;
        char var_88_1 = 3;
        int64_t var_80_1 = 2;
        int64_t var_70_1 = 2;
        int64_t var_60_1 = 1;
        int64_t var_58_1 = 0x20;
        char var_50_1 = 3;
        var_108 = &data_561a88;
        int64_t var_100 = 2;
        int64_t* var_e8_1 = &var_b8;
        int64_t var_e0_1 = 2;
        double** var_f8 = &var_d8;
        int64_t var_f0 = 2;
        rsi_1 = &var_108;
    }
    core::option::Option$LT$T$GT$::map_or_else::hc1b70357c4d75658(arg1, rsi_1);
    return arg1;
}
