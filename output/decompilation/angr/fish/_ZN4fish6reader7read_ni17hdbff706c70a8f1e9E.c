long long fish::reader::read_ni(unsigned long long a0, unsigned int a1, unsigned long long a2)
{
    int v0;  // [bp-0x1128], Other Possible Types: char, unsigned long long
    char v1;  // [bp-0x1120], Other Possible Types: unsigned long long
    void* v2;  // [bp-0x1118], Other Possible Types: unsigned long long
    void* v3;  // [bp-0x1108]
    unsigned long long v4;  // [bp-0x1100]
    void* v5;  // [bp-0x10f8]
    void* v6;  // [bp-0x10f0]
    unsigned long long v7;  // [bp-0x10e8]
    void* v8;  // [bp-0x10e0]
    void* v9;  // [bp-0x10d8], Other Possible Types: unsigned long long, char
    char v10;  // [bp-0x10d8]
    int v11;  // [bp-0x10d0], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x10c8]
    void* v13;  // [bp-0x10b8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x10b0]
    void* v15;  // [bp-0x10a8], Other Possible Types: unsigned long long
    char v16;  // [bp-0x10a0], Other Possible Types: unsigned long long
    char *v17;  // [bp-0x1098]
    void* v18;  // [bp-0x1090]
    unsigned int v19;  // [bp-0x1084]
    void* v20;  // [bp-0x1080]
    unsigned int v21;  // [bp-0x1060]
    unsigned int v22;  // [bp-0x105c]
    unsigned long long v23;  // [bp-0x1058]
    char v24;  // [bp-0x1050]
    unsigned long long v25;  // [bp-0x1048]
    unsigned long v26;  // [bp-0x1040]
    unsigned long long v27;  // [bp-0x1038], Other Possible Types: char
    char v28;  // [bp-0x1038]
    void* v29;  // [bp-0x1030], Other Possible Types: int, unsigned long long
    void* v30;  // [bp-0x1028]
    char v31;  // [bp-0x1000]
    char v32;  // [bp-0xfe8]
    unsigned long long v34;  // rax
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx
    unsigned long long v38;  // rax
    unsigned long long v39;  // rdx
    unsigned int v40;  // eax
    unsigned long long v41;  // rax

    v29 = 0;
    fish::wutil::fstat(&v27, a1);
    if (*((int *)&v27) == 2)
    {
        v20 = v29;
        if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
        {
            v3 = 0;
            v4 = 1;
            v5 = 0;
            v0.to_flog_str(&g_15a9370);
            v9.into_iter(&v0);
            v3.spec_extend(&v9);
            v3.push(58, &g_14dfc28);
            v3.push(32, &g_14dfc28);
            v6 = 0;
            v7 = 4;
            v8 = 0;
            v14 = "U";
            v15 = 29;
            v13 = 0x8000000000000000;
            v34 = v13.localize();
            v0.spec_to_string(&v20);
            v9 = 0;
            *((int128_t *)&v11) = *((int128_t *)&v1);
            fish_printf::printf_impl::sprintf_locale(&v16, &v6, v34, v35, ".", &v9, 1);
            v16.unwrap(&g_14dfc40);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v9);
            core::ptr::drop_in_place<alloc::string::String>(&v0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v13);
            *((int128_t *)&v0) = *((int128_t *)&v6);
            v2 = 0;
            v13.to_flog_str(&v0);
            v9.into_iter(&v13);
            v3.spec_extend(&v9);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            v3.push(10, &g_14dfc28);
            fish::flog::flog_impl(v4, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
        }
        core::ptr::drop_in_place<std::io::error::Error>(&v20);
        return 1;
    }
    else
    {
        if (a1 && (0xf000 & *((int *)&v31)) == 0x4000)
        {
            if (!(char)core::sync::atomic::atomic_load(&g_15a9380, 0))
                return 1;
            v6 = 0;
            v7 = 1;
            v8 = 0;
            v9.to_flog_str(&g_15a9370);
            v27.into_iter(&v9);
            v6.spec_extend(&v27);
            v6.push(58, &g_14dfb50);
            v6.push(32, &g_14dfb50);
            v13 = 0;
            v14 = 4;
            v15 = 0;
            v1 = "U";
            v2 = 29;
            v0 = 0x8000000000000000;
            v36 = v0.localize();
            v9.spec_to_string(&g_5510ec);
            v27 = 0;
            *((int128_t *)&v29) = (int128_t)v11;
            fish_printf::printf_impl::sprintf_locale(&(char)v3, &v13, v36, v37, ".", &v27, 1);
            (char)v3.unwrap(&g_14dfb68);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v27);
            core::ptr::drop_in_place<alloc::string::String>(&v9);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
            memcpy(&v9, &v13, 16);
            v12 = 0;
            v0.to_flog_str(&v9);
            v27.into_iter(&v0);
            v6.spec_extend(&v27);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
            v6.push(10, &g_14dfb50);
            fish::flog::flog_impl(v7, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v7);
            return 1;
        }
        0.unwrap(&g_14dfb80);
        v16 = *((long long *)&v32).with_capacity_in(1, 1, &g_14dfb98);
        v18 = 0;
        memset(&v27, 0, 0x1000);
        if (a1 == -1)
            core::option::expect_failed("fd != -1\\", 8, &g_14dfbb0); /* do not return */
        while (true)
        {
            nix::unistd::read(&v21, a1, &v27, 0x1000);
            if (v21 == 1)
            {
                v19 = v22;
                switch (v22)
                {
                case 11:
                    v9 = fish::fds::make_fd_blocking(a1);
                    if (!v9)
                    {
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v9);
                        break;
                    }
                    else
                    {
                        core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v9);
                        goto LABEL_13f8211;
                    }
                case 4:
LABEL_13f7fd0:
                    memset(&v27, 0, 0x1000);
                default:
LABEL_13f8211:
                    if ((char)core::sync::atomic::atomic_load(&g_15a9380, 0))
                    {
                        v3 = 0;
                        v4 = 1;
                        v5 = 0;
                        (char)v0.to_flog_str(&g_15a9370);
                        v9.into_iter(&(char)v0);
                        v3.spec_extend(&v9);
                        v3.push(58, &g_14dfbf8);
                        v3.push(32, &g_14dfbf8);
                        v6 = 0;
                        v7 = 4;
                        v8 = 0;
                        v14 = "U";
                        v15 = 29;
                        v13 = 0x8000000000000000;
                        v41 = v13.localize();
                        (char)v0.spec_to_string(&v19);
                        v10 = 0;
                        *((int128_t *)&v11) = *((int128_t *)&v1);
                        fish_printf::printf_impl::sprintf_locale(&(char)v20, &v6, v41, v39, ".", &v10, 1);
                        (char)v20.unwrap(&g_14dfc10);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
                        core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v13);
                        *((int128_t *)&v0) = *((int128_t *)&v6);
                        v2 = 0;
                        v13.to_flog_str(&(char)v0);
                        v10.into_iter(&v13);
                        v3.spec_extend(&v10);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                        v3.push(10, &g_14dfbf8);
                        fish::flog::flog_impl(v4, 0);
                        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v16, v39);
                    return 1;
                }
            }
            else if (v23)
            {
                v38 = 0.index(v23, &v27, 0x1000, &g_14dfbe0);
                v16.spec_extend(v38, v39 + v38);
                goto LABEL_13f7fd0;
            }
            else
            {
                fish::common::str2wcstring(&v24, v17, 0);
                core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v16, v17);
                v27 = v25;
                v29 = v25 + v26 * 4;
                v40 = v27.next();
                if (v40 != 2)
                {
                    v40.unwrap((unsigned int)v39, &g_14bd1b0);
                    if ((unsigned int)v39 == 65279)
                        v24.remove(0);
                }
                (char)v0.eval_wstr(a0, &v24, a2, 0, 8);
                if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
                    return 0;
                v9 = 0;
                v11 = 4;
                v12 = 0;
                v28 = 1;
                *((int128_t *)&v29) = *((int128_t *)&v1);
                fish_printf::printf_impl::sprintf_locale(&(char)v13, &v9, "%ls", 3, &v28, 1);
                (char)v13.unwrap(&g_14dfbc8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v28);
                v30 = v12;
                memcpy(&v28, &v9, 16);
                fish::wutil::wwrite_to_fd(v29, v12, 2);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v28);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v0);
                break;
            }
        }
        return 1;
    }
}
