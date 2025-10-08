long long fish::fs::create_temporary_file(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x128]
    void* v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    void* v3;  // [bp-0x110]
    int v4;  // [bp-0x108], Other Possible Types: char
    void* v5;  // [bp-0xf8], Other Possible Types: char, unsigned long long
    void* v6;  // [bp-0xe8]
    char v7;  // [bp-0xe0]
    char *v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    void* v12;  // [bp-0xb8]
    unsigned long long v13;  // [bp-0xb0]
    unsigned long long v14;  // [bp-0xa8]
    unsigned long long v15;  // [bp-0xa0]
    char v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    unsigned long long v18;  // [bp-0x88]
    int v19;  // [bp-0x78]
    int v20;  // [bp-0x74]
    int v21;  // [bp-0x68]
    unsigned long long v22;  // [bp-0x64]
    int v23;  // [bp-0x58]
    char v24;  // [bp-0x48]
    unsigned int v27;  // ebp
    unsigned long long v29;  // rax
    int v30;  // xmm0
    unsigned long long v31;  // rdx
    unsigned long long v32;  // rax

    fish::fs::fish_mkstemp_cloexec(&v7, fish::common::wcs2zstring(a1, a2));
    v27 = *((int *)&v7);
    if (*((int *)&v7) == -1)
    {
        do
        {
            v0 = v8;
            if ((char)v0.kind() != 35)
            {
                if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
                {
                    v1 = 0;
                    v2 = 1;
                    v3 = 0;
                    v4.to_flog_str(&g_15a9370);
                    (char)v19.into_iter(&v4);
                    v1.spec_extend(&(char)v19);
                    v1.push(58, &g_14d8d00);
                    v1.push(32, &g_14d8d00);
                    v10 = 0;
                    v11 = 4;
                    v12 = 0;
                    v14 = "U";
                    v15 = 41;
                    v13 = 0x8000000000000000;
                    v29 = v13.localize();
                    v17 = a1;
                    v18 = a2;
                    v16 = 1;
                    v4.to_arg(&v0);
                    v30 = *((int128_t *)&v16);
                    *((int128_t *)&v21) = *((int128_t *)&v18);
                    v19 = v30;
                    v23 = v4;
                    memcpy(&v24, &v5, 16);
                    fish_printf::printf_impl::sprintf_locale(&v4, &v10, v29, v31, ".", &(char)v19, 2);
                    v4.unwrap(&g_14d8d18);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v19);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v13);
                    memcpy(&v4, &v10, 16);
                    v5 = 0;
                    v16.to_flog_str(&v4);
                    (char)v19.into_iter(&v16);
                    v1.spec_extend(&(char)v19);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    v1.push(10, &g_14d8d00);
                    fish::flog::flog_impl(v2, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
                }
                *((char **)v6) = v0;
                *((unsigned long long *)&v6[8]) = 0x8000000000000000;
                return a0;
            }
            core::ptr::drop_in_place<std::io::error::Error>(&v0);
            fish::fs::fish_mkstemp_cloexec(&v7, fish::common::wcs2zstring(a1, a2));
            v27 = *((int *)&v7);
        } while (*((int *)&v7) == -1);
    }
    fish::common::str2wcstring(&(char)v4, v8, v9 - 1);
    v22 = v5;
    v20 = v4;
    *((unsigned int *)v6) = v27;
    v32 = (long long)(&v20)[8];
    *((int128_t *)&v6[4]) = (int128_t)v19;
    *((unsigned long long *)&v6[16]) = v32;
    *((unsigned long long *)&v6[24]) = v22;
    core::ptr::drop_in_place<alloc::ffi::c_str::CString>(v8, v9);
    return v6;
}
