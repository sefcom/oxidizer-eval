
  int64_t firecracker::api_server::request::drive::parse_put_drive::hac7266bd766379d2(int64_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4770, 1);
    char result;
    
    if (!arg4)
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4780, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        char result_1;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        int64_t var_228;
        int128_t var_220;
        
        if (result != 5)
        {
            int32_t var_22f;
            *(arg1 + 0xc) = var_22f;
            *(arg1 + 9) = var_22f;
            arg1[1] = result;
            arg1[2] = var_228;
            *(arg1 + 0x18) = var_220;
            *arg1 = 1;
        }
        else
        {
            int64_t var_248 = arg2;
            int64_t var_240_1 = arg3;
            int64_t var_238_1 = 0;
            serde_json::de::from_trait::h6520ce0bc022afdd(&result_1, &var_248);
            int64_t var_d0;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::hfc34a3d8808b1b29(&var_d0, 
                &result_1);
            int64_t r13_1 = var_d0;
            int64_t var_c8;
            
            if (r13_1 != 4)
            {
                void var_168;
                int64_t var_c0;
                memcpy(&var_168, &var_c0, 0x98);
                int64_t var_178 = r13_1;
                int64_t var_170_1 = var_c8;
                int64_t var_130;
                int64_t var_128;
                int64_t r14_2;
                int128_t var_22a;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_228, var_220, var_130, var_128))
                {
                    r14_2 = 1;
                    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4780, 1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_d0, "The id from the path does not ma…", 0x39);
                    *var_220[6] = var_c0;
                    var_22a = var_d0;
                    arg1[1] = 0x301;
                    *(arg1 + 0xa) = result_1;
                    arg1[3] = var_228;
                    arg1[4] = *var_220[6];
                    result = core::ptr::drop_in_place$LT$vmm..vmm_config..drive..BlockDeviceConfig$GT$::ha6151e7be1d29869(&var_178);
                }
                else
                {
                    memcpy(&*var_22a[2], &var_178, 0xa8);
                    result_1 = 0x11;
                    result = firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(&arg1[1], &result_1);
                    r14_2 = 0;
                }
                *arg1 = r14_2;
            }
            else
            {
                arg1[1] = 4;
                arg1[2] = var_c8;
                *arg1 = 1;
            }
        }
    }
    
    return result;
}
