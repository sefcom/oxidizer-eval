
  fn firecracker::api_server_adapter::ApiServerAdapter::run_microvm::hcd206361f8db95e0(arg1: *mut i8, arg2: i64, arg3: *mut i64, arg4: *mut *mut c_void) -> *mut i64

{
    let r15: *mut i64 = arg3;
    let temp0: i64 = *r15;
    *r15 += 1;
    
    if temp0 <= -1
    {
        trap(6);
    }
    
    let mut var_1f0: u64 = 1;
    let var_1e8: i64 = 1;
    let var_1e0: i32 = 0;
    let var_1dc: i8 = 0;
    let rdx: i64;
    let var_1d8: i64 = rdx;
    let rcx: i64;
    let var_1d0: i64 = rcx;
    let r8: i64;
    let var_1c8: i64 = r8;
    let r9: i64;
    let var_1c0: i64 = r9;
    let mut var_1b8: ();
    memcpy(&var_1b8, arg2, 0x178);
    let var_40: *mut i64 = r15;
    let rsi: i32;
    let var_38: i32 = rsi;
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(arg4, alloc::boxed::Box$LT$T$GT$::new::h9d46414a85dea5fc(&var_1f0), &data_7a3aa0);
    let mut rax_1: *mut i32;
    let mut rcx_2: u32;
    let mut rdx_1: i8;
    
    loop
    {
        event_manager::manager::EventManager$LT$S$GT$::run_with_timeout::h6fc2eeab4ecbbe87(
            &var_1f0, arg4);
        core::result::Result$LT$T$C$E$GT$::expect::h8c6dd5f513fe412d(&var_1f0, 
            "EventManager events driver fatal…", 0x26);
        std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h38953874ec970728(&var_1f0, &arg3[2]);
        rax_1 = core::result::Result$LT$T$C$E$GT$::unwrap::hc16998d407e0609d(&var_1f0);
        rdx_1 &= 1;
        rcx_2 = rax_1[0x85];
        
        if rcx_2 != 0x9e
        {
            break;
        }
        
        core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$::he362f43706e4abd8(rax_1, rdx_1);
    }
    
    if rcx_2 != 0
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
    
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$vmm..Vmm$GT$$GT$$GT$::hdd4fdcfc2ebf5472(&arg3)
}
