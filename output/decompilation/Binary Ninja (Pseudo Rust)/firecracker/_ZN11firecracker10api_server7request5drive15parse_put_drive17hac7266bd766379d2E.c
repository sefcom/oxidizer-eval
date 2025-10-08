
  fn firecracker::api_server::request::drive::parse_put_drive::hac7266bd766379d2(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4770, 1);
    let mut result: i8;
    
    if arg4 == 0
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4780, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        let mut result_1: i8;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        let var_228: i64;
        let mut var_220: i128;
        
        if result != 5
        {
            let var_22f: i32;
            *arg1.byte_offset(0xc) = var_22f;
            *arg1.byte_offset(9) = var_22f;
            arg1[1] = result;
            arg1[2] = var_228;
            *arg1.byte_offset(0x18) = var_220;
            *arg1 = 1;
        }
        else
        {
            let mut var_248: i64 = arg2;
            let var_240_1: i64 = arg3;
            let var_238_1: i64 = 0;
            serde_json::de::from_trait::h6520ce0bc022afdd(&result_1, &var_248);
            let mut var_d0: i64;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::hfc34a3d8808b1b29(&var_d0, 
                &result_1);
            let r13_1: i64 = var_d0;
            let var_c8: i64;
            
            if r13_1 != 4
            {
                let mut var_168: ();
                let mut var_c0: i64;
                memcpy(&var_168, &var_c0, 0x98);
                let mut var_178: i64 = r13_1;
                let var_170_1: i64 = var_c8;
                let var_130: i64;
                let var_128: i64;
                let mut r14_2: i64;
                let mut var_22a: i128;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_228, var_220, var_130, var_128) == 0
                {
                    r14_2 = 1;
                    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4780, 1);
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_d0, "The id from the path does not ma…", 0x39);
                    *var_220[6] = var_c0;
                    var_22a = var_d0;
                    arg1[1] = 0x301;
                    *arg1.byte_offset(0xa) = result_1;
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
    
    result
}
