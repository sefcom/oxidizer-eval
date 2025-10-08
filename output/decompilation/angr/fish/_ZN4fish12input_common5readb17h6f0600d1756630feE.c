long long fish::input_common::readb(unsigned int a0)
{
    char v0;  // [bp-0xa9]
    void* v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    char v4;  // [bp-0x90]
    unsigned int v5[1][2];  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    uint128_t v8;  // [bp-0x60]
    char v9;  // [bp-0x48]
    char v10;  // [bp-0x30]
    unsigned long long v12;  // rax

    if (a0 < 0)
    {
        v5 = &g_14daf38;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        core::panicking::panic_fmt(&v5, &g_14daf48); /* do not return */
    }
    v0 = 0;
    fish::common::read_blocked(&v5, a0, &v0, 1);
    v12 = v5[0].eq(v6);
    if (!(char)v12)
        return v12;
    if (!(char)core::sync::atomic::atomic_load(&g_15a99b0, 0))
        return v12 & 4294967295;
    v1 = 0;
    v2 = 1;
    v3 = 0;
    v4.to_flog_str(&g_15a99a0);
    v5.into_iter(&v4);
    v1.spec_extend(&v5);
    v1.push(58, &g_14daf60);
    v1.push(32, &g_14daf60);
    v10.to_vec("Read byteassertion failed: !matches!(timeout, Timeout::Forever)ignoring fish_escape_delay_ms: value '%ls' is not an integer or is < 10 or >= 5000 ms\nignoring fish_sequence_key_delay_ms: value '%ls' is not an integer or is < 10 or >= 5000 ms\nassertion faile", 9);
    v5.into_iter(&v10);
    v1.spec_extend(&v5);
    v1.push(32, &g_14daf60);
    fish::key::char_to_symbol(&v4, v0, 1);
    v9.to_flog_str(&v4);
    v5.into_iter(&v9);
    v1.spec_extend(&v5);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    v1.push(10, &g_14daf60);
    fish::flog::flog_impl(v2, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
    return v12 & 4294967295;
}
