
  fn firecracker::api_server::request::net::parse_put_net::h49efa1f8059fae0e(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4810, 1);
    let mut result: i8;
    
    if arg4 == 0
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4820, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        let mut result_1: i8;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        let var_250: i64;
        let mut var_248: i128;
        
        if result != 5
        {
            let var_257: i32;
            *arg1.byte_offset(0xc) = var_257;
            *arg1.byte_offset(9) = var_257;
            arg1[1] = result;
            arg1[2] = var_250;
            *arg1.byte_offset(0x18) = var_248;
            *arg1 = 1;
        }
        else
        {
            let r13_1: u64 = var_248;
            let mut var_280: i64 = var_250;
            let var_278_1: u64 = r13_1;
            let mut var_298: i64 = arg2;
            let var_290_1: i64 = arg3;
            let var_288_1: i64 = 0;
            serde_json::de::from_trait::h5d0ec113c53acd70(&result_1, &var_298);
            let mut var_1a0: *mut i64;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::h182637a9118db19f(&var_1a0, 
                &result_1);
            let rbp_1: *mut i64 = var_1a0;
            let var_198: i64;
            
            if rbp_1 != 4
            {
                let mut var_190: *mut i64;
                let mut var_d8: ();
                memcpy(&var_d8, &var_190, 0xa8);
                let mut var_e8: *mut i64 = rbp_1;
                let var_e0_1: i64 = var_198;
                let var_60: i64;
                let var_58: i64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_250, r13_1, var_60, var_58) == 0
                {
                    let rdx_3: u64 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4820, 1);
                    var_298 = var_60;
                    let var_290_2: i64 = var_58;
                    var_1a0 = &var_280;
                    let var_198_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_190 = &var_298;
                    let var_188_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    result_1 = &data_7a3870;
                    let var_250_1: i64 = 3;
                    let var_238_1: i64 = 0;
                    var_248 = &var_1a0;
                    *var_248[8] = 2;
                    let mut var_270: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_270, 0, 
                        rdx_3, &result_1);
                    let var_252_1: i128 = var_270;
                    let var_260: i64;
                    *var_248[6] = var_260;
                    arg1[1] = 0x301;
                    *arg1.byte_offset(0xa) = result_1;
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
    
    result
}
