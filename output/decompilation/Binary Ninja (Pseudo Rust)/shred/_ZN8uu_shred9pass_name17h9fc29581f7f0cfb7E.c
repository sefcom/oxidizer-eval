
  fn uu_shred::pass_name::h9fc29581f7f0cfb7(arg1: *mut i64, arg2: *mut i8) -> *mut i128

{
    let rcx_1: i8 = *arg2;
    
    if rcx_1 == 2
    {
        /* tailcall */
        return _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc7ad242b1d3efe8e(arg1, "random", 6);
    }
    
    let mut var_78: *mut c_void;
    let mut var_70: *mut *mut c_void;
    let mut var_30: *mut c_void;
    
    if (rcx_1 & 1) == 0
    {
        var_78 = &arg2[1];
        var_30 = &var_78;
        let var_28_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
        var_70 = &data_41aa58;
        let var_68_1: i64 = 3;
        let var_50_1: *mut c_void = &data_41aa88;
        let var_48_1: i64 = 3;
        let var_60_1: *const *mut c_void = &var_30;
        let var_58_1: i64 = 1;
        return core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(arg1, &var_70);
    }
    
    let mut var_40: *mut c_void = &arg2[1];
    let mut var_38: *mut c_void = &arg2[2];
    var_78 = &arg2[3];
    var_70 = &var_40;
    let var_68: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    let var_60: *mut *mut c_void = &var_38;
    let var_58: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    let var_50: *mut *mut c_void = &var_78;
    let var_48: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hfeebc9e684b459fb;
    var_30 = &data_41aa58;
    let var_28: i64 = 3;
    let var_10: *mut c_void = &data_41ab18;
    let var_8: i64 = 3;
    let var_20: *mut *mut *mut c_void = &var_70;
    let var_18: i64 = 3;
    core::option::Option$LT$T$GT$::map_or_else::h7bfa45f07eaf898e(arg1, &var_30)
}
