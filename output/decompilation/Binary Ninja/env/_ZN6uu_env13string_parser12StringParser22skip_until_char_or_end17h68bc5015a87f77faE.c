
  int64_t uu_env::string_parser::StringParser::skip_until_char_or_end::h68bc5015a87f77fa(int64_t* arg1, int32_t arg2)

{
    int32_t var_1c = arg2;
    char rax;
    char rdx;
    rax = uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(&var_1c);
    
    if (!(rax & 1))
    {
        core::option::unwrap_failed::h0e11329e76906eaa();
        /* no return */
    }
    
    char var_1d = rdx;
    int64_t rax_1 = arg1[2];
    int64_t rcx_1 = arg1[3] + rax_1;
    int64_t var_18 = rax_1;
    int64_t var_10 = rcx_1;
    int64_t result;
    int64_t rdx_1;
    result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h31ecdbb883917c1b(&var_18, &var_1d);
    int64_t rdx_2;
    
    if (result == 1)
        rdx_2 = rdx_1 + arg1[4];
    else
        rdx_2 = arg1[1];
    
    uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(arg1, rdx_2);
    return result;
}
