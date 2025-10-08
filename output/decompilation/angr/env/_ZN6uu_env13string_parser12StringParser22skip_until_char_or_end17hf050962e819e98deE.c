long long uu_env::string_parser::StringParser::skip_until_char_or_end(unsigned long long a0[5], unsigned int a1)
{
    unsigned int v0;  // [bp-0x1c]
    unsigned long v1;  // [bp-0x18]
    unsigned long long v2;  // [bp-0x10]
    unsigned long v4;  // rdx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rdx

    v0 = a1;
    if (!(uu_env::native_int_str::get_single_native_int_value(&v0) & 1))
        core::option::unwrap_failed(&g_510708); /* do not return */
    v1 = a0[2];
    v2 = a0[3] + a0[2];
    v5 = (!((char)v1.position(&vvar_22{reg 32}) & 1) ? a0[1] : v4 + a0[4]);
    v6 = v5;
    return a0.set_pointer(v5);
}
