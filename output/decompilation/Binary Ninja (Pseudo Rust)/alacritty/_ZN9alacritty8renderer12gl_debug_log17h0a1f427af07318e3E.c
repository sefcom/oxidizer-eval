
  fn alacritty::renderer::gl_debug_log::h0a1f427af07318e3(arg1: i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64, arg6: *mut i8) -> i64

{
    let mut var_58: ();
    alloc::ffi::c_str::_$LT$impl$u20$core..ffi..c_str..CStr$GT$::to_string_lossy::h9afbfb8b28205f24(
        &var_58, arg6, strlen(arg6) + 1);
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        let mut var_90: *mut c_void = &var_58;
        let var_88_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..borrow..Cow$LT$B$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcfd5d0c223f1891d;
        let mut var_40: *mut *mut [i8; 0xeb] = &data_c84170;
        let var_38_1: i64 = 1;
        let var_20_1: i64 = 0;
        let var_30_1: *mut *mut c_void = &var_90;
        let var_28_1: i64 = 1;
        let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84180);
        let mut var_80: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
        let var_78_1: i64 = 0x13;
        let var_70_1: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
        let var_68_1: i64 = 0x13;
        let var_60_1: i64 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_40, 4, &var_80);
    }
    
    core::ptr::drop_in_place$LT$crossfont..Style$GT$::h2b47363f07595d0e(&var_58)
}
