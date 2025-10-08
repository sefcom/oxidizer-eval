
  int64_t firecracker::api_server::request::balloon::parse_get_balloon::h315ff462125738c8(int64_t* arg1, int64_t arg2, uint64_t arg3)

{
    char const (** const var_c0)[0x8e];
    
    if (!arg2)
    {
        var_c0 = 9;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_c0);
        *arg1 = 0;
        return -0x8000000000000000;
    }
    
    int64_t var_f8 = arg2;
    uint64_t var_f0 = arg3;
    char rax;
    uint64_t rdx;
    rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hb86d93d0e67a6bf4(arg2, arg3, "statisticsUnrecognized GET reque…", 0xa);
    
    if (rax)
    {
        var_c0 = 0xa;
        firecracker::api_server::parsed_request::ParsedRequest::new_sync::h3bce1d2f92bd31b1(
            &arg1[1], &var_c0);
        *arg1 = 0;
        return -0x8000000000000000;
    }
    
    int64_t* var_e8 = &var_f8;
    int64_t (* var_e0)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1757f628e8f40b52;
    var_c0 = &data_7a3810;
    int64_t result = 2;
    int64_t var_a0 = 0;
    int64_t** var_b0 = &var_e8;
    int64_t var_a8 = 1;
    int128_t var_d8;
    core::option::Option$LT$T$GT$::map_or_else::h72293bc1363e991f(&var_d8, 0, rdx, &var_c0);
    *var_c0[6] = var_d8;
    int64_t var_c8;
    var_b0 = var_c8;
    arg1[1] = 0x301;
    *(arg1 + 0xa) = var_c0;
    arg1[3] = result;
    arg1[4] = var_b0;
    *arg1 = 1;
    return result;
}
