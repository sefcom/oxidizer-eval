long long uu_env::string_parser::StringParser::skip_until_char_or_end::hbcaff1adb2999f87(unsigned long long a0[5], unsigned int a1, unsigned long a2)
{
    char v0;  // [sp-0x1d]
    unsigned int v1;  // [sp-0x1c]
    unsigned long v2;  // [sp-0x18], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x10]
    char v5;  // dl
    unsigned long v6;  // rdx

    v1 = a1;
    if (((char)uu_env::native_int_str::get_single_native_int_value::h99fe4584b4b428dc(&v1) & 1))
    {
        v0 = v5;
        v2 = a0[2];
        v3 = a0[3] + v2;
        return uu_env::string_parser::StringParser::set_pointer::h2a6c0d9a71a1fccc(a0, (_$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::position::hac14b4f3970e119c(&v2, &v0) == 1 ? v6 + a0[4] : a0[1]));
    }
    core::option::unwrap_failed::h0e11329e76906eaa(); /* do not return */
}
