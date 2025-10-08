
  int64_t firecracker::api_server::request::balloon::parse_patch_balloon::h21a47967bf712a64(int64_t* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    int64_t result;
    int32_t var_120;
    int64_t* var_110;
    void** const var_d0;
    
    if (!arg4)
    {
        var_110 = arg2;
        int64_t var_108_1 = arg3;
        int64_t var_100_2 = 0;
        serde_json::de::from_trait::h888345223613cd04(&var_120, &var_110, arg3);
        
        if (var_120 != 1)
        {
            int32_t var_11c;
            int32_t var_c8_1 = var_11c;
            var_d0 = 0x1f;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &arg1[1], &var_d0);
            *arg1 = 0;
        }
        else
        {
            label_554cc1:
            int64_t result_1;
            result = result_1;
            arg1[1] = 4;
            arg1[2] = result;
            *arg1 = 1;
        }
    }
    else
    {
        int64_t var_f8 = arg4;
        uint64_t var_f0_1 = arg5;
        char rax_1;
        uint64_t rdx;
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "statisticsUnrecognized GET reque…", 0xa);
        int32_t var_c8;
        
        if (!rax_1)
        {
            var_110 = &var_f8;
            int64_t (* var_108_2)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
            var_d0 = &data_7a3830;
            var_c8 = 2;
            int64_t var_b0_1 = 0;
            int64_t** var_c0_1 = &var_110;
            int64_t var_b8_1 = 1;
            int128_t var_e8;
            core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_e8, 0, rdx, &var_d0);
            *var_d0[6] = var_e8;
            int64_t var_d8;
            var_c0_1 = var_d8;
            arg1[1] = 0x301;
            int64_t result_2;
            result = result_2;
            *(arg1 + 0xa) = var_d0;
            arg1[3] = result;
            arg1[4] = var_c0_1;
            *arg1 = 1;
        }
        else
        {
            var_110 = arg2;
            int64_t var_108 = arg3;
            int64_t var_100_1 = 0;
            serde_json::de::from_trait::h642a55a6eb6ae921(&var_120, &var_110, rdx);
            
            if (var_120 & 1)
                goto label_554cc1;
            
            var_c8 = *var_120[2];
            var_d0 = 0x20;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &arg1[1], &var_d0);
            *arg1 = 0;
        }
    }
    return result;
}
