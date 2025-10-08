void fish::flog::apply_one_wildcard(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    int v0;  // [bp-0x98], Other Possible Types: char
    char v1;  // [bp-0x98]
    void* v2;  // [bp-0x88], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x78], Other Possible Types: char
    unsigned long long v4;  // [bp-0x70]
    void* v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x40]
    unsigned long long v9[5];  // rax
    char v10;  // bl

    fish::parse_util::parse_util_unescape_wildcards(&v6, a0, a1);
    fish::flog::categories::all_categories(&v3);
    v0.into_iter(&v3);
    if (v0.next())
    {
        do
        {
            if ((char)fish::wildcard::wildcard_match(v9[3], v9[4], &v6))
            {
                v10 = 1;
                core::sync::atomic::atomic_store(v9 + 1, a2, 0);
            }
            v9 = v0.next();
        } while (v9);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<i64>>(&v0);
    if (!(v10 & 1))
    {
        v3 = 0;
        v4 = 4;
        v5 = 0;
        v1 = 1;
        v2 = a1;
        fish_printf::printf_impl::sprintf_locale(&v7, &v3, "Failed to match debug category: %ls\nsrc/flog.rs", 36, &v1, 1);
        v7.unwrap(&g_14d8c28);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
        v2 = v5;
        *((int128_t *)&v0) = *((int128_t *)&v3);
        fish::wutil::wwrite_to_fd(a0, v5, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
    return;
}
