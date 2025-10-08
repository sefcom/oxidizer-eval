void fish::source_config_in_directory(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xe8], Other Possible Types: void*
    unsigned long long v1;  // [bp-0xe0]
    void* v2;  // [bp-0xd8]
    void* v3;  // [bp-0xc8], Other Possible Types: char
    int v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    void* v6;  // [bp-0xb8], Other Possible Types: unsigned long long
    void* v7;  // [bp-0xa8], Other Possible Types: char
    int v8;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v9;  // [bp-0x98], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x88]
    unsigned long long v11;  // [bp-0x80]
    void* v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    char v14;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x60]
    char v16;  // [bp-0x58]
    unsigned long long v17;  // [bp-0x50]
    unsigned long long v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned int v21;  // eax
    char v22;  // al
    unsigned long long v23;  // rdx

    v7.to_vec(a1, a2);
    v16.add(&v7, "/", 12);
    fish::common::escape(&v7, a1, a2);
    v13.add(&v7, "/", 12);
    v21 = fish::wutil::waccess(v17, v18, 4);
    v22 = core::sync::atomic::atomic_load(&g_15a9470);
    if (!v21)
    {
        if (v22)
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v3.to_flog_str(&g_15a9460);
            v7.into_iter(&v3);
            v0.spec_extend(&v7);
            v0.push(58, &g_149ab00);
            v0.push(32, &g_149ab00);
            v19.to_vec("sourcing", 8);
            v7.into_iter(&v19);
            v0.spec_extend(&v7);
            v0.push(32, &g_149ab00);
            v3.to_flog_str(&v13);
            v7.into_iter(&v3);
            v0.spec_extend(&v7);
            v0.push(10, &g_149ab00);
            fish::flog::flog_impl(v1, v2);
            core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v0, v1);
        }
        v7.to_vec("b", 15);
        v6 = v9;
        *((int128_t *)&v4) = *((int128_t *)&v7);
        v0.add(&(unsigned long long)v4, v14, v15);
        *((char *)(a0.libdata_mut() + 124)) = 1;
        core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(v23);
        v7 = 0;
        v8 = 8;
        v9 = 0;
        (unsigned long long)v4.eval(a0, v1, v2, &v7);
        core::ptr::drop_in_place<fish::io::IoChain>(&v7);
        *((char *)(a0.libdata_mut() + 124)) = 0;
        core::ptr::drop_in_place<core::cell::RefMut<fish::parser::LibraryData>>(v23);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
    }
    else if (v22)
    {
        v10 = 0;
        v11 = 1;
        v12 = 0;
        v3.to_flog_str(&g_15a9460);
        v7.into_iter(&v3);
        v10.spec_extend(&v7);
        v10.push(58, &g_149ab18);
        v10.push(32, &g_149ab18);
        v3 = 0;
        v5 = 4;
        v6 = 0;
        v7 = 1;
        *((int128_t *)&v8) = *((int128_t *)&v14);
        fish_printf::printf_impl::sprintf_locale(&(char)v0, &v3, "not sourcing %ls (not readable or does not exist)/", 49, &v7, 1);
        (char)v0.unwrap(&g_149ab18);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v2 = 0;
        v3.to_flog_str(&(char)v0);
        v7.into_iter(&v3);
        v10.spec_extend(&v7);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        v10.push(10, &g_149ab18);
        fish::flog::flog_impl(v11, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<u8>>(v10, v11);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v13);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v16);
    return;
}
