long long uu_env::string_parser::StringParser::skip_until_char_or_end::h68bc5015a87f77fa(unsigned long long a0[5], unsigned int a1)
{
    char v0;  // [sp-0x1d]
    unsigned int v1;  // [sp-0x1c]
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    char v5;  // dl
    unsigned long v6;  // rdx

    v1 = a1;
    if ((uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(&v1) & 1))
    {
        v0 = v5;
        v2 = a0[2];
        v3 = a0[3] + v2;
        return uu_env::string_parser::StringParser::set_pointer::h1907de3fd6e11167(a0, (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::h31ecdbb883917c1b(&v2, &v0) == 1 ? v6 + a0[4] : a0[1]));
    }
    core::option::unwrap_failed::h0e11329e76906eaa(&g_548ed8); /* do not return */
}
