long long uu_env::native_int_str::get_char_from_native_int(char a0)
{
    char v0;  // [bp-0x21]
    char v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]

    v0 = a0;
    core::str::converts::from_utf8(&v1, &v0, 1);
    if (*((int *)&v1) != 1)
        return uu_env::native_int_str::get_char_from_native_int::{{closure}}(v2, *((long long *)&v3));
    return 0x110000;
}
