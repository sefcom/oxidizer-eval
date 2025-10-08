
  int64_t alacritty::display::Display::make_current::h1def9f222502e6f9(void* arg1)

{
    int128_t var_4b0;
    char const* const var_4a0;
    int64_t* var_468;
    int64_t** var_450;
    int128_t var_448;
    void** const var_3a8;
    int64_t result;
    
    if (!_$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::is_current::hfbaab1a9cf077597(arg1 + 0x2a8))
    {
        int64_t result_1;
        _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::make_current::h603c03aea39bb24a(&result_1, arg1 + 0x2a8, arg1 + 0x560);
        result = result_1;
        int64_t var_3d8;
        
        if (result == 2 || var_3d8 != 0x11)
        {
            if (result == 2)
                return result;
            
            return core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(
                &result_1);
        }
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            var_468 = alacritty::display::window::Window::id::h395f89524db74beb(arg1 + 0x320);
            var_450 = &var_468;
            var_448 = _$LT$winit..window..WindowId$u20$as$u20$core..fmt..Debug$GT$::fmt::h23f84c224ab71ac2;
            var_3a8 = &data_c82550;
            int64_t var_3a0_1 = 1;
            int64_t var_388_1 = 0;
            int64_t*** var_398_1 = &var_450;
            int64_t var_390_1 = 1;
            int64_t rax_3 = log::__private_api::loc::h250021ea1f26630a(&data_c82580);
            var_4b0 = "alacritty::displayfailed to swap…";
            *var_4b0[8] = 0x12;
            var_4a0 = "alacritty::displayfailed to swap…";
            int64_t var_498_1 = 0x12;
            int64_t var_490_1 = rax_3;
            log::__private_api::log::h0b6680b994d742b1(&var_3a8, 3, &var_4b0);
        }
        
        core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(&result_1);
    }
    else
    {
        result =
            alacritty::renderer::Renderer::was_context_reset::h1958bb6f6d16285b(*(arg1 + 0x2a0));
        
        if (!result)
            return result;
    }
    int64_t rax_4;
    int64_t rdx_3;
    rax_4 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h65e5dd4d2e691e41(arg1 + 0x2a8);
    int64_t var_488 = rax_4;
    int64_t var_480_1 = rdx_3;
    int64_t rax_5;
    char rcx_1;
    int64_t rdx_4;
    rax_5 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..config..GetGlConfig$GT$::config::hde59c67359acb4ca(arg1 + 0x2a8);
    int64_t var_478 = rax_5;
    int64_t var_470_1 = rdx_4;
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_3a8, arg1 + 0x340, rdx_4, rcx_1);
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_4b0, &var_3a8);
    int128_t var_428 = var_4b0;
    char const* const var_418_1 = var_4a0;
    alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(&var_3a8, &var_488, 
        &var_478, &var_428);
    core::result::Result$LT$T$C$E$GT$::expect::hdfe2b77486f2a738(&var_450, &var_3a8);
    core::ptr::drop_in_place$LT$alacritty..renderer..Renderer$GT$::hcd88fd9ce432a1cd(arg1 + 0xe0);
    core::ptr::drop_in_place$LT$glutin..context..NotCurrentContext$GT$::hd5aa18dc977016db(arg1
        + 0x2a8);
    *(arg1 + 0x2a8) = var_450 & 1;
    *(arg1 + 0x2b0) = var_448;
    int128_t var_438;
    *(arg1 + 0x2c0) = var_438;
    _$LT$glutin..context..PossiblyCurrentContext$u20$as$u20$glutin..context..PossiblyCurrentGlContext$GT$::make_current::h603c03aea39bb24a(&var_3a8, arg1 + 0x2a8, arg1 + 0x560);
    core::result::Result$LT$T$C$E$GT$::expect::he18683c3aeadddae(&var_3a8, 
        "failed to reativate context afte…", 0x28);
    alacritty::renderer::Renderer::new::h55b7130c64977f8c(&var_3a8, arg1 + 0x2a8, *(arg1 + 0x837));
    void var_1e0;
    core::result::Result$LT$T$C$E$GT$::expect::h23508c4f2ac2861f(&var_1e0, &var_3a8);
    memcpy(arg1 + 0xe0, &var_1e0, 0x1c8);
    alacritty::renderer::Renderer::resize::h83e3b437aa0cd7e9(arg1 + 0xe0, arg1 + 0x798);
    alacritty::display::Display::reset_glyph_cache::h8f02d6c622bdd6ab(arg1);
    *(arg1 + 0x48) = 1;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        int64_t var_458 = alacritty::display::window::Window::id::h395f89524db74beb(arg1 + 0x320);
        var_468 = &var_458;
        uint64_t (* var_460_1)(int64_t arg1, int64_t* arg2) =
            _$LT$winit..window..WindowId$u20$as$u20$core..fmt..Debug$GT$::fmt::h23f84c224ab71ac2;
        var_3a8 = &data_c82560;
        int64_t var_3a0_2 = 2;
        int64_t var_388_2 = 0;
        int64_t** var_398_2 = &var_468;
        int64_t var_390_2 = 1;
        int64_t rax_11 = log::__private_api::loc::h250021ea1f26630a(&data_c825e0);
        var_4b0 = "alacritty::displayfailed to swap…";
        *var_4b0[8] = 0x12;
        char const* const var_4a0_1 = "alacritty::displayfailed to swap…";
        int64_t var_498_2 = 0x12;
        int64_t var_490_2 = rax_11;
        log::__private_api::log::h0b6680b994d742b1(&var_3a8, 4, &var_4b0);
    }
    
    core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_478);
    return core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_488);
}
