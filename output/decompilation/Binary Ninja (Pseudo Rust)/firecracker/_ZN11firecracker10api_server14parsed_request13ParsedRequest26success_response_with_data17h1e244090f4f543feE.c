
  fn firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h1e244090f4f543fe(arg1: i64, arg2: *mut i64) -> i64

{
    let mut var_f0: *const i8;
    let mut var_e8: i64;
    let mut var_e0: *const i8;
    let mut var_a8: *mut *mut c_void;
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
    {
        var_a8 = &data_7a3690;
        let var_a0_1: i64 = 1;
        let var_98_1: i64 = 8;
        let var_90_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a36a0);
        var_f0 = "firecracker::api_server::parsed_…";
        var_e8 = 0x27;
        var_e0 = "firecracker::api_server::parsed_…";
        let var_d8_1: i64 = 0x27;
        let var_d0_1: i64 = rax_1;
        log::__private_api::log_impl::h05439a06b798919c(&var_a8, 3, &var_f0);
    }
    
    micro_http::response::Response::new::h78e744fb9400e084(&var_a8, 1, 1);
    serde_json::ser::to_vec::hbcbadfe4102ecc44(&var_f0, arg2);
    let mut var_c8: i128;
    
    if !(0 + -(var_f0))
    {
        let var_b8_1: *const i8 = var_e0;
        var_c8 = var_f0;
    }
    else
    {
        *var_c8[8] = var_e8;
        var_c8 = -0x8000000000000000;
    }
    
    core::result::Result$LT$T$C$E$GT$::unwrap::hfeff9db6cbe68564(&var_f0, &var_c8);
    micro_http::response::Response::set_body::hb2a8ea3742c0d431(&var_a8, &var_f0);
    memcpy(arg1, &var_a8, 0x90)
}
