
  int64_t firecracker::api_server::ApiServer::serve_vmm_action_request::he3bf2713b381bcf6(int128_t* arg1, int64_t* arg2, int64_t* arg3, int64_t arg4)

{
    char const* const rbp;
    char const* const var_8 = rbp;
    void* r14 = nullptr;
    char rbx = 0;
    int64_t var_2f0;
    
    switch (*arg3 - 8)
    {
        case 0:
        {
            rbp = "create diff snapshotcreate full …";
            r14 = &data_7c4990;
            char temp0_1 = arg3[7];
            
            if (temp0_1)
                rbp = "create full snapshotload snapsho…";
            
            if (!temp0_1)
                r14 = &data_7c4998;
            
            rbx = 1;
            var_2f0 = 0x14;
            break;
        }
        case 0xb:
        {
            r14 = &data_7c49a0;
            rbx = 1;
            rbp = "load snapshotresume vmFailed to …";
            var_2f0 = 0xd;
            break;
        }
        case 0xd:
        {
            r14 = &data_7c49a8;
            rbx = 1;
            rbp = "pause vmVendorId";
            var_2f0 = 8;
            break;
        }
        case 0x10:
        {
            r14 = &data_7c49b0;
            rbx = 1;
            rbp = "resume vmFailed to send VMM mess…";
            var_2f0 = 9;
            break;
        }
    }
    
    core::result::Result$LT$T$C$E$GT$::expect::h85382038b70c5bc2(
        std::sync::mpmc::Sender$LT$T$GT$::send::hfbae5736fa7e8662(*arg2, arg2[1], arg3));
    core::result::Result$LT$T$C$E$GT$::expect::h020c26ce3b222952(
        vmm_sys_util::linux::eventfd::EventFd::write::hbb112918028d4a8a(&arg2[4], 1));
    arg2[3];
    int64_t rax_7 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h505375acffeb89e1(arg2[2]);
    core::result::Result$LT$T$C$E$GT$::expect::hd7747398b8981285(rax_7);
    int64_t var_250;
    memcpy(&var_250, rax_7, 0x220);
    __rustc::__rust_dealloc(rax_7);
    firecracker::api_server::parsed_request::ParsedRequest::convert_to_response::hfe7d289cbaee243d(
        arg1, &var_250);
    
    if (rbx && var_250 != 0xd)
    {
        char const* const var_2d8 = rbp;
        int64_t var_2d0_1 = var_2f0;
        int64_t var_2e0 =
            vmm::logger::update_metric_with_elapsed_time::hefebe9558bc973b1(r14, arg4);
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 2)
        {
            char const* const* var_2c8 = &var_2d8;
            int64_t (* var_2c0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
            int64_t* var_2b8_1 = &var_2e0;
            uint64_t (* var_2b0_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            char const (** const var_280)[0x9d] = &data_7a39f8;
            int64_t var_278_1 = 3;
            int64_t var_260_1 = 0;
            char const* const** var_270_1 = &var_2c8;
            int64_t var_268_1 = 2;
            int64_t rax_12 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3a70);
            char const* const var_2a8 = "firecracker::api_server'' API re…";
            int64_t var_2a0_1 = 0x17;
            char const* const var_298_1 = "firecracker::api_server'' API re…";
            int64_t var_290_1 = 0x17;
            int64_t var_288_1 = rax_12;
            log::__private_api::log_impl::h05439a06b798919c(&var_280, 3, &var_2a8);
        }
    }
    
    return core::ptr::drop_in_place$LT$core..result..Result$LT$vmm..rpc_interface..VmmData$C$vmm..rpc_interface..VmmActionError$GT$$GT$::hdc8697fd5f73e90d(&var_250);
}
