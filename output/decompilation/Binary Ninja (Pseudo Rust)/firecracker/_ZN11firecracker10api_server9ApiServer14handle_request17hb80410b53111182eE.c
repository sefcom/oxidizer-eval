
  fn firecracker::api_server::ApiServer::handle_request::hb80410b53111182e(arg1: i64, arg2: *mut i64, arg3: *mut c_void, arg4: i64) -> *mut c_void

{
    let mut var_a8: i32;
    let mut rdx: u64 = _$LT$firecracker..api_server..parsed_request..ParsedRequest$u20$as$u20$core..convert..TryFrom$LT$$RF$micro_http..request..Request$GT$$GT$::try_from::h32898402e65c35ff(&var_a8, arg3);
    let mut var_168: i128;
    let mut var_150: *const i8;
    let mut var_128: i128;
    let mut var_108: *const i8;
    let mut var_a0: i128;
    let var_88: *mut i64;
    
    if var_a8 == 1
    {
        var_168 = var_a0;
        let var_158: *mut i64 = var_88;
        var_150 = var_a0;
        let var_148_1: i128 = var_a0;
        let var_138_1: *mut i64 = var_88;
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
        {
            var_128 = &var_150;
            *var_128[8] = _$LT$firecracker..api_server..parsed_request..RequestError$u20$as$u20$core..fmt..Debug$GT$::fmt::hdc8772a4831cbc03;
            var_a8 = &data_430b60;
            var_a0 = 1;
            let var_88_1: i64 = 0;
            *var_a0[8] = &var_128;
            let var_90_1: i64 = 1;
            let rax_2: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39e0);
            var_108 = "firecracker::api_server'' API re…";
            let var_100_1: i64 = 0x17;
            let var_f8_1: *const i8 = "firecracker::api_server'' API re…";
            let var_f0_1: i64 = 0x17;
            let var_e8_1: i64 = rax_2;
            rdx = log::__private_api::log_impl::h05439a06b798919c(&var_a8, 1, &var_108);
        }
        
        var_a0 = var_148_1;
        var_a8 = var_150;
        return firecracker::api_server::parsed_request::_$LT$impl$u20$core..convert..From$LT$firecracker..api_server..parsed_request..RequestError$GT$$u20$for$u20$micro_http..response..Response$GT$::from::h6d9b414c67446cdb(arg1, &var_a8, rdx);
    }
    
    var_168 = var_a0;
    let var_90: i64;
    let var_b8_1: i64 = var_90;
    let mut var_c8: i128 = var_a0;
    firecracker::api_server::ApiServer::serve_vmm_action_request::he3bf2713b381bcf6(&var_a8, arg2, 
        var_88, arg4);
    var_c8 = -0x8000000000000000;
    
    if !(0 + -(var_168))
    {
        let var_118_1: i64 = var_90;
        var_128 = var_168;
        
        if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 1
        {
            let mut var_d8: *mut i128 = &var_128;
            let var_d0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_108 = &data_430b60;
            let var_100_2: i64 = 1;
            let var_e8_2: i64 = 0;
            let var_f8_2: *mut *mut i128 = &var_d8;
            let var_f0_2: i64 = 1;
            let rax_7: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39c8);
            var_150 = "firecracker::api_server'' API re…";
            let mut var_148: i128;
            var_148 = 0x17;
            *var_148[8] = "firecracker::api_server'' API re…";
            let var_138_2: i64 = 0x17;
            let var_130_1: i64 = rax_7;
            log::__private_api::log_impl::h05439a06b798919c(&var_108, 2, &var_150);
        }
        
        let var_3f_1: i8 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
    }
    else
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(&var_168);
    }
    
    memcpy(arg1, &var_a8, 0x90);
    core::ptr::drop_in_place$LT$firecracker..api_server..parsed_request..ParsingInfo$GT$::hb3c6e9d5bd6ac77f(&var_c8)
}
