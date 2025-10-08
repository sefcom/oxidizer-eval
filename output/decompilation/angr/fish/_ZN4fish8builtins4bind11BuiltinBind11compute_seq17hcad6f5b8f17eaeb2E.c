long long fish::builtins::bind::BuiltinBind::compute_seq(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    char v3;  // [bp-0x68]
    int v4;  // [bp-0x60]
    void* v5;  // [bp-0x58]
    char v6;  // [bp-0x40]
    char v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    unsigned long v9;  // [bp-0x28]
    char v10;  // [bp-0x20]

    fish::key::parse_keys(&v6, a2, a3);
    if (*((int *)&v6) != 1)
    {
        *((unsigned long *)&a0[16]) = v9;
        *((int128_t *)a0) = *((int128_t *)&v7);
        return v9;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v3 = 1;
    *((int128_t *)&v4) = *((int128_t *)&v8);
    fish_printf::printf_impl::sprintf_locale(&v10, &v0, "bind: %s\n--user", 9, &v3, 1);
    v10.unwrap(&g_14c7740);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a1.append(&v3);
    *((unsigned long long *)a0) = 0x8000000000000000;
    return (unsigned long long)core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
}
