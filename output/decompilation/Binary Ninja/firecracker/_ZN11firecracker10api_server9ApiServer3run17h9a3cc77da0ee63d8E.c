
  int64_t firecracker::api_server::ApiServer::run::h9a3cc77da0ee63d8(int64_t* arg1, int64_t* arg2, int32_t* arg3, int64_t arg4, int64_t arg5, int64_t arg6)

{
    arg2[6] = arg6;
    void** rax;
    char* rdx;
    rax = vmm::seccomp::apply_filter::ha2d856b84fea1999(arg4, arg5);
    void** const var_318 = rax;
    char* var_310 = rdx;
    char const* const var_2d0;
    char const (** const var_228)[0xb8];
    char const* const var_198;
    
    if (rax & 1)
    {
        var_2d0 = rdx;
        var_198 = &var_2d0;
        int64_t (* var_190_1)(int64_t* arg1, int64_t* arg2) = vmm::seccomp::_::_$LT$impl$u20$core..fmt..Display$u20$for$u20$vmm..seccomp..InstallationError$GT$::fmt::h18da116329c01967;
        var_228 = &data_7a38b0;
        int64_t var_220_3 = 1;
        int64_t var_208_1 = 0;
        char const* const* var_218_2 = &var_198;
        int64_t var_210_1 = 1;
        core::panicking::panic_fmt::h96f341d36638c225(&var_228);
        /* no return */
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$vmm..seccomp..InstallationError$GT$$GT$::hbde140308c0d0ea8(&var_318);
    micro_http::server::HttpServer::start_server::h4580598236ea1b44(&var_228, arg2);
    core::result::Result$LT$T$C$E$GT$::expect::h62ed977e5695b52c(&var_228, 
        "Cannot start HTTP serverfirecrac…", 0x18);
    int64_t var_218;
    int64_t var_210;
    int64_t var_190;
    char const* const var_188;
    int64_t var_180;
    int64_t var_178;
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 3)
    {
        var_228 = &data_7a38c0;
        int64_t var_220_1 = 1;
        var_218 = 8;
        var_210 = {0};
        int64_t rax_2 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3950);
        var_198 = "firecracker::api_server'' API re…";
        var_190 = 0x17;
        var_188 = "firecracker::api_server'' API re…";
        var_180 = 0x17;
        var_178 = rax_2;
        log::__private_api::log_impl::h05439a06b798919c(&var_228, 3, &var_198);
    }
    
    vmm::logger::metrics::ProcessTimeReporter::report_start_time::h67a75e5214ba751b(arg3);
    vmm::logger::metrics::ProcessTimeReporter::report_cpu_start_time::h02c3e3b6acb37425(arg3);
    
    while (true)
    {
        micro_http::server::HttpServer::requests::hcd083e7d6c4a011b(&var_198, arg2);
        char const* const rax_3 = var_198;
        char const (** const** var_308)[0xb8];
        int64_t var_2f8;
        char const* const var_2c0;
        int64_t var_2b0;
        char const (** const* var_290)[0xb8];
        
        if (rax_3 == 0x1c)
        {
            int64_t var_f8_1 = var_180;
            int128_t var_108 = var_190;
            void var_e8;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hef2d34e09a2ad9a4(&var_e8, &var_108);
            char const* const* rdi_12 = &var_198;
            void* rsi_4 = &var_e8;
            
            while (true)
            {
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he7f624846651ab67(rdi_12, rsi_4);
                
                if (var_198 == -0x8000000000000000)
                    break;
                
                memcpy(&var_228, &var_198, 0x90);
                uint64_t var_2d8 = utils::time::get_time_us::h2f1504f27618db39(0);
                void var_c8;
                firecracker::api_server::ApiServer::run::_$u7b$$u7b$closure$u7d$$u7d$::h53249ac859967a66(&var_c8, arg1, &var_2d8, &var_228);
                int64_t var_1a0;
                int64_t var_38_1 = var_1a0;
                micro_http::server::HttpServer::respond::h25ab1045afddd46a(&var_2d0, arg2, &var_c8);
                char const (** var_260)[0xb8];
                
                if (var_2d0 != 0x1c)
                {
                    int64_t var_2a0;
                    int64_t var_2e8_1 = var_2a0;
                    var_2f8 = var_2b0;
                    var_308 = var_2c0;
                    var_318 = var_2d0;
                    
                    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
                    {
                        void** const* var_238 = &var_318;
                        void* const (* var_230_1)(int64_t* arg1, int64_t* arg2, int64_t arg3 @ rbx, 
                            int64_t arg4 @ rbp, void* arg5 @ r14, int64_t arg6, int64_t arg7, 
                            int64_t arg8, int64_t arg9, int64_t arg10, int64_t arg11) = _$LT$micro_http..common..ServerError$u20$as$u20$core..fmt..Display$GT$::fmt::h53961a708603c02b;
                        var_290 = &data_7a38f0;
                        int64_t var_288_2 = 1;
                        int64_t var_270_1 = 0;
                        void** const** var_280_1 = &var_238;
                        int64_t var_278_1 = 1;
                        int64_t rax_12 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3968);
                        var_260 = "firecracker::api_server'' API re…";
                        int64_t var_258_1 = 0x17;
                        char const* const var_250_1 = "firecracker::api_server'' API re…";
                        int64_t var_248_1 = 0x17;
                        int64_t var_240_1 = rax_12;
                        log::__private_api::log_impl::h05439a06b798919c(&var_290, 1, &var_260);
                    }
                    
                    core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(&var_318);
                }
                else
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$micro_http..common..ServerError$GT$$GT$::h31c816d2fd0d886e(&var_2d0);
                
                var_260 = utils::time::get_time_us::h2f1504f27618db39(0) - var_2d8;
                
                if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                    &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) >= 4)
                {
                    var_290 = &var_260;
                    uint64_t (* var_288_3)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
                    var_318 = &data_7a3900;
                    int64_t var_310_2 = 2;
                    var_2f8 = 0;
                    var_308 = &var_290;
                    int64_t var_300_2 = 1;
                    int64_t rax_16 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3980);
                    var_2d0 = "firecracker::api_server'' API re…";
                    int64_t var_2c8_2 = 0x17;
                    var_2c0 = "firecracker::api_server'' API re…";
                    int64_t var_2b8_2 = 0x17;
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
            if (rax_3 == 0x1a)
                break;
            
            int64_t var_168;
            int64_t var_1f8_1 = var_168;
            int64_t var_208;
            var_208 = var_178;
            var_218 = var_188;
            var_228 = var_198;
            
            if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
                &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0))
            {
                var_290 = &var_228;
                void* const (* var_288_1)(int64_t* arg1, int64_t* arg2, int64_t arg3 @ rbx, 
                    int64_t arg4 @ rbp, void* arg5 @ r14, int64_t arg6, int64_t arg7, int64_t arg8, 
                    int64_t arg9, int64_t arg10, int64_t arg11) = _$LT$micro_http..common..ServerError$u20$as$u20$core..fmt..Display$GT$::fmt::h53961a708603c02b;
                var_318 = &data_7a38e0;
                int64_t var_310_1 = 1;
                var_2f8 = 0;
                var_308 = &var_290;
                int64_t var_300_1 = 1;
                int64_t rax_6 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a39b0);
                var_2d0 = "firecracker::api_server'' API re…";
                int64_t var_2c8_1 = 0x17;
                var_2c0 = "firecracker::api_server'' API re…";
                int64_t var_2b8_1 = 0x17;
                var_2b0 = rax_6;
                log::__private_api::log_impl::h05439a06b798919c(&var_318, 1, &var_2d0);
            }
            
            core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(
                &var_228);
        }
    }
    
    micro_http::server::HttpServer::flush_outgoing_writes::hde693812e0f6e5a4(arg2);
    
    if (core::sync::atomic::atomic_load::hcd41a4cf8b7c5bb4(
        &log::MAX_LOG_LEVEL_FILTER::hba2cad573e31d8ba, 0) > 3)
    {
        var_228 = &data_7a38d0;
        int64_t var_220_2 = 1;
        int64_t var_218_1 = 8;
        var_210 = {0};
        int64_t rax_18 = log::__private_api::loc::h0b1bf3028c786bb7(&data_7a3998);
        var_318 = "firecracker::api_server'' API re…";
        int64_t var_310_3 = 0x17;
        char const* const var_308_1 = "firecracker::api_server'' API re…";
        int64_t var_300_3 = 0x17;
        int64_t var_2f8_1 = rax_18;
        log::__private_api::log_impl::h05439a06b798919c(&var_228, 4, &var_318);
    }
    
    core::ptr::drop_in_place$LT$micro_http..common..ServerError$GT$::hf4f515fdefad93c6(&var_198);
    return core::ptr::drop_in_place$LT$micro_http..server..HttpServer$GT$::hd1fab46234d2392f(arg2);
}
