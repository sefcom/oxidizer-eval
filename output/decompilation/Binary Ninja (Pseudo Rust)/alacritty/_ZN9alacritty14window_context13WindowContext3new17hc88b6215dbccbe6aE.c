
  fn alacritty::window_context::WindowContext::new::hc88b6215dbccbe6a(arg1: u64, arg2: *mut c_void, arg3: *mut c_void, arg4: *mut i64, arg5: *mut i128) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let mut var_4408: *mut c_void = arg3;
    let mut var_4268: ();
    alacritty::config::ui_config::UiConfig::pty_config::h40c1a7a01252a825(&var_4268, 
        arg3.byte_offset(0x10));
    alacritty::cli::TerminalOptions::override_pty_config::he92870b92f7b8d95(arg4, &var_4268);
    let r12: i64 = arg4[0xa];
    let mut var_4368: i64;
    let mut var_41e8: i64;
    let mut var_4118: i128;
    let mut var_4108: i128;
    let mut var_23e8: *const i8;
    let mut var_23d8: *const i8;
    let mut var_23c8: i64;
    let mut var_1278: i128;
    let mut var_1268: i128;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
    {
        var_4368 = *arg2.byte_offset(0x798);
        var_41e8 = *arg2.byte_offset(0x7a0);
        var_1278 = &var_4368;
        *var_1278[8] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::hfae42df20127be7a;
        var_1268 = &var_41e8;
        *var_1268[8] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::hfae42df20127be7a;
        var_4118 = &data_c84348;
        *var_4118[8] = 2;
        let var_40f8_1: i64 = 0;
        var_4108 = &var_1278;
        *var_4108[8] = 2;
        let rax_3: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84368);
        var_23e8 = "alacritty::window_contextPTY rea…";
        let var_23e0_1: i64 = 0x19;
        var_23d8 = "alacritty::window_contextPTY rea…";
        let var_23d0_1: i64 = 0x19;
        var_23c8 = rax_3;
        log::__private_api::log::h0b6680b994d742b1(&var_4118, 3, &var_23e8);
    }
    
    let zmm0: i128 = *arg5;
    var_4108 = arg5[1];
    var_4118 = zmm0;
    let rax_4: i64 =
        alacritty::display::window::Window::id::h395f89524db74beb(arg2.byte_offset(0x320));
    let var_43e8: i128 = arg5[1];
    let mut var_43f8: i128 = *arg5;
    alacritty::config::ui_config::UiConfig::term_options::hd6aa2decf979f436(&var_23e8, 
        arg3.byte_offset(0x10), arg1);
    _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_1278, &var_43f8);
    let zmm0_2: i128 = var_1278;
    var_4108 = var_1268;
    var_4118 = zmm0_2;
    let mut var_718: ();
    alacritty_terminal::term::Term$LT$T$GT$::new::h9eaed86de6be637f(&var_718, &var_23e8, 
        *arg2.byte_offset(0x798), *arg2.byte_offset(0x7a0), &var_4118);
    memcpy(&*var_23e8[7], &var_718, 0x6e8);
    memcpy(&*var_4108[1], &var_23e8, 0x6ef);
    var_4118 = 1;
    *var_4118[8] = 1;
    var_4108 = 0;
    let var_3a18: i8 = 0;
    let rax_6: *mut i64 = alloc::boxed::Box$LT$T$GT$::new::h69971ff4d6ca66b8(&var_4118);
    let mut var_4400: *mut i64 = rax_6;
    let r12_1: u64 = *arg2.byte_offset(0x798);
    let rbp_1: i32 = *arg2.byte_offset(0x7a0);
    let var_441c: i32 = *arg2.byte_offset(0x7b0);
    let zmm0_3: i32 = *arg2.byte_offset(0x7b4);
    let rax_7: u64 =
        alacritty::display::window::Window::id::h395f89524db74beb(arg2.byte_offset(0x320));
    let rcx_1: u64 = _mm_min_ss(0x477fff00, __maxss_xmmss_memss(0, zmm0_3));
    alacritty_terminal::tty::unix::new::h458246f558c81da7(&var_4118, &var_4268, 
        rbp_1 << 0x10 | _mm_min_ss(0x477fff00, __maxss_xmmss_memss(0, var_441c)) << 0x20
            | rcx_1 << 0x30 | r12_1, 
        rax_7);
    let rax_8: i32 = rax_4;
    let rdi_12: i64 = var_4118;
    let mut rax_9: u64;
    let mut rbp_4: u64;
    
    if rax_8 != 2
    {
        let var_4350_1: i64 = *var_4108[8];
        let var_4360_1: i128 = var_4118;
        let var_4344_1: i128 = *rax_4[4];
        let var_40e4: i128;
        let var_4334_1: i128 = var_40e4;
        var_4368 = rdi_12;
        let temp0_4: i64 = *rax_6;
        *rax_6 += 1;
        
        if temp0_4 <= -1
        {
            trap(6);
        }
        
        let mut var_42a8: *mut i64 = rax_6;
        _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_23e8, &var_43f8);
        let var_1268_1: i128 = var_23d8;
        var_1278 = var_23e8;
        let var_1258_1: i64 = rax_4;
        let var_23a8_1: i128 = var_40e4;
        let var_23b8_1: i128 = var_4344_1;
        var_23c8 = rax_8;
        var_23d8 = var_4360_1;
        var_23e8 = var_4368;
        let var_41f0: i8;
        alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::new::h0a50c5c3fcfa90fc(&var_4118, 
            rax_6, &var_1278, &var_23e8, var_41f0, *arg3.byte_offset(0x1d));
        let r14_3: i64 = var_4118;
        let var_4080: i64;
        
        if var_4080 != 2
        {
            let mut var_41e0: ();
            memcpy(&var_41e0, &*var_4118[8], 0x90);
            let var_4078: i128;
            let var_4148_1: i128 = var_4078;
            let var_4068: i128;
            let var_4138_1: i128 = var_4068;
            let var_4058: i128;
            let var_4128_1: i128 = var_4058;
            var_41e8 = r14_3;
            let var_4150_1: i64 = var_4080;
            let mut var_43c0: i128;
            alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::channel::hc20d0440863ece0f(
                &var_43c0, &var_41e8);
            memcpy(&var_4118, &var_41e8, 0xd0);
            rbp_4 = 1;
            let mut var_42c0: ();
            alacritty_terminal::thread::spawn_named::hc227ab50da6868a6(&var_42c0, &var_4118);
            
            if (alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(*arg3.byte_offset(0x3e6)) & 1) != 0
            {
                *var_4118[8] = -0x7ffffffffffffff8;
                var_4118 = -0x8000000000000000;
                alacritty::event::EventProxy::send_event::h4f35442ca72f14a2(&var_43f8, &var_4118);
            }
            
            let var_43a8_1: *mut i64 = rax_6;
            memcpy(&var_1278, arg2, 0xb60);
            let var_43a0_1: *mut c_void = arg3;
            let var_43b0: i64;
            let var_42c8_1: i64 = var_43b0;
            let var_42d8_1: i128 = var_43c0;
            let var_4318_1: i64 = 0;
            let var_4310_1: i64 = 8;
            let var_4308_1: i128 = {0};
            let var_4398_1: i64 = 0;
            let var_4390_1: i64 = 8;
            let var_4388_1: i64 = 0;
            _$LT$alacritty..event..SearchState$u20$as$u20$core..default..Default$GT$::default::hdc077cce1e4c489e(&var_23e8);
            let var_4380_1: i64 = 0;
            let var_4378_1: i64 = 0x10;
            let var_4370_1: i64 = 0;
            _$LT$alacritty..event..Mouse$u20$as$u20$core..default..Default$GT$::default::h326c7487a97d0ddc(&var_42a8);
            let var_2438_1: i128 = var_4308_1;
            let var_2448_1: i128 = var_4318_1;
            let mut var_2fa8: ();
            memcpy(&var_2fa8, &var_1278, 0xb60);
            *(arg1 + 0x1de0) = var_4380_1;
            *(arg1 + 0x1df0) = var_4370_1;
            memcpy(&var_4118, &var_23e8, 0x1170);
            let var_42f0_1: i128 = var_43c0;
            let var_42e0_1: i64 = var_43b0;
            let var_2428_1: i128 = var_42a8;
            let var_4298: i128;
            let var_2418_1: i128 = var_4298;
            let var_4288: i128;
            let var_2408_1: i128 = var_4288;
            let var_4278: i128;
            let var_23f8_1: i128 = var_4278;
            *(arg1 + 0x1e08) = var_4388_1;
            *(arg1 + 0x1df8) = var_4398_1;
            memcpy(arg1, &var_4118, 0x1d30);
            *(arg1 + 0x1d38) = 0x3b9aca00;
            let var_42f4: i128;
            *(arg1 + 0x1d3c) = var_42f4;
            *(arg1 + 0x1d48) = var_42f0_1;
            *(arg1 + 0x1d58) = 4;
            *(arg1 + 0x1e10) = 0x10000110000;
            *(arg1 + 0x1e18) = rax_6;
            *(arg1 + 0x1e20) = arg3;
            *(arg1 + 0x1e28) = 0;
            *(arg1 + 0x1e2c) = 0;
            *(arg1 + 0x1e30) = *var_40e4[8];
            *(arg1 + 0x1e34) = *var_4344_1[4];
            *(arg1 + 0x1e38) = 0;
            *(arg1 + 0x1e3a) = 0;
            *(arg1 + 0x1e3b) = r12 != -0x8000000000000000;
            core::ptr::drop_in_place$LT$std..thread..JoinHandle$LT$$LP$alacritty_terminal..event_loop..EventLoop$LT$alacritty_terminal..tty..unix..Pty$C$alacritty..event..EventProxy$GT$$C$alacritty_terminal..event_loop..State$RP$$GT$$GT$::hb0180368e871368a(&var_42c0);
            core::ptr::drop_in_place$LT$alacritty..event..EventProxy$GT$::hde04cda56e5a09b7(
                &var_43f8);
            core::ptr::drop_in_place$LT$alacritty_terminal..tty..Options$GT$::hd802ddd5167f0b07(
                &var_4268);
            return core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(
                arg4);
        }
        
        rax_9 = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(r14_3);
    }
    else
    {
        rax_9 = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(rdi_12);
    }
    
    *(arg1 + 0x10) = rax_9;
    *(arg1 + 0x18) = &data_c7a2e8;
    *(arg1 + 8) = 0;
    *arg1 = 3;
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$alacritty_terminal..sync..FairMutex$LT$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$GT$$GT$$GT$::h894d15eab6fc536d(&var_4400);
    rbp_4 = 1;
    core::ptr::drop_in_place$LT$alacritty..event..EventProxy$GT$::hde04cda56e5a09b7(&var_43f8);
    core::ptr::drop_in_place$LT$alacritty_terminal..tty..Options$GT$::hd802ddd5167f0b07(&var_4268);
    core::ptr::drop_in_place$LT$alacritty..cli..WindowOptions$GT$::hd1c78ed5333b3944(arg4);
    core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$alacritty..config..ui_config..UiConfig$GT$$GT$::h077aa8980e2272c3(&var_4408);
    core::ptr::drop_in_place$LT$alacritty..display..Display$GT$::h3bea6ae35a2f51e1(arg2)
}
