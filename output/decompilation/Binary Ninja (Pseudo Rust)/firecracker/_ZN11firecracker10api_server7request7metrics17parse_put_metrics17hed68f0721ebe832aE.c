
  fn firecracker::api_server::request::metrics::parse_put_metrics::hed68f0721ebe832a(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    let rdx_1: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47f0, 1);
    let mut var_f0: i64 = arg2;
    let rdx: i64;
    let var_e8: i64 = rdx;
    let var_e0: i64 = 0;
    let mut var_38: ();
    serde_json::de::from_trait::ha47c724f57520e5f(&var_38, &var_f0, rdx_1);
    let mut var_108: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h6c230df47e81c380(&var_108, &var_38);
    let rcx: i64 = var_108;
    let result_1: i64;
    let mut result: i64 = result_1;
    
    if -(rcx) != -0x8000000000000000
    {
        let var_e8_1: i64 = rcx;
        let result_2: i64 = result;
        let var_f8: i64;
        let var_d8_1: i64 = var_f8;
        var_f0 = 6;
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
