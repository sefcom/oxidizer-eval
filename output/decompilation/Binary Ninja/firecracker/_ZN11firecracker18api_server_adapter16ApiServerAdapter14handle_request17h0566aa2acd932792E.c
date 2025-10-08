
  int64_t firecracker::api_server_adapter::ApiServerAdapter::handle_request::h0566aa2acd932792(void* arg1, int64_t* arg2)

{
    void var_230;
    vmm::rpc_interface::RuntimeApiController::handle_request::h35c4f70c8be1b5e8(&var_230, 
        arg1 + 0x20, arg2);
    int64_t rax = alloc::boxed::Box$LT$T$GT$::new::h3bb86a3ece522b8a(&var_230);
    int32_t* rax_1 = std::sync::mpmc::Sender$LT$T$GT$::send::h157a2b67ca9ce22a(*(arg1 + 0x10), 
        *(arg1 + 0x18), rax);
    
    if (rax_1)
        core::ptr::drop_in_place$LT$std..sync..mpsc..SendError$LT$alloc..boxed..Box$LT$core..result..Result$LT$vmm..rpc_interface..VmmData$C$vmm..rpc_interface..VmmActionError$GT$$GT$$GT$$GT$::h3c95b2cc0c70d220(rax_1);
    
    int32_t rdi_4;
    rdi_4 = rax_1;
    /* tailcall */
    return core::result::Result$LT$T$C$E$GT$::expect::h52c62474e6142415(rdi_4);
}
