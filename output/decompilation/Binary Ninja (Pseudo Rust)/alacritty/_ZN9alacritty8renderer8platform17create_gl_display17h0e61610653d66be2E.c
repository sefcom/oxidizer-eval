
  fn alacritty::renderer::platform::create_gl_display::h0e61610653d66be2(arg1: *mut *mut *mut [i8; 0xbf], arg2: *mut i32, arg3: i32) -> *mut *mut [i8; 0xbf]

{
    let rax: i64 = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
    let mut var_b0: *const i8 = arg3 ^ 3;
    let var_a8: i64 = rax;
    let var_a0: *mut c_void = &data_c83838;
    let mut result_1: *mut *mut [i8; 0xbf];
    glutin::display::Display::new::h7fa93ffe55699b54(&result_1, arg2, &var_b0);
    let mut result: *mut *mut [i8; 0xbf] = result_1;
    let var_80: i64;
    let mut r14_1: i64 = var_80;
    let var_78: i64;
    let mut var_70: i128;
    
    if result != 2
    {
        let var_50: i64;
        arg1[7] = var_50;
        let var_60: i128;
        *arg1.byte_offset(0x28) = var_60;
        *arg1.byte_offset(0x18) = var_70;
        *arg1 = result;
        arg1[1] = r14_1;
        arg1[2] = var_78;
    }
    else
    {
        let mut var_c0: i64 = r14_1;
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if result >= 3
        {
            let mut var_38: ();
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::version_string::h0b7915697facbe8d(&var_38, &var_c0);
            let mut var_48: *mut c_void = &var_38;
            let var_40_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_1 = &data_c83828;
            let var_80_1: i64 = 1;
            *var_70[8] = 0;
            let var_78_1: *mut *mut c_void = &var_48;
            var_70 = 1;
            let rax_1: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c83868);
            var_b0 = "alacritty::renderer::platformPic…";
            let var_a8_1: i64 = 0x1d;
            let var_a0_1: *const i8 = "alacritty::renderer::platformPic…";
            let var_98_1: i64 = 0x1d;
            let var_90_1: i64 = rax_1;
            log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_b0);
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_38);
            r14_1 = var_c0;
        }
        
        arg1[1] = r14_1;
        arg1[2] = var_78;
        *arg1 = 2;
    }
    result
}
