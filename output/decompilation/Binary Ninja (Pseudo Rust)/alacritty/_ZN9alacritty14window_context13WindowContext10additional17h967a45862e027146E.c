
  fn alacritty::window_context::WindowContext::additional::h967a45862e027146(arg1: *mut i64, arg2: *mut i32, arg3: *mut i64, arg4: *mut i8, arg5: *mut c_void, arg6: *mut i64, arg7: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let mut var_4a70: *mut c_void = arg5;
    let mut r14: i64;
    r14 = 1;
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$glutin..config..Config$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h7bc0e42d243042a9(arg2);
    let mut var_4a68: i64 = rax;
    let var_4a60: i64 = rdx;
    let mut var_4958: ();
    _$LT$alacritty..config..window..Identity$u20$as$u20$core..clone..Clone$GT$::clone::h45909795b68e7404(&var_4958, arg5.byte_offset(0x148));
    alacritty::cli::WindowIdentity::override_identity_config::h92dfce40d1de0198(&arg6[0xa], 
        &var_4958);
    let mut rax_2: *mut c_void;
    let mut rdx_1: i8;
    rax_2 = _$LT$glutin..config..Config$u20$as$u20$glutin..platform..x11..X11GlConfigExt$GT$::x11_visual::hecf1591657665b51(arg2);
    let mut var_4818: i64;
    alacritty::display::window::Window::new::ha740ee2ee1f68d27(&var_4818, arg3, 
        arg5.byte_offset(0x10), &var_4958, arg6, rax_2, rdx_1);
    let rbx_1: i64 = var_4818;
    let mut var_4810: i128;
    let mut var_29d8: i128 = var_4810;
    let mut var_4800: i128;
    let mut var_29c8: i128 = var_4800;
    let mut var_47f0: i128;
    let mut var_29b8: i128 = var_47f0;
    let mut var_47e0: i128;
    let mut rax_6: *mut *mut c_void;
    
    if -(rbx_1) != -0x8000000000000000
    {
        let mut var_48c8: ();
        let mut var_47d0: i64;
        let mut rcx_2: i8;
        let mut rdx_3: i64;
        rcx_2 = memcpy(&var_48c8, &var_47d0, 0xb0);
        let zmm2_1: i128 = var_29b8;
        let var_4908_1: i128 = var_29d8;
        let mut var_48f8: i128 = var_29c8;
        let var_48e8_1: i128 = zmm2_1;
        let var_48d8_1: i128 = var_47e0;
        let mut var_4910: i64 = rbx_1;
        _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_4818, &*var_48f8[8], rdx_3, rcx_2);
        core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_29d8, &var_4818);
        *var_4810[8] = var_29c8;
        var_4818 = var_29d8;
        alacritty::renderer::platform::create_gl_context::h408088c937a1fb7f(&var_29d8, &var_4a68, 
            arg2, &var_4818);
        let rax_8: i64 = var_29d8;
        let mut var_4a58: i128 = var_29d8;
        let rcx_4: i64 = *var_29b8[8];
        
        if rax_8 != 2
        {
            var_47f0 = var_47e0;
            let var_4810_1: i128 = var_4a58;
            var_4800 = var_29c8;
            var_47f0 = rcx_4;
            var_4818 = rax_8;
            arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h652cace9bb3013da(&var_4818);
            arg1[3] = &data_c84278;
            arg1[1] = 0;
            *arg1 = 3;
            r14 = 1;
            core::ptr::drop_in_place$LT$alacritty..display..window..Window$GT$::h9f663359b82fe398(
                &var_4910);
        }
        else
        {
            let mut var_49a8: i128 = var_4a58;
            let var_4998_1: i128 = var_29c8;
            let var_4988_1: i64 = rcx_4;
            memcpy(&var_29d8, &var_4910, 0xf8);
            let mut rbp: *mut i32;
            rbp = 1;
            r14 = 1;
            alacritty::display::Display::new::h36fe3d5bf7b9cd1b(&var_4818, &var_29d8, &var_49a8, 
                arg5.byte_offset(0x10));
            let rbx_2: i64 = var_4818;
            var_4a58 = var_4810;
            let var_4a48_2: i128 = var_4800;
            let mut var_4a38_1: i64;
            var_4a38_1 = var_47f0;
            let var_4a28_1: i128 = var_47e0;
            let rax_10: i64 = var_47d0;
            
            if rbx_2 == 2
            {
                *var_47e0[8] = rax_10;
                let zmm0_4: i128 = var_4a58;
                var_47f0 = var_4a28_1;
                var_4800 = var_4a38_1;
                var_4810 = var_4a48_2;
                var_4818 = zmm0_4;
                r14 = 1;
                arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h7f13ae3ddf155471(&var_4818);
                rax_6 = &data_c84200;
                goto 'label_86e909;
            }
            
            let mut var_47c8: ();
            let mut var_b40: ();
            memcpy(&var_b40, &var_47c8, 0xb10);
            let mut var_b90: i64 = rbx_2;
            let var_b88_1: i128 = var_4a58;
            let var_b78_1: i128 = var_4a48_2;
            let var_b68_1: i128 = var_4a38_1;
            let var_b58_1: i128 = var_4a28_1;
            let var_b48_1: i64 = rax_10;
            memcpy(&var_4a58, arg6, 0xb0);
            let var_4968_1: i128 = *arg4.byte_offset(0x10);
            let mut var_4978: i128 = *arg4;
            alacritty::window_context::WindowContext::new::hc88b6215dbccbe6a(&var_4818, &var_b90, 
                arg5, &var_4a58, &var_4978);
            let temp0_2: u32 = _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_4818, *data_4e9660));
            let r14_2: i64 = *var_4810[8];
            let rbx_3: i64 = var_4800;
            
            if temp0_2 != 0xffff
            {
                let r15_1: i64 = var_4818;
                memcpy(&var_29b8, &*var_4800[8], 0x1e20);
                *var_29d8[8] = var_4810;
                var_29d8 = r15_1;
                var_29c8 = r14_2;
                *var_29c8[8] = rbx_3;
                let mut var_be0: i128;
                core::ptr::drop_in_place$LT$alacritty..cli..ParsedOptions$GT$::h0ec9507b6108d3fc(
                    &var_be0);
                let var_bd0_1: i64 = arg7[2];
                var_be0 = *arg7;
                memcpy(arg1, &var_29d8, 0x1e40);
                core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(&var_4958);
                return core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(
                    &var_4a68);
            }
            
            arg1[2] = r14_2;
            arg1[3] = rbx_3;
            arg1[1] = 0;
            *arg1 = 3;
            r14 = 0;
        }
    }
    else
    {
        let zmm0: i128 = var_29d8;
        var_47f0 = var_47e0;
        var_4800 = var_29b8;
        var_4810 = var_29c8;
        var_4818 = zmm0;
        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h01e5da68fe0cffcf(&var_4818);
        rax_6 = &data_c842f0;
        'label_86e909:
        arg1[3] = rax_6;
        arg1[1] = 0;
        *arg1 = 3;
        r14 = 1;
    }
    core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(
        &var_4958);
    core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_4a68);
    let result: i64 =
        core::ptr::drop_in_place$LT$alacritty..cli..ParsedOptions$GT$::h0ec9507b6108d3fc(arg7);
    
    if r14 == 0
    {
        return result;
    }
    
    core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(arg6);
    core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_4a70);
    core::ptr::drop_in_place$LT$winit..event_loop..EventLoopProxy$LT$alacritty..event..Event$GT$$GT$::h24ae1d3a938ce77b(arg4)
}
