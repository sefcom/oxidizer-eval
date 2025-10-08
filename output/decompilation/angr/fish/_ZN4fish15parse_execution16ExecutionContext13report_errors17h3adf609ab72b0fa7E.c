void fish::parse_execution::ExecutionContext::report_errors(unsigned long long a0[5], void* a1, unsigned int a2, struct_0 *a3)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    int v3;  // [bp-0x88], Other Possible Types: char
    char v4;  // [bp-0x88]
    int v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    void* v7;  // [bp-0x68], Other Possible Types: char
    unsigned long long v8;  // [bp-0x60]
    void* v9;  // [bp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x40]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rax

    if ((char)a1.check_cancel())
        return;
    if (!a3->field_10 && (char)core::sync::atomic::atomic_load(&g_15a9380, 0))
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7.to_flog_str(&g_15a9370);
        v3.into_iter(&v7);
        v0.spec_extend(&v3);
        v0.push(58, &g_14dcc68);
        v0.push(32, &g_14dcc68);
        v11.to_vec("Error reported but no error text found.", 39);
        v3.into_iter(&v11);
        v0.spec_extend(&v3);
        v0.push(10, &g_14dcc68);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v13 = a1.parser();
    v0.get_backtrace(v13, a0[3], a0[4], a3);
    if (!(char)fish::common::should_suppress_stderr_for_tests())
    {
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v4 = 1;
        *((int128_t *)&v5) = *((int128_t *)&v1);
        fish_printf::printf_impl::sprintf_locale(&v10, &v7, "%sbuiltin %ls returned invalid exit code %d", 2, &v4, 1);
        v10.unwrap(&g_14dcc80);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
        v6 = v9;
        *((int128_t *)&v3) = *((int128_t *)&v7);
        fish::wutil::wwrite_to_fd((long long)(&v3)[8], v9, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    }
    v14 = a1.parser();
    v4.just(a2);
    v14.set_last_statuses(&v4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    return;
}
