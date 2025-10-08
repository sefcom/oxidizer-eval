
  fn firecracker::api_server::request::mmds::parse_put_mmds_config::he5403443915ac8b8(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_108: i64 = arg2;
    let var_100: i64 = arg3;
    let var_f8: i64 = 0;
    let mut var_d0: i64;
    serde_json::de::from_trait::had22b5db4459960b(&var_d0, &var_108, arg3);
    let mut var_128: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h84a551e65a9c49c2(&var_128, &var_d0);
    let rcx: i64 = var_128;
    let mut result: i64;
    let var_120: i64;
    
    if -(rcx) != -0x8000000000000000
    {
        let var_10c: i32;
        let var_ac_1: i32 = var_10c;
        let var_10f: i32;
        let var_af_1: i32 = var_10f;
        let var_c8_1: i64 = rcx;
        let var_c0_1: i64 = var_120;
        let var_118: i64;
        let var_b8_1: i64 = var_118;
        let var_110: i8;
        let var_b0_1: i8 = var_110;
        var_d0 = 0x1a;
        let mut var_f0: i128;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &var_f0, &var_d0);
        
        if (var_110 & 1) == 0
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_f0, "PUT /mmds/config: V1 is deprecat…", 0x33);
        }
        
        let zmm0_1: i128 = var_f0;
        let var_e0: i128;
        *arg1.byte_offset(0x18) = var_e0;
        *arg1.byte_offset(8) = zmm0_1;
        result = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_120;
        result = 1;
    }
    *arg1 = result;
    result
}
