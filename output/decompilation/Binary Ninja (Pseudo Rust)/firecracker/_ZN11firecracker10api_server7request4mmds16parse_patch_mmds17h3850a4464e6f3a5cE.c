
  fn firecracker::api_server::request::mmds::parse_patch_mmds::h3850a4464e6f3a5c(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4690, 1);
    let mut var_f0: i64 = arg2;
    let rdx: i64;
    let var_e8: i64 = rdx;
    let var_e0: i64 = 0;
    let mut var_d8: i64;
    serde_json::de::from_trait::h19ed231b4994ff1f(&var_d8, &var_f0);
    let mut var_110: i8;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h29de2ba928515a56(&var_110, &var_d8);
    let rax: i8 = var_110;
    let mut result: i64;
    let result_1: i64;
    
    if rax != 6
    {
        let var_10f: i32;
        let var_cc_1: i32 = var_10f;
        let var_cf_1: i32 = var_10f;
        let var_100: i128;
        let var_c0_1: i128 = var_100;
        let var_d0_1: i8 = rax;
        let result_2: i64 = result_1;
        var_d8 = 0x14;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        result = result_1;
        arg1[1] = 4;
        arg1[2] = result;
    }
    *arg1 = r12;
    result
}
