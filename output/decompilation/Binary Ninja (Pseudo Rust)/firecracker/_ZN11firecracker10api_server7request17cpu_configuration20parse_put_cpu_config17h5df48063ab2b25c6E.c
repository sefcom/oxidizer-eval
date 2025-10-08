
  fn firecracker::api_server::request::cpu_configuration::parse_put_cpu_config::h5df48063ab2b25c6(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r12: i64 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47d0, 1);
    let mut var_120: i64;
    vmm::cpu_config::templates::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$$u5b$u8$u5d$$GT$$u20$for$u20$vmm..cpu_config..x86_64..custom_cpu_template..CustomCpuTemplate$GT$::try_from::hf71780470b9ca045(&var_120, arg2);
    let rax: i64 = var_120;
    let mut result: i64;
    let var_118: i8;
    
    if -(rax) != -0x8000000000000000
    {
        let var_117: i32;
        let mut var_c7_1: i32 = var_117;
        var_c7_1 = var_117;
        let var_108: i128;
        let var_b8_1: i128 = var_108;
        let var_f8: i128;
        let var_a8_1: i128 = var_f8;
        let var_e8: i128;
        let var_98_1: i128 = var_e8;
        let var_d0_1: i64 = rax;
        let var_c8_1: i8 = var_118;
        let var_110: i64;
        let var_c0_1: i64 = var_110;
        let mut var_d8: i64 = 0x17;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        result = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47e0, 1);
        arg1[1] = 4;
        arg1[2] = var_118;
    }
    *arg1 = r12;
    result
}
