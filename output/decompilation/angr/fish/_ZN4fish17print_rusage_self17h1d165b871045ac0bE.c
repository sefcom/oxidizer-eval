void fish::print_rusage_self()
{
    unsigned long long v0;  // [bp-0x130]
    char v1;  // [bp-0x128]
    int v2;  // [bp-0x128]
    char v3;  // [bp-0x128]
    int v4;  // [bp-0x128]
    char v5;  // [bp-0x128]
    int v6;  // [bp-0x128]
    char v7;  // [bp-0x128]
    int v8;  // [bp-0x128]
    char v9;  // [bp-0x128]
    void* v10;  // [bp-0x128]
    int v11;  // [bp-0x120], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x118]
    void* v13;  // [bp-0x100]
    unsigned long long v14;  // [bp-0xf8]
    void* v15;  // [bp-0xf0]
    int v16;  // [bp-0xe8]
    unsigned long long v17;  // [bp-0xe0]
    void* v18;  // [bp-0xd8]
    char v19;  // [bp-0xd0]
    char v20;  // [bp-0xc0], Other Possible Types: unsigned int
    unsigned int v21;  // [bp-0xb8]
    unsigned int v22;  // [bp-0xb0]
    unsigned int v23;  // [bp-0xa8]
    char v24;  // [bp-0xa0]
    char v25;  // [bp-0x48]
    unsigned long long v27;  // r15
    unsigned long long v28;  // r13
    unsigned long long v29;  // rax
    unsigned long long v30;  // r12
    unsigned long v31;  // cc_ndep

    fish::nix::getrusage(&v20, 0);
    v27 = *((long long *)&v24);
    v28 = fish::tv_to_msec(v20, v21);
    v29 = fish::tv_to_msec(v22, v23);
    v30 = v28;
    if ((char)_ccall(0, 4, v30, v29, v31))
        core::panicking::panic_const::panic_const_add_overflow(&g_149aa58); /* do not return */
    v0 = *((long long *)&v25);
    v10 = 0;
    v11 = 4;
    v12 = 0;
    fish_printf::printf_impl::sprintf_locale(&(char)v16, &v10, "  rusage self:\n      user time: %s ms\n       sys time: %s ms\n     total time: %s ms\n        max rss: %s kb\n        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 15, 8, 0);
    (char)v16.unwrap(&g_149aa70);
    *((int128_t *)&v16) = *((int128_t *)&v10);
    v18 = v12;
    fish::wutil::wwrite_to_fd(v17, v12, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v16);
    v13 = 0;
    v14 = 4;
    v15 = 0;
    (char)v16.spec_to_string(v29);
    v1 = 0;
    *((int128_t *)&v11) = (int128_t)(&v16)[8];
    fish_printf::printf_impl::sprintf_locale(&v19, &v13, "      user time: %s ms\n       sys time: %s ms\n     total time: %s ms\n        max rss: %s kb\n        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 23, &v1, 1);
    v19.unwrap(&g_149aa88);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v12 = v15;
    *((int128_t *)&v2) = *((int128_t *)&v13);
    fish::wutil::wwrite_to_fd(v11, v15, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
    v13 = 0;
    v14 = 4;
    v15 = 0;
    (char)v16.spec_to_string(v30);
    v3 = 0;
    *((int128_t *)&v11) = (int128_t)(&v16)[8];
    fish_printf::printf_impl::sprintf_locale(&v19, &v13, "       sys time: %s ms\n     total time: %s ms\n        max rss: %s kb\n        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 23, &v3, 1);
    v19.unwrap(&g_149aaa0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v12 = v15;
    *((int128_t *)&v4) = *((int128_t *)&v13);
    fish::wutil::wwrite_to_fd(v11, v15, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
    v13 = 0;
    v14 = 4;
    v15 = 0;
    (char)v16.spec_to_string(v30 + v29);
    v5 = 0;
    *((int128_t *)&v11) = (int128_t)(&v16)[8];
    fish_printf::printf_impl::sprintf_locale(&v19, &v13, "     total time: %s ms\n        max rss: %s kb\n        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 23, &v5, 1);
    v19.unwrap(&g_149aab8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v12 = v15;
    *((int128_t *)&v6) = *((int128_t *)&v13);
    fish::wutil::wwrite_to_fd(v11, v15, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v5);
    v13 = 0;
    v14 = 4;
    v15 = 0;
    (char)v16.spec_to_string(v27);
    v7 = 0;
    *((int128_t *)&v11) = (int128_t)(&v16)[8];
    fish_printf::printf_impl::sprintf_locale(&v19, &v13, "        max rss: %s kb\n        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 23, &v7, 1);
    v19.unwrap(&g_149aad0);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v7);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v12 = v15;
    *((int128_t *)&v8) = *((int128_t *)&v13);
    fish::wutil::wwrite_to_fd(v11, v15, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    v13 = 0;
    v14 = 4;
    v15 = 0;
    (char)v16.spec_to_string(v0);
    v9 = 0;
    *((int128_t *)&v11) = (int128_t)(&v16)[8];
    fish_printf::printf_impl::sprintf_locale(&v19, &v13, "        signals: %s\nnot sourcing %ls (not readable or does not exist)/", 20, &v9, 1);
    v19.unwrap(&g_149aae8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v16);
    v12 = v15;
    memcpy(&v9, &v13, 16);
    fish::wutil::wwrite_to_fd(v11, v15, 2);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    return;
}
