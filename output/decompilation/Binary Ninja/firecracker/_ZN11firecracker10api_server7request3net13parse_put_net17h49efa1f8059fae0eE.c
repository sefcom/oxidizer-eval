
  int64_t firecracker::api_server::request::net::parse_put_net::h49efa1f8059fae0e(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4810, 1);
    char result;
    
    if (!arg4)
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4820, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        char result_1;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        int64_t var_250;
        int128_t var_248;
        
        if (result != 5)
        {
            int32_t var_257;
            *(arg1 + 0xc) = var_257;
            *(arg1 + 9) = var_257;
            arg1[1] = result;
            arg1[2] = var_250;
            *(arg1 + 0x18) = var_248;
            *arg1 = 1;
        }
        else
        {
            uint64_t r13_1 = var_248;
            int64_t var_280 = var_250;
            uint64_t var_278_1 = r13_1;
            int64_t var_298 = arg2;
            int64_t var_290_1 = arg3;
            int64_t var_288_1 = 0;
            serde_json::de::from_trait::h5d0ec113c53acd70(&result_1, &var_298);
            int64_t* var_1a0;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::h182637a9118db19f(&var_1a0, 
                &result_1);
            int64_t* rbp_1 = var_1a0;
            int64_t var_198;
            
            if (rbp_1 != 4)
            {
                int64_t* var_190;
                void var_d8;
                memcpy(&var_d8, &var_190, 0xa8);
                int64_t* var_e8 = rbp_1;
                int64_t var_e0_1 = var_198;
                int64_t var_60;
                int64_t var_58;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_250, r13_1, var_60, var_58))
                {
                    uint64_t rdx_3 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4820, 1);
                    var_298 = var_60;
                    int64_t var_290_2 = var_58;
                    var_1a0 = &var_280;
                    int64_t (* var_198_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_190 = &var_298;
                    int64_t (* var_188_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    result_1 = &data_7a3870;
                    int64_t var_250_1 = 3;
                    int64_t var_238_1 = 0;
                    var_248 = &var_1a0;
                    *var_248[8] = 2;
                    int128_t var_270;
                    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_270, 0, 
                        rdx_3, &result_1);
                    int128_t var_252_1 = var_270;
                    int64_t var_260;
                    *var_248[6] = var_260;
                    arg1[1] = 0x301;
                    *(arg1 + 0xa) = result_1;
                    arg1[3] = var_250_1;
                    arg1[4] = *var_248[6];
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$vmm..vmm_config..net..NetworkInterfaceConfig$GT$::he5a65d49aff1c8d9(&var_e8);
                }
                
                result = firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], &var_e8);
                *arg1 = 0;
            }
            else
            {
                arg1[1] = 4;
                arg1[2] = var_198;
                *arg1 = 1;
            }
        }
    }
    
    return result;
}
