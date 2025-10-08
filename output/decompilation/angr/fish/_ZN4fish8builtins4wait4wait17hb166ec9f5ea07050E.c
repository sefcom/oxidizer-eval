long long fish::builtins::wait::wait(unsigned long long a0, struct_0 *a1, unsigned long long a2[2305843009213693951], unsigned long long a3)
{
    unsigned int v0;  // [bp-0x16c]
    unsigned long v1;  // [bp-0x168]
    unsigned long v2;  // [bp-0x160]
    void* v3;  // [bp-0x158]
    unsigned long long v4;  // [bp-0x150]
    void* v5;  // [bp-0x148]
    unsigned long long v6;  // [bp-0x140]
    unsigned long long v7;  // [bp-0x138]
    unsigned long long v8;  // [bp-0x130]
    char v9;  // [bp-0x128], Other Possible Types: unsigned long long
    void* v10;  // [bp-0x128]
    char v11;  // [bp-0x128]
    int v12;  // [bp-0x128]
    char v13;  // [bp-0x128]
    int v14;  // [bp-0x128]
    char v15;  // [bp-0x128]
    void* *v16;  // [bp-0x120], Other Possible Types: unsigned int, unsigned long long, unsigned long
    void* v17;  // [bp-0x118], Other Possible Types: unsigned int, unsigned long long, unsigned long
    int v18;  // [bp-0x110]
    unsigned short v19;  // [bp-0x108], Other Possible Types: char
    int v20;  // [bp-0x100], Other Possible Types: unsigned long
    unsigned long v21;  // [bp-0xe8]
    void* v22;  // [bp-0xe0]
    unsigned long long v23;  // [bp-0xd8]
    void* v24;  // [bp-0xd0]
    int v25;  // [bp-0xc8]
    void* v26;  // [bp-0xb8]
    unsigned long long v27;  // [bp-0xb0]
    void* v28;  // [bp-0xa8]
    unsigned long long v29[2305843009213693951];  // [bp-0xa0]
    unsigned long long v30;  // [bp-0x98]
    unsigned long long v31;  // [bp-0x90]
    unsigned long long v32;  // [bp-0x88]
    unsigned long long v33;  // [bp-0x80]
    unsigned long long v34;  // [bp-0x78]
    unsigned long long v35;  // [bp-0x70]
    uint128_t v36;  // [bp-0x68]
    void* v37;  // [bp-0x50]
    uint128_t v38;  // [bp-0x48]
    unsigned int v39;  // [bp-0x38]
    unsigned short v40;  // [bp-0x34]
    char v41;  // [bp-0x32]
    char v43;  // cl
    unsigned int v45;  // eax
    unsigned long v47;  // rdi
    unsigned long long v50;  // rbx
    unsigned int v51;  // r12d
    char *v52;  // rdi
    void* v53;  // r14
    unsigned long long v54;  // rdx
    unsigned long long v55;  // r13
    void* v56;  // rax
    void* v57;  // r14
    void* v58;  // r15
    unsigned long long v59;  // rax
    unsigned int v60;  // ebx
    unsigned long long v62;  // rax
    unsigned long long v63;  // rax

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14d5530); /* do not return */
    v1 = a2[0];
    v2 = a2[1];
    v29[0] = a2;
    v30 = a3;
    v31 = "n";
    v32 = 2;
    v33 = &g_14d5500;
    v34 = 2;
    v35 = 4;
    v36 = 0;
    v37 = 0;
    v39 = 63;
    v41 = 1;
    v40 = 0;
    v26 = 0;
    v38 = 0;
    v27 = 8;
    v28 = 0;
    v43 = 0;
    v0 = 0;
    while (true)
    {
        v45 = v26.next_opt();
        if (v45 <= 103)
        {
LABEL_1388fea:
            switch (v45)
            {
            case 58:
                v47 = v37 - 1;
                if (v37 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d5548); /* do not return */
                }
                else if (v47 < a3)
                {
                    fish::builtins::shared::builtin_missing_argument(a0, a1, v1, v2, a2[2 * v47], a2[1 + 2 * v47], 0);
                }
                else
                {
                    core::panicking::panic_bounds_check(v47, a3, &g_14d5560); /* do not return */
                }
            case 59:
                v47 = v37 - 1;
                if (v37 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d5578); /* do not return */
                }
                else if (v47 < a3)
                {
                    fish::builtins::shared::builtin_unexpected_argument(a0, a1, v1, v2, a2[2 * v47], a2[1 + 2 * v47], 0);
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v47, a3, &g_14d5590); /* do not return */
                }
            case 63:
                v47 = v37 - 1;
                if (v37 < 1)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d55a8); /* do not return */
                }
                else if (v47 < a3)
                {
                    fish::builtins::shared::builtin_unknown_option(a0, a1, v1, v2, a2[2 * v47], a2[1 + 2 * v47], 0);
                    break;
                }
                else
                {
                    core::panicking::panic_bounds_check(v47, a3, &g_14d55c0); /* do not return */
                }
            default:
                v9 = &g_14c66f0;
                v16 = 1;
                v17 = 8;
                *((uint128_t *)&v18) = 0;
                core::panicking::panic_fmt(&v9, &g_14d55d8); /* do not return */
            }
            v50 = 0x200000000;
            v51 = 1;
            break;
        }
        if (v45 != 0x110000)
        {
            v43 = 1;
            switch (v45)
            {
            case 104:
                break;
            case 110:
                do
                {
                    if ((int)v26.next_opt() <= 103)
                        goto LABEL_1388fea;
                } while (v45 == 110);
                switch (v45)
                {
                case 1114112:
                    v0 = v45 & 0xffffff00 | 1;
                    break;
                case 104:
                    v43 = 1;
                    v0 = v45 & 0xffffff00 | 1;
                    break;
                default:
                    v9 = &g_14c66f0;
                    v16 = 1;
                    v17 = 8;
                    *((uint128_t *)&v18) = 0;
                    core::panicking::panic_fmt(&v9, &g_14d55d8); /* do not return */
                }
            default:
                v9 = &g_14c66f0;
                v16 = 1;
                v17 = 8;
                *((uint128_t *)&v18) = 0;
                core::panicking::panic_fmt(&v9, &g_14d55d8); /* do not return */
            }
        }
        else
        {
            if ((v43 & 1))
            {
                fish::builtins::shared::builtin_print_help(a0, a1, v1, v2);
                v50 = 0;
                v51 = 0;
                break;
            }
            else
            {
                if (v37 == a3)
                {
                    fish::builtins::wait::get_all_wait_handles(&v9, a0);
                    v51 = fish::builtins::wait::wait_for_completion(a0, v16, v17, (char)v0 & 1);
                    v50 = 0x8200000000;
                    v52 = &v9;
                }
                else
                {
                    v22 = 0;
                    v23 = 8;
                    v24 = 0;
                    v53 = v37.index(a3, a2, a3, &g_14d55f0);
                    v50 = 0x200000000;
                    v51 = 1;
                    if (!!v53 && !!v54)
                    {
                        v55 = v54 * 16 + v53;
                        v56 = v53 + 16;
                        v21 = a1->field_10;
                        while (true)
                        {
                            v57 = v53;
                            v58 = v56;
                            if (fish::builtins::wait::iswnumeric(*((long long *)v57), (long long)v57[8]))
                            {
                                v59 = fish::wutil::wcstoi::fish_wcstoi(*((long long *)v57), (long long)v57[8]);
                                v60 = -(0 < ((char)v59 & 1)) | (unsigned int)(v59 >> 32);
                                if (v60 < 0)
                                {
                                    v9 = &g_14c74d8;
                                    v16 = 1;
                                    v17 = 8;
                                    *((uint128_t *)&v18) = 0;
                                    core::panicking::panic_fmt(&v9, &g_14c74e8); /* do not return */
                                }
                                else if (v60)
                                {
                                    v16 = v60;
                                    v10 = 0;
                                    if (!(char)fish::builtins::wait::find_wait_handles(&v10, a0, &v22))
                                    {
                                        v3 = 0;
                                        v4 = 4;
                                        v5 = 0;
                                        v7 = "%";
                                        v8 = 47;
                                        v6 = 0x8000000000000000;
                                        v11 = 1;
                                        v16 = v1;
                                        v17 = v2;
                                        v19 = 8197;
                                        v20 = v60;
                                        fish_printf::printf_impl::sprintf_locale(&v25, &v3, v6.localize(), v54, ".", &v11, 2);
                                        v25.unwrap(&g_14d5620);
                                        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v11);
                                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
                                        *((int128_t *)&v12) = *((int128_t *)&v3);
                                        v17 = 0;
                                        v21.append(&v11);
                                    }
                                }
                                else
                                {
                                    v3 = 0;
                                    v4 = 4;
                                    v5 = 0;
                                    v7 = "%";
                                    v8 = 37;
                                    v6 = 0x8000000000000000;
                                    v62 = v6.localize();
                                    v13 = 1;
                                    v16 = v1;
                                    v17 = v2;
                                    v19 = 1;
                                    *((int128_t *)&v20) = *((int128_t *)v57);
                                    fish_printf::printf_impl::sprintf_locale(&v25, &v3, v62, v54, ".", &v13, 2);
                                    v25.unwrap(&g_14d5638);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v13);
                                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
                                    *((int128_t *)&v12) = *((int128_t *)&v3);
                                    v17 = 0;
                                    v21.append(&v13);
                                }
                            }
                            else
                            {
                                *((int128_t *)&v14) = *((int128_t *)v57);
                                if (!(char)fish::builtins::wait::find_wait_handles(&v9, a0, &v22))
                                {
                                    v3 = 0;
                                    v4 = 4;
                                    v5 = 0;
                                    v7 = "%";
                                    v8 = 56;
                                    v6 = 0x8000000000000000;
                                    v63 = v6.localize();
                                    v15 = 1;
                                    v16 = v1;
                                    v17 = v2;
                                    v19 = 1;
                                    *((int128_t *)&v20) = *((int128_t *)v57);
                                    fish_printf::printf_impl::sprintf_locale(&v25, &v3, v63, v54, ".", &v15, 2);
                                    v25.unwrap(&g_14d5608);
                                    core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v15);
                                    core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v6);
                                    *((int128_t *)&v12) = *((int128_t *)&v3);
                                    v17 = 0;
                                    v21.append(&v15);
                                }
                            }
                            if (v58 == v55)
                                break;
                            v56 = (v58 != v55) * 16 + v58;
                            v53 = v58;
                            if (!v53)
                                break;
                        }
                        v50 = 0x200000000;
                    }
                    v52 = &v22;
                }
                core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(v52);
                break;
            }
        }
    }
    core::ptr::drop_in_place<fish::wgetopt::WGetopter>(&v26);
    return v51 | v50;
}
