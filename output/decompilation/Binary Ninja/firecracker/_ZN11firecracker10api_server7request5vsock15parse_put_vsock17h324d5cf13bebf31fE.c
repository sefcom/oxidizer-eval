
  int64_t firecracker::api_server::request::vsock::parse_put_vsock::h324d5cf13bebf31f(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4850, 1);
    int64_t var_150 = arg2;
    int64_t rdx;
    int64_t var_148 = rdx;
    int64_t var_140 = 0;
    int64_t var_e0;
    serde_json::de::from_trait::hf2f010f459f337bd(&var_e0, &var_150);
    int64_t var_138;
    core::result::Result$LT$T$C$E$GT$::inspect_err::he91879e7163bf2ea(&var_138, &var_e0);
    int64_t r15_1 = var_138;
    int64_t result = -(r15_1);
    int64_t var_130;
    
    if (-(r15_1) != -0x8000000000000000)
    {
        int64_t var_120;
        int128_t var_100;
        int64_t var_128;
        int128_t var_118;
        int64_t var_108;
        
        if (var_120 != -0x8000000000000000)
        {
            _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4980, 1);
            int64_t var_d8_2 = r15_1;
            int64_t var_d0_2 = var_130;
            int64_t var_c8_2 = var_128;
            int64_t var_c0_2 = var_120;
            int128_t var_b8_2 = var_118;
            int64_t var_a8_2 = var_108;
            var_e0 = 0x1b;
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_100, &var_e0);
            result = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message::h908cdac1c9c60287(&var_100, "PUT /vsock: vsock_id field is de…", 0x29);
        }
        else
        {
            int64_t var_d8_1 = r15_1;
            int64_t var_d0_1 = var_130;
            int64_t var_c8_1 = var_128;
            int64_t var_c0_1 = -0x8000000000000000;
            int128_t var_b8_1 = var_118;
            int64_t var_a8_1 = var_108;
            var_e0 = 0x1b;
            result =
                firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
                &var_100, &var_e0);
        }
        int128_t zmm0_2 = var_100;
        int128_t var_f0;
        *(arg1 + 0x18) = var_f0;
        *(arg1 + 8) = zmm0_2;
        r12 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = var_130;
    }
    *arg1 = r12;
    return result;
}
