
  int64_t firecracker::api_server::request::mmds::parse_patch_mmds::h3850a4464e6f3a5c(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4690, 1);
    int64_t var_f0 = arg2;
    int64_t rdx;
    int64_t var_e8 = rdx;
    int64_t var_e0 = 0;
    int64_t var_d8;
    serde_json::de::from_trait::h19ed231b4994ff1f(&var_d8, &var_f0);
    char var_110;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h29de2ba928515a56(&var_110, &var_d8);
    char rax = var_110;
    int64_t result;
    int64_t result_1;
    
    if (rax != 6)
    {
        int32_t var_10f;
        int32_t var_cc_1 = var_10f;
        int32_t var_cf_1 = var_10f;
        int128_t var_100;
        int128_t var_c0_1 = var_100;
        char var_d0_1 = rax;
        int64_t result_2 = result_1;
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
    return result;
}
