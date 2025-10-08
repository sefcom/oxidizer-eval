long long fish::builtins::fg::fg(unsigned long long a0, struct_4 *a1, void* a2, unsigned long long a3)
{
    int v0;  // [bp-0x128], Other Possible Types: void*, unsigned long long
    int v1;  // [bp-0x128]
    void* v2;  // [bp-0x128]
    unsigned long long v3;  // [sp-0x120]
    void* v4;  // [bp-0x118], Other Possible Types: unsigned long long
    int v5;  // [bp-0x108], Other Possible Types: void*
    unsigned long long v6;  // [bp-0x100]
    void* v7;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned int v8;  // [bp-0xf0], Other Possible Types: unsigned long
    unsigned int v9;  // [bp-0xf0]
    int v10;  // [bp-0xe8], Other Possible Types: unsigned long long, char
    char v11;  // [bp-0xe8], Other Possible Types: unsigned long long, unsigned short
    char v12;  // [bp-0xe8]
    int v13;  // [bp-0xe8]
    struct_0 *v14;  // [bp-0xe0], Other Possible Types: char, unsigned long long, unsigned long
    void* v15;  // [bp-0xd8], Other Possible Types: unsigned long long, unsigned long
    int v16;  // [bp-0xd0]
    unsigned short v17;  // [bp-0xc8], Other Possible Types: char
    int v18;  // [bp-0xc0], Other Possible Types: unsigned long long
    char v19;  // [bp-0xa8]
    int v20;  // [bp-0xa0]
    unsigned long v21;  // [bp-0x88]
    void* v22;  // [sp-0x80], Other Possible Types: unsigned long
    unsigned long long v23;  // [sp-0x78]
    void* v24;  // [sp-0x70], Other Possible Types: unsigned long long
    void* v25;  // [bp-0x68], Other Possible Types: char, unsigned long long
    void* v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    void* v28;  // [bp-0x50]
    char v29;  // [bp-0x48]
    unsigned long long v30;  // [bp-0x40]
    char v31;  // [bp-0x38]
    unsigned long long v33;  // rax
    unsigned long long v34;  // r12
    unsigned long v35;  // rdx
    unsigned long long v36;  // r14
    unsigned long long v37[3];  // rax
    unsigned long long v38;  // rax
    void* *v39;  // rdx
    void* v40;  // r14
    unsigned long long v42;  // rax
    void* v43;  // r14
    unsigned long long v44;  // rax
    unsigned long v45;  // rbp
    unsigned long v47;  // r14
    unsigned long long v48;  // rdx
    unsigned long long v49;  // rax
    unsigned long long v50;  // rdx
    void* v52;  // r14
    unsigned long long v53;  // r15
    unsigned long long v54;  // rax
    unsigned long long v55;  // rdx
    unsigned int v57;  // esi
    char *v58;  // rdi
    unsigned long long v60;  // rdx
    unsigned long v61;  // r15
    unsigned long long v62;  // rax
    unsigned int v63;  // r13d
    unsigned int v64;  // eax
    unsigned long long v65;  // rax
    unsigned int v66;  // eax
    unsigned int v67;  // r13d
    struct_3 *v68;  // r12
    struct_0 *v69;  // rax
    int v70;  // xmm0
    struct_2 *v71;  // r12
    unsigned long v72;  // r15
    struct_1 *v73;  // r12
    char v74;  // al
    unsigned long long v75;  // rax
    unsigned long long v76;  // rdx

    v10.parse(a2, a3, a0, a1);
    if (v14 == 2)
    {
        v33 = *((int *)&v10) * 0x100000000;
        v34 = 1;
    }
    else
    {
        v33 = 0x200000000;
        v34 = 1;
        if (a3)
        {
            v35 = *((long long *)a2);
            if ((v14 & 1))
            {
                fish::builtins::shared::builtin_print_help(a0, a1, v35, (long long)a2[8]);
                v33 = 0;
                v34 = 0;
            }
            else
            {
                v8 = (long long)a2[8];
                v36 = v10;
                if (v36 == a3)
                {
                    v37 = a0.jobs();
                    v22 = v37[1];
                    v23 = v37[1] + v37[2] * 8;
                    v24 = 0;
                    v38 = v22.try_fold(&(char)v24);
                    if (v39)
                    {
                        v27 = v38;
                        *(v39).inc_strong();
                        v40 = *(v39);
                        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                        goto LABEL_134a728;
                    }
                    else
                    {
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v3 = "%";
                        v4 = 32;
                        v0 = 0x8000000000000000;
                        v10 = 1;
                        v14 = v35;
                        v15 = v8;
                        fish_printf::printf_impl::sprintf_locale(&v25, &v5, v0.localize(), v39, ".", &v10, 1);
                        v25.unwrap(&g_14c8f30);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                        memcpy(&v10, &v5, 16);
                        v15 = 0;
                        a1->field_10.append(&v10);
                        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                        v33 = 0x200000000;
                    }
                }
                else
                {
                    v42 = v36;
                    if ((char)_ccall(4, 24, v42 + 1, 0, (unsigned long long)(char)(v36 < a3)))
                        core::panicking::panic_const::panic_const_add_overflow(&g_14c8e58); /* do not return */
                    v21 = v35;
                    if (v42 + 1 < a3)
                    {
                        if (v36 >= a3)
                            core::panicking::panic_bounds_check(v36, a3, &g_14c8ee8); /* do not return */
                        v43 = v36 * 16;
                        v44 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)(a2 + v43)), *((long long *)(a2 + v43 + 8)));
                        if (!((char)v44 & 1))
                        {
                            if (v44 < 0)
                            {
                                v10 = &g_14c74d8;
                                v14 = 1;
                                v15 = 8;
                                *((uint128_t *)&v16) = 0;
                                core::panicking::panic_fmt(&v10, &g_14c74e8); /* do not return */
                            }
                            if (v44 >> 32)
                            {
                                v11 = a0.job_get_from_pid(v44 >> 32);
                                core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::proc::Job>>>(&v11);
                                if (v11)
                                {
                                    v45 = a1->field_10;
                                    v5 = 0;
                                    v6 = 4;
                                    v7 = 0;
                                    v3 = "%";
                                    v4 = 19;
                                    v0 = 0x8000000000000000;
                                    v12 = 1;
                                    v14 = v21;
                                    v47 = v8;
                                    v15 = v47;
                                    fish_printf::printf_impl::sprintf_locale(&(char)v22, &v5, v0.localize(), v48, ".", &v12, 1);
                                    (char)v22.unwrap(&g_14c8f18);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
                                    goto LABEL_134aade;
                                }
                            }
                        }
                        v45 = a1->field_10;
                        v5 = 0;
                        v6 = 4;
                        v7 = 0;
                        v3 = "%";
                        v4 = 24;
                        v0 = 0x8000000000000000;
                        v49 = v0.localize();
                        v12 = 1;
                        v14 = v21;
                        v47 = v8;
                        v15 = v47;
                        v17 = 1;
                        *((int128_t *)&v18) = *((int128_t *)(a2 + v43));
                        fish_printf::printf_impl::sprintf_locale(&(char)v22, &v5, v49, v50, ".", &v12, 2);
                        (char)v22.unwrap(&g_14c8f00);
                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v12);
LABEL_134aade:
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                        *((int128_t *)&v10) = *((int128_t *)&v5);
LABEL_134aaf7:
                        v15 = 0;
                        v45.append(&v10);
                        fish::builtins::shared::builtin_print_error_trailer(a0, v45, v21, v47);
                        v33 = 0x200000000;
                    }
                    else
                    {
                        if (v36 >= a3)
                            core::panicking::panic_bounds_check(v36, a3, &g_14c8e70); /* do not return */
                        v52 = v36 * 16;
                        v53 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)(a2 + v52)), *((long long *)(a2 + v52 + 8)));
                        if (((char)v53 & 1))
                        {
                            v45 = a1->field_10;
                            v0 = 0;
                            v3 = 4;
                            v4 = 0;
                            v54 = g_14c83b8[0].localize();
                            v11 = 1;
                            v14 = v21;
                            v47 = v8;
                            v15 = v47;
                            v17 = 1;
                            *((int128_t *)&v18) = *((int128_t *)(a2 + v52));
                            fish_printf::printf_impl::sprintf_locale(&(char)v5, &v0, v54, v55, ".", &v11, 2);
                            (char)v5.unwrap(&g_14c8ed0);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                            *((int128_t *)&v10) = *((int128_t *)&v0);
                            goto LABEL_134aaf7;
                        }
                        else
                        {
                            v57 = v53 >> 32;
                            if (v53 < 0)
                            {
                                if (v57 != 0x80000000)
                                    v57 = -(v57);
                                else
                                    core::panicking::panic_const::panic_const_neg_overflow(&g_14c5f20); /* do not return */
                            }
                            if (v57)
                            {
                                v27 = a0.job_get_with_index_from_pid(v57);
                                v25 = v27;
                            }
                            else
                            {
                                v40 = 0;
                            }
                            v26 = v40;
                            v58 = &v25;
                            if (!v40)
                                v58 = 0;
                            if (v58.map_or())
                            {
                                v5 = 0;
                                v6 = 4;
                                v7 = 0;
                                v3 = "%";
                                v4 = 25;
                                v0 = 0x8000000000000000;
                                v10 = 1;
                                v14 = v21;
                                v15 = v8;
                                v17 = 8197;
                                v18 = v53 >> 32;
                                fish_printf::printf_impl::sprintf_locale(&(char)v22, &v5, v0.localize(), v60, ".", &v10, 2);
                                (char)v22.unwrap(&g_14c8eb8);
                                core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v10);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                                memcpy(&v10, &v5, 16);
                                v15 = 0;
                                a1->field_10.append(&v10);
                                core::ptr::drop_in_place<core::option::Option<(usize,alloc::rc::Rc<fish::proc::Job>)>>(&v25);
                                v33 = 0x200000000;
                            }
                            else
                            {
                                if (!v40)
                                    core::option::unwrap_failed(&g_14c8e88); /* do not return */
                                v28 = v40;
                                if ((char)v40 + 16.wants_job_control())
                                {
LABEL_134a728:
                                    v25 = v40;
                                    if (a1->field_28)
                                    {
                                        v61 = a1->field_10;
                                        v2 = 0;
                                        v3 = 4;
                                        v4 = 0;
                                        v62 = g_14c8f48[0].localize();
                                        v63 = (unsigned int)v39;
                                        v64 = v40 + 16.job_id();
                                        v11 = 16389;
                                        v14 = -(v64 < 1) | v64;
                                        v17 = 1;
                                        *((int128_t *)&v18) = (int128_t)v40[24];
                                        fish_printf::printf_impl::sprintf_locale(&(char)v5, &v2, v62, v39, ".", &v11, 2);
                                        (char)v5.unwrap(&g_14c8f90);
                                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                                        *((int128_t *)&v13) = *((int128_t *)&v2);
                                        v15 = v4;
                                        v61.append(&v11);
                                    }
                                    else
                                    {
                                        v22 = 0;
                                        v23 = 4;
                                        v24 = 0;
                                        v2 = 0;
                                        v3 = 4;
                                        v4 = 0;
                                        v65 = g_14c8f48[0].localize();
                                        v63 = (unsigned int)v39;
                                        v66 = v40 + 16.job_id();
                                        v11 = 16389;
                                        v14 = -(v66 < 1) | v66;
                                        v17 = 1;
                                        *((int128_t *)&v18) = (int128_t)v40[24];
                                        fish_printf::printf_impl::sprintf_locale(&(char)v5, &v2, v65, v39, ".", &v11, 2);
                                        (char)v5.unwrap(&g_14c8f60);
                                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                                        v7 = v4;
                                        *((int128_t *)&v5) = *((int128_t *)&v2);
                                        v12 = 1;
                                        v14 = v6;
                                        v15 = v7;
                                        fish_printf::printf_impl::sprintf_locale(&v2, &v22, "%sbuiltin %ls returned invalid exit code %d", 2, &v12, 1);
                                        v2.unwrap(&g_14c8f78);
                                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v5);
                                        v15 = v24;
                                        *((int128_t *)&v13) = *((int128_t *)&v22);
                                        fish::wutil::wwrite_to_fd(v14, v24, 2);
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
                                    }
                                    fish::tokenizer::tok_command(&v29, (long long)v40[24], (long long)v40[32]);
                                    v67 = v63 & 0xffffff00 | 1;
                                    if (*((long long *)&v31))
                                    {
                                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v10, v30, *((long long *)&v31));
                                        v4 = v15;
                                        *((int128_t *)&v0) = *((int128_t *)&v10);
                                        v68 = a0.libdata_mut();
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v68);
                                        v68->field_10 = v4;
                                        v68->field_0 = *((int128_t *)&v2);
                                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                                        v69 = 8.alloc_impl(24, 0);
                                        if (!v69)
                                            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                                        v70 = *((int128_t *)&v29);
                                        v69->field_10 = *((long long *)&v31);
                                        *((void*)&v69->field_0) = v70;
                                        v10 = 1;
                                        v14 = v69;
                                        v15 = 1;
                                        a0.set_var_and_fire("_", 1, 16, &v10);
                                        v10.to_vec((long long)v40[24], (long long)v40[32]);
                                        v4 = 1;
                                        *((int128_t *)&v1) = *((int128_t *)&v10);
                                        v71 = a0.libdata_mut();
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&v71->padding_0)[1]);
                                        *((unsigned long long *)((char *)&v71->field_18 + 8)) = v4;
                                        *((int128_t *)&(&v71->padding_0)[1]) = *((int128_t *)&v2);
                                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v39);
                                        v67 = 0;
                                    }
                                    fish::reader::reader_write_title((long long)v40[24], (long long)v40[32], a0, 1);
                                    a0.job_promote_at(v27);
                                    v2.new(fish::reader::reader_save_screen_state);
                                    v10 = fish::fds::make_fd_blocking(0);
                                    v8 = v67;
                                    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v10);
                                    v72 = v40 + 16;
                                    v73 = v72.group();
                                    v73.set_is_foreground(1);
                                    if ((char)v72.entitled_to_terminal())
                                        v2.disable_tty_protocols();
                                    if (v73->field_18 >= 9223372036854775807)
                                        core::cell::panic_already_mutably_borrowed(&g_14c8fc0); /* do not return */
                                    v73->field_18 = v73->field_18 + 1;
                                    if ((char)v73.wants_terminal() && v73->field_20 && tcsetattr(0, 1, v73 + 1) < 0)
                                        fish::wutil::perror("tcsetattr  nodes:   branches:   leaves:   tokens:   keywords: ", 9);
                                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v73->field_18);
                                    if (!(long long)v40[56])
                                        core::option::unwrap_failed(&g_14c8fa8); /* do not return */
                                    v2.to_job_group(v40 + 56);
                                    v74 = v72.resume();
                                    if (v74)
                                        v72.continue_job(a0);
                                    if ((char)v72.is_stopped())
                                        v2.save_tty_modes();
                                    v15 = v4;
                                    memcpy(&v10, &v2, 16);
                                    v10.reclaim();
                                    v34 = v74 ^ 1;
                                    if ((char)v9)
                                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v29);
                                    core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v25);
                                    v33 = 0x100000000;
                                }
                                else
                                {
                                    v5 = 0;
                                    v6 = 4;
                                    v7 = 0;
                                    v3 = "%";
                                    v4 = 79;
                                    v0 = 0x8000000000000000;
                                    v75 = v0.localize();
                                    v10 = 1;
                                    v14 = v21;
                                    v15 = v8;
                                    v17 = 8197;
                                    v18 = v53 >> 32;
                                    v19 = 1;
                                    *((int128_t *)&v20) = (int128_t)v40[24];
                                    fish_printf::printf_impl::sprintf_locale(&(char)v22, &v5, v75, v76, ".", &v10, 3);
                                    (char)v22.unwrap(&g_14c8ea0);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 3]>(&v10);
                                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
                                    memcpy(&v10, &v5, 16);
                                    v15 = 0;
                                    a1->field_10.append(&v10);
                                    core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v28);
                                    v33 = 0x200000000;
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    return v33 | v34;
}
