
  fn firecracker::api_server::request::mmds::parse_put_mmds::hb67f8353b350b258(arg1: *mut i64, arg2: i64, arg3: i64, arg4: i64, arg5: u64) -> i64

{
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4830, 1);
    let mut result: i64;
    let mut var_150: i8;
    let mut var_118: *mut i8;
    let mut var_e0: *mut *mut c_void;
    
    if arg4 == 0
    {
        let mut var_130: i64 = arg2;
        let var_128_1: i64 = arg3;
        let var_120_1: i64 = 0;
        serde_json::de::from_trait::h19ed231b4994ff1f(&var_118, &var_130);
        core::result::Result$LT$T$C$E$GT$::inspect_err::h368cdc317ff58cac(&var_150, &var_118);
        let rax_2: i8 = var_150;
        let result_1: i64;
        
        if rax_2 != 6
        {
            let var_14f: i32;
            let var_d4_1: i32 = var_14f;
            let var_d7_1: i32 = var_14f;
            let var_140: i128;
            let var_c8_1: i128 = var_140;
            let var_d8_1: i8 = rax_2;
            let result_2: i64 = result_1;
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
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg4, arg5, "configThe request was executed s…", 6) != 0
        {
            /* tailcall */
            return firecracker::api_server::request::mmds::parse_put_mmds_config::he5403443915ac8b8(
                arg1, arg2, arg3);
        }
        
        var_150 = arg4;
        let var_148: u64 = arg5;
        let rdx_2: u64 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4840, 1);
        var_118 = &var_150;
        let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
        var_e0 = &data_7a3850;
        let mut var_d8: i8;
        var_d8 = 2;
        let mut var_c8: i128;
        *var_c8[8] = 0;
        let mut var_d0_1: *mut *mut i8 = &var_118;
        var_c8 = 1;
        let mut var_f8: i128;
        core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_f8, 0, rdx_2, &var_e0);
        *var_e0[6] = var_f8;
        let var_e8: i64;
        var_d0_1 = var_e8;
        arg1[1] = 0x301;
        let var_d4: i32;
        result = *var_d4[2];
        *arg1.byte_offset(0xa) = var_e0;
        arg1[3] = result;
        arg1[4] = var_d0_1;
        *arg1 = 1;
    }
    result
}
