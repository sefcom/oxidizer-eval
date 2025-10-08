
  int64_t uu_env::string_parser::StringParser::skip_until_char_or_end::hf050962e819e98de(int64_t* arg1, int32_t arg2)

{
    int32_t var_1c = arg2;
    char rax;
    char rdx;
    rax = uu_env::native_int_str::get_single_native_int_value::h3916294b36a5dcb6(&var_1c);
    
    if (!(rax & 1))
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    char var_1d = rdx;
    int64_t rax_1 = arg1[2];
    int64_t rcx_1 = arg1[3] + rax_1;
    int64_t var_18 = rax_1;
    int64_t var_10 = rcx_1;
    char rax_2;
    int64_t rdx_1;
    rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h63e9c5b79db2e425(&var_18, &var_1d);
    int64_t rdx_2;
    
    if (rax_2 & 1)
        rdx_2 = rdx_1 + arg1[4];
    else
        rdx_2 = arg1[1];
    
    return uu_env::string_parser::StringParser::set_pointer::h0708f02e2329cb25(arg1, rdx_2);
}
