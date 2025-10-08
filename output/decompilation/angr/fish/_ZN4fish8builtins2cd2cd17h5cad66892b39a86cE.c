long long fish::builtins::cd::cd(struct_2 *a0, struct_3 *a1, unsigned long long a2[2], unsigned long long a3)
{
    unsigned int v0;  // [bp-0x1b4]
    void* v1;  // [bp-0x1b0], Other Possible Types: unsigned long long
    struct_0 *v2;  // [bp-0x1a8], Other Possible Types: unsigned long long
    unsigned int v3;  // [bp-0x1a0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0x198], Other Possible Types: unsigned long long
    int v5;  // [bp-0x198]
    unsigned long long v6;  // [bp-0x190]
    void* v7;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long v8;  // [bp-0x178]
    unsigned long v9;  // [bp-0x170]
    int v10;  // [bp-0x168], Other Possible Types: char
    int v11;  // [bp-0x168], Other Possible Types: char
    char v12;  // [bp-0x160], Other Possible Types: unsigned long
    void* v13;  // [bp-0x158], Other Possible Types: unsigned long
    char v14;  // [bp-0x148]
    unsigned long long v15;  // [bp-0x140], Other Possible Types: unsigned long
    void* v16;  // [bp-0x138], Other Possible Types: unsigned long
    char v17;  // [bp-0x128]
    char v18;  // [bp-0x120]
    char v19;  // [bp-0x108]
    int v20;  // [bp-0x108]
    unsigned long long v21;  // [bp-0xf8]
    unsigned long v22;  // [bp-0xf0]
    void* v23;  // [bp-0xe8]
    int v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xe0]
    void* v27;  // [bp-0xd8]
    unsigned long long v28;  // [bp-0xd0]
    unsigned long long v29;  // [bp-0xc8]
    void* v30;  // [bp-0xc0]
    unsigned long v31;  // [bp-0xb8]
    void* v32;  // [bp-0xb0]
    unsigned long long v33;  // [bp-0xa8]
    int v34;  // [bp-0xa8]
    void* v35;  // [bp-0xa0]
    int v36;  // [bp-0x98]
    unsigned long v37;  // [bp-0x90]
    unsigned long v38;  // [bp-0x88]
    char v39;  // [bp-0x78]
    char v40;  // [bp-0x60]
    unsigned long long v41;  // [bp-0x58]
    unsigned long long v42;  // [bp-0x50]
    char v43;  // [bp-0x48]
    char v44;  // [bp-0x38]
    unsigned long long v46;  // r15
    unsigned long long v47;  // rax
    unsigned long v48;  // r12
    unsigned long long v49[2];  // rax
    unsigned long v50;  // r14
    unsigned long long v51;  // rbp
    char v52;  // bpl
    unsigned int v53;  // r12d
    char v54;  // al
    unsigned int v55;  // edx
    unsigned int v56;  // edx
    unsigned int v57;  // r14d
    unsigned long long v58;  // rax
    struct_1 *v59;  // rax
    unsigned long long v60;  // rdx
    struct_0 *v61;  // rax
    int v62;  // xmm0
    unsigned long v63;  // r13
    unsigned long long v65;  // rdx
    unsigned long long v66;  // rax
    unsigned long long v67;  // rdx
    unsigned long v68;  // r14
    unsigned long long v70;  // rdx
    unsigned long long v72;  // rdx
    unsigned long long v74;  // rdx
    unsigned long long v76;  // rdx
    unsigned long v79;  // r12
    unsigned long long v81;  // rdx
    unsigned long v83;  // r12
    unsigned long long v85;  // rdx
    unsigned long long v88;  // rdx

    v46 = 1;
    if (a3)
    {
        v8 = a2[0];
        v9 = a2[1];
        v10.parse(a2, a3, a0, a1);
        if (v12 == 2)
        {
            v47 = *((int *)&v10) * 0x100000000;
        }
        else if ((v12 & 1))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v8, v9);
            v47 = 0;
            v46 = 0;
        }
        else
        {
            v48 = &a0[5].padding_0[17];
            if (a3 > *((long long *)&v10))
            {
                v49 = *((long long *)&v10) * 16;
                v50 = *((long long *)(a2 + v49));
                v51 = 0;
                v22 = *((long long *)(a2 + v49 + 8));
                if (!*((long long *)(a2 + v49 + 8)))
                    goto LABEL_1340551;
LABEL_13402bf:
                v40.get_pwd_slash(v48);
                fish::path::path_apply_cdpath(&v43, v50, v22, v41, v42, v48, &g_14c7518);
                if (*((long long *)&v44))
                {
                    v31 = v50;
                    v0 = v51;
                    v23 = 0;
                    v25 = 4;
                    v27 = 0;
                    v32 = 0;
                    v33 = 4;
                    v35 = 0;
                    v10.into_iter(&v43);
                    (char)v20.next(&v10);
                    v53 = 0;
                    if (*((long long *)&v19) == 0x8000000000000000)
                    {
                        v51 = v0;
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v10);
                        if (v53 == 20)
                        {
                            v63 = a1->field_10;
                            v4 = 0;
                            v6 = 4;
                            v7 = 0;
                            v2 = "%";
                            v3 = 30;
                            v1 = 0x8000000000000000;
                            *((char *)&v10) = 1;
                            v12 = v8;
                            v13 = v9;
                            v14 = 1;
                            v15 = v31;
                            v16 = v22;
                            fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v65, ".", &(char)v10, 2);
                            (char)v20.unwrap(&g_14c7e18);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                            *((int128_t *)&v10) = *((int128_t *)&v4);
                            v13 = 0;
                            v63.append(&(char)v10);
                        }
                        else if (v27)
                        {
                            v63 = a1->field_10;
                            v4 = 0;
                            v6 = 4;
                            v7 = 0;
                            v2 = "%";
                            v3 = 46;
                            v1 = 0x8000000000000000;
                            v66 = v1.localize();
                            v11 = 1;
                            v12 = v8;
                            v13 = v9;
                            v14 = 1;
                            v15 = 4;
                            v16 = v27;
                            v17 = 1;
                            memcpy(&v18, &v33, 16);
                            fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v66, v67, ".", &v11, 3);
                            (char)v20.unwrap(&g_14c7e00);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v11);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                            *((int128_t *)&v10) = *((int128_t *)&v4);
                            v13 = 0;
                            v51 = v0;
                            v63.append(&v11);
                        }
                        else
                        {
                            v51 = v0;
                            v68 = v31;
                            switch (v53)
                            {
                            case 1: case 13:
                                v63 = a1->field_10;
                                v4 = 0;
                                v6 = 4;
                                v7 = 0;
                                v2 = "%";
                                v3 = 30;
                                v1 = 0x8000000000000000;
                                *((char *)&v10) = 1;
                                v12 = v8;
                                v13 = v9;
                                v14 = 1;
                                v15 = v68;
                                v16 = v22;
                                fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v70, ".", &(char)v10, 2);
                                (char)v20.unwrap(&g_14c7db8);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                                *((int128_t *)&v10) = *((int128_t *)&v4);
                                v13 = 0;
                                v63.append(&(char)v10);
                                break;
                            case 2:
                                v63 = a1->field_10;
                                v4 = 0;
                                v6 = 4;
                                v7 = 0;
                                v2 = "%";
                                v3 = 40;
                                v1 = 0x8000000000000000;
                                *((char *)&v10) = 1;
                                v12 = v8;
                                v13 = v9;
                                v14 = 1;
                                v15 = v68;
                                v16 = v22;
                                fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v74, ".", &(char)v10, 2);
                                (char)v20.unwrap(&g_14c7dd0);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                                *((int128_t *)&v10) = *((int128_t *)&v4);
                                v13 = 0;
                                v63.append(&(char)v10);
                                break;
                            case 40:
                                v63 = a1->field_10;
                                v4 = 0;
                                v6 = 4;
                                v7 = 0;
                                v2 = "%";
                                v3 = 46;
                                v1 = 0x8000000000000000;
                                *((char *)&v10) = 1;
                                v12 = v8;
                                v13 = v9;
                                v14 = 1;
                                v15 = v68;
                                v16 = v22;
                                fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v72, ".", &(char)v10, 2);
                                (char)v20.unwrap(&g_14c7de8);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                                *((int128_t *)&v10) = *((int128_t *)&v4);
                                v13 = 0;
                                v63.append(&(char)v10);
                                break;
                            default:
                                errno::set_errno(v53);
                                fish::wutil::wperror("c", 2);
                                v63 = a1->field_10;
                                v4 = 0;
                                v6 = 4;
                                v7 = 0;
                                v2 = "%";
                                v3 = 52;
                                v1 = 0x8000000000000000;
                                *((char *)&v10) = 1;
                                v12 = v8;
                                v13 = v9;
                                v14 = 1;
                                v15 = v68;
                                v16 = v22;
                                fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v76, ".", &(char)v10, 2);
                                (char)v20.unwrap(&g_14c7da0);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v10);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                                *((int128_t *)&v10) = *((int128_t *)&v4);
                                v13 = 0;
                                v63.append(&(char)v10);
                                break;
                            }
                        }
                        v46 = 1;
                        if (!a0->field_5a)
                        {
                            v11.current_line(a0);
                            v63.append(&v11);
                            goto LABEL_1340c3e;
                        }
                    }
                    else
                    {
                        v53 = 0;
                    }
                    while (true)
                    {
                        v5 = v20;
                        v7 = v21;
                        fish::wutil::normalize_path(&v28, v6, v21, 1);
                        errno::set_errno(0);
                        v54 = fish::fds::wopen_dir(v29, v30, 0x200000);
                        v56 = v55;
                        if (!(v54 & 1))
                        {
                            v54 = fish::builtins::cd::cd::{{closure}}(v55);
                            v56 = v55;
                        }
                        v57 = v56;
                        if (!(v54 & 1))
                            break;
                        switch (v57)
                        {
                        case 2:
                            fish::wutil::wreadlink(&v1, v29, v30);
                            if (!v1 == 0x8000000000000000 && !v27)
                            {
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v23);
                                v27 = v30;
                                *((int128_t *)&v24) = *((int128_t *)&v28);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v32);
                                v32 = v1;
                                *((int128_t *)&v34) = *((int128_t *)&v2);
                                goto LABEL_13408ef;
                            }
                            else
                            {
                                if (!v53)
                                    v53 = errno::errno();
                                core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v1);
                            }
LABEL_1340a00:
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v28);
LABEL_13408ef:
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v20);
                            (char)v20.next(&v10);
                            if ((long long)v20 == 0x8000000000000000)
                                break;
                            continue;
                        case 20:
                            v53 = v57;
                            goto LABEL_1340a00;
                        default:
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v28);
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v20);
                            v53 = v57;
                            break;
                        }
                    }
                    v1 = 1;
                    v2 = 1;
                    v3 = v57;
                    v58 = v1.new();
                    v1 = v58;
                    v59 = a0.libdata_mut();
                    core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<std::os::fd::owned::OwnedFd>>>(&v59->field_50);
                    v59->field_50 = v58;
                    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v60);
                    v61 = 8.alloc_impl(24, 0);
                    if (!v61)
                        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                    v62 = *((int128_t *)&v28);
                    v61->field_10 = v30;
                    *((void*)&v61->field_0) = v62;
                    v1 = 1;
                    v2 = v61;
                    v3 = 1;
                    v51 = v0;
                    a0.set_var_and_fire("P", 3, 20, &v1);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v10);
                    v46 = 0;
LABEL_1340c3e:
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v32);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v23);
                }
                else
                {
                    v79 = a1->field_10;
                    v4 = 0;
                    v6 = 4;
                    v7 = 0;
                    v2 = "%";
                    v3 = 40;
                    v1 = 0x8000000000000000;
                    *((char *)&v11) = 1;
                    v12 = v8;
                    v13 = v9;
                    v14 = 1;
                    v15 = v50;
                    v16 = v22;
                    fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v81, ".", &(char)v11, 2);
                    (char)v20.unwrap(&g_14c7d88);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v11);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    *((int128_t *)&v11) = *((int128_t *)&v4);
                    v13 = 0;
                    v79.append(&(char)v11);
                    if (!a0->field_5a)
                    {
                        (char)v11.current_line(a0);
                        v79.append(&(char)v11);
                    }
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v43);
                    v46 = 1;
                }
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v40);
                if ((v51 & 255))
                    goto LABEL_1340c6a;
            }
            else
            {
                v39.getf_unless_empty(v48, "H", 4, 0);
                if (*((long long *)&v39))
                {
                    v10.as_string(&v39);
                    v38 = v13;
                    *((int128_t *)&v36) = *((int128_t *)&v10);
                    v50 = v37;
                    core::ptr::drop_in_place<fish::env::var::EnvVar>(&v39);
                    v52 = 1;
                    v51 = 1;
                    v22 = v38;
                    if (v38)
                        goto LABEL_13402bf;
LABEL_1340551:
                    v83 = a1->field_10;
                    v4 = 0;
                    v6 = 4;
                    v7 = 0;
                    v2 = "%";
                    v3 = 42;
                    v1 = 0x8000000000000000;
                    *((char *)&v11) = 1;
                    v12 = v8;
                    v13 = v9;
                    v14 = 1;
                    v15 = v50;
                    v16 = 0;
                    fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v85, ".", &(char)v11, 2);
                    (char)v20.unwrap(&g_14c7d70);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(char)v11);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    *((int128_t *)&v11) = *((int128_t *)&v4);
                    v13 = 0;
                    v83.append(&(char)v11);
                    v46 = 1;
                    if (!a0->field_5a)
                    {
                        (char)v11.current_line(a0);
                        v83.append(&(char)v11);
                    }
                    if (v52)
                    {
LABEL_1340c6a:
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v36);
                    }
                }
                else
                {
                    v4 = 0;
                    v6 = 4;
                    v7 = 0;
                    v2 = "%";
                    v3 = 35;
                    v1 = 0x8000000000000000;
                    v10 = 1;
                    v12 = v8;
                    v13 = v9;
                    fish_printf::printf_impl::sprintf_locale(&(char)v20, &v4, v1.localize(), v88, ".", &v10, 1);
                    (char)v20.unwrap(&g_14c7d58);
                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                    memcpy(&v10, &v4, 16);
                    v13 = 0;
                    a1->field_10.append(&v10);
                    v46 = 1;
                }
            }
            v47 = 0x100000000;
        }
    }
    else
    {
        v47 = 0x200000000;
    }
    return v47 | v46;
}
