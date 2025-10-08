
  fn firecracker::api_server::ApiServer::run::h9a3cc77da0ee63d8(arg1: *mut i64, arg2: *mut i64, arg3: *mut i32, arg4: i64, arg5: i64, arg6: i64) -> i64

{
    arg2[6] = arg6;
    let mut rax: *mut *mut c_void;
    let mut rdx: *mut i8;
    rax = vmm::seccomp::apply_filter::ha2d856b84fea1999(arg4, arg5);
    let mut var_318: *mut *mut c_void = rax;
    let var_310: *mut i8 = rdx;
    let mut var_2d0: *const i8;
    let mut var_228: *mut *mut [i8; 0xb8];
    let mut var_198: *const i8;
    
    if (rax & 1) != 0
    {
        var_2d0 = rdx;
        var_198 = &var_2d0;
        let var_190_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = vmm::seccomp::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$vmm..seccomp..InstallationError$GT$::fmt::h18da116329c01967;
        var_228 = &data_7a38b0;
        let var_220_3: i64 = 1;
        let var_208_1: i64 = 0;
        let var_218_2: *const *const i8 = &var_198;
        let var_210_1: i64 = 1;
        core::panicking::panic_fmt::h96f341d36638c225(&var_228);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$vmm..seccomp..InstallationError$GT$$GT$::hbde140308c0d0ea8(&var_318);
    micro_http::server::HttpServer::start_server::h4580598236ea1b44(&var_228, arg2);
    core::result::Result$LT$T$C$E$GT$::expect::h62ed977e5695b52c(&var_228, 
        "Cannot start HTTP serverfirecrac…", 0x18);
    let mut var_218: i64;
    let mut var_210: i64;
    let mut var_190: i64;
    let mut var_188: *const i8;
    let mut var_180: i64;
    let mut var_178: i64;
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3
    {
        var_228 = &data_7a38c0;
        let var_220_1: i64 = 1;
        var_218 = 8;
        var_210 = {0};
        let rax_2: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3950);
        var_198 = "firecracker::api_server'' API re…";
        var_190 = 0x17;
        var_188 = "firecracker::api_server'' API re…";
        var_180 = 0x17;
        var_178 = rax_2;
        log::__private_api::log_impl::h05439a06b798919c(&var_228, 3, &var_198);
    }
    
    vmm::logger::metrics::ProcessTimeReporter::report_start_time::h67a75e5214ba751b(arg3);
    vmm::logger::metrics::ProcessTimeReporter::report_cpu_start_time::h02c3e3b6acb37425(arg3);
    
    loop
    {
        micro_http::server::HttpServer::requests::hcd083e7d6c4a011b(&var_198, arg2);
        let rax_3: *const i8 = var_198;
        let mut var_308: *mut *const *mut *mut [i8; 0xb8];
        let mut var_2f8: i64;
        let mut var_2c0: *const i8;
        let mut var_2b0: i64;
        let mut var_290: *const *mut *mut [i8; 0xb8];
        
        if rax_3 == 0x1c
        {
            let var_f8_1: i64 = var_180;
            let mut var_108: i128 = var_190;
            let mut var_e8: ();
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hef2d34e09a2ad9a4(&var_e8, &var_108);
            let mut rdi_12: *const *const i8 = &var_198;
            let mut rsi_4: *mut c_void = &var_e8;
            
            loop
            {
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7f624846651ab67(rdi_12, rsi_4);
                
                if var_198 == -0x8000000000000000
                {
                    break;
                }
                
                memcpy(&var_228, &var_198, 0x90);
                let mut var_2d8: u64 = utils::time::get_time_us::h2f1504f27618db39(0);
                let mut var_c8: ();
                firecracker::api_server::ApiServer::run::_$u7b$$u7b$closure$u7d$$u7d$::h53249ac859967a66(&var_c8, arg1, &var_2d8, &var_228);
                let var_1a0: i64;
                let var_38_1: i64 = var_1a0;
                micro_http::server::HttpServer::respond::h25ab1045afddd46a(&var_2d0, arg2, &var_c8);
                let mut var_260: *mut *mut [i8; 0xb8];
                
                if var_2d0 != 0x1c
                {
                    let var_2a0: i64;
                    let var_2e8_1: i64 = var_2a0;
                    var_2f8 = var_2b0;
                    var_308 = var_2c0;
                    var_318 = var_2d0;
                    
                    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
                    {
                        let mut var_238: *const *mut *mut c_void = &var_318;
                        let var_230_1: fn(arg1: *mut i64, arg2: *mut i64, arg3: i64 @ rbx, 
                            arg4: i64 @ rbp, arg5: *mut c_void @ r14, arg6: i64, arg7: i64, 
                            arg8: i64, arg9: i64, arg10: i64, arg11: i64) -> *mut c_void = _$LT$micro_http..common..ServerError$u20$as$u20$core..fmt..Display$GT$::fmt::h53961a708603c02b;
                        var_290 = &data_7a38f0;
                        let var_288_2: i64 = 1;
                        let var_270_1: i64 = 0;
                        let var_280_1: *mut *const *mut *mut c_void = &var_238;
                        let var_278_1: i64 = 1;
                        let rax_12: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3968);
                        var_260 = "firecracker::api_server'' API re…";
                        let var_258_1: i64 = 0x17;
                        let var_250_1: *const i8 = "firecracker::api_server'' API re…";
                        let var_248_1: i64 = 0x17;
                        let var_240_1: i64 = rax_12;
                        log::__private_api::log_impl::h05439a06b798919c(&var_290, 1, &var_260);
                    }
                    
                    core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(&var_318);
                }
                else
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$micro_http..common..ServerError$GT$$GT$::h31c816d2fd0d886e(&var_2d0);
                }
                
                var_260 = utils::time::get_time_us::h2f1504f27618db39(0) - var_2d8;
                
                if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                    &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 4
                {
                    var_290 = &var_260;
                    let var_288_3: fn(arg1: *mut i64, arg2: *mut i64) -> u64 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_318 = &data_7a3900;
                    let var_310_2: i64 = 2;
                    var_2f8 = 0;
                    var_308 = &var_290;
                    let var_300_2: i64 = 1;
                    let rax_16: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3980);
                    var_2d0 = "firecracker::api_server'' API re…";
                    let var_2c8_2: i64 = 0x17;
                    var_2c0 = "firecracker::api_server'' API re…";
                    let var_2b8_2: i64 = 0x17;
                    var_2b0 = rax_16;
                    log::__private_api::log_impl::h05439a06b798919c(&var_318, 4, &var_2d0);
                }
                
                core::ptr::drop_in_place$LT$micro_http..server..ServerRequest$GT$::h6eb788a57063f063(&var_228);
                rdi_12 = &var_198;
                rsi_4 = &var_e8;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$micro_http..server..ServerRequest$GT$$GT$::ha7593e3123a29b40(&var_e8);
        }
        else
        {
            if rax_3 == 0x1a
            {
                break;
            }
            
            let var_168: i64;
            let var_1f8_1: i64 = var_168;
            let mut var_208: i64;
            var_208 = var_178;
            var_218 = var_188;
            var_228 = var_198;
            
            if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) != 0
            {
                var_290 = &var_228;
                let var_288_1: fn(arg1: *mut i64, arg2: *mut i64, arg3: i64 @ rbx, arg4: i64 @ rbp, 
                    arg5: *mut c_void @ r14, arg6: i64, arg7: i64, arg8: i64, arg9: i64, 
                    arg10: i64, arg11: i64) -> *mut c_void = _$LT$micro_http..common..ServerError$u20$as$u20$core..fmt..Display$GT$::fmt::h53961a708603c02b;
                var_318 = &data_7a38e0;
                let var_310_1: i64 = 1;
                var_2f8 = 0;
                var_308 = &var_290;
                let var_300_1: i64 = 1;
                let rax_6: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39b0);
                var_2d0 = "firecracker::api_server'' API re…";
                let var_2c8_1: i64 = 0x17;
                var_2c0 = "firecracker::api_server'' API re…";
                let var_2b8_1: i64 = 0x17;
                var_2b0 = rax_6;
                log::__private_api::log_impl::h05439a06b798919c(&var_318, 1, &var_2d0);
            }
            
            core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(
                &var_228);
        }
    }
    
    micro_http::server::HttpServer::flush_outgoing_writes::hde693812e0f6e5a4(arg2);
    
    if core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 3
    {
        var_228 = &data_7a38d0;
        let var_220_2: i64 = 1;
        let var_218_1: i64 = 8;
        var_210 = {0};
        let rax_18: i64 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3998);
        var_318 = "firecracker::api_server'' API re…";
        let var_310_3: i64 = 0x17;
        let var_308_1: *const i8 = "firecracker::api_server'' API re…";
        let var_300_3: i64 = 0x17;
        let var_2f8_1: i64 = rax_18;
        log::__private_api::log_impl::h05439a06b798919c(&var_228, 4, &var_318);
    }
    
    core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(&var_198);
    core::ptr::drop_in_place$LT$micro_http..server..HttpServer$GT$::hd1fab46234d2392f(arg2)
}
