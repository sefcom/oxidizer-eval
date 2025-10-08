
  fn firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value::h66055dba9b29b5b3(arg1: i64, arg2: *mut i8) -> i64

{
    let mut var_100: *const i8;
    let mut var_f8: i64;
    let mut var_f0: *const i8;
    let mut var_a0: *mut *mut c_void;
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
    {
        var_a0 = &data_7a3690;
        let var_98_1: i64 = 1;
        let var_90_1: i64 = 8;
        let var_88_1: i128 = {0};
        let rax_1: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a36d0);
        var_100 = "firecracker::api_server::parsed_…";
        var_f8 = 0x27;
        var_f0 = "firecracker::api_server::parsed_…";
        let var_e8_1: i64 = 0x27;
        let var_e0_1: i64 = rax_1;
        log::__private_api::log_impl::h05439a06b798919c(&var_a0, 3, &var_100);
    }
    
    micro_http::response::Response::new::h78e744fb9400e084(&var_a0, 1, 1);
    let mut var_b8: ();
    
    if *arg2 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_b8, "{}The request was executed succe…", 2);
    }
    else
    {
        serde_json::ser::to_vec::hc4f969a0cebbfddb(&var_100, arg2);
        let mut var_d8: i128;
        
        if !(0 + -(var_100))
        {
            let var_c8_1: *const i8 = var_f0;
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
    memcpy(arg1, &var_a0, 0x90)
}
