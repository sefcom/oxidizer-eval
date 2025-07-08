
  fn uu_dd::numbers::to_magnitude_and_suffix::h88c44cbe00c16152(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i8) -> *mut i128

{
    let mut var_b8: *mut *mut f64;
    uu_dd::numbers::SuffixType::base_and_suffix::he90531716fe26654(&var_b8, arg4, arg2, arg3);
    let mut var_a8: i128;
    let mut var_40: i128 = var_a8;
    let u: i64;
    let u_1: f64 = __floatuntidf(u);
    let x: f64 = u_1 / __floatuntidf(u_1);
    let mut x_1: f64 = x;
    let mut rsi_1: *mut *mut *mut f64;
    let mut var_108: *mut *mut f64;
    let mut var_d8: *mut f64;
    
    if 10.0 <= x
    {
        var_d8 = round(x);
        var_108 = &var_d8;
        let var_100_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        let var_f8_1: *mut i128 = &var_40;
        let var_f0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        var_b8 = &data_561a88;
        let var_b0_1: i64 = 2;
        let var_98_1: i64 = 0;
        var_a8 = &var_108;
        *var_a8[8] = 2;
        rsi_1 = &var_b8;
    }
    else
    {
        var_d8 = &x_1;
        let var_d0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        let var_c8_1: *mut i128 = &var_40;
        let var_c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h377362f42c043423;
        var_b8 = nullptr;
        let var_b0: i64 = 1;
        var_a8 = 2;
        let var_98: i64 = 0;
        let var_90_1: i64 = 0x20;
        let var_88_1: i8 = 3;
        let var_80_1: i64 = 2;
        let var_70_1: i64 = 2;
        let var_60_1: i64 = 1;
        let var_58_1: i64 = 0x20;
        let var_50_1: i8 = 3;
        var_108 = &data_561a88;
        let var_100: i64 = 2;
        let var_e8_1: *mut i64 = &var_b8;
        let var_e0_1: i64 = 2;
        let var_f8: *mut *mut f64 = &var_d8;
        let var_f0: i64 = 2;
        rsi_1 = &var_108;
    }
    core::option::Option$LT$T$GT$::map_or_else::hc1b70357c4d75658(arg1, rsi_1);
    arg1
}
