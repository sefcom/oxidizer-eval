
  fn firecracker::run_without_api::h14833a82da343b1a(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64, arg4: fn(arg1: *mut i32, arg2: *mut c_void, arg3: *mut c_void) -> *mut i32, arg5: i8, arg6: i8, arg7: *mut i8, arg8: i64, arg9: i64) -> i64

{
    let mut var_3e8: i64;
    event_manager::manager::EventManager$LT$S$GT$::new_with_capacity::h328affe4842db2ce(&var_3e8);
    let mut var_268: ();
    core::result::Result$LT$T$C$E$GT$::expect::hbb53a831db29b376(&var_268, &var_3e8);
    let rax: i32 = firecracker::metrics::PeriodicMetrics::new::h090430d50ede4455();
    var_3e8 = 1;
    let var_3e0: i64 = 1;
    let var_3d8: i64 = 0;
    let rax_1: u64 = alloc::boxed::Box$LT$T$GT$::new::h659fe066b81ad2c7(&var_3e8);
    let mut var_430: u64 = rax_1;
    let temp0: i64 = *rax_1;
    *rax_1 += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(&var_268, rax_1, &data_7a3cc0);
    
    if 0 + -(*arg3)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let var_490: i64 = arg9;
    firecracker::build_microvm_from_json::h1f8e3de32d767856(&var_3e8, arg2, &var_268, arg3, arg4, 
        arg5, arg6, arg7, arg8);
    let rbx_1: i64 = var_3e8;
    let mut var_478: i128 = var_3e0;
    let var_468: i128 = rax;
    let var_3c0: i128;
    let var_3b0: i128;
    
    if rbx_1 != -0x8000000000000000
    {
        let mut var_3a0: ();
        let mut var_168: ();
        memcpy(&var_168, &var_3a0, 0x138);
        let zmm0_1: i128 = var_478;
        let var_3f8_1: i128 = var_3b0;
        let var_408_1: i128 = var_3c0;
        let var_418_1: i128 = var_468;
        let var_428_1: i128 = zmm0_1;
        let var_1a8_1: i128 = zmm0_1;
        let var_198_1: i128 = var_468;
        let var_188_1: i128 = var_3c0;
        let var_178_1: i128 = var_3b0;
        let mut var_1b0: i64 = rbx_1;
        let var_38: i64;
        var_478 = var_38;
        core::ptr::drop_in_place$LT$vmm..resources..VmResources$GT$::h68977f9def7baa44(&var_1b0);
        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h8c6f8f786f04e889(&var_3e8, rax_1 + 0x10);
        let mut rax_5: *mut i32;
        let mut rdx_2: i8;
        rax_5 = core::result::Result$LT$T$C$E$GT$::expect::h3726d98727c37e19(&var_3e8);
        firecracker::metrics::PeriodicMetrics::start::h3c1c244ee7083caf(&rax_5[2]);
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_5, rdx_2 & 1);
        let mut rax_6: *mut i32;
        let mut rcx_2: u32;
        let mut rdx_3: i8;
        
        loop
        {
            event_manager::manager::EventManager$LT$S$GT$::run_with_timeout::h6fc2eeab4ecbbe87(
                &var_3e8, &var_268);
            core::result::Result$LT$T$C$E$GT$::expect::h8c6dd5f513fe412d(&var_3e8, 
                "Failed to start the event manage…", 0x21);
            std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h38953874ec970728(&var_3e8, 
                var_478.byte_offset(0x10));
            rax_6 = core::result::Result$LT$T$C$E$GT$::unwrap::hc16998d407e0609d(&var_3e8);
            rdx_3 &= 1;
            rcx_2 = rax_6[0x85];
            
            if rcx_2 != 0x9e
            {
                break;
            }
            
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_6, rdx_3);
        }
        
        if rcx_2 != 0
        {
            *arg1 = 0x1c;
            *arg1.byte_offset(1) = rcx_2;
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
        let zmm0: i128 = var_478;
        let var_428: i128 = zmm0;
        let var_418: i128 = var_468;
        let var_408: i128 = var_3c0;
        let var_3f8: i128 = var_3b0;
        arg1[3] = var_3b0;
        arg1[2] = var_3c0;
        arg1[1] = var_468;
        *arg1 = zmm0;
    }
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$$GT$::hf44de49e7d991a0d(&var_430);
    core::ptr::drop_in_place$LT$event_manager..manager..EventManager$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$dyn$u20$event_manager..MutEventSubscriber$GT$$GT$$GT$$GT$::ha231e7ff64aebfc9(&var_268)
}
