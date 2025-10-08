long long fish::reader::reader_shell_test(void* a0, unsigned int *a1, unsigned long long a2)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98], Other Possible Types: unsigned long long
    char v4;  // [bp-0x80]
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    void* v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    void* v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    void* v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    unsigned int v15;  // eax
    char v16;  // dl

    v7 = 0;
    v8 = 8;
    v9 = 0;
    v15 = fish::parse_util::parse_util_detect_errors(a1, a2, &v7, 1);
    if ((char)v15 & 1.is_err_and(v16))
    {
        v4.get_backtrace(a0, a1, a2, &v7);
        if (!v5.ends_with(v6, 10))
            v4.push(10);
        v10 = 0;
        v11 = 4;
        v12 = 0;
        v0 = 1;
        v2 = v5;
        v3 = v6;
        fish_printf::printf_impl::sprintf_locale(&v13, &v10, "\n%s", 3, &v0, 1);
        v13.unwrap(&g_14e0e40);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
        v3 = v12;
        *((int128_t *)&v1) = *((int128_t *)&v10);
        fish::wutil::wwrite_to_fd(v2, v12, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
        fish::reader::reader_schedule_prompt_repaint();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    }
    core::ptr::drop_in_place<alloc::vec::Vec<fish::parser::ProfileItem>>(&v7);
    return v15;
}
