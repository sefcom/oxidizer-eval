
  fn firecracker::api_server::ApiServer::serve_vmm_action_request::he3bf2713b381bcf6(arg1: *mut i128, arg2: *mut i64, arg3: *mut i64, arg4: i64) -> i64

{
    let mut rbp: *const i8;
    let var_8: *const i8 = rbp;
    let mut r14: *mut c_void = nullptr;
    let mut rbx: i8 = 0;
    let mut var_2f0: i64;
    
    match *arg3 - 8
    {
        0 =>
        {
            rbp = "create diff snapshotcreate full …";
            r14 = &data_7c4990;
            let temp0_1: i8 = arg3[7];
            
            if temp0_1 != 0
            {
                rbp = "create full snapshotload snapsho…";
            }
            
            if temp0_1 == 0
            {
                r14 = &data_7c4998;
            }
            
            rbx = 1;
            var_2f0 = 0x14;
        }
        0xb =>
        {
            r14 = &data_7c49a0;
            rbx = 1;
            rbp = "load snapshotresume vmFailed to …";
            var_2f0 = 0xd;
        }
        0xd =>
        {
            r14 = &data_7c49a8;
            rbx = 1;
            rbp = "pause vmVendorId";
            var_2f0 = 8;
        }
        0x10 =>
        {
            r14 = &data_7c49b0;
            rbx = 1;
            rbp = "resume vmFailed to send VMM mess…";
            var_2f0 = 9;
        }
    }
    
    core::result::Result$LT$T$C$E$GT$::expect::h85382038b70c5bc2(
        std::sync::mpmc::Sender$LT$T$GT$::send::hfbae5736fa7e8662(*arg2, arg2[1], arg3));
    core::result::Result$LT$T$C$E$GT$::expect::h020c26ce3b222952(
        vmm_sys_util::linux::eventfd::EventFd::write::hbb112918028d4a8a(&arg2[4], 1));
    arg2[3];
    let rax_7: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h505375acffeb89e1(arg2[2]);
    core::result::Result$LT$T$C$E$GT$::expect::hd7747398b8981285(rax_7);
    let mut var_250: i64;
    memcpy(&var_250, rax_7, 0x220);
    __rustc::__rust_dealloc(rax_7);
    firecracker::api_server::parsed_request::ParsedRequest::convert_to_response::hfe7d289cbaee243d(
        arg1, &var_250);
    
    if rbx != 0 && var_250 != 0xd
    {
        let mut var_2d8: *const i8 = rbp;
        let var_2d0_1: i64 = var_2f0;
        let mut var_2e0: i64 =
            vmm::logger::update_metric_with_elapsed_time::hefebe9558bc973b1(r14, arg4);
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 2
        {
            let mut var_2c8: *const *const i8 = &var_2d8;
            let var_2c0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
            let var_2b8_1: *mut i64 = &var_2e0;
            let var_2b0_1: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
            let mut var_280: *mut *mut [i8; 0x9d] = &data_7a39f8;
            let var_278_1: i64 = 3;
            let var_260_1: i64 = 0;
            let var_270_1: *mut *const *const i8 = &var_2c8;
            let var_268_1: i64 = 2;
            let rax_12: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3a70);
            let mut var_2a8: *const i8 = "firecracker::api_server'' API re…";
            let var_2a0_1: i64 = 0x17;
            let var_298_1: *const i8 = "firecracker::api_server'' API re…";
            let var_290_1: i64 = 0x17;
            let var_288_1: i64 = rax_12;
            log::__private_api::log_impl::h05439a06b798919c(&var_280, 3, &var_2a8);
        }
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$vmm..rpc_interface..VmmData$C$vmm..rpc_interface..VmmActionError$GT$$GT$::hdc8697fd5f73e90d(&var_250)
}
