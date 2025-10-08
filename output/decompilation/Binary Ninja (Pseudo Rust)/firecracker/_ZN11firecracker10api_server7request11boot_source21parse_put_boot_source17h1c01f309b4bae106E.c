
  fn firecracker::api_server::request::boot_source::parse_put_boot_source::h1c01f309b4bae106(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    let rdx_1: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4750, 1);
    let mut var_138: i64 = arg2;
    let rdx: i64;
    let var_130: i64 = rdx;
    let var_128: i64 = 0;
    let mut var_d8: i64;
    serde_json::de::from_trait::h63c0f3896a991196(&var_d8, &var_138, rdx_1);
    let mut var_120: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h292c18eddc5e152a(&var_120, &var_d8);
    let rcx: i64 = var_120;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if -(rcx) != -0x8000000000000000
    {
        let var_e0: i64;
        let var_90_1: i64 = var_e0;
        let var_f0: i128;
        let var_a0_1: i128 = var_f0;
        let var_100: i128;
        let var_b0_1: i128 = var_100;
        let var_110: i128;
        let var_c0_1: i128 = var_110;
        let var_d0_1: i64 = rcx;
        let result_2: i64 = result;
        var_d8 = 4;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r12;
    result
}
