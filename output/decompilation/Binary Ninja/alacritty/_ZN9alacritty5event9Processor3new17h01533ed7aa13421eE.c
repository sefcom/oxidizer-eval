
  int64_t alacritty::event::Processor::new::h01533ed7aa13421e(int128_t* arg1, void* arg2, void* arg3, int32_t* arg4)

{
    int128_t var_658;
    winit::platform_impl::linux::EventLoop$LT$T$GT$::create_proxy::h9050477dda0b9974(&var_658, 
        arg4);
    int128_t var_648;
    int128_t var_838 = var_648;
    int128_t var_848 = var_658;
    _$LT$winit..platform_impl..linux..EventLoopProxy$LT$T$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hf017a78d33b24d45(&var_658, &var_848);
    int128_t zmm0 = var_658;
    int128_t zmm1 = var_648;
    int64_t var_7f8 = 0;
    int64_t var_7f0 = 0x10;
    int128_t var_7e8 = {0};
    _$LT$alacritty..cli..WindowOptions$u20$as$u20$core..clone..Clone$GT$::clone::hba3875afb1d1f31c(
        &var_658, arg3);
    void var_708;
    memcpy(&var_708, &var_658, 0xb0);
    winit::event_loop::EventLoop$LT$T$GT$::listen_device_events::hf09e832e2259baba(arg4);
    _$LT$winit..event_loop..EventLoop$LT$T$GT$$u20$as$u20$raw_window_handle..borrowed..HasDisplayHandle$GT$::display_handle::h6bb5824f2b2c3041(&var_658, arg4);
    int32_t var_228;
    core::result::Result$LT$T$C$E$GT$::unwrap::h8eb3c721dc814788(&var_228, &var_658);
    int128_t var_7d8;
    int64_t var_220;
    alacritty::clipboard::Clipboard::new::h057223b09dc81a04(&var_7d8, var_228, var_220);
    int64_t var_888 = 2;
    char rax = *(arg2 + 0x418);
    
    if (rax == 2)
        rax = *(arg2 + 0x40);
    
    int128_t var_878;
    int128_t var_868;
    int64_t var_858;
    int128_t var_7b8;
    
    if (rax & 1)
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h6230c7fcda3c6588(&var_7b8, *(arg2 + 0x2a0), *(arg2 + 0x2a8));
        winit::platform_impl::linux::EventLoop$LT$T$GT$::create_proxy::h9050477dda0b9974(&var_658, 
            arg4);
        int128_t var_218_1 = var_648;
        var_228 = var_658;
        alacritty::config::monitor::ConfigMonitor::new::h96fda481c32d2708(&var_658, &var_7b8, 
            &var_228);
        core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..monitor..ConfigMonitor$GT$$GT$::hc17f70ca91879034(&var_888);
        int64_t var_628;
        var_858 = var_628;
        int128_t var_638;
        var_868 = var_638;
        var_878 = var_648;
        var_888 = var_658;
    }
    
    memcpy(&var_228, arg3, 0x1f0);
    int128_t var_718 = var_838;
    int128_t var_728 = var_848;
    int128_t var_788 = var_7e8;
    int128_t var_798 = var_7f8;
    int128_t var_7a8 = zmm1;
    var_7b8 = zmm0;
    int64_t var_738 = 2;
    var_658 = 1;
    *var_658[8] = 1;
    memcpy(&var_648, arg2, 0x420);
    int64_t rax_2 = alloc::boxed::Box$LT$T$GT$::new::h4b5907c012952b91(&var_658);
    int64_t var_820 = rax_2;
    ahash::random_state::RandomState::new::hccae9c0b71bdd92e(&var_658);
    int128_t var_748 = var_648;
    int128_t var_758 = var_658;
    int128_t var_778 = *data_c75358;
    int128_t var_768 = data_c75368;
    arg1[0x3b] = var_858;
    int128_t zmm0_4 = var_888;
    arg1[0x3a] = var_868;
    arg1[0x39] = var_878;
    arg1[0x38] = zmm0_4;
    zmm0_4 = var_7d8;
    int128_t var_7c8;
    arg1[0x32] = var_7c8;
    arg1[0x31] = zmm0_4;
    arg1[3] = var_7e8;
    arg1[2] = var_7f8;
    arg1[1] = zmm1;
    *arg1 = zmm0;
    memcpy(&arg1[0x26], &var_708, 0xb0);
    arg1[0x37] = 0;
    arg1[0x33] = var_778;
    arg1[0x34] = var_768;
    arg1[0x35] = var_758;
    arg1[0x36] = var_748;
    int128_t zmm0_5 = var_848;
    arg1[5] = var_838;
    arg1[4] = zmm0_5;
    arg1[6] = 2;
    *(arg1 + 0x3b8) = 0;
    arg1[0x3c] = 8;
    *(arg1 + 0x3c8) = 0;
    int64_t result = memcpy(&arg1[7], &var_228, 0x1f0);
    arg1[0x3d] = rax_2;
    return result;
}
