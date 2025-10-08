long long fish::io::IoChain::append_from_specs(unsigned long long a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xe8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe8]
    int v3;  // [bp-0xe0]
    unsigned long long v4;  // [bp-0xe0]
    unsigned int v5;  // [bp-0xd8]
    unsigned int v6;  // [bp-0xd4]
    unsigned int v7;  // [bp-0xc4]
    unsigned long long v8;  // [bp-0xc0]
    void* v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    void* v11;  // [bp-0xa8]
    void* v12;  // [bp-0xa0]
    unsigned long long v13;  // [bp-0x98]
    void* v14;  // [bp-0x90]
    unsigned long long v15;  // [bp-0x88]
    unsigned long long v16;  // [bp-0x78]
    unsigned long long v17;  // [bp-0x60]
    unsigned long long v18;  // [bp-0x58]
    unsigned long long v19;  // [bp-0x50]
    int v20;  // [bp-0x48]
    int v21;  // [bp-0x48]
    int v22;  // [bp-0x48]
    void* v23;  // [bp-0x38]
    unsigned long long v25;  // r15
    void* v26;  // r12
    unsigned long long v27;  // r14
    unsigned long v28;  // rax
    void* v29;  // r13
    unsigned long long v30;  // rdi
    unsigned long long v31;  // rsi
    unsigned long long v32;  // rdx
    unsigned int v33;  // eax
    unsigned long v34;  // rbp
    unsigned int v35;  // edx
    unsigned long v36;  // r15
    unsigned long long v37;  // r14
    unsigned int v38;  // eax
    unsigned long v42;  // rbx
    unsigned int v54;  // eax
    unsigned long v57;  // rax

    if (a1->field_10)
    {
        v25 = a0;
        v26 = a1->field_8;
        v27 = a1->field_10 * 32 + v26;
        v28 = v26 + 32;
        v7 = (unsigned int)a3 & 0xffffff00 | 1;
        v8 = &g_15a93e0;
        v16 = &g_15a93d0;
        v15 = v27;
        while (true)
        {
            v29 = v26;
            v26 = v28;
            if ((char)v29[28] == 4)
            {
                if ((char)v29.is_close())
                {
                    v0 = 1;
                    v4 = 1;
                    v5 = (int)v29[24];
                    v30 = v25;
                    v31 = v0.new();
                    v32 = &g_14d7f38;
                }
                else if (((char)v29.get_target_as_fd() & 1))
                {
                    v0 = 1;
                    v4 = 1;
                    v5 = (int)v29[24];
                    v6 = v35;
                    v30 = v25;
                    v31 = v0.new();
                    v32 = &g_14db8d0;
                }
                else
                {
                    core::option::expect_failed("fd redirection should have been validated alreadyT", 49, &g_14db8b8); /* do not return */
                }
                v30.push(v31, v32);
                v28 = v26 + 32;
                if (v26 == v27)
                    break;
                continue;
            }
            fish::path::path_apply_working_directory(&v17, (long long)v29[8], (long long)v29[16], a2, a3);
            v33 = v29.oflags();
            v34 = v33;
            if (!((char)fish::fds::wopen_cloexec(v18, v19, v33, 438) & 1))
            {
                v2 = 1;
                v4 = 1;
                v5 = v35;
                v6 = (int)v29[24];
                v25.push(v2.new(), &g_14db910);
                goto LABEL_13d30c4;
            }
            if ((char)v34 < 0 && v35 == 17)
            {
                v21 = v20;
                v36 = v25;
                v37 = v27;
                if ((char)core::sync::atomic::atomic_load(v8, 0))
                {
                    v9 = 0;
                    v10 = 1;
                    v11 = 0;
                    v12.to_flog_str(&g_15a93d0);
                    v0.into_iter(&v12);
                    v9.spec_extend(&v0);
                    v9.push(58, &g_14db950);
                    v9.push(32, &g_14db950);
                    v12 = 0;
                    v13 = 4;
                    v14 = 0;
                    v1 = 1;
                    *((int128_t *)&v3) = (int128_t)v29[8];
                    fish_printf::printf_impl::sprintf_locale(&v21, &v12, "T", 29, ".", &v1, 1);
                    v21.unwrap(&g_14db950);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v1);
                    memcpy(&v21, &v12, 16);
                    v23 = 0;
                    v12.to_flog_str(&v21);
                    v1.into_iter(&v12);
                    v9.spec_extend(&v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v21);
                    v9.push(10, &g_14db950);
                    fish::flog::flog_impl(v10, 0);
                    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v9, v10);
                    v21 = v22;
                    v36 = a0;
                    v37 = v15;
                }
            }
            else
            {
                if ((char)v29[28] == 3)
                    goto LABEL_13d3067;
                v21 = v20;
                v36 = v25;
                v37 = v27;
                if ((char)core::sync::atomic::atomic_load(v8, 0))
                {
                    v38 = errno::errno();
                    fish::io::IoChain::append_from_specs::{{closure}}(v38, (long long)v29[8], (long long)v29[16]);
                    v21 = v20;
                    v36 = v25;
                    v37 = v27;
                }
            }
            v27 = v37;
            v25 = v36;
            v20 = v21;
            if ((char)v29[28] != 3)
            {
                v2 = 1;
                v4 = 1;
                v5 = (int)v29[24];
                v25.push(v2.new(), &g_14d7f38);
LABEL_13d3186:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
                v28 = (v26 != v27) * 32 + v26;
                v7 = 0;
                if (v26 == v27)
                    break;
                continue;
            }
LABEL_13d3067:
            v42 = (unsigned int)fish::fds::wopen_cloexec("/", 9, v34, 438);
            if (!((char)v42 & 1))
            {
                v2 = 1;
                v4 = 1;
                v5 = v35;
                v6 = (int)v29[24];
                v25.push(v2.new(), &g_14db910);
LABEL_13d30c4:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v17);
                v28 = v26 + 32;
                if (v26 == v27)
                    break;
            }
            else
            {
                if ((char)core::sync::atomic::atomic_load(v8, 0))
                    fish::io::IoChain::append_from_specs::{{closure}}((unsigned int)errno::errno(), "/", 9);
                v0 = 1;
                v4 = 1;
                v5 = (int)v29[24];
                v25.push(v0.new(), &g_14d7f38);
                core::ptr::drop_in_place<core::result::Result<std::fs::File,nix::errno::consts::Errno>>(v42 & 4294967295, v35);
                goto LABEL_13d3186;
            }
        }
    }
    else
    {
        v7 = v54 & 0xffffff00 | 1;
    }
    v57 = v7;
    return v57 & 0xffffff00 | (char)v57 & 1;
}
