long long uu_env::native_int_str::get_char_from_native_int::hc06acdcf4747b3dd(char a0)
{
    char v0;  // [sp-0x21]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rdx

    v0 = a0;
    core::str::converts::from_utf8::ha1effb4cca6d9901(&v1, &v0, 1);
    return (!*((long long *)&v1) ? uu_env::native_int_str::get_char_from_native_int::_$u7b$$u7b$closure$u7d$$u7d$::hbfc9f6c2b92a753b(*((long long *)&v2), *((long long *)&v3), v5) : 0x110000);
}
