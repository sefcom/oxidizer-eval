
  fn alacritty::config::reload::hf40e6aa756ed1fc4(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut c_void) -> i64

{
    let mut r12: i64 = arg2;
    let mut var_8c8: i64 = arg2;
    let mut var_8b8: i128;
    let mut var_860: *const i8;
    let mut var_858: i64;
    let mut var_848: i64;
    let mut var_440: *mut *mut [i8; 0xce];
    let mut var_438: i128;
    let mut var_428: i128;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        var_8b8 = &var_8c8;
        *var_8b8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
        var_440 = &data_c81db8;
        var_438 = 1;
        *var_428[8] = 0;
        *var_438[8] = &var_8b8;
        var_428 = 1;
        let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81dc8);
        var_860 = "alacritty::configReloading confi…";
        var_858 = 0x11;
        let var_850_1: *const i8 = "alacritty::configReloading confi…";
        var_848 = 0x11;
        let var_840_1: i64 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_440, 4, &var_860);
        r12 = var_8c8;
    }
    
    alacritty::config::load_from::h4623580b3b9fbaae(&var_440, r12);
    let r15_1: *mut *mut [i8; 0xce] = var_440;
    var_8b8 = var_438;
    let var_418: i128;
    let var_408: i128;
    let var_3f8: i128;
    let result: i64;
    
    if r15_1 == 6
    {
        arg1[0xb] = result;
        *arg1.byte_offset(0x48) = var_3f8;
        let zmm0: i128 = var_8b8;
        *arg1.byte_offset(0x38) = var_408;
        *arg1.byte_offset(0x28) = var_418;
        *arg1.byte_offset(0x18) = var_428;
        *arg1.byte_offset(8) = zmm0;
        *arg1 = 6;
        return result;
    }
    
    let mut var_800: ();
    let mut var_3e0: ();
    let rdx_2: i32 = memcpy(&var_800, &var_3e0, 0x3c0);
    var_858 = var_8b8;
    var_848 = var_428;
    let var_838_1: i128 = var_418;
    let var_828_1: i128 = var_408;
    let var_818_1: i128 = var_3f8;
    let result_1: i64 = result;
    var_860 = r15_1;
    alacritty::config::after_loading::h997230e48c68b3cd(&var_860, arg4, rdx_2);
    memcpy(arg1, &var_860, 0x420)
}
