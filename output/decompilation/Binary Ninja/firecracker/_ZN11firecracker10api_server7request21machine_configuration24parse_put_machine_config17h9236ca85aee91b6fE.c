
  int64_t firecracker::api_server::request::machine_configuration::parse_put_machine_config::h9236ca85aee91b6f(int64_t* arg1, int64_t arg2)

{
    int64_t r13 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47b0, 1);
    int64_t var_1c8 = arg2;
    int64_t rdx;
    int64_t var_1c0 = rdx;
    int64_t var_1b8 = 0;
    int64_t var_e0;
    serde_json::de::from_trait::hc5d4db7384273cd9(&var_e0, &var_1c8);
    int64_t var_138;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h98ff51c38463ee7b(&var_138, &var_e0);
    int64_t rcx = var_138;
    int64_t result_2;
    int64_t result = result_2;
    
    if (rcx != -0x7ffffffffffffffe)
    {
        int64_t var_e8;
        int64_t var_140_1 = var_e8;
        int128_t var_f8;
        int128_t var_150_1 = var_f8;
        int128_t var_108;
        int128_t var_160_1 = var_108;
        int128_t var_118;
        int128_t var_170_1 = var_118;
        int128_t var_128;
        int128_t var_180_1 = var_128;
        int64_t var_190 = rcx;
        int64_t result_1 = result;
        int128_t var_1b0;
        int128_t var_1e0;
        int64_t var_1d0;
        
        if (rcx != -0x7fffffffffffffff)
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            _$LT$vmm..vmm_config..machine_config..MachineConfigUpdate$u20$as$u20$core..convert..From$LT$vmm..vmm_config..machine_config..MachineConfig$GT$$GT$::from::h261e0ec09c629068(&var_1e0, &var_190);
            int64_t var_c8_2 = var_1d0;
            int128_t var_d8_2 = var_1e0;
            var_e0 = 0x23;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_1b0, &var_e0);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_1b0, "PUT /machine-config: cpu_templat…", 0x36);
        }
        else
        {
            _$LT$vmm..vmm_config..machine_config..MachineConfigUpdate$u20$as$u20$core..convert..From$LT$vmm..vmm_config..machine_config..MachineConfig$GT$$GT$::from::h261e0ec09c629068(&var_1e0, &var_190);
            int64_t var_c8_1 = var_1d0;
            int128_t var_d8_1 = var_1e0;
            var_e0 = 0x23;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_1b0, &var_e0);
        }
        int128_t zmm0_3 = var_1b0;
        int128_t var_1a0;
        *(arg1 + 0x18) = var_1a0;
        *(arg1 + 8) = zmm0_3;
        r13 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r13;
    return result;
}
