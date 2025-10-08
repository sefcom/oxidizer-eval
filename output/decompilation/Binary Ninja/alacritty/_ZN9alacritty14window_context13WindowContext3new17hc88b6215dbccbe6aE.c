
  int64_t alacritty::window_context::WindowContext::new::hc88b6215dbccbe6a(uint64_t arg1, void* arg2, void* arg3, int64_t* arg4, int128_t* arg5)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    void* var_4408 = arg3;
    void var_4268;
    alacritty::config::ui_config::UiConfig::pty_config::h40c1a7a01252a825(&var_4268, arg3 + 0x10);
    alacritty::cli::TerminalOptions::override_pty_config::he92870b92f7b8d95(arg4, &var_4268);
    int64_t r12 = arg4[0xa];
    int64_t var_4368;
    int64_t var_41e8;
    int128_t var_4118;
    int128_t var_4108;
    char const* const var_23e8;
    char const* const var_23d8;
    int64_t var_23c8;
    int128_t var_1278;
    int128_t var_1268;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
    {
        var_4368 = *(arg2 + 0x798);
        var_41e8 = *(arg2 + 0x7a0);
        var_1278 = &var_4368;
        *var_1278[8] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::hfae42df20127be7a;
        var_1268 = &var_41e8;
        *var_1268[8] = core::fmt::num::_$LT$impl$u20$core..fmt..Debug$u20$for$u20$usize$GT$::fmt::hfae42df20127be7a;
        var_4118 = &data_c84348;
        *var_4118[8] = 2;
        int64_t var_40f8_1 = 0;
        var_4108 = &var_1278;
        *var_4108[8] = 2;
        int64_t rax_3 = log::__private_api::loc::h250021ea1f26630a(&data_c84368);
        var_23e8 = "alacritty::window_contextPTY rea…";
        int64_t var_23e0_1 = 0x19;
        var_23d8 = "alacritty::window_contextPTY rea…";
        int64_t var_23d0_1 = 0x19;
        var_23c8 = rax_3;
        log::__private_api::log::h0b6680b994d742b1(&var_4118, 3, &var_23e8);
    }
    
    int128_t zmm0 = *arg5;
    var_4108 = arg5[1];
    var_4118 = zmm0;
    int64_t rax_4 = alacritty::display::window::Window::id::h395f89524db74beb(arg2 + 0x320);
    int128_t var_43e8 = arg5[1];
    int128_t var_43f8 = *arg5;
    alacritty::config::ui_config::UiConfig::term_options::hd6aa2decf979f436(&var_23e8, arg3 + 0x10, 
        arg1);
    _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_1278, &var_43f8);
    int128_t zmm0_2 = var_1278;
    var_4108 = var_1268;
    var_4118 = zmm0_2;
    void var_718;
    alacritty_terminal::term::Term$LT$T$GT$::new::h9eaed86de6be637f(&var_718, &var_23e8, 
        *(arg2 + 0x798), *(arg2 + 0x7a0), &var_4118);
    memcpy(&*var_23e8[7], &var_718, 0x6e8);
    memcpy(&*var_4108[1], &var_23e8, 0x6ef);
    var_4118 = 1;
    *var_4118[8] = 1;
    var_4108 = 0;
    char var_3a18 = 0;
    int64_t* rax_6 = alloc::boxed::Box$LT$T$GT$::new::h69971ff4d6ca66b8(&var_4118);
    int64_t* var_4400 = rax_6;
    uint64_t r12_1 = *(arg2 + 0x798);
    int32_t rbp_1 = *(arg2 + 0x7a0);
    int32_t var_441c = *(arg2 + 0x7b0);
    int32_t zmm0_3 = *(arg2 + 0x7b4);
    uint64_t rax_7 = alacritty::display::window::Window::id::h395f89524db74beb(arg2 + 0x320);
    uint64_t rcx_1 = _mm_min_ss(0x477fff00, __maxss_xmmss_memss(0, zmm0_3));
    alacritty_terminal::tty::unix::new::h458246f558c81da7(&var_4118, &var_4268, 
        rbp_1 << 0x10 | _mm_min_ss(0x477fff00, __maxss_xmmss_memss(0, var_441c)) << 0x20
            | rcx_1 << 0x30 | r12_1, 
        rax_7);
    int32_t rax_8 = rax_4;
    int64_t rdi_12 = var_4118;
    uint64_t rax_9;
    uint64_t rbp_4;
    
    if (rax_8 != 2)
    {
        int64_t var_4350_1 = *var_4108[8];
        int128_t var_4360_1 = var_4118;
        int128_t var_4344_1 = *rax_4[4];
        int128_t var_40e4;
        int128_t var_4334_1 = var_40e4;
        var_4368 = rdi_12;
        int64_t temp0_4 = *rax_6;
        *rax_6 += 1;
        
        if (temp0_4 <= -1)
            trap(6);
        
        int64_t* var_42a8 = rax_6;
        _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_23e8, &var_43f8);
        int128_t var_1268_1 = var_23d8;
        var_1278 = var_23e8;
        int64_t var_1258_1 = rax_4;
        int128_t var_23a8_1 = var_40e4;
        int128_t var_23b8_1 = var_4344_1;
        var_23c8 = rax_8;
        var_23d8 = var_4360_1;
        var_23e8 = var_4368;
        char var_41f0;
        alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::new::h0a50c5c3fcfa90fc(&var_4118, 
            rax_6, &var_1278, &var_23e8, var_41f0, *(arg3 + 0x1d));
        int64_t r14_3 = var_4118;
        int64_t var_4080;
        
        if (var_4080 != 2)
        {
            void var_41e0;
            memcpy(&var_41e0, &*var_4118[8], 0x90);
            int128_t var_4078;
            int128_t var_4148_1 = var_4078;
            int128_t var_4068;
            int128_t var_4138_1 = var_4068;
            int128_t var_4058;
            int128_t var_4128_1 = var_4058;
            var_41e8 = r14_3;
            int64_t var_4150_1 = var_4080;
            int128_t var_43c0;
            alacritty_terminal::event_loop::EventLoop$LT$T$C$U$GT$::channel::hc20d0440863ece0f(
                &var_43c0, &var_41e8);
            memcpy(&var_4118, &var_41e8, 0xd0);
            rbp_4 = 1;
            void var_42c0;
            alacritty_terminal::thread::spawn_named::hc227ab50da6868a6(&var_42c0, &var_4118);
            
            if (alacritty::config::cursor::_$LT$impl$u20$core..convert..From$LT$alacritty..config..cursor..ConfigCursorStyle$GT$$u20$for$u20$vte..ansi..CursorStyle$GT$::from::hf8b7e6b388c32a93(*(arg3 + 0x3e6)) & 1)
            {
                *var_4118[8] = -0x7ffffffffffffff8;
                var_4118 = -0x8000000000000000;
                alacritty::event::EventProxy::send_event::h4f35442ca72f14a2(&var_43f8, &var_4118);
            }
            
            int64_t* var_43a8_1 = rax_6;
            memcpy(&var_1278, arg2, 0xb60);
            void* var_43a0_1 = arg3;
            int64_t var_43b0;
            int64_t var_42c8_1 = var_43b0;
            int128_t var_42d8_1 = var_43c0;
            int64_t var_4318_1 = 0;
            int64_t var_4310_1 = 8;
            int128_t var_4308_1 = {0};
            int64_t var_4398_1 = 0;
            int64_t var_4390_1 = 8;
            int64_t var_4388_1 = 0;
            _$LT$alacritty..event..SearchState$u20$as$u20$core..default..Default$GT$::default::hdc077cce1e4c489e(&var_23e8);
            int64_t var_4380_1 = 0;
            int64_t var_4378_1 = 0x10;
            int64_t var_4370_1 = 0;
            _$LT$alacritty..event..Mouse$u20$as$u20$core..default..Default$GT$::default::h326c7487a97d0ddc(&var_42a8);
            int128_t var_2438_1 = var_4308_1;
            int128_t var_2448_1 = var_4318_1;
            void var_2fa8;
            memcpy(&var_2fa8, &var_1278, 0xb60);
            *(arg1 + 0x1de0) = var_4380_1;
            *(arg1 + 0x1df0) = var_4370_1;
            memcpy(&var_4118, &var_23e8, 0x1170);
            int128_t var_42f0_1 = var_43c0;
            int64_t var_42e0_1 = var_43b0;
            int128_t var_2428_1 = var_42a8;
            int128_t var_4298;
            int128_t var_2418_1 = var_4298;
            int128_t var_4288;
            int128_t var_2408_1 = var_4288;
            int128_t var_4278;
            int128_t var_23f8_1 = var_4278;
            *(arg1 + 0x1e08) = var_4388_1;
            *(arg1 + 0x1df8) = var_4398_1;
            memcpy(arg1, &var_4118, 0x1d30);
            *(arg1 + 0x1d38) = 0x3b9aca00;
            int128_t var_42f4;
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
        rax_9 = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(rdi_12);
    
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
    return core::ptr::drop_in_place$LT$alacritty..display..Display$GT$::h3bea6ae35a2f51e1(arg2);
}
