long long fish::builtins::read::read(void* a0, struct_1 *a1, unsigned long long a2[2])
{
    unsigned long v0;  // [bp-0x358]
    unsigned long long v1;  // [bp-0x358]
    void* v2;  // [bp-0x330]
    void* v3;  // [bp-0x328], Other Possible Types: unsigned long long
    int v4;  // [bp-0x328], Other Possible Types: char
    struct_0 *v5;  // [bp-0x320], Other Possible Types: unsigned long long
    void* v6;  // [bp-0x318], Other Possible Types: unsigned long long
    int v7;  // [bp-0x316]
    char v8;  // [bp-0x30b]
    char v9;  // [bp-0x30a]
    char v10;  // [bp-0x309]
    void* v11;  // [bp-0x300]
    void* v12;  // [bp-0x2f8]
    unsigned int v13;  // [bp-0x2f0]
    unsigned int v14;  // [bp-0x2ec]
    void* v15;  // [bp-0x2e8]
    void* v16;  // [bp-0x2e0]
    unsigned long long v17;  // [bp-0x2d8]
    void* v18;  // [sp-0x2d0]
    unsigned long long v19[2];  // [bp-0x2c0]
    int v20;  // [bp-0x2b8]
    unsigned long long v21;  // [bp-0x2b8]
    unsigned long v22;  // [bp-0x2b0], Other Possible Types: unsigned long long
    void* v23;  // [bp-0x2a8], Other Possible Types: unsigned int, unsigned long long
    unsigned long long v24;  // [bp-0x290]
    unsigned long v25;  // [bp-0x288]
    unsigned long long v26;  // [bp-0x280]
    int v27;  // [bp-0x278], Other Possible Types: char *, unsigned long long
    void* v28;  // [bp-0x270], Other Possible Types: unsigned long long
    unsigned long long v29[2];  // [bp-0x268], Other Possible Types: unsigned long long
    void* v30;  // [bp-0x260]
    char *v31;  // [bp-0x258]
    char v32;  // [bp-0x250]
    void* v33;  // [bp-0x250]
    unsigned long long v34;  // [bp-0x248]
    void* v35;  // [bp-0x240]
    unsigned long long v36;  // [bp-0x238]
    unsigned int v37;  // [bp-0x230]
    char v38;  // [bp-0x22c]
    unsigned long long v39;  // [bp-0x228]
    unsigned long long v40;  // [bp-0x220]
    unsigned long long v41;  // [bp-0x218]
    int v42;  // [bp-0x210]
    int v43;  // [bp-0x1f0]
    int v44;  // [bp-0x1d8], Other Possible Types: char
    unsigned long long v45;  // [bp-0x1d0]
    unsigned long long v46;  // [bp-0x1c8]
    unsigned long v47;  // [bp-0x1c0]
    char v48;  // [sp-0x1b8]
    unsigned short v49;  // [bp-0x1b8]
    char v50;  // [bp-0x1b6]
    char v52;  // [bp-0x1b5]
    char v53;  // [bp-0x1b4]
    char v54;  // [bp-0x1b3]
    char v55;  // [bp-0x1b2]
    char v56;  // [bp-0x1b1]
    char v57;  // [bp-0x1b0]
    int v58;  // [bp-0x1af]
    unsigned long long v59;  // [bp-0x1a8]
    unsigned long long v60;  // [bp-0x1a0]
    unsigned long long v61;  // [bp-0x198]
    void* v62;  // [bp-0x190]
    int v63;  // [sp-0x188]
    char v64;  // [bp-0x188], Other Possible Types: unsigned long long
    int v65;  // [bp-0x188], Other Possible Types: void*
    char v66;  // [sp-0x188]
    int v67;  // [bp-0x188]
    struct_2 *v68;  // [bp-0x180], Other Possible Types: char, unsigned long long
    void* v69;  // [sp-0x178], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v70;  // [bp-0x178]
    char v71;  // [bp-0x160]
    void* v72;  // [bp-0x158]
    unsigned short v73;  // [bp-0x150]
    unsigned int v74;  // [bp-0x14e]
    char v75;  // [bp-0xf8]
    int v76;  // [bp-0xe8]
    unsigned long long v77;  // [bp-0xd8]
    void* v78;  // [bp-0xd0]
    unsigned long long v79;  // [bp-0xc8]
    void* v80;  // [bp-0xc0]
    unsigned long v81;  // [bp-0xb8]
    char *v82;  // [bp-0xb0]
    int v83;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v84;  // [bp-0x98]
    int v85;  // [bp-0x88]
    unsigned long long v86;  // [bp-0x78]
    int v87;  // [bp-0x70]
    unsigned long long v88;  // [bp-0x60]
    int v89;  // [bp-0x58]
    unsigned short v90;  // [bp-0x46]
    int v91;  // [bp-0x44]
    char v92;  // [bp-0x32]
    void* v94;  // rcx
    unsigned long v95;  // r15
    unsigned int v96;  // ebx
    unsigned long long v97;  // rdi
    unsigned long long v98;  // rbp
    unsigned long v99;  // r12
    void* v100;  // r13
    unsigned long long v101;  // r14
    char *v102;  // r14
    char *v103;  // rbp
    void* v104;  // r13
    unsigned long long v105;  // rax
    unsigned long long v106;  // rax
    unsigned long long v107;  // rdx
    unsigned long long v108;  // r8
    unsigned long long v109;  // rax
    unsigned long long v110;  // rcx
    unsigned long long v111;  // rax
    unsigned long long v112;  // rcx
    void* v114;  // r15
    unsigned long v115;  // rax
    unsigned long v116;  // rsi
    unsigned long v117;  // rdx
    unsigned long v118;  // rcx
    unsigned long v119;  // r13
    void* v120;  // r15
    void* v121;  // r12
    unsigned long v122;  // rbx
    unsigned long v123;  // r14
    struct_0 *v124;  // rax
    void* v125;  // r15
    unsigned long v126;  // rax
    unsigned long v127;  // rsi
    unsigned long v128;  // rdx
    unsigned long v129;  // rcx
    unsigned long v130;  // rax
    unsigned long v131;  // rsi
    unsigned long v132;  // rdx
    unsigned long v133;  // rcx
    void* v134;  // rbx
    void* v135;  // rax
    void* v136;  // r15
    void* v137;  // r12
    void* v138;  // r13
    unsigned long v139;  // rbx
    unsigned long v140;  // r14
    struct_2 *v141;  // rax
    int v142;  // xmm0
    unsigned long long v143;  // rax
    unsigned long v144;  // r15
    void* v145;  // r13
    unsigned long long v146;  // rdx
    unsigned long v147;  // r15
    struct_0 *v148;  // rax
    struct_0 *v149;  // r14
    int v150;  // xmm0
    unsigned long v151;  // rcx
    void* v152;  // r15
    unsigned long v153;  // rax
    unsigned long v154;  // rsi
    unsigned long v155;  // rdx
    unsigned long v156;  // rcx
    void* v157;  // rax
    unsigned long v158;  // r12
    void* v159;  // r15
    unsigned long v160;  // rbx
    unsigned long v161;  // r14
    struct_0 *v162;  // rax
    unsigned long v164;  // rbx
    unsigned long v165;  // r14
    struct_0 *v166;  // rax
    unsigned long long v167;  // rax
    unsigned long long v168;  // rdx

    v16 = 0;
    v17 = 4;
    v18 = 0;
    v19[0] = a2;
    fish::builtins::read::parse_cmd_opts(&v66, a2, v94, a0, a1);
    v95 = *((int *)&v68);
    if ((char)(((0 ^ v64) & (0 ^ -(v64))) >> 63))
        v96 = 1;
    memcpy(&v38, &v66, 132);
    v97 = *((long long *)&v75);
    v36 = v64;
    v37 = v95;
    if (!v94)
        core::panicking::panic_bounds_check(0, 0, &g_14cc138); /* do not return */
    v98 = v19[0];
    v99 = v19[1];
    if (v56 == 1)
    {
        v11 = v94;
        v104 = v94;
        if (v50)
            goto LABEL_1365851;
        goto LABEL_13657d9;
    }
    if (v94 < v97)
        core::slice::index::slice_start_index_len_fail(v97, v94, &g_14cc150); /* do not return */
    v19[0] = &v19[v97];
    v100 = v94 - v97;
    v11 = v100;
    if (v94 == v97)
    {
        v56 = 1;
        v104 = 0;
        if (!v50)
            goto LABEL_13657d9;
LABEL_1365851:
        fish::builtins::shared::builtin_print_help(a0, a1, v98, v99);
        v96 = 0;
        goto LABEL_136586c;
    }
    v104 = v100;
    if (v50)
        goto LABEL_1365851;
LABEL_13657d9:
    v101 = a1->field_10;
    v1 = v101;
    if (((char)fish::builtins::read::validate_read_args(v98, v99, &v36, v19, v104, a0, v1) & 1))
    {
        v96 = 1;
        v95 = 2;
        goto LABEL_136586c;
    }
    v14 = a1->field_20;
    if (a1->field_20 < 0)
    {
        v3 = 0;
        v5 = 4;
        v6 = 0;
        v28 = "%";
        v29 = 21;
        v27 = 0x8000000000000000;
        v167 = v27.localize();
        v64 = 1;
        v68 = v98;
        v69 = v99;
        fish_printf::printf_impl::sprintf_locale(&(char)v20, &v3, v167, v168, ".", &(unsigned long long)v65, 1);
        v96 = 1;
        (char)v20.unwrap(&g_14cc360);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned long long)v65);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v27);
        *((int128_t *)&v65) = *((int128_t *)&v3);
        v69 = v6;
        v1.append(&(unsigned long long)v65);
        v95 = 1;
LABEL_136586c:
        core::ptr::drop_in_place<fish::builtins::read::Options>(&v36);
        v13 = 0;
    }
    if (v57)
    {
        v66.to_vec("\n", 1);
        v29 = v70;
        *((int128_t *)&v27) = *((int128_t *)&v64);
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v44);
        v46 = v29;
        *((int128_t *)&v44) = (int128_t)v27;
        v55 = 0;
        v52 = 0;
    }
    v12 = 0;
    v82 = &v11;
    v27 = &v82;
    v28 = a0;
    v29[0] = v19;
    v30 = v104;
    v31 = &v48;
    v10 = fish::nix::isatty(v14);
    v9 = a1->field_24;
    v8 = a1->field_24 ^ 1;
    v25 = &v29[1];
    v2 = 0;
    v102 = &v66;
    v103 = &v4;
    v59 = &g_14cc180;
    v24 = &g_14cc2d0;
    v15 = v104;
    while (true)
    {
        v18 = 0;
        if (v10 && !v55)
        {
            if (v40 != 0x8000000000000000)
            {
                v1 = (long long)v42;
                v105 = fish::builtins::read::read_interactive(a0, &v16, v47, v52, v54, v41, (long long)v42, *((long long *)&v37), v39, &v43, v14);
                v95 = 1;
                v101 = 0;
                v13 = 0;
                goto LABEL_1365b63;
            }
            else
            {
                core::option::unwrap_failed(&g_14cc168); /* do not return */
            }
        }
        if (v47 || v57 || !(v9 & 1) && lseek(v14, 0, 1) == -1)
        {
            v105 = fish::builtins::read::read_one_char_at_a_time(v14, &v16, v47, v55);
            goto LABEL_1365b3e;
        }
        v105 = fish::builtins::read::read_in_chunks(v14, &v16, v55, v8 & 1);
LABEL_1365b3e:
        v13 = (v105 & 4294967295) >> 8;
        v101 = (v105 & 4294967295) >> 16 & 4294967295;
        v95 = v105 >> 32;
LABEL_1365b63:
        v26 = v105;
        if (((char)v105 & 1))
        {
            fish::builtins::read::read::{{closure}}(&v27, &v12);
            v96 = v26;
            goto LABEL_1366a1a;
        }
        if (v56)
        {
            v69 = v18;
            memcpy(&v66, &v16, 16);
            a1->field_8.append(&v66);
            core::ptr::drop_in_place<fish::builtins::read::Options>(&v36);
            v96 = v26;
        }
        if ((char)v58 == 3)
        {
            v33 = 0;
            v34 = 4;
            v35 = 0;
            if ((long long)v44 == 0x8000000000000000)
            {
                v106 = fish::builtins::read::read::{{closure}}(&v33, a0);
                v108 = v107;
                if (v107)
                    goto LABEL_1365df9;
                goto LABEL_1365be1;
            }
            v106 = v45;
            v108 = v46;
            if (!v46)
            {
LABEL_1365be1:
                v109 = 1.max(v18);
                if (!v53)
                {
                    v110 = v11 - v2;
                    if (v11 >= v2)
                    {
                        if (v110 < v109)
                        {
                            v109 = v110;
                            goto LABEL_1365c14;
                        }
                        else
                        {
                            goto LABEL_1365c14;
                        }
                    }
                }
                else
                {
LABEL_1365c14:
                    v60 = v109.with_capacity_in(8, 24, &g_14cc228);
                    v61 = v107;
                    v62 = 0;
                    v21 = 4;
                    v22 = 4 + v18 * 4;
                    v23 = 0;
                    while (true)
                    {
                        v111 = v21.next();
                        if ((unsigned int)v107 == 0x110000)
                            break;
                        if (!v53)
                        {
                            v112 = v111;
                            if ((char)_ccall(4, 24, v112 + 1, 0, (unsigned long long)(char)(v53 < 0)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14cc240); /* do not return */
                            if (v11 < v2)
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14cc180); /* do not return */
                            if (v112 + 1 >= v11 - v2)
                            {
                                v102.to_vec(4.index(v18, v111, &g_14cc258), a2);
                                v6 = v70;
                                *((int128_t *)&v4) = *((int128_t *)&v66);
                                v60.push(v103, &g_14cc270);
                                break;
                            }
                        }
                        v102.from((unsigned int)v107);
                        v6 = v70;
                        *((int128_t *)&v4) = *((int128_t *)&v66);
                        v60.push(v103, &g_14cc2b8);
                    }
                    if (v53)
                    {
                        v114 = v2;
                        if (v114 >= v104)
                            core::panicking::panic_bounds_check(v114, v15, &g_14cc2a0); /* do not return */
                        v115 = v114 * 16;
                        v116 = *((long long *)((char *)v19 + v115));
                        v117 = *((long long *)(8 + (char *)v19 + v115));
                        v118 = *((int *)&v49);
                        v69 = 0;
                        *((int128_t *)&v67) = *((int128_t *)&v60);
                        a0.set_var_and_fire(v116, v117, v118, v102);
                        v2 = v114 + 1;
                        v12 = v2;
                        goto LABEL_13667ea;
                    }
                    else
                    {
                        v102.into_iter(&v60);
                        v76.next(v102);
                        if ((long long)v76 == 0x8000000000000000)
                        {
                            v119 = v2;
                        }
                        else
                        {
                            v120 = v2 * 16 + v25;
                            do
                            {
                                v121 = v119;
                                if (v119 >= v15)
                                    core::panicking::panic_bounds_check(v121, v15, &g_14cc288); /* do not return */
                                v122 = (long long)v120[8];
                                v123 = *((long long *)v120);
                                v124 = 8.alloc_impl(24, 0);
                                if (!v124)
                                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                                v124->field_10 = v77;
                                *((void*)&v124->field_0) = v76;
                                v3 = 1;
                                v5 = v124;
                                v6 = 1;
                                v103 = &v3;
                                a0.set_var_and_fire(v122, v123, v49, &v3);
                                v119 = v121 + 1;
                                v102 = &v66;
                                v76.next(&v66);
                                v120 += 16;
                            } while ((long long)v76 != 0x8000000000000000);
                        }
                        v12 = v119;
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(v102);
                        v2 = v119;
                        goto LABEL_13667ea;
                    }
                }
            }
            else
            {
LABEL_1365df9:
                if (v53)
                {
                    if ((long long)v44 == 0x8000000000000000)
                    {
                        fish::wcstringutil::split_string_tok(v103, 4, v18, v106, v108, 0, v1);
                        v102.into_iter(v103);
                        v103.collect(v102);
                        v125 = v2;
                        if (v125 >= v104)
                            core::panicking::panic_bounds_check(v125, v104, &g_14cc348); /* do not return */
                        v126 = v125 * 16;
                        v127 = *((long long *)((char *)v19 + v126));
                        v128 = *((long long *)(8 + (char *)v19 + v126));
                        v129 = *((int *)&v49);
                        v69 = v6;
                        *((int128_t *)&v63) = (int128_t)v4;
                        a0.set_var_and_fire(v127, v128, v129, v102);
                        v1 = v1;
                    }
                    else
                    {
                        fish::wcstringutil::split_about(v103, 4, v18, v106, v108, -1, 0);
                        v102.into_iter(v103);
                        v103.collect(v102);
                        v125 = v2;
                        if (v125 >= v104)
                            core::panicking::panic_bounds_check(v125, v104, &g_14cc330); /* do not return */
                        v130 = v125 * 16;
                        v131 = *((long long *)((char *)v19 + v130));
                        v132 = *((long long *)(8 + (char *)v19 + v130));
                        v133 = *((int *)&v49);
                        v69 = v6;
                        *((int128_t *)&v63) = (int128_t)v4;
                        a0.set_var_and_fire(v131, v132, v133, v102);
                        v1 = v0;
                    }
                    v2 = v125 + 1;
                    v12 = v2;
                    goto LABEL_13667ef;
                }
                if ((long long)v44 != 0x8000000000000000)
                {
                    if (!v11)
                        goto LABEL_1366bb7;
                    fish::wcstringutil::split_about(&v85, 4, v18, v106, v108, v11 - 1, 0);
                    if (v11 < v2)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14cc180); /* do not return */
                    if (v86 <= v11 - v2)
                    {
                        v102.into_iter(&v85);
                        if (v102.next())
                        {
                            v145 = v2 * 16 + v25;
                            do
                            {
                                v2 = v144;
                                if (v144 >= v15)
                                    core::panicking::panic_bounds_check(v2, v15, &g_14cc300); /* do not return */
                                v147 = (long long)v145[8];
                                v81 = *((long long *)v145);
                                v148 = 8.alloc_impl(24, 0);
                                if (!v148)
                                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                                v149 = v148;
                                v4.to_vec(v143, v146);
                                v23 = v6;
                                v150 = (int128_t)v4;
                                v20 = v150;
                                v149->field_10 = v23;
                                *((void*)&v149->field_0) = v150;
                                v3 = 1;
                                v5 = v149;
                                v6 = 1;
                                v103 = &v3;
                                a0.set_var_and_fire(v147, v81, v49, &v3);
                                v144 = v2 + 1;
                                v12 = v144;
                                v102 = &v66;
                                v143 = v66.next();
                                v145 += 16;
                                v151 = v95;
                            } while (v143);
                        }
                        else
                        {
                            v144 = v2;
                            v151 = v95;
                        }
                        v95 = v151;
                        v2 = v144;
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<(&fish::complete::CompletionEntryIndex,&fish::complete::CompletionEntry)>>(v102);
                        v1 = v0;
                    }
                    else
                    {
                        core::panicking::panic("assertion failed: splits.len() <= vars_left(var_ptr)%", 52, &g_14cc2e8); /* do not return */
                    }
LABEL_13667ea:
                    v104 = v15;
LABEL_13667ef:
                    if (v57)
                    {
                        if (v11 >= v2)
                        {
                            if (v11 != v2)
                            {
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
                                continue;
                            }
                            goto LABEL_13669d5;
                        }
                    }
                    else
                    {
LABEL_13669d5:
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v33);
LABEL_13669e2:
                        v96 = v26;
                        if (!v53)
                            fish::builtins::read::read::{{closure}}(&v27, &v12);
LABEL_1366a1a:
                        core::ptr::drop_in_place<fish::builtins::read::Options>(&v36);
                    }
                }
                else if (v11 >= v2)
                {
                    v1 = v11 - v2;
                    fish::wcstringutil::split_string_tok(v103, 4, v18, v106, v108, 1, v1);
                    v102.into_iter(v103);
                    v103.collect(v102);
                    v134 = v11;
                    v135 = v2;
                    if (v11 >= v135)
                    {
                        v136 = v135 * 16 + v25;
                        v137 = 0;
                        do
                        {
                            if (v135 == v134)
                            {
                                v12 = v134;
                                core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(v103);
                                v2 = v134;
                                v104 = v15;
                                goto LABEL_13667ef;
                            }
                            v138 = v135;
                            v78 = 0;
                            v79 = 4;
                            v80 = 0;
                            if (v137 < v6)
                            {
                                core::intrinsics::typed_swap_nonoverlapping(&v78, 0x18 * v137 + (char *)v5);
                                v137 += 1;
                            }
                            if (v138 >= v15)
                                core::panicking::panic_bounds_check(v138, v15, &g_14cc318); /* do not return */
                            v139 = (long long)v136[8];
                            v140 = *((long long *)v136);
                            v141 = 8.alloc_impl(24, 0);
                            if (!v141)
                                alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                            v142 = *((int128_t *)&v78);
                            v141->field_10 = 0;
                            *((void*)&v141->field_0) = v142;
                            v64 = 1;
                            v68 = v141;
                            v69 = 1;
                            v102 = &v64;
                            a0.set_var_and_fire(v139, v140, v49, &v64);
                            v135 = v138 + 1;
                            v134 = v11;
                            v136 += 16;
                            v103 = &v4;
                        } while (v11 > v138);
                    }
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14cc180); /* do not return */
                }
            }
            v24 = &g_14cc180;
LABEL_1366bb7:
            core::panicking::panic_const::panic_const_sub_overflow(v24); /* do not return */
        }
        else
        {
            v32 = (char)v58;
            v72 = 0;
            memcpy(&v70, &v17, 16);
            v73 = 257;
            v71 = 2;
            v65 = 0;
            v74 = 0;
            if (v53)
            {
                v21 = 0;
                v22 = 8;
                v23 = 0;
                while (true)
                {
                    v89.next(v102);
                    if ((char)v90 == 2)
                        break;
                    fish::builtins::read::read::{{closure}}(v103, &v32, v102, &v89);
                    v21.push(v103, &g_14cc1f8);
                }
                v152 = v2;
                if (v152 >= v104)
                    core::panicking::panic_bounds_check(v152, v104, &g_14cc210); /* do not return */
                v153 = v152 * 16;
                v154 = *((long long *)((char *)v19 + v153));
                v155 = *((long long *)(8 + (char *)v19 + v153));
                v156 = *((int *)&v49);
                v6 = 0;
                *((int128_t *)&v4) = *((int128_t *)&v21);
                a0.set_var_and_fire(v154, v155, v156, v103);
                v2 = v152 + 1;
                v12 = v2;
                goto LABEL_136616e;
            }
            v157 = v11;
            v158 = v2;
            if (v11 < v158)
            {
LABEL_1366ae9:
                core::panicking::panic_const::panic_const_sub_overflow(v59); /* do not return */
            }
            v159 = v158 * 16 + v25;
            while (true)
            {
                if (v158 == v157)
                {
                    v59 = &g_14cc198;
                    goto LABEL_1366ae9;
                }
                v2 = v158;
                v158 += 1;
                if (v158 == v157)
                    break;
                v103.next(v102);
                if ((char)v7 == 2)
                    break;
                v23 = v6;
                *((int128_t *)&v20) = *((int128_t *)&v3);
                fish::builtins::read::read::{{closure}}(&v87, &v32, v102, &(unsigned long long)v20);
                if (v2 >= v104)
                    core::panicking::panic_bounds_check(v2, v104, &g_14cc1b0); /* do not return */
                v160 = (long long)v159[8];
                v161 = *((long long *)v159);
                v162 = 8.alloc_impl(24, 0);
                if (!v162)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v162->field_10 = v88;
                *((void*)&v162->field_0) = v87;
                v3 = 1;
                v5 = v162;
                v6 = 1;
                v103 = &v3;
                a0.set_var_and_fire(v160, v161, v49, &v3);
                v157 = v11;
                v159 += 16;
                v102 = &v65;
                if (v11 <= v158 - 1)
                    goto LABEL_1366ae9;
            }
            v12 = v2;
            v91.next(v102);
            if (v92 != 2)
            {
                v103.to_vec(4.index(v18, v91.offset(), &g_14cc1c8), a2);
                v84 = v6;
                memcpy(&v83, &v3, 16);
                if (v2 >= v104)
                    core::panicking::panic_bounds_check(v2, v104, &g_14cc1e0); /* do not return */
                v164 = (long long)v159[8];
                v165 = *((long long *)v159);
                v166 = 8.alloc_impl(24, 0);
                if (!v166)
                    alloc::alloc::handle_alloc_error(8, 24); /* do not return */
                v166->field_10 = v84;
                *((void*)&v166->field_0) = v83;
                v3 = 1;
                v5 = v166;
                v6 = 1;
                v103 = &v3;
                a0.set_var_and_fire(v164, v165, v49, &v3);
                v2 += 1;
                v12 = v2;
                v102 = &v65;
            }
LABEL_136616e:
            if (!v57)
                goto LABEL_13669e2;
            if (v11 < v2)
                goto LABEL_1366ae9;
            if (v11 == v2)
                goto LABEL_13669e2;
        }
    }
}
