long long fish::builtins::string::match::WildCardMatcher::report_matches(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    void* v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    void* v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68]
    char v6;  // [bp-0x50]
    char v7;  // [bp-0x38]
    char v9[32];  // r13
    unsigned long long v10;  // rax
    unsigned long v11;  // rax

    v9 = a0->field_18;
    if (v9[27])
        v6.to_lowercase(a1, a2);
    else
        v6.to_vec(a1, a2);
    v10 = fish::wildcard::wildcard_match(&v6, a0);
    if ((char)v10 == v9[28])
        return v10;
    v11 = a0->field_20 + 1;
    if ((char)_ccall(4, 24, a0->field_20 + 1, 0, (unsigned long long)(char)((char)v10 < v9[28])))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d3560); /* do not return */
    a0->field_20 = v11;
    if (v9[29])
    {
        return v11;
    }
    else if (v9[31])
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 4;
        v4 = a2;
        fish_printf::printf_impl::sprintf_locale(&v7, &v0, "1 %lu\nsrc/builtins/string/pad.rs", 6, &v3, 1);
        v7.unwrap(&g_14d3578);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
        memcpy(&v3, &v0, 16);
        v5 = 0;
        return (unsigned long long)a3.append(&v3);
    }
    else
    {
        return (unsigned long long)a3.appendln(a1, a2);
    }
}
