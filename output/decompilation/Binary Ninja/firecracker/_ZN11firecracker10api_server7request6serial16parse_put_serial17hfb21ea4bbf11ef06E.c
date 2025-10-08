
  int64_t firecracker::api_server::request::serial::parse_put_serial::hfb21ea4bbf11ef06(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t r12 = 1;
    char rdx = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4870, 1);
    int64_t var_f0 = arg2;
    int64_t var_e0 = 0;
    void var_38;
    serde_json::de::from_trait::h7c0901b67b7a0e76(&var_38, &var_f0, rdx);
    core::result::Result$LT$T$C$E$GT$::inspect_err::hcddf4eeebb18306f(&var_f0, &var_38);
    int64_t rcx = var_f0;
    int64_t result = arg3;
    
    if (rcx != -0x7fffffffffffffff)
    {
        int64_t var_e8_1 = rcx;
        int64_t result_1 = result;
        int64_t var_d8_1 = var_e0;
        var_f0 = 7;
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
