long long fish::wutil::wgetcwd(struct_0 *a0)
{
    void* v0;  // [bp-0x10c8]
    unsigned long long v1;  // [bp-0x10c0]
    void* v2;  // [bp-0x10b8]
    unsigned int v3;  // [bp-0x10ac]
    char v4;  // [bp-0x10a8], Other Possible Types: unsigned short
    unsigned long v5;  // [bp-0x10a0]
    void* v6;  // [bp-0x1098], Other Possible Types: char
    void* v7;  // [bp-0x1088]
    unsigned long long v8;  // [bp-0x1080]
    void* v9;  // [bp-0x1078]
    char v10;  // [bp-0x1070]
    int v11;  // [bp-0x1068]
    char v12;  // [bp-0x1058]
    char v13;  // [bp-0x1048]
    char v14;  // [bp-0x1038]
    int v15;  // [bp-0x1030]
    void* v16;  // [bp-0x1010]

    v16 = 0;
    memset(&v16, 0, 0x1000);
    if (getcwd(&v16, 0x1000))
    {
        fish::common::cstr2wcstring(a0, &v16, 0x1000);
        return a0;
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v4.to_flog_str(&g_15a9370);
        v12.into_iter(&v4);
        v0.spec_extend(&v12);
        v0.push(58, &g_14c14e8);
        v0.push(32, &g_14c14e8);
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v5 = (unsigned int)errno::errno();
        v4 = 8197;
        v3 = errno::errno();
        v10.spec_to_string(&v3);
        memcpy(&v12, &v4, 16);
        memcpy(&v13, &v6, 16);
        v14 = 0;
        v15 = v11;
        fish_printf::printf_impl::sprintf_locale(&v4, &v7, "getcwd() failed with errno %d/%sn", 32, &v12, 2);
        v4.unwrap(&g_14c14e8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v12);
        core::ptr::drop_in_place<alloc::string::String>(&v10);
        memcpy(&v4, &v7, 16);
        v6 = 0;
        v10.to_flog_str(&v4);
        v12.into_iter(&v10);
        v0.spec_extend(&v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        v0.push(10, &g_14c14e8);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    a0->field_0 = 0;
    a0->field_8 = 4;
    a0->field_10 = 0;
    return a0;
}
