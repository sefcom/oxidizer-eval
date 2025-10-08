
  int64_t firecracker::api_server::request::mmds::parse_put_mmds_config::he5403443915ac8b8(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_108 = arg2;
    int64_t var_100 = arg3;
    int64_t var_f8 = 0;
    int64_t var_d0;
    serde_json::de::from_trait::had22b5db4459960b(&var_d0, &var_108, arg3);
    int64_t var_128;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h84a551e65a9c49c2(&var_128, &var_d0);
    int64_t rcx = var_128;
    int64_t result;
    int64_t var_120;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int32_t var_10c;
        int32_t var_ac_1 = var_10c;
        int32_t var_10f;
        int32_t var_af_1 = var_10f;
        int64_t var_c8_1 = rcx;
        int64_t var_c0_1 = var_120;
        int64_t var_118;
        int64_t var_b8_1 = var_118;
        char var_110;
        char var_b0_1 = var_110;
        var_d0 = 0x1a;
        int128_t var_f0;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &var_f0, &var_d0);
        
        if (!(var_110 & 1))
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_f0, "PUT /mmds/config: V1 is deprecat…", 0x33);
        }
        
        int128_t zmm0_1 = var_f0;
        int128_t var_e0;
        *(arg1 + 0x18) = var_e0;
        *(arg1 + 8) = zmm0_1;
        result = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_120;
        result = 1;
    }
    *arg1 = result;
    return result;
}
