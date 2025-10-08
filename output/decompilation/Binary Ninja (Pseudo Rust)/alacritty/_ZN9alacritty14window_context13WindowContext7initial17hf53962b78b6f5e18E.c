
  fn alacritty::window_context::WindowContext::initial::hf53962b78b6f5e18(arg1: u64, arg2: *mut i64, arg3: *mut i8, arg4: *mut c_void, arg5: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let mut var_19f0: *mut c_void = arg4;
    let mut var_16f8: i64;
    _$LT$winit..event_loop..ActiveEventLoop$u20$as$u20$raw_window_handle..borrowed..HasDisplayHandle$GT$::display_handle::hded1c3db3c7d13b3(&var_16f8, arg2);
    let mut var_1998: i128;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8eb3c721dc814788(&var_1998, &var_16f8);
    let mut var_1898: i128 = var_1998;
    let mut var_1988: i64;
    let var_1888: i64 = var_1988;
    let mut var_1860: ();
    _$LT$alacritty..config..window..Identity$u20$as$u20$core..clone..Clone$GT$::clone::h45909795b68e7404(&var_1860, arg4.byte_offset(0x148));
    alacritty::cli::WindowIdentity::override_identity_config::h92dfce40d1de0198(&arg5[0xa], 
        &var_1860);
    let mut var_1878: i32 = 0x10;
    alacritty::renderer::platform::create_gl_display::h0e61610653d66be2(&var_1998, &var_1898, 
        *arg4.byte_offset(0x1c));
    let rdx_2: i64 = var_1998;
    let rax_1: i64 = *var_1998[8];
    let mut var_1970: i128;
    
    if rdx_2 != 2
    {
        let var_1960: i64;
        let var_16c0_1: i64 = var_1960;
        let var_16d0_1: i128 = var_1970;
        let var_1980: i128;
        let var_16e0_1: i128 = var_1980;
        var_16f8 = rdx_2;
        let var_16f0_1: i64 = rax_1;
        let var_16e8_1: i64 = var_1988;
        *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h652cace9bb3013da(&var_16f8);
        *(arg1 + 0x18) = &data_c84278;
        *(arg1 + 8) = 0;
        *arg1 = 3;
    }
    else
    {
        let mut var_1a10: i64 = rax_1;
        let var_1a08_1: i64 = var_1988;
        let mut rbp: i64;
        rbp = 1;
        alacritty::renderer::platform::pick_gl_config::hc062c755391669d7(&var_16f8, &var_1a10, 
            &var_1878);
        let rdx_4: i64 = var_16f8;
        let mut var_16f0: i64;
        let mut var_16e8: i64;
        
        if -(rdx_4) != -0x8000000000000000
        {
            var_16f8 = rdx_4;
            let var_16f0_2: i64 = var_16f0;
            let var_16e8_2: i64 = var_16e8;
            *(arg1 + 0x10) = alloc::boxed::convert::_$LT$impl$u20$core..convert..From$LT$alloc..string..String$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$::from::hf6edc06cb0ab674f(&var_16f8);
            *(arg1 + 0x18) = &data_cdcf80;
            *(arg1 + 8) = 0;
            *arg1 = 3;
        }
        else
        {
            let mut var_1a00: i64 = var_16f0;
            let var_19f8_1: i64 = var_16e8;
            let mut rax_3: *mut c_void;
            let mut rdx_5: i8;
            rax_3 = _$LT$glutin..config..Config$u20$as$u20$glutin..platform..x11..X11GlConfigExt$GT$::x11_visual::hecf1591657665b51(&var_1a00);
            alacritty::display::window::Window::new::ha740ee2ee1f68d27(&var_16f8, arg2, 
                arg4.byte_offset(0x10), &var_1860, arg5, rax_3, rdx_5);
            let r13_1: i64 = var_16f8;
            var_1998 = var_16f0;
            let mut var_16e0: i128;
            var_1988 = var_16e0;
            let var_16c0: i64;
            var_1970 = var_16c0;
            let mut var_16d0: i128;
            let mut rax_5: *mut *mut c_void;
            
            if r13_1 != -0x8000000000000000
            {
                let mut var_17a8: ();
                let mut var_16b0: i64;
                memcpy(&var_17a8, &var_16b0, 0xb0);
                let var_17e8_1: i128 = var_1998;
                let var_17d8_1: i128 = var_1988;
                let var_17c8_1: i128 = var_16d0;
                let var_17b8_1: i128 = var_1970;
                let mut var_17f0: i64 = r13_1;
                alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(&var_1998, 
                    &var_1a10, &var_1a00, &var_1878);
                let rax_8: i64 = var_1998;
                let var_19e8_1: i128 = var_1998;
                let var_19d8_1: i128 = var_16d0;
                let rcx_6: i64 = var_1970;
                
                if rax_8 == 2
                {
                    let mut var_1818: i128 = var_19e8_1;
                    let var_1808_1: i128 = var_19d8_1;
                    let var_17f8_1: i64 = rcx_6;
                    memcpy(&var_1998, &var_17f0, 0xf8);
                    let mut rax_10: i32;
                    rax_10 = 1;
                    let var_1a14_1: i32 = rax_10;
                    alacritty::display::Display::new::h36fe3d5bf7b9cd1b(&var_16f8, &var_1998, 
                        &var_1818, arg4.byte_offset(0x10));
                    let r13_2: i64 = var_16f8;
                    let var_19e8_2: i128 = var_16f0;
                    let mut var_19c8_1: i64;
                    var_19c8_1 = var_16d0;
                    let var_19b8_1: i128 = var_16c0;
                    let rax_11: i64 = var_16b0;
                    
                    if r13_2 == 2
                    {
                        let var_16b8_1: i64 = rax_11;
                        let zmm1_5: i128 = var_16e0;
                        var_16d0 = var_19b8_1;
                        var_16e0 = var_19c8_1;
                        var_16e8 = zmm1_5;
                        var_16f8 = var_19e8_2;
                        *(arg1 + 0x10) =
                            alloc::boxed::Box$LT$T$GT$::new::h7f13ae3ddf155471(&var_16f8);
                        rax_5 = &data_c84200;
                        goto 'label_86e27b;
                    }
                    
                    let mut var_16a8: ();
                    let mut var_b40: ();
                    memcpy(&var_b40, &var_16a8, 0xb10);
                    let mut var_b90: i64 = r13_2;
                    let var_b88_1: i128 = var_19e8_2;
                    let var_b78_1: i128 = var_16e0;
                    let var_b68_1: i128 = var_19c8_1;
                    let var_b58_1: i128 = var_19b8_1;
                    let var_b48_1: i64 = rax_11;
                    memcpy(&var_16f8, arg5, 0xb0);
                    var_1988 = *arg3.byte_offset(0x10);
                    var_1998 = *arg3;
                    let var_1a14_2: i32 = 0;
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
                let var_16e0_2: i128 = var_19d8_1;
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
                let zmm2_1: i128 = var_16d0;
                var_16d0 = var_1970;
                var_16e0 = zmm2_1;
                var_16e8 = var_1988;
                var_16f8 = var_1998;
                *(arg1 + 0x10) = alloc::boxed::Box$LT$T$GT$::new::h01e5da68fe0cffcf(&var_16f8);
                rax_5 = &data_c842f0;
                'label_86e27b:
                *(arg1 + 0x18) = rax_5;
                *(arg1 + 8) = 0;
                *arg1 = 3;
            }
            let mut rbp_1: *mut c_void;
            rbp_1 = 1;
            core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_1a00);
        }
        core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_1a10);
    }
    core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(
        &var_1860);
    core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(arg5);
    core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_19f0);
    core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg3)
}
