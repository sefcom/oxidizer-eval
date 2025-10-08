void fish::wcstringutil::wcs2string_bad_char(unsigned int a0)
{
    void* v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68]
    void* v3;  // [bp-0x60], Other Possible Types: char
    unsigned long long v4;  // [bp-0x58]
    void* v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    void* v7;  // [bp-0x38]
    char v8;  // [bp-0x30]
    unsigned long v9;  // [bp-0x28]

    if (!(char)core::sync::atomic::atomic_load(&g_15a9830, 0))
        return;
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v3.to_flog_str(&g_15a9820);
    v8.into_iter(&v3);
    v0.spec_extend(&v8);
    v0.push(58, &g_14e4780);
    v0.push(32, &g_14e4780);
    v3 = 0;
    v4 = 4;
    v5 = 0;
    v8 = 4;
    v9 = a0;
    fish_printf::printf_impl::sprintf_locale(&v6, &v3, "W", 49, ".", &v8, 1);
    v6.unwrap(&g_14e4780);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
    memcpy(&v6, &v3, 16);
    v7 = 0;
    v3.to_flog_str(&v6);
    v8.into_iter(&v3);
    v0.spec_extend(&v8);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
    v0.push(10, &g_14e4780);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return;
}
