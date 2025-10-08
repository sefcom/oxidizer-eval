
  fn firecracker::api_server::request::balloon::parse_patch_balloon::h21a47967bf712a64(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: i64, arg5: u64) -> i64

{
    let mut result: i64;
    let mut var_120: i32;
    let mut var_110: *mut i64;
    let mut var_d0: *mut *mut c_void;
    
    if arg4 == 0
    {
        var_110 = arg2;
        let var_108_1: i64 = arg3;
        let var_100_2: i64 = 0;
        serde_json::de::from_trait::h888345223613cd04(&var_120, &var_110, arg3);
        
        if var_120 != 1
        {
            let var_11c: i32;
            let var_c8_1: i32 = var_11c;
            var_d0 = 0x1f;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &arg1[1], &var_d0);
            *arg1 = 0;
        }
        else
        {
            'label_554cc1:
            let result_1: i64;
            result = result_1;
            arg1[1] = 4;
            arg1[2] = result;
            *arg1 = 1;
        }
    }
    else
    {
        let mut var_f8: i64 = arg4;
        let var_f0_1: u64 = arg5;
        let mut rax_1: i8;
        let mut rdx: u64;
        rax_1 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "statisticsUnrecognized GET reque…", 0xa);
        let mut var_c8: i32;
        
        if rax_1 == 0
        {
            var_110 = &var_f8;
            let var_108_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
            var_d0 = &data_7a3830;
            var_c8 = 2;
            let var_b0_1: i64 = 0;
            let mut var_c0_1: *mut *mut i64 = &var_110;
            let var_b8_1: i64 = 1;
            let mut var_e8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_e8, 0, rdx, &var_d0);
            *var_d0[6] = var_e8;
            let var_d8: i64;
            var_c0_1 = var_d8;
            arg1[1] = 0x301;
            let result_2: i64;
            result = result_2;
            *arg1.byte_offset(0xa) = var_d0;
            arg1[3] = result;
            arg1[4] = var_c0_1;
            *arg1 = 1;
        }
        else
        {
            var_110 = arg2;
            let var_108: i64 = arg3;
            let var_100_1: i64 = 0;
            serde_json::de::from_trait::h642a55a6eb6ae921(&var_120, &var_110, rdx);
            
            if (var_120 & 1) != 0
            {
                goto 'label_554cc1;
            }
            
            var_c8 = *var_120[2];
            var_d0 = 0x20;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &arg1[1], &var_d0);
            *arg1 = 0;
        }
    }
    result
}
