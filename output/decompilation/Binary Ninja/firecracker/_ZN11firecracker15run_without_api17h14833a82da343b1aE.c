
  int64_t firecracker::run_without_api::h14833a82da343b1a(int128_t* arg1, int64_t* arg2, int64_t* arg3, int32_t* (* arg4)(int32_t* arg1, void* arg2, void* arg3), char arg5, char arg6, char* arg7, int64_t arg8, int64_t arg9)

{
    int64_t var_3e8;
    event_manager::manager::EventManager$LT$S$GT$::new_with_capacity::h328affe4842db2ce(&var_3e8);
    void var_268;
    core::result::Result$LT$T$C$E$GT$::expect::hbb53a831db29b376(&var_268, &var_3e8);
    int32_t rax = firecracker::metrics::PeriodicMetrics::new::h090430d50ede4455();
    var_3e8 = 1;
    int64_t var_3e0 = 1;
    int64_t var_3d8 = 0;
    uint64_t rax_1 = alloc::boxed::Box$LT$T$GT$::new::h659fe066b81ad2c7(&var_3e8);
    uint64_t var_430 = rax_1;
    int64_t temp0 = *rax_1;
    *rax_1 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(&var_268, rax_1, &data_7a3cc0);
    
    if (0 + -(*arg3))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int64_t var_490 = arg9;
    firecracker::build_microvm_from_json::h1f8e3de32d767856(&var_3e8, arg2, &var_268, arg3, arg4, 
        arg5, arg6, arg7, arg8);
    int64_t rbx_1 = var_3e8;
    int128_t var_478 = var_3e0;
    int128_t var_468 = rax;
    int128_t var_3c0;
    int128_t var_3b0;
    
    if (rbx_1 != -0x8000000000000000)
    {
        void var_3a0;
        void var_168;
        memcpy(&var_168, &var_3a0, 0x138);
        int128_t zmm0_1 = var_478;
        int128_t var_3f8_1 = var_3b0;
        int128_t var_408_1 = var_3c0;
        int128_t var_418_1 = var_468;
        int128_t var_428_1 = zmm0_1;
        int128_t var_1a8_1 = zmm0_1;
        int128_t var_198_1 = var_468;
        int128_t var_188_1 = var_3c0;
        int128_t var_178_1 = var_3b0;
        int64_t var_1b0 = rbx_1;
        int64_t var_38;
        var_478 = var_38;
        core::ptr::drop_in_place$LT$vmm..resources..VmResources$GT$::h68977f9def7baa44(&var_1b0);
        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h8c6f8f786f04e889(&var_3e8, rax_1 + 0x10);
        int32_t* rax_5;
        char rdx_2;
        rax_5 = core::result::Result$LT$T$C$E$GT$::expect::h3726d98727c37e19(&var_3e8);
        firecracker::metrics::PeriodicMetrics::start::h3c1c244ee7083caf(&rax_5[2]);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_5, rdx_2 & 1);
        int32_t* rax_6;
        uint32_t rcx_2;
        char rdx_3;
        
        while (true)
        {
            event_manager::manager::EventManager$LT$S$GT$::run_with_timeout::h6fc2eeab4ecbbe87(
                &var_3e8, &var_268);
            core::result::Result$LT$T$C$E$GT$::expect::h8c6dd5f513fe412d(&var_3e8, 
                "Failed to start the event manage…", 0x21);
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h38953874ec970728(&var_3e8, 
                var_478 + 0x10);
            rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::hc16998d407e0609d(&var_3e8);
            rdx_3 &= 1;
            rcx_2 = rax_6[0x85];
            
            if (rcx_2 != 0x9e)
                break;
            
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_6, rdx_3);
        }
        
        if (rcx_2)
        {
            *arg1 = 0x1c;
            *(arg1 + 1) = rcx_2;
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_6, rdx_3);
        }
        else
        {
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_6, rdx_3);
            *arg1 = 0x1d;
        }
        
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$vmm..Vmm$GT$$GT$$GT$::hdd4fdcfc2ebf5472(&var_478);
    }
    else
    {
        int128_t zmm0 = var_478;
        int128_t var_428 = zmm0;
        int128_t var_418 = var_468;
        int128_t var_408 = var_3c0;
        int128_t var_3f8 = var_3b0;
        arg1[3] = var_3b0;
        arg1[2] = var_3c0;
        arg1[1] = var_468;
        *arg1 = zmm0;
    }
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$$GT$::hf44de49e7d991a0d(&var_430);
    return core::ptr::drop_in_place$LT$event_manager..manager..EventManager$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$dyn$u20$event_manager..MutEventSubscriber$GT$$GT$$GT$$GT$::ha231e7ff64aebfc9(&var_268);
}
