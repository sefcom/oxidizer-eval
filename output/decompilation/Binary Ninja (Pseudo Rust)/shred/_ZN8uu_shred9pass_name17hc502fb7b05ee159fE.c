
  fn uu_shred::pass_name::hc502fb7b05ee159f(arg1: *mut i64, arg2: *mut i8) -> *mut i128

{
    let rax: u32 = *arg2;
    let mut var_e0: *mut c_void;
    let mut var_f8: *mut c_void;
    let mut var_f0: *mut c_void;
    let mut var_a8: *mut *mut c_void;
    
    if rax == 0
    {
        var_f8 = &arg2[1];
        var_f0 = &var_f8;
        let var_e8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        var_a8 = 2;
        let var_98: i64 = 2;
        let var_88: i64 = 0;
        let var_80: i64 = 0x20;
        let var_78_1: i8 = 3;
        let var_70_1: i64 = 2;
        let var_60_1: i64 = 2;
        let var_50_1: i64 = 0;
        let var_48_1: i64 = 0x20;
        let var_40_1: i8 = 3;
        let var_38_1: i64 = 2;
        let var_28_1: i64 = 2;
        let var_18_1: i64 = 0;
        let var_10_1: i64 = 0x20;
        let var_8_1: i8 = 3;
        var_e0 = &data_41f050;
        let var_d8: i64 = 3;
        let var_c0: *mut *mut *mut c_void = &var_a8;
        let var_b8_1: i64 = 3;
        let var_d0: *mut *mut c_void = &var_f0;
        let var_c8: i64 = 1;
    }
    else
    {
        if rax == 2
        {
            /* tailcall */
            return _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h1a8f6b081ce0a887(
                arg1);
        }
        
        let mut var_b0: *mut c_void = &arg2[1];
        var_f8 = &arg2[2];
        var_f0 = &arg2[3];
        var_a8 = &var_b0;
        let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        let var_98_1: *mut *mut c_void = &var_f8;
        let var_90_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        let var_88_1: *mut *mut c_void = &var_f0;
        let var_80_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..LowerHex$GT$::fmt::hdd5c48a143c8004b;
        var_e0 = &data_41f050;
        let var_d8_1: i64 = 3;
        let var_c0_1: i64 = 0;
        let var_d0_1: *mut *mut *mut c_void = &var_a8;
        let var_c8_1: i64 = 3;
    }
    core::option::Option$LT$T$GT$::map_or_else::h2a91f0892e8dc529(arg1, &var_e0)
}
