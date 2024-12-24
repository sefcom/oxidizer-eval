long long uu_env::string_expander::StringExpander::put_one_char::h3a19e632300f6385(unsigned long long a0, unsigned int a1, unsigned long a2)
{
    unsigned int v0;  // [sp-0x2c]
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rdx

    v0 = 0;
    ::0x4d8730::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h58b87609619f8c5b(&v1, ::0x4d85f0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a1, &v0), v3);
    return uu_env::string_expander::StringExpander::put_string::hc6b961d4e38a0339(a0, &v1, v3);
}
