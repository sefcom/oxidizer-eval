
  int64_t firecracker::api_server::request::net::parse_patch_net::h5c18d64fa12ea7f7(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
    char result;
    
    if (!arg4)
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        char result_1;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        int64_t var_210;
        int128_t var_208;
        
        if (result != 5)
        {
            int32_t var_217;
            *(arg1 + 0xc) = var_217;
            *(arg1 + 9) = var_217;
            arg1[1] = result;
            arg1[2] = var_210;
            *(arg1 + 0x18) = var_208;
            *arg1 = 1;
        }
        else
        {
            uint64_t rbp_1 = var_208;
            int64_t var_240 = var_210;
            uint64_t var_238_1 = rbp_1;
            int64_t var_258 = arg2;
            int64_t var_250_1 = arg3;
            int64_t var_248_1 = 0;
            serde_json::de::from_trait::h486efc37a7061ee8(&result_1, &var_258);
            int64_t* var_160;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::h52ffa4223c546021(&var_160, 
                &result_1);
            int64_t* r12_1 = var_160;
            int64_t var_158;
            
            if (r12_1 != 4)
            {
                int64_t* var_150;
                void var_b8;
                memcpy(&var_b8, &var_150, 0x88);
                int64_t* var_c8 = r12_1;
                int64_t var_c0_1 = var_158;
                int128_t var_212;
                int64_t var_40;
                int64_t var_38;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_210, rbp_1, var_40, var_38))
                {
                    uint64_t rdx_3 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
                    var_258 = var_40;
                    int64_t var_250_2 = var_38;
                    var_160 = &var_240;
                    int64_t (* var_158_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_150 = &var_258;
                    int64_t (* var_148_1)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    result_1 = &data_7a3870;
                    int64_t var_210_1 = 3;
                    int64_t var_1f8_1 = 0;
                    var_208 = &var_160;
                    *var_208[8] = 2;
                    int128_t var_230;
                    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_230, 0, 
                        rdx_3, &result_1);
                    var_212 = var_230;
                    int64_t var_220;
                    *var_208[6] = var_220;
                    arg1[1] = 0x301;
                    *(arg1 + 0xa) = result_1;
                    arg1[3] = var_210_1;
                    arg1[4] = *var_208[6];
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$vmm..vmm_config..net..NetworkInterfaceUpdateConfig$GT$::h20791c9dbec41ac5(&var_c8);
                }
                
                memcpy(&*var_212[2], &var_c8, 0x98);
                result_1 = 0x22;
                result = firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], &result_1);
                *arg1 = 0;
            }
            else
            {
                arg1[1] = 4;
                arg1[2] = var_158;
                *arg1 = 1;
            }
        }
    }
    
    return result;
}
