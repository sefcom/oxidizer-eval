long long uu_env::string_expander::StringExpander::put_one_char::h2fb61a7ef56ce790(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [sp-0x2c]
    char v1;  // [bp-0x28]
    unsigned long long v3;  // rdx

    v0 = 0;
    ::0x4d8680::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&v1, ::0x4d85c0::core::char::methods::encode_utf8_raw::h4a752b0d300141c4(a1, &v0), v3);
    return uu_env::string_expander::StringExpander::put_string::h9dc86166bab9a39e(a0, &v1);
}
