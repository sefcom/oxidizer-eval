
  fn firecracker::api_server::request::net::parse_patch_net::h5c18d64fa12ea7f7(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: i64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
    let mut result: i8;
    
    if arg4 == 0
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
        arg1[1] = 0;
        *arg1 = 1;
    }
    else
    {
        let mut result_1: i8;
        firecracker::api_server::parsed_request::checked_id::hc78530a21c875bb9(&result_1, arg4, 
            arg5);
        result = result_1;
        let var_210: i64;
        let mut var_208: i128;
        
        if result != 5
        {
            let var_217: i32;
            *arg1.byte_offset(0xc) = var_217;
            *arg1.byte_offset(9) = var_217;
            arg1[1] = result;
            arg1[2] = var_210;
            *arg1.byte_offset(0x18) = var_208;
            *arg1 = 1;
        }
        else
        {
            let rbp_1: u64 = var_208;
            let mut var_240: i64 = var_210;
            let var_238_1: u64 = rbp_1;
            let mut var_258: i64 = arg2;
            let var_250_1: i64 = arg3;
            let var_248_1: i64 = 0;
            serde_json::de::from_trait::h486efc37a7061ee8(&result_1, &var_258);
            let mut var_160: *mut i64;
            result = core::result::Result$LT$T$C$E$GT$::inspect_err::h52ffa4223c546021(&var_160, 
                &result_1);
            let r12_1: *mut i64 = var_160;
            let var_158: i64;
            
            if r12_1 != 4
            {
                let mut var_150: *mut i64;
                let mut var_b8: ();
                memcpy(&var_b8, &var_150, 0x88);
                let mut var_c8: *mut i64 = r12_1;
                let var_c0_1: i64 = var_158;
                let mut var_212: i128;
                let var_40: i64;
                let var_38: i64;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(var_210, rbp_1, var_40, var_38) == 0
                {
                    let rdx_3: u64 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4650, 1);
                    var_258 = var_40;
                    let var_250_2: i64 = var_38;
                    var_160 = &var_240;
                    let var_158_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    var_150 = &var_258;
                    let var_148_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
                    result_1 = &data_7a3870;
                    let var_210_1: i64 = 3;
                    let var_1f8_1: i64 = 0;
                    var_208 = &var_160;
                    *var_208[8] = 2;
                    let mut var_230: i128;
                    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_230, 0, 
                        rdx_3, &result_1);
                    var_212 = var_230;
                    let var_220: i64;
                    *var_208[6] = var_220;
                    arg1[1] = 0x301;
                    *arg1.byte_offset(0xa) = result_1;
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
    
    result
}
