
  fn firecracker::api_server::request::drive::parse_patch_drive::h6f67ec678affe019(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> u64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&vmm::logger::metrics::METRICS::h0c8a4aaa89fce6d9, 1);
    let mut result: u64;
    
    if arg4 == 0
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4640, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        let mut result_2: i8;
        let rdx_1: i8 = firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(
            &result_2, arg4, arg5);
        result = result_2;
        let mut var_150: i64;
        let mut var_148: i128;
        
        if result != 5
        {
            let var_157: i32;
            *arg1.byte_offset(0xc) = var_157;
            *arg1.byte_offset(9) = var_157;
            arg1[1] = result;
            arg1[2] = var_150;
            *arg1.byte_offset(0x18) = var_148;
            *arg1 = 1;
        }
        else
        {
            let mut var_1e0: i64 = arg2;
            let var_1d8_1: i64 = arg3;
            let var_1d0_1: i64 = 0;
            serde_json::de::from_trait::h0c95b441fcdb8800(&result_2, &var_1e0, rdx_1);
            let mut var_a0: i64;
            core::result::Result$LT$T$C$E$GT$::inspect_err::hc7b3c2374764fef6(&var_a0, &result_2);
            let rcx: i64 = var_a0;
            let result_3: u64;
            result = result_3;
            
            if rcx != 4
            {
                let mut var_1c8: i64 = rcx;
                let result_1: u64 = result;
                let var_90: i128;
                let var_60: i128;
                let var_50: i128;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_150, var_148, *var_60[8], var_50) == 0
                {
                    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4640, 1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_a0, "The id from the path does not ma…", 0x39);
                    *var_148[6] = var_90;
                    let var_152_1: i128 = var_a0;
                    arg1[1] = 0x301;
                    *arg1.byte_offset(0xa) = result_2;
                    arg1[3] = var_150;
                    arg1[4] = *var_148[6];
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$vmm..vmm_config..drive..BlockDeviceUpdateConfig$GT$::h3f0fc5844b47c722(&var_1c8);
                }
                
                let var_40: i128;
                let var_f0_1: i128 = var_40;
                let var_100_1: i128 = var_50;
                let var_110_1: i128 = var_60;
                let var_70: i128;
                let var_120_1: i128 = var_70;
                let var_80: i128;
                let var_130_1: i128 = var_80;
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
    
    result
}
