
  int64_t firecracker::api_server::request::snapshot::parse_put_snapshot_load::ha6addff4be7448a3(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_188 = arg2;
    int64_t var_180 = arg3;
    int64_t var_178 = 0;
    int64_t var_e8;
    serde_json::de::from_trait::h39ecb7e000ed83b6(&var_e8, &var_188, arg3);
    int64_t rcx = var_e8;
    int64_t result_2;
    int64_t result = result_2;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int128_t var_88;
        int88_t var_128_1 = var_88;
        int128_t var_b8;
        int128_t var_158_1 = var_b8;
        int128_t var_d8;
        var_178 = var_d8;
        var_188 = rcx;
        int64_t result_1 = result;
        int128_t var_a8;
        int64_t r13_1 = *var_a8[8];
        int64_t r14_1 = var_158_1;
        int32_t var_198;
        char const* const var_190_1;
        int128_t var_118_1;
        int128_t var_98;
        char rax;
        int64_t rcx_1;
        uint32_t rbp_1;
        uint64_t r12;
        uint64_t rsi_6;
        char const* const rdi_6;
        
        if (r13_1 != -0x8000000000000000)
        {
            if (r14_1 != -0x8000000000000000)
            {
                rdi_6 = "too many fields: either `mem_bac…";
                rsi_6 = 0x50;
                label_556bce:
                uint64_t rax_3 = _$LT$serde_json..error..Error$u20$as$u20$serde_core..de..Error$GT$::custom::h0845cebe398fb0d3(rdi_6, rsi_6);
                arg1[1] = 4;
                arg1[2] = rax_3;
                *arg1 = 1;
                return core::ptr::drop_in_place$LT$vmm..vmm_config..snapshot..LoadSnapshotConfig$GT$::h7ab30e2fd0caebdb(&var_188);
            }
            
            rbp_1 = *var_128_1[8];
            
            if (rbp_1 != 1)
                var_190_1 = nullptr;
            else
            {
                _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
                var_190_1 = "PUT /snapshot/load: mem_file_pat…";
            }
            
            var_118_1 = var_98;
            rax = var_128_1;
            var_198 = *var_128_1[1];
            var_198 = *var_128_1[4];
            r12 = rbp_1;
            r14_1 = -0x8000000000000000;
            rcx_1 = r13_1;
        }
        else
        {
            if (r14_1 == -0x8000000000000000)
            {
                rdi_6 = "missing field: either `mem_backe…";
                rsi_6 = 0x42;
                goto label_556bce;
            }
            
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            var_118_1 = var_158_1;
            rbp_1 = *var_128_1[8];
            r12 = 1;
            var_190_1 = "PUT /snapshot/load: mem_file_pat…";
            rax = 0;
            rcx_1 = r14_1;
        }
        *var_d8[8] = var_178;
        result_2 = var_188;
        char rsi_1 = 1;
        
        if (!(rbp_1 & 1))
            rsi_1 = *var_128_1[9];
        
        int128_t var_170;
        int128_t var_a8_1 = var_170;
        int128_t var_c8;
        var_98 = *var_c8[8];
        var_c8 = rcx_1;
        var_c8 = var_118_1;
        *var_b8[8] = rax;
        *var_b8[9] = var_198;
        *var_b8[0xc] = var_198;
        *var_98[8] = rsi_1;
        *var_98[9] = *var_128_1[0xa];
        var_e8 = 0x13;
        int128_t var_108;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &var_108, &var_e8);
        
        if (r12)
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_108, var_190_1, 0x52);
        
        int128_t zmm0_2 = var_108;
        int128_t var_f8;
        *(arg1 + 0x18) = var_f8;
        *(arg1 + 8) = zmm0_2;
        *arg1 = 0;
        
        if (r13_1 != -0x8000000000000000)
            /* tailcall */
            return core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::h1485ca768f6a6c3c(r14_1, *var_158_1[8]);
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
        *arg1 = 1;
    }
    
    return result;
}
