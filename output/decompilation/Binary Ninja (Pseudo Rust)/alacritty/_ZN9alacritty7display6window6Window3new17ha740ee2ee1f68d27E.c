
  fn alacritty::display::window::Window::new::ha740ee2ee1f68d27(arg1: *mut i64, arg2: *mut i64, arg3: *mut c_void, arg4: *mut c_void, arg5: *mut c_void, arg6: *mut c_void, arg7: i8) -> i64

{
    let var_860: *mut c_void = arg6;
    let var_858: i8 = arg7;
    let mut var_850: u128;
    _$LT$alacritty..config..window..Identity$u20$as$u20$core..clone..Clone$GT$::clone::h45909795b68e7404(&var_850, arg4);
    let mut var_240: ();
    alacritty::display::window::Window::get_platform_window::h039c940afcd4b52c(&var_240, &var_850, 
        *arg3.byte_offset(0x1b2), arg6, arg7);
    let mut var_660: *mut *mut c_void;
    let mut var_450: *const i8;
    
    if *arg3.byte_offset(0x198) == 1
    {
        let rbp_1: i32 = *arg3.byte_offset(0x19c);
        let r12_1: i32 = *arg3.byte_offset(0x1a0);
        memcpy(&var_660, &var_240, 0x210);
        let mut rax_1: i32;
        let mut rdx_1: i32;
        rax_1 = _$LT$dpi..PhysicalPosition$LT$P$GT$$u20$as$u20$core..convert..From$LT$$LP$X$C$X$RP$$GT$$GT$::from::h40af1dcdd00caafc(rbp_1, r12_1);
        winit::window::WindowAttributes::with_position::h1bf9eaf36441d661(&var_450, &var_660, 
            rax_1, rdx_1);
        memcpy(&var_240, &var_450, 0x210);
    }
    
    let rax_2: *mut *mut c_void = *arg5.byte_offset(0x98);
    *arg5.byte_offset(0x98) = -0x8000000000000000;
    let mut var_658: i128;
    
    if -(rax_2) != -0x8000000000000000
    {
        var_658 = *arg5.byte_offset(0xa0);
    }
    
    var_660 = rax_2;
    let mut var_878: i64;
    core::option::Option$LT$T$GT$::or_else::h7d4adfe08a880495(&var_878, &var_660, arg2);
    let mut var_808: i128;
    let mut var_738: i128;
    let mut var_728: i64;
    let mut var_448: i64;
    let mut var_438: i64;
    
    if var_878 != -0x8000000000000000
    {
        var_808 = var_878;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4
        {
            var_738 = &var_808;
            *var_738[8] = _$LT$winit..window..ActivationToken$u20$as$u20$core..fmt..Debug$GT$::fmt::hb876fc99af1d2865;
            var_660 = &data_c82268;
            var_658 = 1;
            let var_640_1: i64 = 0;
            *var_658[8] = &var_738;
            let var_648_1: i64 = 1;
            let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82288);
            var_450 = &data_502190;
            var_448 = 0x1a;
            let var_440_1: *const i8 = &data_502190;
            var_438 = 0x1a;
            let var_430_1: i64 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_660, 4, &var_450);
        }
        
        memcpy(&var_660, &var_240, 0x210);
        let var_868: i64;
        var_728 = var_868;
        var_738 = var_808;
        _$LT$winit..window..WindowAttributes$u20$as$u20$winit..platform..startup_notify..WindowAttributesExtStartupNotify$GT$::with_activation_token::h82c73adcef1699a9(&var_450, &var_660, &var_738);
        memcpy(&var_240, &var_450, 0x210);
        winit::platform::startup_notify::reset_activation_token_env::hda9a25b5ee08d16a();
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$winit..window..ActivationToken$GT$$GT$::h4991cd49d9d3d7d3(&var_878);
    }
    
    if *arg2 == 0 && (*arg3.byte_offset(0x180) & 1) != 0
    {
        let var_1f0_1: i32 = 1;
        let var_1ec_1: i32 = *arg3.byte_offset(0x184);
    }
    
    memcpy(&var_660, &var_240, 0x210);
    winit::window::WindowAttributes::with_title::hbe0805e9ecb8e95b(&var_450, &var_660, &var_850);
    let rax_8: i8 = *arg3.byte_offset(0x1b1);
    memcpy(&var_660, &var_450, 0x205);
    let var_247: i32;
    let mut var_457: i32 = var_247;
    var_457 = rax_8;
    let rax_10: i8 = *arg3.byte_offset(0x1b3);
    let var_45b: bool = rax_10 == 1;
    let var_45a: i16 = 0x100;
    let var_458: i8 = *arg3.byte_offset(0x1ae);
    let mut rax_11: i64;
    
    if rax_10 != 2
    {
        rax_11 = -0x7ffffffffffffffd;
    }
    else
    {
        *var_738[8] = -0x7fffffffffffffff;
        rax_11 = -0x7ffffffffffffffe;
    }
    
    var_738 = rax_11;
    winit::window::WindowAttributes::with_fullscreen::h8783254c26ad431b(&var_450, &var_660, 
        &var_738);
    let var_243: i8 = *arg3.byte_offset(0x1b0) + 1;
    memcpy(&var_240, &var_450, 0x210);
    memcpy(&var_660, &var_240, 0x210);
    winit::event_loop::ActiveEventLoop::create_window::h15a272326f042802(&var_450, arg2, &var_660);
    
    if var_450 == 1
    {
        let var_418: i64;
        let var_708_1: i64 = var_418;
        let zmm0_4: i128 = var_448;
        let zmm1_1: i128 = var_438;
        let var_428: i128;
        let var_718_1: i128 = var_428;
        var_728 = zmm1_1;
        var_738 = zmm0_4;
        arg1[8] = var_418;
        *arg1.byte_offset(0x30) = var_428;
        *arg1.byte_offset(0x20) = zmm1_1;
        *arg1.byte_offset(0x10) = zmm0_4;
        arg1[1] = 7;
        *arg1 = -0x8000000000000000;
        return 
            core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(
            &var_850);
    }
    
    memcpy(&var_738, &var_448, 0xd0);
    memcpy(&var_808, &var_738, 0xd0);
    winit::window::Window::set_cursor::h058b386c12dba32c(var_808, *var_808[8], 8);
    winit::window::Window::set_ime_allowed::hf8d1a377be69edc4(&var_808, 1);
    winit::window::Window::set_ime_purpose::h97670e97ca4bd463(var_808, *var_808[8]);
    winit::window::Window::set_transparent::haabd4e4fcc61e0ec(var_808, *var_808[8], 
        1f > *arg3.byte_offset(0x1a4));
    let mut rdx_10: i64;
    let mut zmm0_5: i64;
    zmm0_5 = winit::window::Window::scale_factor::h73da13abcba96161(var_808, *var_808[8]);
    var_878 = zmm0_5;
    let mut rax_15: i64;
    let mut rcx_7: i8;
    rax_15 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if rax_15 >= 3
    {
        var_738 = &var_878;
        *var_738[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_660 = &data_c82278;
        var_658 = 1;
        let var_640_2: i64 = 0;
        *var_658[8] = &var_738;
        let var_648_2: i64 = 1;
        let rax_16: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c822a0);
        var_450 = &data_502190;
        var_448 = 0x1a;
        let var_440_2: *const i8 = &data_502190;
        let var_438_1: i64 = 0x1a;
        let var_430_2: i64 = rax_16;
        rcx_7 = log::__private_api::log::h0b6680b994d742b1(&var_660, 3, &var_450);
    }
    
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_660, &var_808, rdx_10, rcx_7);
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_450, &var_660);
    let rbp_2: i32 = var_450;
    let r14_2: i8 = *arg5.byte_offset(0x30);
    let var_840: i64;
    arg1[2] = var_840;
    *arg1 = var_850;
    let var_888_1: u64 = var_878;
    memcpy(&arg1[4], &var_808, 0xd0);
    arg1[3] = var_888_1;
    arg1[0x1e] = 1;
    *arg1.byte_offset(0xf2) = r14_2;
    *arg1.byte_offset(0xf3) = rbp_2 == 4;
    *arg1.byte_offset(0xf4) = 0x801;
    let mut var_838: ();
    core::ptr::drop_in_place$LT$$LT$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$u20$as$u20$vte..ansi..Handler$GT$..dynamic_color_sequence..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7cc01ca7e85c221c(&var_838)
}
