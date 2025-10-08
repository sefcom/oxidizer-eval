void fish::path::maybe_issue_path_warning(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned int a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8, unsigned int a9, void* a10)
{
    char v0;  // [bp-0x140]
    int v1;  // [sp-0x138]
    unsigned long long v2;  // [bp-0x138]
    int v3;  // [bp-0x138]
    int v4;  // [bp-0x138]
    int v5;  // [bp-0x138]
    int v6;  // [bp-0x138]
    unsigned long long v7;  // [bp-0x130]
    void* v8;  // [bp-0x128]
    void* v9;  // [sp-0x120]
    unsigned long long v10;  // [sp-0x118]
    void* v11;  // [sp-0x110]
    unsigned long long v12[3];  // [sp-0x108]
    unsigned long long v13;  // [sp-0x100]
    void* v14;  // [sp-0xf8], Other Possible Types: unsigned long long
    void* v15;  // [sp-0xf0], Other Possible Types: char, unsigned long long
    unsigned long long v16;  // [bp-0xe8]
    void* v17;  // [bp-0xe0]
    unsigned long long v18;  // [bp-0xd8]
    void* v19;  // [sp-0xd0], Other Possible Types: char
    unsigned long v20;  // [bp-0xd0], Other Possible Types: char
    char v21;  // [bp-0xd0]
    char v22;  // [bp-0xd0]
    int v23;  // [sp-0xc8], Other Possible Types: unsigned long long
    void* v24;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v25;  // [bp-0xb0]
    unsigned long long v26;  // [bp-0xa8]
    unsigned long long v27;  // [bp-0xa0]
    char v28;  // [bp-0x90]
    unsigned long long v29;  // [bp-0x88]
    unsigned long long v30;  // [bp-0x80]
    unsigned int v31;  // [bp-0x70]
    unsigned int v32;  // [bp-0x6c]
    char v33;  // [bp-0x68]
    unsigned long long v34;  // [bp-0x60]
    unsigned long long v35;  // [bp-0x58]
    unsigned long long v36;  // [bp-0x50]
    unsigned long long v37;  // [bp-0x48]
    char v38;  // [bp-0x40]
    unsigned long long v39;  // r13
    unsigned long long v40;  // rbp
    unsigned long long v41;  // rax
    unsigned long long v42;  // rdx
    unsigned long long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // rax
    unsigned long long v46;  // rdx
    unsigned long long v47;  // rax

    v18 = a5;
    v31 = a4;
    v36 = a2;
    v37 = a3;
    v20.to_vec("_", 13);
    v33.add(&v20, a0, a1);
    v20.getf(a10, v34, v35, 20);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v20);
    if (!v20)
    {
        v20.to_vec("1", 1);
        v8 = v24;
        *((int128_t *)&v1) = *((int128_t *)&v20);
        a10.set_one(v34, v35, 20, &(char)v1);
        if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
        {
            *(v12) = 0;
            v13 = 1;
            v14 = 0;
            (char)v1.to_flog_str(&g_15a9370);
            v20.into_iter(&(char)v1);
            v12.spec_extend(&v20);
            v12.push(58, &g_14def10);
            v12.push(32, &g_14def10);
            (char)v1.to_flog_str(&v36);
            v20.into_iter(&(char)v1);
            v12.spec_extend(&v20);
            v12.push(10, &g_14def10);
            fish::flog::flog_impl(v13, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v12, v13);
        }
        if (a8)
        {
            v39 = ((char)v31 ? v18 : "H");
            v40 = ((char)v31 ? a6 : 4);
            v18 = &g_15a9410;
            if ((char)core::sync::atomic::atomic_load(&g_15a9410, 0))
            {
                v9 = 0;
                v10 = 1;
                v11 = 0;
                (char)v1.to_flog_str(&g_15a9400);
                v20.into_iter(&(char)v1);
                v9.spec_extend(&v20);
                v9.push(58, &g_14def88);
                v9.push(32, &g_14def88);
                *(v12) = 0;
                v13 = 4;
                v14 = 0;
                v7 = "U";
                *((unsigned long long *)&v3) = 0x8000000000000000;
                v41 = (unsigned long long)v3.localize();
                v19 = 1;
                v23 = a0;
                v24 = a1;
                v25 = 1;
                v26 = v39;
                v27 = v40;
                v28 = 1;
                v29 = a7;
                v30 = a8;
                fish_printf::printf_impl::sprintf_locale(&v15, &v12, v41, v42, ".", &v19, 3, *((long long *)&v0), 0x8000000000000000, "U", 56, 0);
                v15.unwrap(&g_14defa0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v19);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v3);
                *((int128_t *)&v3) = *((int128_t *)&v12[0]);
                v8 = 0;
                v12.to_flog_str(&(unsigned long long)v3);
                v19.into_iter(&v12);
                v9.spec_extend(&v19);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v3);
                v9.push(10, &g_14def88);
                fish::flog::flog_impl(v10, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v10);
            }
            if ((char)core::sync::atomic::atomic_load(v18, 0))
            {
                v15 = 0;
                v16 = 1;
                v17 = 0;
                (char)v1.to_flog_str(&g_15a9400);
                v20.into_iter(&(char)v1);
                v15.spec_extend(&v20);
                v15.push(58, &g_14defb8);
                v15.push(32, &g_14defb8);
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v13 = "T";
                v14 = 19;
                *(v12) = 0x8000000000000000;
                v43 = v12.localize();
                v32 = a9;
                (char)v1.spec_to_string(&v32);
                v21 = 0;
                *((int128_t *)&v23) = *((int128_t *)&v7);
                fish_printf::printf_impl::sprintf_locale(&v38, &v9, v43, v42, ".", &v21, 1, *((long long *)&v0), v2, v7, v8, 0);
                v38.unwrap(&g_14defd0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v21);
                core::ptr::drop_in_place<alloc::string::String>(&(char)v1);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v12);
                *((int128_t *)&v1) = *((int128_t *)&v9);
                v12.to_flog_str(&(char)v1);
                v21.into_iter(&v12);
                v15.spec_extend(&v21);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v1);
                v15.push(10, &g_14defb8);
                fish::flog::flog_impl(v16, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v15, v16);
            }
            if (!(char)core::sync::atomic::atomic_load(v18, 0))
                goto LABEL_13eee16;
            v9 = 0;
            v10 = 1;
            v11 = 0;
            (char)v1.to_flog_str(&g_15a9400);
            v20.into_iter(&(char)v1);
            v9.spec_extend(&v20);
            v9.push(58, &g_14defe8);
            v9.push(32, &g_14defe8);
            *(v12) = 0;
            v13 = 4;
            v14 = 0;
            v7 = "P";
            *((unsigned long long *)&v4) = 0x8000000000000000;
            v44 = (unsigned long long)v4.localize();
            v22 = 1;
            v23 = v39;
            v24 = v40;
            fish_printf::printf_impl::sprintf_locale(&v15, &v12, v44, v42, ".", &v22, 1, *((long long *)&v0), 0x8000000000000000, "P", 59, 0);
            v15.unwrap(&g_14df000);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v22);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v4);
            *((int128_t *)&v4) = *((int128_t *)&v12[0]);
            v12.to_flog_str(&(unsigned long long)v4);
            v22.into_iter(&v12);
            v9.spec_extend(&v22);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v4);
            v9.push(10, &g_14defe8);
            fish::flog::flog_impl(1, 0);
            goto LABEL_13eee07;
        }
        else
        {
            if ((char)core::sync::atomic::atomic_load(&g_15a9410, 0))
            {
                v9 = 0;
                v10 = 1;
                v11 = 0;
                (char)v1.to_flog_str(&g_15a9400);
                v20.into_iter(&(char)v1);
                v9.spec_extend(&v20);
                v9.push(58, &g_14def28);
                v9.push(32, &g_14def28);
                *(v12) = 0;
                v13 = 4;
                v14 = 0;
                v7 = "U";
                *((unsigned long long *)&v5) = 0x8000000000000000;
                v45 = (unsigned long long)v5.localize();
                v19 = 1;
                v23 = a0;
                v24 = a1;
                fish_printf::printf_impl::sprintf_locale(&(char)v15, &v12, v45, v46, ".", &v19, 1, *((long long *)&v0), 0x8000000000000000, "U", 35, 0);
                (char)v15.unwrap(&g_14def40);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v19);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v5);
                *((int128_t *)&v5) = *((int128_t *)&v12[0]);
                v12.to_flog_str(&(unsigned long long)v5);
                v19.into_iter(&v12);
                v9.spec_extend(&v19);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v5);
                v9.push(10, &g_14def28);
                fish::flog::flog_impl(v10, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v10);
            }
            if ((char)core::sync::atomic::atomic_load(&g_15a9410, 0))
            {
                v9 = 0;
                v10 = 1;
                v11 = 0;
                (char)v1.to_flog_str(&g_15a9400);
                v20.into_iter(&(char)v1);
                v9.spec_extend(&v20);
                v9.push(58, &g_14def58);
                v9.push(32, &g_14def58);
                *(v12) = 0;
                v13 = 4;
                v14 = 0;
                v7 = "P";
                *((unsigned long long *)&v6) = 0x8000000000000000;
                v47 = (unsigned long long)v6.localize();
                v21 = 1;
                v23 = v18;
                v24 = a6;
                fish_printf::printf_impl::sprintf_locale(&v15, &v12, v47, v46, ".", &v21, 1, *((long long *)&v0), 0x8000000000000000, "P", 69, 0);
                v15.unwrap(&g_14def70);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v21);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&(unsigned long long)v6);
                *((int128_t *)&v6) = *((int128_t *)&v12[0]);
                v12.to_flog_str(&(unsigned long long)v6);
                v21.into_iter(&v12);
                v9.spec_extend(&v21);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v6);
                v9.push(10, &g_14def58);
                fish::flog::flog_impl(1, 0);
LABEL_13eee07:
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(0, 1);
            }
        }
LABEL_13eee16:
        v19 = 0;
        v23 = 4;
        v24 = 0;
        fish_printf::printf_impl::sprintf_locale(&(char)v1, &v19, "\n%s: %s\nInvalid working directory, it must start and end with /", 1, 8, 0);
        (char)v1.unwrap(&g_14df018);
        *((int128_t *)&v1) = *((int128_t *)&v19);
        fish::wutil::wwrite_to_fd(v7, 0, 2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v1);
    }
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
    return;
}
