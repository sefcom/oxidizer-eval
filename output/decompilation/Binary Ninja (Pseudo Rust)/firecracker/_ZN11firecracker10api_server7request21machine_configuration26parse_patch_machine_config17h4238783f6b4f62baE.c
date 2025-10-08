
  fn firecracker::api_server::request::machine_configuration::parse_patch_machine_config::h4238783f6b4f62ba(arg1: *mut i64, arg2: i64) -> i64

{
    let rdx_1: i8 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4670, 1);
    let mut var_d8: i64 = arg2;
    let rdx: i64;
    let var_d0: i64 = rdx;
    let var_c8: i64 = 0;
    let mut var_128: i64;
    serde_json::de::from_trait::h3b7a981a74be18a2(&var_128, &var_d8, rdx_1);
    let mut var_110: i64;
    let mut result: i64 =
        core::result::Result$LT$T$C$E$GT$::inspect_err::hcab8396f4b809ef4(&var_110, &var_128);
    let r15_1: i64 = var_110;
    let var_108: i64;
    
    if r15_1 != 2
    {
        var_128 = r15_1;
        let var_120_1: i64 = var_108;
        let var_100: i64;
        let var_118_1: i64 = var_100;
        
        if vmm::vmm_config::machine_config::MachineConfigUpdate::is_empty::h8838f3038c18e226(
            &var_128) != 0
        {
            return firecracker::api_server::parsed_request::method_to_error::h4698b3af70462059(
                arg1, 2);
        }
        
        let mut var_f8: i128;
        
        if (0xff0000000000 & var_100) != 0x60000000000
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            let var_d0_2: i64 = r15_1;
            let var_c8_2: i64 = var_108;
            let var_c0_2: i64 = var_100;
            var_d8 = 0x23;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_f8, &var_d8);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_f8, "PATCH /machine-config: cpu_templ…", 0x38);
        }
        else
        {
            let var_d0_1: i64 = r15_1;
            let var_c8_1: i64 = var_108;
            let var_c0_1: i64 = var_100;
            var_d8 = 0x23;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_f8, &var_d8);
        }
        
        let zmm0_1: i128 = var_f8;
        let var_e8: i128;
        *arg1.byte_offset(0x18) = var_e8;
        *arg1.byte_offset(8) = zmm0_1;
        *arg1 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_108;
        *arg1 = 1;
    }
    result
}
