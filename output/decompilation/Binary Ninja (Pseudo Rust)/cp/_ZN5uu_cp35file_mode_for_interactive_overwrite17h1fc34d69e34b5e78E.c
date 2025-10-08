
  fn uu_cp::file_mode_for_interactive_overwrite::h1fc34d69e34b5e78(arg1: *mut i64, arg2: i64) -> i64

{
    let mut var_c0: i32;
    let rax: i64 = std::fs::metadata::h87a95e5fd9b91fc7(&var_c0, arg2);
    
    if var_c0 == 2
    {
        *arg1 = -0x8000000000000000;
        return core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::he37bb0d8b54bbf24(&var_c0);
    }
    
    let var_88: i32;
    
    if var_88 < 0
    {
        *arg1 = -0x8000000000000000;
        return rax;
    }
    
    let mut var_12c: i32 = var_88 & 0xf7f;
    let mut var_128: *mut i32 = &var_12c;
    let var_120: fn(arg1: *mut i32, arg2: *mut i64) -> u64 =
        core::fmt::num::_$LT$impl$u20$core..fmt..Octal$u20$for$u20$i32$GT$::fmt::h84d633f3d5886597;
    let mut var_108: *mut c_void = &data_420910;
    let var_100: i64 = 1;
    let var_e8: *mut c_void = &data_424bf8;
    let var_e0: i64 = 1;
    let var_f8: *mut *mut i32 = &var_128;
    let mut var_f0: i64 = 1;
    let mut var_d8: i128;
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_d8, &var_108);
    var_128 = var_d8;
    uucore::features::fs::display_permissions_unix::hf65510d5c6517b79(&var_d8, var_88, 0);
    let zmm0_1: i128 = var_128;
    var_108 = zmm0_1;
    var_f0 = var_d8;
    arg1[4] = var_e8;
    let var_c8: i64;
    arg1[5] = var_c8;
    arg1[2] = var_c8;
    arg1[3] = var_f0;
    *arg1 = zmm0_1;
    var_f0
}
