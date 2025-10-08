
  int64_t firecracker::api_server::request::machine_configuration::parse_patch_machine_config::h4238783f6b4f62ba(int64_t* arg1, int64_t arg2)

{
    char rdx_1 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4670, 1);
    int64_t var_d8 = arg2;
    int64_t rdx;
    int64_t var_d0 = rdx;
    int64_t var_c8 = 0;
    int64_t var_128;
    serde_json::de::from_trait::h3b7a981a74be18a2(&var_128, &var_d8, rdx_1);
    int64_t var_110;
    int64_t result =
        core::result::Result$LT$T$C$E$GT$::inspect_err::hcab8396f4b809ef4(&var_110, &var_128);
    int64_t r15_1 = var_110;
    int64_t var_108;
    
    if (r15_1 != 2)
    {
        var_128 = r15_1;
        int64_t var_120_1 = var_108;
        int64_t var_100;
        int64_t var_118_1 = var_100;
        
        if (vmm::vmm_config::machine_config::MachineConfigUpdate::is_empty::h8838f3038c18e226(
                &var_128))
            return firecracker::api_server::parsed_request::method_to_error::h4698b3af70462059(
                arg1, 2);
        
        int128_t var_f8;
        
        if ((0xff0000000000 & var_100) != 0x60000000000)
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            int64_t var_d0_2 = r15_1;
            int64_t var_c8_2 = var_108;
            int64_t var_c0_2 = var_100;
            var_d8 = 0x23;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_f8, &var_d8);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_f8, "PATCH /machine-config: cpu_templ…", 0x38);
        }
        else
        {
            int64_t var_d0_1 = r15_1;
            int64_t var_c8_1 = var_108;
            int64_t var_c0_1 = var_100;
            var_d8 = 0x23;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_f8, &var_d8);
        }
        
        int128_t zmm0_1 = var_f8;
        int128_t var_e8;
        *(arg1 + 0x18) = var_e8;
        *(arg1 + 8) = zmm0_1;
        *arg1 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_108;
        *arg1 = 1;
    }
    return result;
}
