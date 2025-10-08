
  fn firecracker::api_server::request::machine_configuration::parse_put_machine_config::h9236ca85aee91b6f(arg1: *mut i64, arg2: i64) -> i64

{
    let mut r13: i64 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47b0, 1);
    let mut var_1c8: i64 = arg2;
    let rdx: i64;
    let var_1c0: i64 = rdx;
    let var_1b8: i64 = 0;
    let mut var_e0: i64;
    serde_json::de::from_trait::hc5d4db7384273cd9(&var_e0, &var_1c8);
    let mut var_138: i64;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h98ff51c38463ee7b(&var_138, &var_e0);
    let rcx: i64 = var_138;
    let result_2: i64;
    let mut result: i64 = result_2;
    
    if rcx != -0x7ffffffffffffffe
    {
        let var_e8: i64;
        let var_140_1: i64 = var_e8;
        let var_f8: i128;
        let var_150_1: i128 = var_f8;
        let var_108: i128;
        let var_160_1: i128 = var_108;
        let var_118: i128;
        let var_170_1: i128 = var_118;
        let var_128: i128;
        let var_180_1: i128 = var_128;
        let mut var_190: i64 = rcx;
        let result_1: i64 = result;
        let mut var_1b0: i128;
        let mut var_1e0: i128;
        let var_1d0: i64;
        
        if rcx != -0x7fffffffffffffff
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            _$LT$vmm..vmm_config..machine_config..MachineConfigUpdate$u20$as$u20$core..convert..From$LT$vmm..vmm_config..machine_config..MachineConfig$GT$$GT$::from::h261e0ec09c629068(&var_1e0, &var_190);
            let var_c8_2: i64 = var_1d0;
            let var_d8_2: i128 = var_1e0;
            var_e0 = 0x23;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_1b0, &var_e0);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_1b0, "PUT /machine-config: cpu_templat…", 0x36);
        }
        else
        {
            _$LT$vmm..vmm_config..machine_config..MachineConfigUpdate$u20$as$u20$core..convert..From$LT$vmm..vmm_config..machine_config..MachineConfig$GT$$GT$::from::h261e0ec09c629068(&var_1e0, &var_190);
            let var_c8_1: i64 = var_1d0;
            let var_d8_1: i128 = var_1e0;
            var_e0 = 0x23;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_1b0, &var_e0);
        }
        let zmm0_3: i128 = var_1b0;
        let var_1a0: i128;
        *arg1.byte_offset(0x18) = var_1a0;
        *arg1.byte_offset(8) = zmm0_3;
        r13 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r13;
    result
}
