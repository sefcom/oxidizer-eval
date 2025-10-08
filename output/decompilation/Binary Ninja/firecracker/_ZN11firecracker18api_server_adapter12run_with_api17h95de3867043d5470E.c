
  int64_t firecracker::api_server_adapter::run_with_api::h95de3867043d5470(int128_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4, int128_t* arg5, int128_t* arg6, char arg7, char arg8, int64_t arg9, char* arg10, char* arg11, int64_t arg12)

{
    char const (** const var_478)[0x105];
    vmm_sys_util::linux::eventfd::EventFd::new::h5f57ed9483b32f4c(&var_478);
    int32_t fd = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Cannot create API Eventfd.Cannot…", 0x1a);
    vmm_sys_util::linux::eventfd::EventFd::new::h5f57ed9483b32f4c(&var_478);
    int32_t fd_2 = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Cannot create API kill switch.Fa…", 0x1e);
    int32_t fd_1 = fd_2;
    std::sync::mpmc::channel::h4b8c68c93431b2d7(&var_478);
    char const (** const rdx)[0x105] = var_478;
    char const (** const var_2f0)[0x105] = rdx;
    int64_t var_470;
    int64_t var_2e8 = var_470;
    int64_t* var_468;
    int64_t* var_4a0 = var_468;
    int64_t var_460;
    int64_t var_588 = var_460;
    int64_t var_498 = var_460;
    std::sync::mpmc::channel::h4b8c68c93431b2d7(&var_478);
    char const (** const rax_2)[0x105] = var_478;
    int64_t r14 = var_460;
    char const (** const var_490)[0x105] = rax_2;
    int64_t var_488 = var_470;
    int64_t* var_2e0 = var_468;
    int64_t var_2d8 = r14;
    vmm_sys_util::linux::eventfd::EventFd::try_clone::h6bf3f4b0b2d7ee46(&var_478, &fd);
    int32_t fd_3 = core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
        "Failed to clone API event FDFail…", 0x1c);
    int64_t rax_3 = hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::remove::h36c25417eea7e160(arg2);
    
    if (!rax_3)
    {
        core::option::expect_failed::h3f620cfb8545dc61("Missing seccomp filter for API t…");
        /* no return */
    }
    
    int64_t var_480 = rax_3;
    micro_http::server::HttpServer::new::h4225a9f0723c090c(&var_478, arg4);
    int64_t* var_548;
    int128_t var_458;
    int128_t var_448;
    int128_t var_250;
    
    if (!var_478)
    {
        if (var_470 != 0x17)
        {
            label_5588f6:
            int128_t var_239_1 = var_460;
            int128_t var_249_2 = var_470;
            *arg1 = 0x1f;
            *(arg1 + 1) = var_250;
            *(arg1 + 0x11) = var_249_2;
            *(arg1 + 0x21) = var_239_1;
            arg1[3] = *var_458[8];
            *(arg1 + 0x38) = *var_448[8];
        }
        else
        {
            if (std::io::error::Error::kind::h135fe00c4e7365f3(var_468) != 8)
                goto label_5588f6;
            
            var_548 = var_468;
            var_250 = *(arg4 + 8);
            int128_t var_198;
            _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::hb9277cdbddd35a2e(
                &var_198, &var_250);
            int128_t var_249_1 = var_198;
            *arg1 = 0x1e;
            *(arg1 + 1) = var_250;
            arg1[1] = *var_249_1[8];
            int64_t var_188;
            *(arg1 + 0x18) = var_188;
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
    
    int128_t var_268_1 = var_448;
    int128_t var_278_1 = var_458;
    int128_t var_298 = var_478;
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
    {
        var_548 = arg4;
        int64_t (* var_540_1)(void* arg1, int64_t* arg2) =
            _$LT$std..path..PathBuf$u20$as$u20$core..fmt..Debug$GT$::fmt::h56ce33c072e686b1;
        var_478 = &data_7a3bc8;
        int64_t var_470_1 = 2;
        var_458 = 0;
        int64_t** var_468_1 = &var_548;
        var_460 = 1;
        int64_t rax_6 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3c48);
        var_250 = "firecracker::api_server_adapterF…";
        int128_t var_249;
        *var_249[1] = 0x1f;
        *var_249[9] = "firecracker::api_server_adapterF…";
        int64_t var_239 = 0x1f;
        var_239 = rax_6;
        log::__private_api::log_impl::h05439a06b798919c(&var_478, 3, &var_250);
    }
    
    vmm_sys_util::linux::eventfd::EventFd::try_clone::h6bf3f4b0b2d7ee46(&var_478, &fd_1);
    micro_http::server::HttpServer::add_kill_switch::h04ec911044d535ac(&var_478, &var_298, 
        core::result::Result$LT$T$C$E$GT$::expect::hebbe0ee00a820641(&var_478, 
            "Failed to clone API kill switchC…", 0x1f));
    core::result::Result$LT$T$C$E$GT$::expect::h62ed977e5695b52c(&var_478, 
        "Cannot add HTTP server kill swit…", 0x22);
    int64_t var_468_2 = -0x8000000000000000;
    var_478 = nullptr;
    *var_458[8] = 0;
    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_548, "fc_apiCannot create API Eventfd.…", 6);
    std::thread::Builder::name::h9a7df364061ccb51(&var_250, &var_478, &var_548);
    var_448 = rdx;
    *var_448[8] = var_470;
    int64_t* var_438_1 = var_468;
    int64_t var_430 = r14;
    int32_t fd_4 = fd_3;
    int128_t var_428_1 = var_298;
    int128_t var_418_1 = var_468;
    int128_t var_408_1 = var_278_1;
    int128_t var_3f8_1 = var_268_1;
    int64_t var_438;
    int64_t var_3e8_1 = var_438;
    int128_t zmm2_2 = arg6[2];
    var_478 = *arg6;
    var_468_2 = arg6[1];
    int64_t var_3e0_1 = rax_3;
    int64_t var_3d8_1 = arg9;
    std::thread::Builder::spawn_unchecked::h2f60c371c604c1bd(&var_548, &var_250, &var_478);
    int128_t var_180;
    core::result::Result$LT$T$C$E$GT$::expect::ha75d62c38c499594(&var_180, &var_548);
    event_manager::manager::EventManager$LT$S$GT$::new_with_capacity::h328affe4842db2ce(&var_478);
    core::result::Result$LT$T$C$E$GT$::expect::hbb53a831db29b376(&var_250, &var_478);
    int32_t rax_14 = firecracker::metrics::PeriodicMetrics::new::h090430d50ede4455();
    var_478 = 1;
    int64_t var_470_2 = 1;
    int64_t var_468_3 = 0;
    var_460 = rax_14;
    uint64_t rax_15 = alloc::boxed::Box$LT$T$GT$::new::h659fe066b81ad2c7(&var_478);
    uint64_t var_550 = rax_15;
    int64_t temp0_1 = *rax_15;
    *rax_15 += 1;
    
    if (temp0_1 <= -1)
        trap(6);
    
    _$LT$event_manager..manager..EventManager$LT$T$GT$$u20$as$u20$event_manager..SubscriberOps$GT$::add_subscriber::h142e5b65e95b5675(&var_250, rax_15, &data_7a3cc0);
    int128_t var_538_1;
    int128_t var_528_1;
    int128_t var_518_1;
    int128_t var_4f8;
    int128_t var_4e8;
    int128_t var_4c8;
    void var_168;
    int64_t* rcx_9;
    int64_t rdx_9;
    char const (** const rbx_2)[0x105];
    char rbp_1;
    char const (** const rsi_14)[0x105];
    int64_t rdi_29;
    int128_t* r14_2;
    
    if (*arg3 != -0x8000000000000000)
    {
        int128_t var_508_2 = arg5[4];
        var_518_1 = arg5[3];
        var_528_1 = arg5[2];
        var_538_1 = arg5[1];
        var_548 = *arg5;
        int64_t var_5b0_2 = arg12;
        firecracker::build_microvm_from_json::h1f8e3de32d767856(&var_478, arg2, &var_250, arg3, 
            &var_548, arg7, arg8, arg10, arg11);
        rbx_2 = var_478;
        rbp_1 = var_470_2;
        var_4f8 = *var_470_2[1];
        var_4e8 = *var_460[1];
        var_4e8 = zmm2_2;
        var_4c8 = var_448;
        
        if (rbx_2 != -0x8000000000000000)
            memcpy(&var_168, &var_430, 0x138);
        
        r14_2 = arg1;
        rcx_9 = var_468;
        rdx_9 = var_588;
        rsi_14 = rax_2;
        rdi_29 = var_470;
    }
    else
    {
        int128_t var_508_1 = arg5[4];
        var_518_1 = arg5[3];
        var_528_1 = arg5[2];
        var_538_1 = arg5[1];
        var_548 = *arg5;
        vmm::rpc_interface::PrebootApiController::build_microvm_from_requests::h5953c7106a2ac51a(
            &var_478, arg2, &var_250, &var_548, &var_4a0, &var_490, &fd, arg7, arg8, arg10, arg11, 
            arg12);
        rbx_2 = var_478;
        
        if (rbx_2 != -0x8000000000000000)
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
            int64_t var_4d1_1 = *zmm2_2[8];
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
    
    uint64_t* var_2b0_1 = &var_550;
    int32_t fd_5 = fd;
    int64_t* var_2d0 = rcx_9;
    int64_t var_2c8_1 = rdx_9;
    char const (** const var_2c0_1)[0x105] = rsi_14;
    int64_t var_2b8_1 = rdi_29;
    int128_t* var_2a8_1 = &var_250;
    
    if (rbx_2 != -0x8000000000000000)
    {
        int128_t var_458_1 = var_4e8;
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
    int64_t var_170;
    int64_t var_468_4 = var_170;
    var_478 = var_180;
    int64_t rax_28;
    int64_t rdx_12;
    rax_28 = std::thread::JoinInner$LT$T$GT$::join::h1fb8cb450c6f38f4(&var_478);
    core::result::Result$LT$T$C$E$GT$::expect::hff140e509eb2d807(rax_28);
    int128_t zmm0_6 = var_548;
    r14_2[3] = var_518_1;
    r14_2[2] = var_528_1;
    r14_2[1] = var_538_1;
    *r14_2 = zmm0_6;
    core::ptr::drop_in_place$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$firecracker..metrics..PeriodicMetrics$GT$$GT$$GT$::hf44de49e7d991a0d(&var_550);
    core::ptr::drop_in_place$LT$event_manager..manager..EventManager$LT$alloc..sync..Arc$LT$std..sync..poison..mutex..Mutex$LT$dyn$u20$event_manager..MutEventSubscriber$GT$$GT$$GT$$GT$::ha231e7ff64aebfc9(&var_250);
    core::ptr::drop_in_place$LT$vmm_sys_util..linux..eventfd..EventFd$GT$::hcfdb36d35d96e7e1(fd_1);
    return core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::h1fc4ff93f60e3e29(*arg4, arg4[1]);
}
