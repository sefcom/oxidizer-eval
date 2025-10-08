
  fn firecracker::api_server_adapter::run_with_api::h95de3867043d5470(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64, arg5: *mut i128, arg6: *mut i128, arg7: i8, arg8: i8, arg9: i64, arg10: *mut i8, arg11: *mut i8, arg12: i64) -> i64

{
    let mut var_478: *mut *mut [i8; 0x105];
    vmm_sys_util::linux::eventfd::EventFd::new::h5f57ed9483b32f4c(&var_478);
    let mut fd: i32 = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Cannot create API Eventfd.Cannot…", 0x1a);
    vmm_sys_util::linux::eventfd::EventFd::new::h5f57ed9483b32f4c(&var_478);
    let fd_2: i32 = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Cannot create API kill switch.Fa…", 0x1e);
    let mut fd_1: i32 = fd_2;
    std::sync::mpmc::channel::h4b8c68c93431b2d7(&var_478);
    let rdx: *mut *mut [i8; 0x105] = var_478;
    let mut var_2f0: *mut *mut [i8; 0x105] = rdx;
    let var_470: i64;
    let var_2e8: i64 = var_470;
    let var_468: *mut i64;
    let mut var_4a0: *mut i64 = var_468;
    let mut var_460: i64;
    let var_588: i64 = var_460;
    let var_498: i64 = var_460;
    std::sync::mpmc::channel::h4b8c68c93431b2d7(&var_478);
    let rax_2: *mut *mut [i8; 0x105] = var_478;
    let r14: i64 = var_460;
    let mut var_490: *mut *mut [i8; 0x105] = rax_2;
    let var_488: i64 = var_470;
    let mut var_2e0: *mut i64 = var_468;
    let var_2d8: i64 = r14;
    vmm_sys_util::linux::eventfd::EventFd::try_clone::h6bf3f4b0b2d7ee46(&var_478, &fd);
    let fd_3: i32 = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Failed to clone API event FDFail…", 0x1c);
    let rax_3: i64 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h36c25417eea7e160(arg2);
    
    if rax_3 == 0
    {
        core::option::expect_failed::h3f620cfb8545dc61("Missing seccomp filter for API t…");
        /* no return */
    }
    
    let mut var_480: i64 = rax_3;
    micro_http::server::HttpServer::new::h4225a9f0723c090c(&var_478, arg4);
    let mut var_548: *mut i64;
    let mut var_458: i128;
    let mut var_448: i128;
    let mut var_250: i128;
    
    if var_478 == 0
    {
        if var_470 != 0x17
        {
            'label_5588f6:
            let var_239_1: i128 = var_460;
            let var_249_2: i128 = var_470;
            *arg1 = 0x1f;
            *arg1.byte_offset(1) = var_250;
            *arg1.byte_offset(0x11) = var_249_2;
            *arg1.byte_offset(0x21) = var_239_1;
            arg1[3] = *var_458[8];
            *arg1.byte_offset(0x38) = *var_448[8];
        }
        else
        {
            if std::io::error::Error::kind::h135fe00c4e7365f3(var_468) != 8
            {
                goto 'label_5588f6;
            }
            
            var_548 = var_468;
            var_250 = *arg4.byte_offset(8);
            let mut var_198: i128;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb9277cdbddd35a2e(
                &var_198, &var_250);
            let var_249_1: i128 = var_198;
            *arg1 = 0x1e;
            *arg1.byte_offset(1) = var_250;
            arg1[1] = *var_249_1[8];
            let var_188: i64;
            *arg1.byte_offset(0x18) = var_188;
            core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h7e6e851676b6581e(&var_548);
        }
        
        core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$::h0fb2ab07e6e921cc(&var_480);
        core::ptr::drop_in_place$LT$vmm_sys_util..linux..eventfd..EventFd$GT$::hcfdb36d35d96e7e1(
            fd_3);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$alloc..boxed..Box$LT$core..result..Result$LT$vmm..rpc_interface..VmmData$C$vmm..rpc_interface..VmmActionError$GT$$GT$$GT$$GT$::h89b8bd23d40cf07c(&var_2e0);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$alloc..boxed..Box$LT$core..result..Result$LT$vmm..rpc_interface..VmmData$C$vmm..rpc_interface..VmmActionError$GT$$GT$$GT$$GT$::h976bfee3969176b3(&var_490);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Receiver$LT$alloc..boxed..Box$LT$vmm..rpc_interface..VmmAction$GT$$GT$$GT$::hfaeaaf36c4bace38(&var_4a0);
        core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$alloc..boxed..Box$LT$vmm..rpc_interface..VmmAction$GT$$GT$$GT$::hf258a9008e318af5(&var_2f0);
        core::ptr::drop_in_place$LT$vmm_sys_util..linux..eventfd..EventFd$GT$::hcfdb36d35d96e7e1(
            fd_2);
        core::ptr::drop_in_place$LT$vmm_sys_util..linux..eventfd..EventFd$GT$::hcfdb36d35d96e7e1(
            fd);
        core::ptr::drop_in_place$LT$vmm..vmm_config..instance_info..InstanceInfo$GT$::h8bafaefa3a8db683(arg5);
        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h1fc4ff93f60e3e29(*arg4, arg4[1]);
        return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(arg3);
    }
    
    let var_268_1: i128 = var_448;
    let var_278_1: i128 = var_458;
    let mut var_298: i128 = var_478;
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
    {
        var_548 = arg4;
        let var_540_1: fn(arg1: *mut c_void, arg2: *mut i64) -> i64 =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_478 = &data_7a3bc8;
        let var_470_1: i64 = 2;
        var_458 = 0;
        let var_468_1: *mut *mut i64 = &var_548;
        var_460 = 1;
        let rax_6: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3c48);
        var_250 = "firecracker::api_server_adapterF…";
        let mut var_249: i128;
        *var_249[1] = 0x1f;
        *var_249[9] = "firecracker::api_server_adapterF…";
        let mut var_239: i64 = 0x1f;
        var_239 = rax_6;
        log::__private_api::log_impl::h05439a06b798919c(&var_478, 3, &var_250);
    }
    
    vmm_sys_util::linux::eventfd::EventFd::try_clone::h6bf3f4b0b2d7ee46(&var_478, &fd_1);
    micro_http::server::HttpServer::add_kill_switch::h04ec911044d535ac(&var_478, &var_298, 
        core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
            "Failed to clone API kill switchC…", 0x1f));
    core::result::Result$LT$T$C$E$GT$::expect::h62ed977e5695b52c(&var_478, 
        "Cannot add HTTP server kill swit…", 0x22);
    let mut var_468_2: i64 = -0x8000000000000000;
    var_478 = nullptr;
    *var_458[8] = 0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_548, "fc_apiCannot create API Eventfd.…", 6);
    std::thread::Builder::name::h9a7df364061ccb51(&var_250, &var_478, &var_548);
    var_448 = rdx;
    *var_448[8] = var_470;
    let var_438_1: *mut i64 = var_468;
    let mut var_430: i64 = r14;
    let fd_4: i32 = fd_3;
    let var_428_1: i128 = var_298;
    let var_418_1: i128 = var_468;
    let var_408_1: i128 = var_278_1;
    let var_3f8_1: i128 = var_268_1;
    let var_438: i64;
    let var_3e8_1: i64 = var_438;
    let zmm2_2: i128 = arg6[2];
    var_478 = *arg6;
    var_468_2 = arg6[1];
    let var_3e0_1: i64 = rax_3;
    let var_3d8_1: i64 = arg9;
    std::thread::Builder::spawn_unchecked::h2f60c371c604c1bd(&var_548, &var_250, &var_478);
    let mut var_180: i128;
    core::result::Result$LT$T$C$E$GT$::expect::ha75d62c38c499594(&var_180, &var_548);
    event_manager::manager::EventManager$LT$S$GT$::new_with_capacity::h328affe4842db2ce(&var_478);
    core::result::Result$LT$T$C$E$GT$::expect::hbb53a831db29b376(&var_250, &var_478);
    let rax_14: i32 = firecracker::metrics::PeriodicMetrics::new::h090430d50ede4455();
    var_478 = 1;
    let mut var_470_2: i64 = 1;
    let var_468_3: i64 = 0;
    var_460 = rax_14;
    let rax_15: u64 = alloc::boxed::Box$LT$T$GT$::new::h659fe066b81ad2c7(&var_478);
    let mut var_550: u64 = rax_15;
    let temp0_1: i64 = *rax_15;
    *rax_15 += 1;
    
    if temp0_1 <= -1
    {
        trap(6);
    }
    
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(&var_250, rax_15, &data_7a3cc0);
    let mut var_538_1: i128;
    let mut var_528_1: i128;
    let mut var_518_1: i128;
    let mut var_4f8: i128;
    let mut var_4e8: i128;
    let mut var_4c8: i128;
    let mut var_168: ();
    let mut rcx_9: *mut i64;
    let mut rdx_9: i64;
    let mut rbx_2: *mut *mut [i8; 0x105];
    let mut rbp_1: i8;
    let mut rsi_14: *mut *mut [i8; 0x105];
    let mut rdi_29: i64;
    let mut r14_2: *mut i128;
    
    if *arg3 != -0x8000000000000000
    {
        let var_508_2: i128 = arg5[4];
        var_518_1 = arg5[3];
        var_528_1 = arg5[2];
        var_538_1 = arg5[1];
        var_548 = *arg5;
        let var_5b0_2: i64 = arg12;
        firecracker::build_microvm_from_json::h1f8e3de32d767856(&var_478, arg2, &var_250, arg3, 
            &var_548, arg7, arg8, arg10, arg11);
        rbx_2 = var_478;
        rbp_1 = var_470_2;
        var_4f8 = *var_470_2[1];
        var_4e8 = *var_460[1];
        var_4e8 = zmm2_2;
        var_4c8 = var_448;
        
        if rbx_2 != -0x8000000000000000
        {
            memcpy(&var_168, &var_430, 0x138);
        }
        
        r14_2 = arg1;
        rcx_9 = var_468;
        rdx_9 = var_588;
        rsi_14 = rax_2;
        rdi_29 = var_470;
    }
    else
    {
        let var_508_1: i128 = arg5[4];
        var_518_1 = arg5[3];
        var_528_1 = arg5[2];
        var_538_1 = arg5[1];
        var_548 = *arg5;
        vmm::rpc_interface::PrebootApiController::build_microvm_from_requests::h5953c7106a2ac51a(
            &var_478, arg2, &var_250, &var_548, &var_4a0, &var_490, &fd, arg7, arg8, arg10, arg11, 
            arg12);
        rbx_2 = var_478;
        
        if rbx_2 != -0x8000000000000000
        {
            rbp_1 = var_470_2;
            var_4f8 = *var_470_2[1];
            var_4e8 = *var_460[1];
            var_4e8 = zmm2_2;
            var_4c8 = var_448;
            memcpy(&var_168, &var_430, 0x138);
        }
        else
        {
            let var_4d1_1: i64 = *zmm2_2[8];
            var_4e8 = var_460;
            var_4f8 = var_470_2;
            rbp_1 = 0x1c;
        }
        
        r14_2 = arg1;
        rdx_9 = var_588;
        rsi_14 = rax_2;
        rdi_29 = var_470;
        rcx_9 = var_468;
    }
    
    let var_2b0_1: *mut u64 = &var_550;
    let fd_5: i32 = fd;
    let mut var_2d0: *mut i64 = rcx_9;
    let var_2c8_1: i64 = rdx_9;
    let var_2c0_1: *mut *mut [i8; 0x105] = rsi_14;
    let var_2b8_1: i64 = rdi_29;
    let var_2a8_1: *mut i128 = &var_250;
    
    if rbx_2 != -0x8000000000000000
    {
        let var_458_1: i128 = var_4e8;
        *var_460[1] = var_4e8;
        *var_470_2[1] = var_4f8;
        var_448 = var_4c8;
        memcpy(&var_430, &var_168, 0x138);
        var_478 = rbx_2;
        var_470_2 = rbp_1;
        firecracker::api_server_adapter::run_with_api::_$u7b$$u7b$closure$u7d$$u7d$::hcd44a44c98af2a49(&var_548, &var_2d0, &var_478);
    }
    else
    {
        var_528_1 = var_4e8;
        var_538_1 = var_4e8;
        *var_548[1] = var_4f8;
        var_518_1 = var_4c8;
        var_548 = rbp_1;
        core::ptr::drop_in_place$LT$firecracker..api_server_adapter..run_with_api..$u7b$$u7b$closure$u7d$$u7d$$GT$::h80046040f0f827b7(&var_2d0);
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::h39e5f9294ba9fb39(
        vmm_sys_util::linux::eventfd::EventFd::write::hbb112918028d4a8a(&fd_1, 1));
    let var_170: i64;
    let var_468_4: i64 = var_170;
    var_478 = var_180;
    let mut rax_28: i64;
    let mut rdx_12: i64;
    rax_28 = std::thread::JoinInner$LT$T$GT$::join::h1fb8cb450c6f38f4(&var_478);
    core::result::Result$LT$T$C$E$GT$::expect::hff140e509eb2d807(rax_28);
    let zmm0_6: i128 = var_548;
    r14_2[3] = var_518_1;
    r14_2[2] = var_528_1;
    r14_2[1] = var_538_1;
    *r14_2 = zmm0_6;
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$$GT$::hf44de49e7d991a0d(&var_550);
    core::ptr::drop_in_place$LT$event_manager..manager..EventManager$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$dyn$u20$event_manager..MutEventSubscriber$GT$$GT$$GT$$GT$::ha231e7ff64aebfc9(&var_250);
    core::ptr::drop_in_place$LT$vmm_sys_util..linux..eventfd..EventFd$GT$::hcfdb36d35d96e7e1(fd_1);
    core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h1fc4ff93f60e3e29(*arg4, arg4[1])
}
