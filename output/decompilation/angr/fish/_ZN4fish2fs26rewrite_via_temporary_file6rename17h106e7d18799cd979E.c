long long fish::fs::rewrite_via_temporary_file::rename(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned int v0;  // [bp-0xa4]
    void* v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    void* v3;  // [bp-0x90]
    char v4;  // [bp-0x88]
    char v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    unsigned long long v7[3];  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    void* v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    void* v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    char v14;  // [bp-0x38]
    char v15;  // [bp-0x20]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx

    if ((int)fish::wutil::wrename(a0, a1, a2, a3) != -1)
        return 0;
    v17 = errno::errno();
    v0 = v17;
    if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v4.to_flog_str(&g_15a9370);
        v13.into_iter(&v4);
        v1.spec_extend(&v13);
        v1.push(58, &g_14d8dd0);
        v1.push(32, &g_14d8dd0);
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v8 = "E";
        v9 = 28;
        *(v7) = 0x8000000000000000;
        v18 = v7.localize();
        v4.spec_to_string(&v0);
        v13 = 0;
        memcpy(&v14, &v5, 16);
        fish_printf::printf_impl::sprintf_locale(&v15, &v10, v18, v19, ".", &v13, 1);
        v15.unwrap(&g_14d8de8);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
        core::ptr::drop_in_place<alloc::string::String>(&v4);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
        memcpy(&v4, &v10, 16);
        v6 = 0;
        v7.to_flog_str(&v4);
        v13.into_iter(&v7);
        v1.spec_extend(&v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
        v1.push(10, &g_14d8dd0);
        fish::flog::flog_impl(v2, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
        v17 = v0;
    }
    return v17 * 0x100000000 | 2;
}
