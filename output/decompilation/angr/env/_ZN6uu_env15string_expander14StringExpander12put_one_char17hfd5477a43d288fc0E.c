void uu_env::string_expander::StringExpander::put_one_char(unsigned long long a0, unsigned int a1)
{
    unsigned int v0;  // [bp-0x2c]
    char v1;  // [bp-0x28]
    unsigned long long v4;  // rdx

    v0 = 0;
    v1.to_vec(::0x4beef0::core::char::methods::encode_utf8_raw(a1, &v0), v4);
    a0.put_string(&v1);
    return;
}
