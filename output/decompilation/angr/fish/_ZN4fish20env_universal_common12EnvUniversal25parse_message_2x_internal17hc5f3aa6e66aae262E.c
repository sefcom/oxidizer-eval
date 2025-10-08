long long fish::env_universal_common::EnvUniversal::parse_message_2x_internal(unsigned long long a0, unsigned long long a1, unsigned long long a2, void* a3)
{
    void* v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    void* v2;  // [bp-0x88]
    void* v3;  // [bp-0x80], Other Possible Types: char
    unsigned long long v4;  // [bp-0x78]
    void* v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    void* v7;  // [bp-0x58]
    char v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x30]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax

    v11 = a0;
    v13 = a0.char_at(a1, 0);
    if ((unsigned int)v13 == 35)
        return v13;
    if (!(char)fish::env_universal_common::match(&v11, "SET_EXPORTSETFailed to read file:/fish_variables", 10) && !(char)fish::env_universal_common::match(&v11, "SETFailed to read file:/fish_variables", 3))
    {
        v14 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a93e0, 0);
        if (!(char)v14)
            return v14;
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a93d0);
        v8.into_iter(&v3);
        v0.spec_extend(&v8);
        v0.push(58, &g_14d74f8);
        v0.push(32, &g_14d74f8);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v8 = 1;
        v9 = a0;
        v10 = a1;
        fish_printf::printf_impl::sprintf_locale(&v6, &v3, "U", 49, ".", &v8, 1);
        v6.unwrap(&g_14d74f8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
        memcpy(&v6, &v3, 16);
        v7 = 0;
        v3.to_flog_str(&v6);
        v8.into_iter(&v3);
        v0.spec_extend(&v8);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        v0.push(10, &g_14d74f8);
        fish::flog::flog_impl(1, 0);
        return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
    }
    v15 = v11.populate_1_variable(a1, 1, a2, a3);
    if ((char)v15)
        return v15;
    v16 = (unsigned long long)core::sync::atomic::atomic_load(&g_15a93e0, 0);
    if (!(char)v16)
        return v16;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.to_flog_str(&g_15a93d0);
    v8.into_iter(&v3);
    v0.spec_extend(&v8);
    v0.push(58, &g_14d7510);
    v0.push(32, &g_14d7510);
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v8 = 1;
    v9 = a0;
    v10 = a1;
    fish_printf::printf_impl::sprintf_locale(&v6, &v3, "U", 49, ".", &v8, 1);
    v6.unwrap(&g_14d7510);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
    memcpy(&v6, &v3, 16);
    v7 = 0;
    v3.to_flog_str(&v6);
    v8.into_iter(&v3);
    v0.spec_extend(&v8);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
    v0.push(10, &g_14d7510);
    fish::flog::flog_impl(1, 0);
    return (unsigned long long)core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
}
