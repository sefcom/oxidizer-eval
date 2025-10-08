
  fn firecracker::api_server::request::logger::parse_put_logger::hc0001a3dcdfe9d15(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    let rdx_1: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4790, 1);
    let mut var_110: i64 = arg2;
    let rdx: i64;
    let var_108: i64 = rdx;
    let var_100: i64 = 0;
    let mut var_58: ();
    serde_json::de::from_trait::h63f5323c501f3365(&var_58, &var_110, rdx_1);
    let mut var_148: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h6f9f62146816f583(&var_148, &var_58);
    let rcx: i64 = var_148;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if rcx != -0x7fffffffffffffff
    {
        let var_118: i64;
        let var_d8_1: i64 = var_118;
        let var_128: i128;
        let var_e8_1: i128 = var_128;
        let var_138: i128;
        let var_f8_1: i128 = var_138;
        let var_108_1: i64 = rcx;
        let result_2: i64 = result;
        var_110 = 5;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_110);
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
