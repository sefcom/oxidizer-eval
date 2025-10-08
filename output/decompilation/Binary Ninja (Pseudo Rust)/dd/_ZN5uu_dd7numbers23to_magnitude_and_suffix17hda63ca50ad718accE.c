
  fn uu_dd::numbers::to_magnitude_and_suffix::hda63ca50ad718acc(arg1: *mut i128, arg2: u64, arg3: u64, arg4: i8) -> *mut i128

{
    let mut var_a8: *mut c_void;
    uu_dd::numbers::SuffixType::base_and_suffix::h8dfa57e28a1f1cdd(&var_a8, arg4, arg2, arg3);
    let r12: *mut c_void = var_a8;
    let mut var_98: i128;
    let mut var_40: i128 = var_98;
    let var_a0: u64;
    let mut zmm1: u128;
    zmm1 = __floatuntidf(arg2, arg3) / __floatuntidf(r12, var_a0);
    let mut var_50: u64 = zmm1;
    let mut var_78: *mut u64;
    
    if 0x4024000000000000 <= zmm1
    {
        let mut var_48: u64 = round(zmm1);
        var_78 = &var_48;
        let var_70_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        let var_68_1: *mut i128 = &var_40;
        let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
        var_a8 = &data_53d8d8;
        let var_a0_2: i64 = 2;
        let var_88_1: i64 = 0;
    }
    else
    {
        var_78 = &var_50;
        let var_70: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        let var_68: *mut i128 = &var_40;
        let var_60: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::he6d1f6ccd2de0d3d;
        var_a8 = &data_53d8d8;
        let var_a0_1: i64 = 2;
        let var_88: *mut c_void = &data_421120;
        let var_80_1: i64 = 2;
    }
    
    var_98 = &var_78;
    *var_98[8] = 2;
    core::option::Option$LT$T$GT$::map_or_else::h6db3e72e2d5d868f(arg1, &var_a8)
}
