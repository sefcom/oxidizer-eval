
  int64_t firecracker::api_server::request::metrics::parse_put_metrics::hed68f0721ebe832a(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    char rdx_1 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c47f0, 1);
    int64_t var_f0 = arg2;
    int64_t rdx;
    int64_t var_e8 = rdx;
    int64_t var_e0 = 0;
    void var_38;
    serde_json::de::from_trait::ha47c724f57520e5f(&var_38, &var_f0, rdx_1);
    int64_t var_108;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h6c230df47e81c380(&var_108, &var_38);
    int64_t rcx = var_108;
    int64_t result_1;
    int64_t result = result_1;
    
    if (-(rcx) != -0x8000000000000000)
    {
        int64_t var_e8_1 = rcx;
        int64_t result_2 = result;
        int64_t var_f8;
        int64_t var_d8_1 = var_f8;
        var_f0 = 6;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_f0);
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
