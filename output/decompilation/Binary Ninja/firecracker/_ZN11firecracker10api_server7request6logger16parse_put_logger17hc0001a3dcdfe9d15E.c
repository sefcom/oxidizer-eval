
  int64_t firecracker::api_server::request::logger::parse_put_logger::hc0001a3dcdfe9d15(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    char rdx_1 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4790, 1);
    int64_t var_110 = arg2;
    int64_t rdx;
    int64_t var_108 = rdx;
    int64_t var_100 = 0;
    void var_58;
    serde_json::de::from_trait::h63f5323c501f3365(&var_58, &var_110, rdx_1);
    int64_t var_148;
    core::result::Result$LT$T$C$E$GT$::inspect_err::h6f9f62146816f583(&var_148, &var_58);
    int64_t rcx = var_148;
    int64_t result_1;
    int64_t result = result_1;
    
    if (rcx != -0x7fffffffffffffff)
    {
        int64_t var_118;
        int64_t var_d8_1 = var_118;
        int128_t var_128;
        int128_t var_e8_1 = var_128;
        int128_t var_138;
        int128_t var_f8_1 = var_138;
        int64_t var_108_1 = rcx;
        int64_t result_2 = result;
        var_110 = 5;
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_110);
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
