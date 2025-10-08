
  int64_t alacritty::window_context::WindowContext::initial::hf53962b78b6f5e18(uint64_t arg1, int64_t* arg2, char* arg3, void* arg4, int64_t* arg5)

{
    int64_t var_1030 = 0;
    void* var_19f0 = arg4;
    int64_t var_16f8;
    _$LT$winit..event_loop..ActiveEventLoop$u20$as$u20$raw_window_handle..borrowed..HasDisplayHandle$GT$::display_handle::hded1c3db3c7d13b3(&var_16f8, arg2);
    int128_t var_1998;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8eb3c721dc814788(&var_1998, &var_16f8);
    int128_t var_1898 = var_1998;
    int64_t var_1988;
    int64_t var_1888 = var_1988;
    void var_1860;
    _$LT$alacritty..config..window..Identity$u20$as$u20$core..clone..Clone$GT$::clone::h45909795b68e7404(&var_1860, arg4 + 0x148);
    alacritty::cli::WindowIdentity::override_identity_config::h92dfce40d1de0198(&arg5[0xa], 
        &var_1860);
    int32_t var_1878 = 0x10;
    alacritty::renderer::platform::create_gl_display::h0e61610653d66be2(&var_1998, &var_1898, 
        *(arg4 + 0x1c));
    int64_t rdx_2 = var_1998;
    int64_t rax_1 = *var_1998[8];
    int128_t var_1970;
    
    if (rdx_2 != 2)
    {
        int64_t var_1960;
        int64_t var_16c0_1 = var_1960;
        int128_t var_16d0_1 = var_1970;
        int128_t var_1980;
        int128_t var_16e0_1 = var_1980;
        var_16f8 = rdx_2;
        int64_t var_16f0_1 = rax_1;
        int64_t var_16e8_1 = var_1988;
        *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h652cace9bb3013da(&var_16f8);
        *(arg1 + 0x18) = &data_c84278;
        *(arg1 + 8) = 0;
        *arg1 = 3;
    }
    else
    {
        int64_t var_1a10 = rax_1;
        int64_t var_1a08_1 = var_1988;
        int64_t rbp;
        rbp = 1;
        alacritty::renderer::platform::pick_gl_config::hc062c755391669d7(&var_16f8, &var_1a10, 
            &var_1878);
        int64_t rdx_4 = var_16f8;
        int64_t var_16f0;
        int64_t var_16e8;
        
        if (-(rdx_4) != -0x8000000000000000)
        {
            var_16f8 = rdx_4;
            int64_t var_16f0_2 = var_16f0;
            int64_t var_16e8_2 = var_16e8;
            *(arg1 + 0x10) = alloc::boxed::convert::_$LT$impl$u20$core..convert..From$LT$alloc..string..String$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$::from::hf6edc06cb0ab674f(&var_16f8);
            *(arg1 + 0x18) = &data_cdcf80;
            *(arg1 + 8) = 0;
            *arg1 = 3;
        }
        else
        {
            int64_t var_1a00 = var_16f0;
            int64_t var_19f8_1 = var_16e8;
            void* rax_3;
            char rdx_5;
            rax_3 = _$LT$glutin..config..Config$u20$as$u20$glutin..platform..x11..X11GlConfigExt$GT$::x11_visual::hecf1591657665b51(&var_1a00);
            alacritty::display::window::Window::new::ha740ee2ee1f68d27(&var_16f8, arg2, 
                arg4 + 0x10, &var_1860, arg5, rax_3, rdx_5);
            int64_t r13_1 = var_16f8;
            var_1998 = var_16f0;
            int128_t var_16e0;
            var_1988 = var_16e0;
            int64_t var_16c0;
            var_1970 = var_16c0;
            int128_t var_16d0;
            void** const rax_5;
            
            if (r13_1 != -0x8000000000000000)
            {
                void var_17a8;
                int64_t var_16b0;
                memcpy(&var_17a8, &var_16b0, 0xb0);
                int128_t var_17e8_1 = var_1998;
                int128_t var_17d8_1 = var_1988;
                int128_t var_17c8_1 = var_16d0;
                int128_t var_17b8_1 = var_1970;
                int64_t var_17f0 = r13_1;
                alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(&var_1998, 
                    &var_1a10, &var_1a00, &var_1878);
                int64_t rax_8 = var_1998;
                int128_t var_19e8_1 = var_1998;
                int128_t var_19d8_1 = var_16d0;
                int64_t rcx_6 = var_1970;
                
                if (rax_8 == 2)
                {
                    int128_t var_1818 = var_19e8_1;
                    int128_t var_1808_1 = var_19d8_1;
                    int64_t var_17f8_1 = rcx_6;
                    memcpy(&var_1998, &var_17f0, 0xf8);
                    int32_t rax_10;
                    rax_10 = 1;
                    int32_t var_1a14_1 = rax_10;
                    alacritty::display::Display::new::h36fe3d5bf7b9cd1b(&var_16f8, &var_1998, 
                        &var_1818, arg4 + 0x10);
                    int64_t r13_2 = var_16f8;
                    int128_t var_19e8_2 = var_16f0;
                    int64_t var_19c8_1;
                    var_19c8_1 = var_16d0;
                    int128_t var_19b8_1 = var_16c0;
                    int64_t rax_11 = var_16b0;
                    
                    if (r13_2 == 2)
                    {
                        int64_t var_16b8_1 = rax_11;
                        int128_t zmm1_5 = var_16e0;
                        var_16d0 = var_19b8_1;
                        var_16e0 = var_19c8_1;
                        var_16e8 = zmm1_5;
                        var_16f8 = var_19e8_2;
                        *(arg1 + 0x10) =
                            alloc::boxed::Box$LT$T$GT$::new::h7f13ae3ddf155471(&var_16f8);
                        rax_5 = &data_c84200;
                        goto label_86e27b;
                    }
                    
                    void var_16a8;
                    void var_b40;
                    memcpy(&var_b40, &var_16a8, 0xb10);
                    int64_t var_b90 = r13_2;
                    int128_t var_b88_1 = var_19e8_2;
                    int128_t var_b78_1 = var_16e0;
                    int128_t var_b68_1 = var_19c8_1;
                    int128_t var_b58_1 = var_19b8_1;
                    int64_t var_b48_1 = rax_11;
                    memcpy(&var_16f8, arg5, 0xb0);
                    var_1988 = *(arg3 + 0x10);
                    var_1998 = *arg3;
                    int32_t var_1a14_2 = 0;
                    alacritty::window_context::WindowContext::new::hc88b6215dbccbe6a(arg1, 
                        &var_b90, arg4, &var_16f8, &var_1998);
                    core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(
                        &var_1a00);
                    core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(
                        &var_1a10);
                    return core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(&var_1860);
                }
                
                var_16d0 = var_1970;
                var_16f0 = var_19e8_1;
                int128_t var_16e0_2 = var_19d8_1;
                var_16d0 = rcx_6;
                var_16f8 = rax_8;
                *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h652cace9bb3013da(&var_16f8);
                *(arg1 + 0x18) = &data_c84278;
                *(arg1 + 8) = 0;
                *arg1 = 3;
                core::ptr::drop_in_place$LT$alacritty..display..window..Window$GT$::h9f663359b82fe398(&var_17f0);
            }
            else
            {
                int128_t zmm2_1 = var_16d0;
                var_16d0 = var_1970;
                var_16e0 = zmm2_1;
                var_16e8 = var_1988;
                var_16f8 = var_1998;
                *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h01e5da68fe0cffcf(&var_16f8);
                rax_5 = &data_c842f0;
                label_86e27b:
                *(arg1 + 0x18) = rax_5;
                *(arg1 + 8) = 0;
                *arg1 = 3;
            }
            void* rbp_1;
            rbp_1 = 1;
            core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_1a00);
        }
        core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_1a10);
    }
    core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(
        &var_1860);
    core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(arg5);
    core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_19f0);
    return core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3);
}
