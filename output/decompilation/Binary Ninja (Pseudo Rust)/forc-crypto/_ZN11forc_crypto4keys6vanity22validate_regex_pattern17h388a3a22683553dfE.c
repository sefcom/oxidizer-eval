
  fn forc_crypto::keys::vanity::validate_regex_pattern::h388a3a22683553df(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_c8: i64 = arg2;
    
    if arg3 > 0x80
    {
        let rax: i64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], "Regex pattern too long: max 128 …", 0x2a);
        *arg1 = 1;
        return rax;
    }
    
    let mut var_b8: *mut i64 = &var_c8;
    let var_b0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h30043921d5c5f2d0;
    let mut var_68: *mut *mut [i8; 0xa] = &data_a2f008;
    let var_60: i64 = 1;
    let var_48: i64 = 0;
    let var_58: *mut *mut i64 = &var_b8;
    let var_50: i64 = 1;
    let mut var_80: ();
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_80, 0, arg3, &var_68);
    let mut var_a0: i64;
    let var_78: i64;
    let rdx: u64 = regex::regex::string::Regex::new::h92399a8041d2121d(&var_a0, var_78);
    
    if var_a0 != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$regex..regex..string..Regex$C$regex..error..Error$GT$$GT$::hd7374fd7dca9b727(&var_a0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_80);
        let rax_1: i64 = _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hd37f91379d22554a(&arg1[1], var_c8, arg3);
        *arg1 = 0;
        return rax_1;
    }
    
    let var_88: i64;
    let var_a8: i64 = var_88;
    let var_98: i128;
    var_b8 = var_98;
    let mut var_38: *mut *mut i64 = &var_b8;
    let var_30: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
        _$LT$regex..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h73feb9b51bd9b12e;
    var_68 = &data_a2f018;
    let var_60_1: i64 = 1;
    let var_48_1: i64 = 0;
    let var_58_1: *mut *mut *mut i64 = &var_38;
    let var_50_1: i64 = 1;
    let mut var_28: i128;
    core::option::Option$LT$T$GT$::map_or_else::h34f6eea6daa701c2(&var_28, 0, rdx, &var_68);
    let var_18: i64;
    arg1[3] = var_18;
    *arg1.byte_offset(8) = var_28;
    *arg1 = 1;
    core::ptr::drop_in_place$LT$regex..error..Error$GT$::h8cd765a8894c774f(&var_b8);
    
    if var_a0 != 0
    {
        core::ptr::drop_in_place$LT$core..result..Result$LT$regex..regex..string..Regex$C$regex..error..Error$GT$$GT$::hd7374fd7dca9b727(&var_a0);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h223631e41b095cf4(&var_80)
}
