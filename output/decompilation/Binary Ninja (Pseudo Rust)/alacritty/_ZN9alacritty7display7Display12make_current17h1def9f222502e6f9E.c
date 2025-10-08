
  fn alacritty::display::Display::make_current::h1def9f222502e6f9(arg1: *mut c_void) -> i64

{
    let mut var_4b0: i128;
    let mut var_4a0: *const i8;
    let mut var_468: *mut i64;
    let mut var_450: *mut *mut i64;
    let mut var_448: i128;
    let mut var_3a8: *mut *mut c_void;
    let mut result: i64;
    
    if _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::is_current::hfbaab1a9cf077597(arg1.byte_offset(0x2a8)) == 0
    {
        let mut result_1: i64;
        _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::make_current::h603c03aea39bb24a(&result_1, arg1.byte_offset(0x2a8), arg1.byte_offset(0x560));
        result = result_1;
        let var_3d8: i64;
        
        if result == 2 || var_3d8 != 0x11
        {
            if result == 2
            {
                return result;
            }
            
            return core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(
                &result_1);
        }
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            var_468 =
                alacritty::display::window::Window::id::h395f89524db74beb(arg1.byte_offset(0x320));
            var_450 = &var_468;
            var_448 = _$LT$winit..window..WindowId$u20$as$u20$core..fmt..Debug$GT$::fmt::h23f84c224ab71ac2;
            var_3a8 = &data_c82550;
            let var_3a0_1: i64 = 1;
            let var_388_1: i64 = 0;
            let var_398_1: *mut *mut *mut i64 = &var_450;
            let var_390_1: i64 = 1;
            let rax_3: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82580);
            var_4b0 = "alacritty::displayfailed to swap…";
            *var_4b0[8] = 0x12;
            var_4a0 = "alacritty::displayfailed to swap…";
            let var_498_1: i64 = 0x12;
            let var_490_1: i64 = rax_3;
            log::__private_api::log::h0b6680b994d742b1(&var_3a8, 3, &var_4b0);
        }
        
        core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(&result_1);
    }
    else
    {
        result = alacritty::renderer::Renderer::was_context_reset::h1958bb6f6d16285b(
            *arg1.byte_offset(0x2a0));
        
        if result == 0
        {
            return result;
        }
    }
    let mut rax_4: i64;
    let mut rdx_3: i64;
    rax_4 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h65e5dd4d2e691e41(arg1.byte_offset(0x2a8));
    let mut var_488: i64 = rax_4;
    let var_480_1: i64 = rdx_3;
    let mut rax_5: i64;
    let mut rcx_1: i8;
    let mut rdx_4: i64;
    rax_5 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..config..GetGlConfig$GT$::config::hde59c67359acb4ca(arg1.byte_offset(0x2a8));
    let mut var_478: i64 = rax_5;
    let var_470_1: i64 = rdx_4;
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_3a8, arg1.byte_offset(0x340), rdx_4, rcx_1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_4b0, &var_3a8);
    let mut var_428: i128 = var_4b0;
    let var_418_1: *const i8 = var_4a0;
    alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(&var_3a8, &var_488, 
        &var_478, &var_428);
    core::result::Result$LT$T$C$E$GT$::expect::hdfe2b77486f2a738(&var_450, &var_3a8);
    core::ptr::drop_in_place$LT$alacritty..renderer..Renderer$GT$::hcd88fd9ce432a1cd(arg1.
        byte_offset(0xe0));
    core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg1.
        byte_offset(0x2a8));
    *arg1.byte_offset(0x2a8) = var_450 & 1;
    *arg1.byte_offset(0x2b0) = var_448;
    let var_438: i128;
    *arg1.byte_offset(0x2c0) = var_438;
    _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::make_current::h603c03aea39bb24a(&var_3a8, arg1.byte_offset(0x2a8), arg1.byte_offset(0x560));
    core::result::Result$LT$T$C$E$GT$::expect::he18683c3aeadddae(&var_3a8, 
        "failed to reativate context afte…", 0x28);
    alacritty::renderer::Renderer::new::h55b7130c64977f8c(&var_3a8, arg1.byte_offset(0x2a8), 
        *arg1.byte_offset(0x837));
    let mut var_1e0: ();
    core::result::Result$LT$T$C$E$GT$::expect::h23508c4f2ac2861f(&var_1e0, &var_3a8);
    memcpy(arg1.byte_offset(0xe0), &var_1e0, 0x1c8);
    alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(arg1.byte_offset(0xe0), 
        arg1.byte_offset(0x798));
    alacritty::display::Display::reset_glyph_cache::h8f02d6c622bdd6ab(arg1);
    *arg1.byte_offset(0x48) = 1;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
    {
        let mut var_458: i64 =
            alacritty::display::window::Window::id::h395f89524db74beb(arg1.byte_offset(0x320));
        var_468 = &var_458;
        let var_460_1: fn(arg1: i64, arg2: *mut i64) -> u64 =
            _$LT$winit..window..WindowId$u20$as$u20$core..fmt..Debug$GT$::fmt::h23f84c224ab71ac2;
        var_3a8 = &data_c82560;
        let var_3a0_2: i64 = 2;
        let var_388_2: i64 = 0;
        let var_398_2: *mut *mut i64 = &var_468;
        let var_390_2: i64 = 1;
        let rax_11: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c825e0);
        var_4b0 = "alacritty::displayfailed to swap…";
        *var_4b0[8] = 0x12;
        let var_4a0_1: *const i8 = "alacritty::displayfailed to swap…";
        let var_498_2: i64 = 0x12;
        let var_490_2: i64 = rax_11;
        log::__private_api::log::h0b6680b994d742b1(&var_3a8, 4, &var_4b0);
    }
    
    core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_478);
    core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_488)
}
