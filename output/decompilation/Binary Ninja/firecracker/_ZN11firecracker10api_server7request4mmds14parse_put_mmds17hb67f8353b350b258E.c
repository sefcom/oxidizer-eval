
  int64_t firecracker::api_server::request::mmds::parse_put_mmds::hb67f8353b350b258(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, uint64_t arg5)

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4830, 1);
    int64_t result;
    char var_150;
    char* var_118;
    void** const var_e0;
    
    if (!arg4)
    {
        int64_t var_130 = arg2;
        int64_t var_128_1 = arg3;
        int64_t var_120_1 = 0;
        serde_json::de::from_trait::h19ed231b4994ff1f(&var_118, &var_130);
        core::result::Result$LT$T$C$E$GT$::inspect_err::h368cdc317ff58cac(&var_150, &var_118);
        char rax_2 = var_150;
        int64_t result_1;
        
        if (rax_2 != 6)
        {
            int32_t var_14f;
            int32_t var_d4_1 = var_14f;
            int32_t var_d7_1 = var_14f;
            int128_t var_140;
            int128_t var_c8_1 = var_140;
            char var_d8_1 = rax_2;
            int64_t result_2 = result_1;
            var_e0 = 0x16;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &arg1[1], &var_e0);
            *arg1 = 0;
        }
        else
        {
            result = result_1;
            arg1[1] = 4;
            arg1[2] = result;
            *arg1 = 1;
        }
    }
    else
    {
        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "configThe request was executed s…", 6))
            /* tailcall */
            return firecracker::api_server::request::mmds::parse_put_mmds_config::he5403443915ac8b8(
                arg1, arg2, arg3);
        
        var_150 = arg4;
        uint64_t var_148 = arg5;
        uint64_t rdx_2 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4840, 1);
        var_118 = &var_150;
        int64_t (* var_110_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
        var_e0 = &data_7a3850;
        char var_d8;
        var_d8 = 2;
        int128_t var_c8;
        *var_c8[8] = 0;
        char** var_d0_1 = &var_118;
        var_c8 = 1;
        int128_t var_f8;
        core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_f8, 0, rdx_2, &var_e0);
        *var_e0[6] = var_f8;
        int64_t var_e8;
        var_d0_1 = var_e8;
        arg1[1] = 0x301;
        int32_t var_d4;
        result = *var_d4[2];
        *(arg1 + 0xa) = var_e0;
        arg1[3] = result;
        arg1[4] = var_d0_1;
        *arg1 = 1;
    }
    return result;
}
