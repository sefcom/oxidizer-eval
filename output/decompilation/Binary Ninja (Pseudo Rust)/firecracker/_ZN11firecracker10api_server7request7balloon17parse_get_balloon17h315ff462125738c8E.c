
  fn firecracker::api_server::request::balloon::parse_get_balloon::h315ff462125738c8(arg1: *mut i64, arg2: i64, arg3: u64) -> i64

{
    let mut var_c0: *mut *mut [i8; 0x8e];
    
    if arg2 == 0
    {
        var_c0 = 9;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_c0);
        *arg1 = 0;
        return -0x8000000000000000;
    }
    
    let mut var_f8: i64 = arg2;
    let var_f0: u64 = arg3;
    let mut rax: i8;
    let mut rdx: u64;
    rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg2, arg3, "statisticsUnrecognized GET reque…", 0xa);
    
    if rax != 0
    {
        var_c0 = 0xa;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_c0);
        *arg1 = 0;
        return -0x8000000000000000;
    }
    
    let mut var_e8: *mut i64 = &var_f8;
    let var_e0: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
    var_c0 = &data_7a3810;
    let result: i64 = 2;
    let var_a0: i64 = 0;
    let mut var_b0: *mut *mut i64 = &var_e8;
    let var_a8: i64 = 1;
    let mut var_d8: i128;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_d8, 0, rdx, &var_c0);
    *var_c0[6] = var_d8;
    let var_c8: i64;
    var_b0 = var_c8;
    arg1[1] = 0x301;
    *arg1.byte_offset(0xa) = var_c0;
    arg1[3] = result;
    arg1[4] = var_b0;
    *arg1 = 1;
    result
}
