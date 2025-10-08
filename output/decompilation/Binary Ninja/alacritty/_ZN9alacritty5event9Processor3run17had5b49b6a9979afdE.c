
  uint64_t alacritty::event::Processor::run::had5b49b6a9979afd(void* arg1, int64_t arg2)

{
    void var_8b8;
    memcpy(&var_8b8, arg2, 0x8a0);
    int64_t var_928;
    winit::platform_impl::linux::EventLoop$LT$T$GT$::run::h2ae877a8c6bee90a(&var_928, &var_8b8);
    uint64_t result = *(arg1 + 0x370);
    *(arg1 + 0x378);
    *(arg1 + 0x370) = 0;
    
    if (!result)
    {
        int64_t rax_1 = var_928;
        
        if (rax_1 == -0x7ffffffffffffff6)
            return 0;
        
        int64_t var_8f0 = rax_1;
        int128_t var_920;
        int128_t var_8e8_1 = var_920;
        int128_t var_910;
        int128_t var_8d8_1 = var_910;
        int128_t var_900;
        int128_t var_8c8_1 = var_900;
        result = alloc::boxed::Box$LT$T$GT$::new::h89897c1e19fc2d41(&var_8f0);
    }
    else
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$winit..error..EventLoopError$GT$$GT$::h46f3d5d91273f93a(&var_928);
    
    return result;
}
