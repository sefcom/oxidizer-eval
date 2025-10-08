
  int64_t firecracker::api_server::request::boot_source::parse_put_boot_source::h1c01f309b4bae106(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    char rdx_1 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4750, 1);
    int64_t var_138 = arg2;
    int64_t rdx;
    int64_t var_130 = rdx;
    int64_t var_128 = 0;
    int64_t var_d8;
    serde_json::de::from_trait::h63c0f3896a991196(&var_d8, &var_138, rdx_1);
    int64_t var_120;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h292c18eddc5e152a(&var_120, &var_d8);
    int64_t rcx = var_120;
    int64_t result_1;
    int64_t result = result_1;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int64_t var_e0;
        int64_t var_90_1 = var_e0;
        int128_t var_f0;
        int128_t var_a0_1 = var_f0;
        int128_t var_100;
        int128_t var_b0_1 = var_100;
        int128_t var_110;
        int128_t var_c0_1 = var_110;
        int64_t var_d0_1 = rcx;
        int64_t result_2 = result;
        var_d8 = 4;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r12;
    return result;
}
