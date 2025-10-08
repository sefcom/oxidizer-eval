long long fish::env::config_paths::ConfigPaths::new(uint128_t a0[3], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128], Other Possible Types: char *, unsigned long
    int v3;  // [bp-0x118], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x110]
    char *v5;  // [bp-0x108]
    char *v6;  // [bp-0xf8]
    int v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf0]
    void* v10;  // [bp-0xe8], Other Possible Types: char *
    int v11;  // [bp-0xd8], Other Possible Types: unsigned long long, char
    unsigned long long v12;  // [bp-0xd8]
    char v13;  // [bp-0xd8]
    char v14;  // [bp-0xd8], Other Possible Types: unsigned long long
    int v15;  // [bp-0xd0], Other Possible Types: unsigned long long
    char *v16;  // [bp-0xc8]
    char *v17;  // [bp-0xc8]
    void* v18;  // [bp-0xb0], Other Possible Types: char
    unsigned long long v19;  // [bp-0xa8]
    void* v20;  // [bp-0xa0]
    char v21;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x90]
    char *v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x80]
    void* v25;  // [bp-0x78]
    unsigned long long v26;  // [bp-0x70]
    int v27;  // [bp-0x68], Other Possible Types: void*
    unsigned long long v28;  // [bp-0x60]
    void* v29;  // [bp-0x58]
    char v30;  // [bp-0x50]
    int v31;  // [bp-0x48]
    char v32;  // [bp-0x38]
    int v34;  // xmm0
    int v35;  // xmm1

    fish::common::wcs2osstring(&v32, a1, a2);
    fish::common::get_executable_path(&v30, &v32);
    if ((char)core::sync::atomic::atomic_load(&g_15a9470, 0))
    {
        v3 = 0;
        v4 = 1;
        v5 = 0;
        (char)v11.to_flog_str(&g_15a9460);
        v21.into_iter(&(char)v11);
        v3.spec_extend(&v21);
        v3.push(58, &g_14d66d8);
        v3.push(32, &g_14d66d8);
        v0 = v31;
        v6 = &(char)v0;
        v8 = <std::path::Display as core::fmt::Display>::fmt;
        v21 = &g_14d66c8;
        v22 = 1;
        v25 = 0;
        v23 = &v6;
        v24 = 1;
        (char)v11.map_or_else(&v21);
        *((int128_t *)&v0) = *((int128_t *)&v11);
        v2 = v16;
        v21.clone(&(char)v0);
        v17 = v23;
        *((int128_t *)&v11) = *((int128_t *)&v21);
        v21.into_iter(&(char)v11);
        v3.spec_extend(&v21);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        v3.push(10, &g_14d66d8);
        fish::flog::flog_impl(v4, v5);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
    }
    v21.from_exec_path(&v30);
    v12 = v11;
    if ((char)core::sync::atomic::atomic_load(&g_15a9470, 0))
    {
        v6 = 0;
        v8 = 1;
        v10 = 0;
        (char)v0.to_flog_str(&g_15a9460);
        v11.into_iter(&(char)v0);
        v6.spec_extend(&v11);
        v6.push(58, &g_14d66f0);
        v6.push(32, &g_14d66f0);
        v3 = 0;
        v4 = 4;
        v5 = 0;
        *((int128_t *)&v27) = *((int128_t *)&v22);
        (char)v0.spec_to_string(&(char)v27);
        v13 = 0;
        *((int128_t *)&v15) = *((int128_t *)&v1);
        fish_printf::printf_impl::sprintf_locale(&v18, &v3, "paths.sysconf: %ls|not found|paths.bin: %lssrc/env/config_paths.rs", 18, &v13, 1);
        v18.unwrap(&g_14d66f0);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v13);
        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        v2 = v5;
        v3.to_flog_str(&(char)v0);
        v13.into_iter(&v3);
        v6.spec_extend(&v13);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        v6.push(10, &g_14d66f0);
        fish::flog::flog_impl(v8, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v8);
        v12 = v14;
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a9470, 0))
    {
        v18 = 0;
        v19 = 1;
        v20 = 0;
        (char)v0.to_flog_str(&g_15a9460);
        v11.into_iter(&(char)v0);
        v18.spec_extend(&v11);
        v18.push(58, &g_14d6708);
        v18.push(32, &g_14d6708);
        v27 = 0;
        v28 = 4;
        v29 = 0;
        if (!((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63)))
        {
            v11.clone(v25, v26);
            *((int128_t *)&v7) = *((int128_t *)&v15);
            if (v12 == 0x8000000000000000)
                goto LABEL_13931a4;
            *((int128_t *)&v15) = *((int128_t *)&v6);
            fish::env::config_paths::ConfigPaths::new::{{closure}}(&(char)v0, &v12);
            *((int128_t *)&v3) = (int128_t)v0;
            v5 = v2;
        }
        else
        {
LABEL_13931a4:
            v3 = 0x8000000000000000;
        }
        v12.to_vec("|not found|paths.bin: %lssrc/env/config_paths.rs", 11);
        v2 = v17;
        memcpy(&(char)v0, &v12, 16);
        if (v3 == 0x8000000000000000)
        {
            v10 = v2;
            *((int128_t *)&v7) = (int128_t)v0;
        }
        else
        {
            v10 = v5;
            *((int128_t *)&v7) = *((int128_t *)&v3);
            core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
        }
        v14 = 0;
        v15 = v8;
        v16 = v10;
        fish_printf::printf_impl::sprintf_locale(&(char)v0, &v27, "paths.bin: %lssrc/env/config_paths.rs", 14, &v14, 1);
        (char)v0.unwrap(&g_14d6708);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v14);
        core::ptr::drop_in_place<alloc::string::String>(&v6);
        memcpy(&(char)v0, &v27, 16);
        v2 = 0;
        v3.to_flog_str(&(char)v0);
        v14.into_iter(&v3);
        v18.spec_extend(&v14);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
        v18.push(10, &g_14d6708);
        fish::flog::flog_impl(v19, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v18, v19);
    }
    v34 = *((int128_t *)&v21);
    v35 = *((int128_t *)&v23);
    a0[2] = *((int128_t *)&v25);
    *((void*)&a0[1]) = v35;
    *((void*)&a0[0]) = v34;
    return a0;
}
