
  int64_t firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value::h66055dba9b29b5b3(int64_t arg1, char* arg2)

{
    char const* const var_100;
    int64_t var_f8;
    char const* const var_f0;
    void** const var_a0;
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
    {
        var_a0 = &data_7a3690;
        int64_t var_98_1 = 1;
        int64_t var_90_1 = 8;
        int128_t var_88_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a36d0);
        var_100 = "firecracker::api_server::parsed_…";
        var_f8 = 0x27;
        var_f0 = "firecracker::api_server::parsed_…";
        int64_t var_e8_1 = 0x27;
        int64_t var_e0_1 = rax_1;
        log::__private_api::log_impl::h05439a06b798919c(&var_a0, 3, &var_100);
    }
    
    micro_http::response::Response::new::h78e744fb9400e084(&var_a0, 1, 1);
    void var_b8;
    
    if (!*arg2)
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_b8, "{}The request was executed succe…", 2);
    else
    {
        serde_json::ser::to_vec::hc4f969a0cebbfddb(&var_100, arg2);
        int128_t var_d8;
        
        if (!(0 + -(var_100)))
        {
            char const* const var_c8_1 = var_f0;
            var_d8 = var_100;
        }
        else
        {
            *var_d8[8] = var_f8;
            var_d8 = -0x8000000000000000;
        }
        
        core::result::Result$LT$T$C$E$GT$::unwrap::hfeff9db6cbe68564(&var_b8, &var_d8);
    }
    
    micro_http::response::Response::set_body::hb2a8ea3742c0d431(&var_a0, &var_b8);
    return memcpy(arg1, &var_a0, 0x90);
}
