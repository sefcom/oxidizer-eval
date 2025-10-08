
  fn alacritty::renderer::Renderer::was_context_reset::h1958bb6f6d16285b(arg1: i8) -> i64

{
    if (arg1 & 1) == 0
    {
        return 0;
    }
    
    let rax: i32 = *alacritty::gl::storage::GetGraphicsResetStatus::he603977498c441ae.0();
    
    if rax == 0
    {
        return 0;
    }
    
    let mut rax_3: *mut c_void;
    let mut rcx_1: i64;
    
    if rax - 0x8253 > 2
    {
        rcx_1 = 7;
        rax_3 = "invalidGPU reset notifications a…";
    }
    else
    {
        let rcx: u64 = rax - 0x8253;
        rax_3 = *(&data_50f798).byte_offset(rcx << 2) + &data_50f798;
        rcx_1 = *(&data_50f7a8).byte_offset(rcx << 3);
    }
    
    let mut var_78: *mut c_void = rax_3;
    let var_70: i64 = rcx_1;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        let mut var_68: *mut *mut c_void = &var_78;
        let var_60_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        let mut var_30: *mut *mut c_void = &data_c840e8;
        let var_28_1: i64 = 2;
        let var_10_1: i64 = 0;
        let var_20_1: *mut *mut *mut c_void = &var_68;
        let var_18_1: i64 = 1;
        let rax_6: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84108);
        let mut var_58: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
        let var_50_1: i64 = 0x13;
        let var_48_1: *const i8 = "alacritty::renderer3.3GL_KHR_deb…";
        let var_40_1: i64 = 0x13;
        let var_38_1: i64 = rax_6;
        log::__private_api::log::h0b6680b994d742b1(&var_30, 3, &var_58);
    }
    
    let mut result: i64;
    result = 1;
    result
}
