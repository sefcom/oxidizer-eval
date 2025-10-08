
  int64_t* firecracker::api_server_adapter::ApiServerAdapter::run_microvm::hcd206361f8db95e0(char* arg1, int64_t arg2, int64_t* arg3, void** arg4)

{
    int64_t* r15 = arg3;
    int64_t temp0 = *r15;
    *r15 += 1;
    
    if (temp0 <= -1)
        trap(6);
    
    uint64_t var_1f0 = 1;
    int64_t var_1e8 = 1;
    int32_t var_1e0 = 0;
    char var_1dc = 0;
    int64_t rdx;
    int64_t var_1d8 = rdx;
    int64_t rcx;
    int64_t var_1d0 = rcx;
    int64_t r8;
    int64_t var_1c8 = r8;
    int64_t r9;
    int64_t var_1c0 = r9;
    void var_1b8;
    memcpy(&var_1b8, arg2, 0x178);
    int64_t* var_40 = r15;
    int32_t rsi;
    int32_t var_38 = rsi;
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(arg4, alloc::boxed::Box$LT$T$GT$::new::h9d46414a85dea5fc(&var_1f0), &data_7a3aa0);
    int32_t* rax_1;
    uint32_t rcx_2;
    char rdx_1;
    
    while (true)
    {
        event_manager::manager::EventManager$LT$S$GT$::run_with_timeout::h6fc2eeab4ecbbe87(
            &var_1f0, arg4);
        core::result::Result$LT$T$C$E$GT$::expect::h8c6dd5f513fe412d(&var_1f0, 
            "EventManager events driver fatal…", 0x26);
        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h38953874ec970728(&var_1f0, &arg3[2]);
        rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hc16998d407e0609d(&var_1f0);
        rdx_1 &= 1;
        rcx_2 = rax_1[0x85];
        
        if (rcx_2 != 0x9e)
            break;
        
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_1, rdx_1);
    }
    
    if (rcx_2)
    {
        *arg1 = 0x1d;
        arg1[1] = rcx_2;
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_1, rdx_1);
    }
    else
    {
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_1, rdx_1);
        *arg1 = 0x20;
    }
    
    return core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$vmm..Vmm$GT$$GT$$GT$::hdd4fdcfc2ebf5472(&arg3);
}
