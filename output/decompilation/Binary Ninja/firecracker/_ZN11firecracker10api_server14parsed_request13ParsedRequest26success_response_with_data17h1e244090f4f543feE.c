
  int64_t firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h1e244090f4f543fe(int64_t arg1, int64_t* arg2)

{
    char const* const var_f0;
    int64_t var_e8;
    char const* const var_e0;
    void** const var_a8;
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
    {
        var_a8 = &data_7a3690;
        int64_t var_a0_1 = 1;
        int64_t var_98_1 = 8;
        int128_t var_90_1 = {0};
        int64_t rax_1 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a36a0);
        var_f0 = "firecracker::api_server::parsed_…";
        var_e8 = 0x27;
        var_e0 = "firecracker::api_server::parsed_…";
        int64_t var_d8_1 = 0x27;
        int64_t var_d0_1 = rax_1;
        log::__private_api::log_impl::h05439a06b798919c(&var_a8, 3, &var_f0);
    }
    
    micro_http::response::Response::new::h78e744fb9400e084(&var_a8, 1, 1);
    serde_json::ser::to_vec::hbcbadfe4102ecc44(&var_f0, arg2);
    int128_t var_c8;
    
    if (!(0 + -(var_f0)))
    {
        char const* const var_b8_1 = var_e0;
        var_c8 = var_f0;
    }
    else
    {
        *var_c8[8] = var_e8;
        var_c8 = -0x8000000000000000;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hfeff9db6cbe68564(&var_f0, &var_c8);
    micro_http::response::Response::set_body::hb2a8ea3742c0d431(&var_a8, &var_f0);
    return memcpy(arg1, &var_a8, 0x90);
}
