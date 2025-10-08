long long fish::env_universal_common::append_file_entry(char a0, unsigned long long a1, unsigned long a2, unsigned long long a3, unsigned int a4, struct_0 *a5)
{
    void* v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    void* v2;  // [bp-0x98]
    void* v3;  // [bp-0x90], Other Possible Types: char
    unsigned long long v4;  // [bp-0x88]
    void* v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68], Other Possible Types: unsigned long long
    char v9;  // [bp-0x58]
    void* v10;  // [bp-0x48]
    unsigned long v11;  // [bp-0x38]

    v11 = a5->field_10;
    a5.spec_extend("SETUVAR--pathSET_EXPORTSETFailed to read file:/fish_variables", "--pathSET_EXPORTSETFailed to read file:/fish_variables");
    a5.push(32, &g_14d75b8);
    if ((a0 & 1))
    {
        a5.spec_extend("--export^", "^");
        a5.push(32, &g_14d75d0);
    }
    if ((a0 & 4))
    {
        a5.spec_extend("--pathSET_EXPORTSETFailed to read file:/fish_variables", "SET_EXPORTSETFailed to read file:/fish_variables");
        a5.push(32, &g_14d75e8);
    }
    if ((char)fish::common::valid_var_name(a1, a2))
    {
        fish::env_universal_common::append_utf8(a1, a2, a5);
        a5.push(58, &g_14d7618);
        fish::env_universal_common::full_escape(&v6, a3, a4);
        fish::env_universal_common::append_utf8(v7, v8, a5);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        return a5.push(10, &g_14d7630);
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3.to_flog_str(&g_15a9370);
        v6.into_iter(&v3);
        v0.spec_extend(&v6);
        v0.push(58, &g_14d7600);
        v0.push(32, &g_14d7600);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v6 = 1;
        v7 = a1;
        v8 = a2;
        fish_printf::printf_impl::sprintf_locale(&v9, &v3, "Illegal variable name: '%ls'ERASEPROCESS_EXITsrc/event.rs", 28, &v6, 1);
        v9.unwrap(&g_14d7600);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v6);
        memcpy(&v9, &v3, 16);
        v10 = 0;
        v3.to_flog_str(&v9);
        v6.into_iter(&v3);
        v0.spec_extend(&v6);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
        v0.push(10, &g_14d7600);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    if (v11 > a5->field_10)
        return v11;
    a5->field_10 = v11;
    return v11;
}
