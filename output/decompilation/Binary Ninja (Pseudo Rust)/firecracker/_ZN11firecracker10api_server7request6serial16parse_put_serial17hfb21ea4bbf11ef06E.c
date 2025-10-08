
  fn firecracker::api_server::request::serial::parse_put_serial::hfb21ea4bbf11ef06(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut r12: i64 = 1;
    let rdx: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4870, 1);
    let mut var_f0: i64 = arg2;
    let var_e0: i64 = 0;
    let mut var_38: ();
    serde_json::de::from_trait::h7c0901b67b7a0e76(&var_38, &var_f0, rdx);
    core::result::Result$LT$T$C$E$GT$::inspect_err::hcddf4eeebb18306f(&var_f0, &var_38);
    let rcx: i64 = var_f0;
    let mut result: i64 = arg3;
    
    if rcx != -0x7fffffffffffffff
    {
        let var_e8_1: i64 = rcx;
        let result_1: i64 = result;
        let var_d8_1: i64 = var_e0;
        var_f0 = 7;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_f0);
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
