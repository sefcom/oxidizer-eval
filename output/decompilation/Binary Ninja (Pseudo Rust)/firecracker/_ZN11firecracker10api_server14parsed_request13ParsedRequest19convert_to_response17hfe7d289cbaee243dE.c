
  fn firecracker::api_server::parsed_request::ParsedRequest::convert_to_response::hfe7d289cbaee243d(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let rax: i64 = *arg2;
    let mut var_110: *const i8;
    let mut var_e8: *mut c_void;
    let mut var_d0: *mut *mut c_void;
    let mut var_b8: i8;
    let mut var_b0: i128;
    
    if rax == 0xd
    {
        var_e8 = &arg2[1];
        let mut rbp_1: i8 = arg2[1];
        let rax_2: i64 = core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
            &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0);
        let mut rdi: *mut *mut [i8; 0xca];
        
        if rbp_1 != 0xe
        {
            rbp_1 = 3;
            
            if rax_2 != 0
            {
                var_d0 = &var_e8;
                let var_c8_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb2bd811cadadb9fa;
                var_b8 = &data_7a3720;
                var_b0 = 1;
                let var_98_2: i64 = 0;
                *var_b0[8] = &var_d0;
                let var_a0_2: i64 = 1;
                rdi = &data_7a3778;
                'label_5542ac:
                let rax_5: i64 = log::__private_api::loc::h0b1bf3028c786bb7(rdi);
                var_110 = "firecracker::api_server::parsed_…";
                let var_108_1: i64 = 0x27;
                let var_100_1: *const i8 = "firecracker::api_server::parsed_…";
                let var_f8_1: i64 = 0x27;
                let var_f0_1: i64 = rax_5;
                log::__private_api::log_impl::h05439a06b798919c(&var_b8, 1, &var_110);
            }
        }
        else
        {
            rbp_1 = 7;
            
            if rax_2 != 0
            {
                var_d0 = &var_e8;
                let var_c8_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hb2bd811cadadb9fa;
                var_b8 = &data_7a3710;
                var_b0 = 1;
                let var_98_1: i64 = 0;
                *var_b0[8] = &var_d0;
                let var_a0_1: i64 = 1;
                rdi = &data_7a3760;
                goto 'label_5542ac;
            }
        }
        micro_http::response::Response::new::h78e744fb9400e084(&var_b8, 1, rbp_1);
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1bea7a3240948723(
            &var_110, var_e8);
        firecracker::api_server::ApiServer::json_fault_message::hfc3a57c57b134c30(&var_d0, 
            &var_110);
        micro_http::response::Response::set_body::hb2a8ea3742c0d431(&var_b8, &var_d0);
        return memcpy(arg1, &var_b8, 0x90);
    }
    
    let mut rcx_1: i64 = 3;
    
    if rax - 5 < 8
    {
        rcx_1 = rax - 5;
    }
    
    match rcx_1
    {
        0 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::ha7df65e1b1b920e0(arg1, &arg2[1])
        }
        1 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h1e244090f4f543fe(arg1, &arg2[1])
        }
        2 =>
        {
            if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 2
            {
                var_b8 = &data_7a3700;
                var_b0 = 1;
                *var_b0[8] = 8;
                let mut var_a0: i64;
                var_a0 = {0};
                let rax_9: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3730);
                var_110 = "firecracker::api_server::parsed_…";
                let var_108_2: i64 = 0x27;
                let var_100_2: *const i8 = "firecracker::api_server::parsed_…";
                let var_f8_2: i64 = 0x27;
                let var_f0_2: i64 = rax_9;
                log::__private_api::log_impl::h05439a06b798919c(&var_b8, 3, &var_110);
            }
            
            /* tailcall */
            micro_http::response::Response::new::h78e744fb9400e084(arg1, 1, 2)
        }
        3 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h8548d4bf84a2a53c(arg1, arg2)
        }
        4 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::hbb6d01cc8ca37a93(arg1, &arg2[1])
        }
        5 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value::h66055dba9b29b5b3(arg1, &arg2[1])
        }
        6 =>
        {
            /* tailcall */
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h32bb8d82001ac88d(arg1, &arg2[1])
        }
        7 =>
        {
            var_e8 = nullptr;
            let var_d8_1: i64 = 0;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_d0, "firecracker_versionReceived Erro…", 0x13);
            serde_core::ser::impls::_$LT$impl$u20$serde_core..ser..Serialize$u20$for$u20$$RF$T$GT$::serialize::h97575d381d09c2a7(&var_b8, arg2[2], arg2[3]);
            core::result::Result$LT$T$C$E$GT$::unwrap::hef5fd04729a685c2(&var_110, &var_b8);
            alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::h30c9a76b510ca40d(
                &var_b8, &var_e8, &var_d0, &var_110);
            core::ptr::drop_in_place$LT$core..option..Option$LT$serde_json..value..Value$GT$$GT$::h1aaef3c0fc09df79(&var_b8);
            let var_b0_1: i128 = var_e8;
            let var_a0_3: i64 = var_d8_1;
            var_b8 = 5;
            firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data::h84bb1b142bfd8b27(arg1, &var_b8);
            core::ptr::drop_in_place$LT$serde_json..value..Value$GT$::hfa257d85365bebbe(&var_b8)
        }
    }
}
