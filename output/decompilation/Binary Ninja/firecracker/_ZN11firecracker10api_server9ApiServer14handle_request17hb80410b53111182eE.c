
  void* firecracker::api_server::ApiServer::handle_request::hb80410b53111182e(int64_t arg1, int64_t* arg2, void* arg3, int64_t arg4)

{
    int32_t var_a8;
    uint64_t rdx = _$LT$firecracker..api_server..parsed_request..ParsedRequest$u20$as$u20$core..convert..TryFrom$LT$$RF$micro_http..request..Request$GT$$GT$::try_from::h32898402e65c35ff(&var_a8, arg3);
    int128_t var_168;
    char const* const var_150;
    int128_t var_128;
    char const* const var_108;
    int128_t var_a0;
    int64_t* var_88;
    
    if (var_a8 == 1)
    {
        var_168 = var_a0;
        int64_t* var_158 = var_88;
        var_150 = var_a0;
        int128_t var_148_1 = var_a0;
        int64_t* var_138_1 = var_88;
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
        {
            var_128 = &var_150;
            *var_128[8] = _$LT$firecracker..api_server..parsed_request..RequestError$u20$as$u20$core..fmt..Debug$GT$::fmt::hdc8772a4831cbc03;
            var_a8 = &data_430b60;
            var_a0 = 1;
            int64_t var_88_1 = 0;
            *var_a0[8] = &var_128;
            int64_t var_90_1 = 1;
            int64_t rax_2 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39e0);
            var_108 = "firecracker::api_server'' API re…";
            int64_t var_100_1 = 0x17;
            char const* const var_f8_1 = "firecracker::api_server'' API re…";
            int64_t var_f0_1 = 0x17;
            int64_t var_e8_1 = rax_2;
            rdx = log::__private_api::log_impl::h05439a06b798919c(&var_a8, 1, &var_108);
        }
        
        var_a0 = var_148_1;
        var_a8 = var_150;
        return firecracker::api_server::parsed_request::_$LT$impl$u20$core..convert..From$LT$firecracker..api_server..parsed_request..RequestError$GT$$u20$for$u20$micro_http..response..Response$GT$::from::h6d9b414c67446cdb(arg1, &var_a8, rdx);
    }
    
    var_168 = var_a0;
    int64_t var_90;
    int64_t var_b8_1 = var_90;
    int128_t var_c8 = var_a0;
    firecracker::api_server::ApiServer::serve_vmm_action_request::he3bf2713b381bcf6(&var_a8, arg2, 
        var_88, arg4);
    var_c8 = -0x8000000000000000;
    
    if (!(0 + -(var_168)))
    {
        int64_t var_118_1 = var_90;
        var_128 = var_168;
        
        if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 1)
        {
            int128_t* var_d8 = &var_128;
            int64_t (* var_d0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_108 = &data_430b60;
            int64_t var_100_2 = 1;
            int64_t var_e8_2 = 0;
            int128_t** var_f8_2 = &var_d8;
            int64_t var_f0_2 = 1;
            int64_t rax_7 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39c8);
            var_150 = "firecracker::api_server'' API re…";
            int128_t var_148;
            var_148 = 0x17;
            *var_148[8] = "firecracker::api_server'' API re…";
            int64_t var_138_2 = 0x17;
            int64_t var_130_1 = rax_7;
            log::__private_api::log_impl::h05439a06b798919c(&var_108, 2, &var_150);
        }
        
        char var_3f_1 = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hf8b36c6afb1cf6ed(&var_168);
    
    memcpy(arg1, &var_a8, 0x90);
    return core::ptr::drop_in_place$LT$firecracker..api_server..parsed_request..ParsingInfo$GT$::hb3c6e9d5bd6ac77f(&var_c8);
}
