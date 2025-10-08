
  int64_t firecracker::api_server::request::actions::parse_put_actions::h91344de731f8059a(int64_t* arg1, int64_t arg2)

{
    int64_t r12 = 1;
    char rdx_1 = _$LT$vmm..logger..metrics..SharedIncMetric$u20$as$u20$vmm..logger..metrics..IncMetric$GT$::add::hbbe9ee225a228839(&data_7c4730, 1);
    int64_t var_d8 = arg2;
    int64_t rdx;
    int64_t var_d0 = rdx;
    int64_t var_c8 = 0;
    void var_e8;
    serde_json::de::from_trait::had644ab27425a8a8(&var_e8, &var_d8, rdx_1);
    char var_f8;
    core::result::Result$LT$T$C$E$GT$::inspect_err::hdacb15b2469aec72(&var_f8, &var_e8);
    int64_t result;
    
    if (var_f8 != 1)
    {
        char var_f7;
        uint32_t rax = var_f7;
        
        if (!rax)
            var_d8 = 0x10;
        else if (rax != 1)
            var_d8 = 0x1e;
        else
            var_d8 = 0x1d;
        
        result =
            firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_d8);
        r12 = 0;
    }
    else
    {
        int64_t result_1;
        result = result_1;
        arg1[1] = 4;
        arg1[2] = result;
    }
    
    *arg1 = r12;
    return result;
}
