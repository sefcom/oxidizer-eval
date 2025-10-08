
  int64_t firecracker::api_server::request::cpu_configuration::parse_put_cpu_config::h5df48063ab2b25c6(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47d0, 1);
    int64_t var_120;
    vmm::cpu_config::templates::_$LT$impl$u20$core..convert..TryFrom$LT$$RF$$u5b$u8$u5d$$GT$$u20$for$u20$vmm..cpu_config..x86_64..custom_cpu_template..CustomCpuTemplate$GT$::try_from::hf71780470b9ca045(&var_120, arg2);
    int64_t rax = var_120;
    int64_t result;
    char var_118;
    
    if (-(rax) != -0x8000000000000000)
    {
        int32_t var_117;
        int32_t var_c7_1 = var_117;
        var_c7_1 = var_117;
        int128_t var_108;
        int128_t var_b8_1 = var_108;
        int128_t var_f8;
        int128_t var_a8_1 = var_f8;
        int128_t var_e8;
        int128_t var_98_1 = var_e8;
        int64_t var_d0_1 = rax;
        char var_c8_1 = var_118;
        int64_t var_110;
        int64_t var_c0_1 = var_110;
        int64_t var_d8 = 0x17;
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
    return result;
}
