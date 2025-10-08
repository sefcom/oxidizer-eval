
  uint64_t firecracker::api_server::request::drive::parse_patch_drive::h6f67ec678affe019(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&vmm::logger::metrics::METRICS::h0c8a4aaa89fce6d9, 1);
    uint64_t result;
    
    if (!arg4)
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4640, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        char result_2;
        char rdx_1 = firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(
            &result_2, arg4, arg5);
        result = result_2;
        int64_t var_150;
        int128_t var_148;
        
        if (result != 5)
        {
            int32_t var_157;
            *(arg1 + 0xc) = var_157;
            *(arg1 + 9) = var_157;
            arg1[1] = result;
            arg1[2] = var_150;
            *(arg1 + 0x18) = var_148;
            *arg1 = 1;
        }
        else
        {
            int64_t var_1e0 = arg2;
            int64_t var_1d8_1 = arg3;
            int64_t var_1d0_1 = 0;
            serde_json::de::from_trait::h0c95b441fcdb8800(&result_2, &var_1e0, rdx_1);
            int64_t var_a0;
            core::result::Result$LT$T$C$E$GT$::inspect_err::hc7b3c2374764fef6(&var_a0, &result_2);
            int64_t rcx = var_a0;
            uint64_t result_3;
            result = result_3;
            
            if (rcx != 4)
            {
                int64_t var_1c8 = rcx;
                uint64_t result_1 = result;
                int128_t var_90;
                int128_t var_60;
                int128_t var_50;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_150, var_148, *var_60[8], var_50))
                {
                    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4640, 1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_a0, "The id from the path does not ma…", 0x39);
                    *var_148[6] = var_90;
                    int128_t var_152_1 = var_a0;
                    arg1[1] = 0x301;
                    *(arg1 + 0xa) = result_2;
                    arg1[3] = var_150;
                    arg1[4] = *var_148[6];
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$vmm..vmm_config..drive..BlockDeviceUpdateConfig$GT$::h3f0fc5844b47c722(&var_1c8);
                }
                
                int128_t var_40;
                int128_t var_f0_1 = var_40;
                int128_t var_100_1 = var_50;
                int128_t var_110_1 = var_60;
                int128_t var_70;
                int128_t var_120_1 = var_70;
                int128_t var_80;
                int128_t var_130_1 = var_80;
                var_148 = var_90;
                var_150 = var_1c8;
                result_2 = 0x21;
                result = firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], &result_2);
                *arg1 = 0;
            }
            else
            {
                arg1[1] = 4;
                arg1[2] = result;
                *arg1 = 1;
            }
        }
    }
    
    return result;
}
