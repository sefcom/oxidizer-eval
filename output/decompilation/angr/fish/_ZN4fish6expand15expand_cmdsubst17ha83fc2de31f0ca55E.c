long long fish::expand::expand_cmdsubst(unsigned long long a0[3], struct_1 *a1, unsigned long long a2[4])
{
    unsigned long long v0[3];  // [bp-0x2a8]
    char v1;  // [bp-0x29a]
    char v2;  // [bp-0x299]
    int v3;  // [bp-0x298], Other Possible Types: unsigned int, unsigned long, unsigned long long
    int v4;  // [bp-0x298], Other Possible Types: char
    unsigned long long v5;  // [bp-0x290]
    int v6;  // [bp-0x288], Other Possible Types: void*, unsigned long long
    unsigned long long v7;  // [bp-0x288]
    char v8;  // [bp-0x278]
    unsigned long long v9;  // [bp-0x268]
    char v10;  // [bp-0x25a]
    char v11;  // [bp-0x259]
    unsigned long long v12;  // [bp-0x258]
    int v13;  // [bp-0x258], Other Possible Types: void*
    unsigned long long v14;  // [bp-0x250]
    unsigned long long v15;  // [bp-0x250]
    unsigned long long v16;  // [bp-0x248]
    void* v17;  // [bp-0x248], Other Possible Types: unsigned long long
    int v18;  // [bp-0x238], Other Possible Types: void*, unsigned long long
    unsigned long long v19;  // [bp-0x238]
    int v20;  // [bp-0x238]
    unsigned long long v21;  // [bp-0x230]
    unsigned long long v22;  // [bp-0x230]
    int v23;  // [bp-0x228], Other Possible Types: void*, unsigned long long
    unsigned long long v24;  // [bp-0x228]
    unsigned long long v25;  // [bp-0x220]
    int v26;  // [bp-0x21f]
    unsigned long long v27;  // [bp-0x218]
    char v28;  // [bp-0x210]
    unsigned long long v29;  // [bp-0x208]
    void* v30;  // [bp-0x1f8]
    unsigned long long v31;  // [bp-0x1f8]
    unsigned long long v32;  // [bp-0x1f0]
    void* v33;  // [bp-0x1e8]
    unsigned long v34;  // [sp-0x1e8]
    unsigned long v35;  // [bp-0x1e0]
    unsigned long v36;  // [bp-0x1d8]
    unsigned long long v37;  // [bp-0x1d0]
    void* v38;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v39;  // [bp-0x1c8]
    unsigned long v40;  // [bp-0x1c0], Other Possible Types: unsigned long long
    void* v41;  // [bp-0x1b8], Other Possible Types: unsigned long
    int v42;  // [bp-0x1a8], Other Possible Types: void*
    unsigned long long v43;  // [bp-0x1a0]
    void* v44;  // [sp-0x198]
    unsigned long long v45;  // [bp-0x180]
    void* v46;  // [bp-0x178], Other Possible Types: char, unsigned long long
    char v47;  // [bp-0x170], Other Possible Types: unsigned long long
    void* v48;  // [bp-0x168], Other Possible Types: unsigned long long
    int v49;  // [bp-0x158]
    unsigned long long v50;  // [bp-0x150]
    void* v51;  // [bp-0x148], Other Possible Types: unsigned long long
    void* v52;  // [bp-0x140]
    unsigned long long v53;  // [bp-0x138]
    void* v54;  // [bp-0x130]
    int v55;  // [bp-0x128]
    unsigned long long v56;  // [bp-0x120]
    unsigned long long v57;  // [bp-0x118]
    void* v58;  // [bp-0x110]
    unsigned long long v59;  // [bp-0x108]
    void* v60;  // [bp-0x100]
    int v61;  // [bp-0xf8], Other Possible Types: char
    unsigned long long v62;  // [bp-0xe8]
    void* v63;  // [bp-0xe0]
    int v65;  // [bp-0xd8]
    unsigned long long v66;  // [bp-0xd0]
    void* v67;  // [bp-0xc8]
    unsigned long long v68;  // [bp-0xc0]
    void* v69;  // [bp-0xb8]
    char v70;  // [bp-0xb0]
    int v71;  // [bp-0xa8]
    void* v72;  // [bp-0xa8]
    unsigned long long v73;  // [bp-0xa0]
    int v74;  // [bp-0x98], Other Possible Types: unsigned long long
    unsigned long v75;  // [bp-0x90]
    int v76;  // [bp-0x8f]
    char v77;  // [bp-0x80]
    void* v78;  // [bp-0x78]
    int v79;  // [bp-0x78]
    unsigned long long v80;  // [bp-0x70]
    int v81;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long v82;  // [bp-0x60]
    int v83;  // [bp-0x5f]
    char v84;  // [bp-0x50]
    unsigned long long v85;  // [bp-0x48]
    int v86;  // [bp-0x40]
    unsigned long long v88[3];  // r13
    unsigned long long *v89;  // rcx
    unsigned long long v90;  // rbp
    unsigned long v91;  // cc_ndep
    unsigned long long v92;  // rdx
    unsigned long long v93;  // rax
    unsigned long long v94;  // rax
    char *v95;  // rcx
    unsigned long long v96;  // rax
    unsigned long long v98[3];  // r12
    unsigned int v100;  // ebx
    unsigned long long v101;  // rbp
    unsigned long long v104;  // rdx
    unsigned long v105;  // rdx
    unsigned long long v107;  // rbx
    char v111;  // r15b
    void* v114;  // rax
    unsigned long v116;  // r15
    unsigned long long v117;  // rsi
    unsigned long v118;  // rsi
    unsigned long v119;  // rax
    unsigned long long v120;  // rax
    unsigned long long v121;  // rax
    unsigned long long v123;  // 4100
    unsigned long v124;  // r15
    char *v125;  // rbx
    unsigned long long v126;  // r14
    void* v127;  // r13
    unsigned long long v128;  // r14
    unsigned long v129;  // r14
    unsigned long v130;  // rax
    unsigned long long v131;  // rax
    unsigned long long v136;  // rbx
    unsigned long long v138;  // rdx

    v88 = a0;
    v63 = 0;
    v1 = 0;
    v2 = 0;
    v35 = a0[2];
    fish::parse_util::parse_util_locate_cmdsubst_range(&v4, a0[1], a0[2], &v63, 0, &v1, &v2);
    if (v3)
    {
        if ((unsigned int)v3 == 1)
        {
            if (a2.add(a0))
                return 0;
            return (unsigned int)fish::expand::append_overflow_error(*(v89));
        }
        v36 = a0[1];
        v90 = v7;
        v37 = v5;
        v85 = v37;
        v86 = v6;
        v42 = 0;
        v43 = 8;
        v44 = 0;
        if (a1->field_38 && (char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v45) + 1, 0, _ccall(20, v45, 0, v91)))
            [D] Unsupported jumpkind Ijk_NoDecode at address 20632001()
        v45 = a1->field_38;
        v93 = v36.index(v35, v85.command(), v92, &g_14d86c8);
        v94 = a1.parser();
        v95 = &v45;
        if (!v45)
            v95 = 0;
        if (((char)fish::exec::exec_subshell_for_expand(v93, v92, v94, v95, &v42) & 1))
        {
            switch ((unsigned int)v92)
            {
            case 121:
                v5 = "E";
                v6 = 15;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 122:
                v5 = "T";
                v6 = 65;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 123:
                v5 = "C";
                v6 = 23;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 124:
                v5 = "U";
                v6 = 18;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 125:
                v5 = "U";
                v6 = 51;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 126:
                v5 = "C";
                v6 = 22;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            case 127:
                v5 = "U";
                v6 = 15;
                v3 = 0x8000000000000000;
                v96 = v3.localize();
                goto LABEL_13acf0b;
            default:
                if ((unsigned int)v92 != 1)
                {
                    if ((unsigned int)v92 != 2)
                        break;
                    v5 = "I";
                    v6 = 17;
                    v3 = 0x8000000000000000;
                    v96 = v3.localize();
                    goto LABEL_13acf0b;
                }
                else if (*((long long *)(a1.parser() + 64)) > 499)
                {
                    v5 = "U";
                    v6 = 38;
                    v3 = 0x8000000000000000;
                    v96 = v3.localize();
                    goto LABEL_13acf0b;
                }
                else
                {
                    v5 = "T";
                    v6 = 32;
                    v3 = 0x8000000000000000;
                    v96 = v3.localize();
                }
            }
LABEL_13acf0b:
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
            v98 = *(v89);
            if (v98)
            {
                v18 = 0;
                v21 = 4;
                *((uint128_t *)&v23) = 0;
                *((uint128_t *)&v26) = 0;
                v25 = v37;
                if (!v90)
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d86e0); /* do not return */
                }
                else if (v90 - 1 >= v37)
                {
                    v27 = v90 - v37;
                    v28 = 2;
                    v3.to_vec(v96, v92);
                    v17 = v7;
                    *((int128_t *)&v13) = *((int128_t *)&v3);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                    v23 = v17;
                    *((int128_t *)&v20) = (int128_t)v13;
                    *((unsigned long long *)&v4) = v98[1];
                    v5 = v98[2] * 48 + v98[1];
                    if ((unsigned long long)v4.any(&v18))
                    {
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v18);
                    }
                    else
                    {
                        memcpy(&v8, &v27, 16);
                        memcpy(&v7, &v23, 16);
                        *((int128_t *)&v4) = (int128_t)v20;
                        v98.push(&(unsigned long long)v4, &g_14d86f8);
                    }
                }
                else
                {
                    core::panicking::panic_const::panic_const_sub_overflow(&g_14d86f8); /* do not return */
                }
            }
            v100 = v92.make_error();
            goto LABEL_13ad066;
        }
        else
        {
            v101 = v90;
            if (v101 < v35)
            {
                v101 = v90;
                if (*((int *)(v36 + v101 * 4)) == 91)
                {
                    v52 = 0;
                    v53 = 8;
                    v54 = 0;
                    fish::expand::parse_slice(&v46, v36.index(v35, v90, &g_14d8710), a2, &v52, 0);
                    if (v47 != 2)
                    {
                        v107 = *(v89);
                        if ((v47 & 1))
                        {
                            if (v107)
                            {
                                v78 = 0;
                                v80 = 4;
                                *((uint128_t *)&v81) = 0;
                                *((uint128_t *)&v83) = 0;
                                if ((char)__CFADD__(v90, v46))
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8860); /* do not return */
                                v82 = v90 + v46;
                                v84 = 1;
                                v18 = 0;
                                v21 = 4;
                                v23 = 0;
                                v5 = "I";
                                v6 = 19;
                                v3 = 0x8000000000000000;
                                fish_printf::printf_impl::sprintf_locale(&(char)v13, &v18, v3.localize(), v92, ".", 8, 0);
                                (char)v13.unwrap(&g_14d8878);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                                *((int128_t *)&v4) = *((int128_t *)&v18);
                                v6 = 0;
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v78);
                                v81 = v7;
                                *((int128_t *)&v79) = (int128_t)v4;
                                v107.push(&v78, &g_14d8878);
                            }
                        }
                        else
                        {
                            if (v107)
                            {
                                v72 = 0;
                                v73 = 4;
                                *((uint128_t *)&v74) = 0;
                                *((uint128_t *)&v76) = 0;
                                if ((char)__CFADD__(v90, v46))
                                    core::panicking::panic_const::panic_const_add_overflow(&g_14d8830); /* do not return */
                                v75 = v90 + v46;
                                v77 = 1;
                                v18 = 0;
                                v21 = 4;
                                v23 = 0;
                                v5 = "a";
                                v6 = 32;
                                v3 = 0x8000000000000000;
                                fish_printf::printf_impl::sprintf_locale(&(char)v13, &v18, v3.localize(), v92, ".", 8, 0);
                                (char)v13.unwrap(&g_14d8848);
                                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v3);
                                *((int128_t *)&v4) = *((int128_t *)&v18);
                                v6 = 0;
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v72);
                                v74 = v7;
                                *((int128_t *)&v71) = (int128_t)v4;
                                v107.push(&v72, &g_14d8848);
                            }
                        }
                        v100 = 121.make_error();
                        core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v52, 8);
LABEL_13ad066:
                        v111 = 1;
LABEL_13ad06b:
                        core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(&v45);
                        if (!v111)
                        {
                            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v88);
                            return v100;
                        }
                        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v42);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v88);
                        return v100;
                    }
                    else if (!((char)__CFADD__(v90, v46)))
                    {
                        v58 = 0;
                        v59 = 8;
                        v60 = 0;
                        v4.into_iter(&v52);
                        if (((char)v4.next() & 1))
                        {
                            do
                            {
                                if (!v104 <= 0 && v104 <= 0 == 1)
                                {
                                    v105 = v104 - 1;
                                    if (v105 >= 0)
                                        core::panicking::panic_bounds_check(v105, 0, &g_14d8800); /* do not return */
                                    fish::builtins::fish_indent::fish_indent::{{closure}}(&v19, *((long long *)(8 + v105 * 24 + 8)), *((long long *)(8 + v105 * 24 + 16)));
                                    v16 = v24;
                                    *((int128_t *)&v13) = *((int128_t *)&v19);
                                    v58.push(&v12, &g_14d8818);
                                }
                            } while (((char)v4.next() & 1));
                        }
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<i64>>(&v4);
                        core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v42);
                        v44 = 0;
                        *((int128_t *)&v42) = *((int128_t *)&v58);
                        v101 = v90 + v46;
                    }
                    else
                    {
                        core::panicking::panic_const::panic_const_add_overflow(&g_14d8728); /* do not return */
                    }
                }
            }
            v46.subreceiver(a2);
            v4.to_vec(v36.index(v35, v101, &g_14d8740), a2);
            v62 = v7;
            memcpy(&v61, &v4, 16);
            if (v1)
            {
                v3 = 34;
                v61.insert_slice(0, &v3, 1);
            }
            v6 = v62;
            v4 = v61;
            fish::expand::expand_cmdsubst(&v4, a1, &v46);
            *((int128_t *)&v55) = *((int128_t *)&v46);
            v57 = v48;
            v46 = 0;
            v47 = 8;
            v48 = 0;
            v11 = v1;
            if (!v1)
            {
                v4.into_iter(&v42);
                (char)v30.next(&v4);
                v123 = v31;
                if (!((char)(((0 ^ v123) & (0 ^ -(v123))) >> 63)))
                {
                    v124 = v37 + 1;
                    v10 = _ccall(4, 24, v37 + 1, 0, (unsigned long long)(char)(0 < v123));
                    v125 = &(char)v49;
                    v0[0] = a0;
                    do
                    {
                        v41 = v34;
                        *((int128_t *)&v39) = *((int128_t *)&v31);
                        fish::common::escape_string(v125, v40, v34, 0);
                        if (!v57)
                            continue;
                        if (v10)
                        {
                            v13 = 0;
                            v15 = 4;
                            v17 = 0;
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8758); /* do not return */
                        }
                        v126 = v51;
                        v127 = 0;
                        do
                        {
                            v13 = 0;
                            v15 = 4;
                            v17 = 0;
                            v128 = v126 + v124;
                            if ((char)__CFADD__(v126, v124))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d8758); /* do not return */
                            v129 = v128 + 1;
                            if ((char)_ccall(4, 24, v128 + 1, 0, (v126 + v124 <= v126 ? 1 : 0)))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d8758); /* do not return */
                            if ((char)__CFADD__(v129, *((long long *)(16 + v56 + (char *)v127))))
                                core::panicking::panic_const::panic_const_add_overflow(&g_14d8758); /* do not return */
                            v13.reserve(v129 + *((long long *)(16 + v56 + (char *)v127)));
                            v130 = v2;
                            if (v37 < v130)
                                core::panicking::panic_const::panic_const_sub_overflow(&g_14d8770); /* do not return */
                            v131 = v36.index(v35, v37 - v130, &g_14d8788);
                            v13.spec_extend(v131, v131 + v92 * 4);
                            v13.push(64984);
                            v126 = v51;
                            v13.spec_extend(v50, v50 + v51 * 4);
                            v13.push(64984);
                            v13.spec_extend(*((long long *)(8 + v56 + (char *)v127)), *((long long *)(8 + v56 + (char *)v127)) + *((long long *)(16 + v56 + (char *)v127)) * 4);
                            v23 = 0;
                            *((int128_t *)&v18) = *((int128_t *)&v13);
                            if (!a2.add(&(unsigned long long)v18))
                            {
                                v100 = fish::expand::append_overflow_error(*(v89));
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v49);
                                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v38);
                                v88 = v0;
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
                                goto LABEL_13acd03;
                            }
                            v127 += 56;
                        } while (v57 * 56 != v127);
                        v125 = &(char)v49;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v49);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v38);
                        (char)v30.next(&v4);
                        v88 = v0;
                    } while (v31 != 0x8000000000000000);
                    goto LABEL_13acd03;
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
                core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&(char)v55);
                core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v46);
                core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::job_group::JobGroup>>>(&v45);
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v88);
                return 0;
            }
            v30 = 0;
            v32 = 4;
            v33 = 0;
            v30.reserve(8.fold(8));
            v4.into_iter(&v42);
            v12.next(&v4);
            if (!((char)(((0 ^ v12) & (0 ^ -(v12))) >> 63)))
            {
                do
                {
                    fish::common::escape_string_for_double_quotes(&v19, v14, v16);
                    v30.spec_extend(v22, v22 + v24 * 4);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v19);
                    v30.push(10);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
                    v12.next(&v4);
                } while (v12 != 0x8000000000000000);
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&v4);
            if (v33)
            {
                while (true)
                {
                    v114 = v33;
                    if (v114 < 1)
                        break;
                    v33 = v114 - 1;
                    if (*((int *)(v32 + v33 * 4)) != 10)
                        break;
                }
                v33 = v114;
            }
            v12.into_iter(&(char)v55);
            v19.next(&v12);
            if (v19 != 0x8000000000000000)
            {
                v116 = v37 + 1;
                if ((char)_ccall(4, 24, v37 + 1, 0, (unsigned long long)(char)(v19 < 0x8000000000000000)))
                {
                    v9 = v29;
                    memcpy(&v8, &v27, 16);
                    memcpy(&v7, &v23, 16);
                    *((int128_t *)&v3) = *((int128_t *)&v19);
                    v38 = 0;
                    v40 = 4;
                    v41 = 0;
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d87a0); /* do not return */
                }
                while (true)
                {
                    v9 = v29;
                    memcpy(&v8, &v27, 16);
                    memcpy(&v7, &v23, 16);
                    *((int128_t *)&v4) = *((int128_t *)&v19);
                    v38 = 0;
                    v40 = 4;
                    v41 = 0;
                    v117 = v33 + v116;
                    if ((char)__CFADD__(v33, v116))
                        break;
                    v118 = v117 + 1;
                    if ((char)_ccall(4, 24, v117 + 1, 0, (v33 + v116 <= v33 ? 1 : 0)) || (char)__CFADD__(v118, v7))
                        break;
                    v38.reserve(v118 + v7);
                    v119 = v2;
                    if (v37 < v119)
                        core::panicking::panic_const::panic_const_sub_overflow(&g_14d87b8); /* do not return */
                    v120 = v36.index(v35, v37 - v119, &g_14d87d0);
                    v38.spec_extend(v120, v120 + v92 * 4);
                    v38.push(64984);
                    v38.spec_extend(v32, v32 + v33 * 4);
                    v38.push(64984);
                    v121 = v5.index(v7, 1, &g_14d87e8);
                    v38.spec_extend(v121, v121 + v92 * 4);
                    v51 = 0;
                    *((int128_t *)&v49) = *((int128_t *)&v38);
                    if (!a2.add(&(char)v49))
                    {
                        v100 = fish::expand::append_overflow_error(*(v89));
                        core::ptr::drop_in_place<fish::complete::Completion>(&v4);
                        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v12);
                        goto LABEL_13accf6;
                    }
                    core::ptr::drop_in_place<fish::complete::Completion>(&v4);
                    v19.next(&v12);
                    if (v19 == 0x8000000000000000)
                        goto LABEL_13ac909;
                }
            }
LABEL_13ac909:
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::complete::Completion>>(&v12);
            v100 = 0;
LABEL_13accf6:
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v30);
LABEL_13acd03:
            if (!v11)
                core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&(char)v55);
            core::ptr::drop_in_place<fish::complete::CompletionReceiver>(&v46);
            goto LABEL_13ad06b;
        }
    }
    else
    {
        v136 = *(v89);
        if (v136)
        {
            *((unsigned long long *)&v65) = 0;
            v66 = 4;
            v67 = 0;
            v68 = 18446744073709551615;
            v69 = 0;
            v70 = 1;
            v13 = 0;
            v15 = 4;
            v17 = 0;
            v21 = "M";
            v23 = 22;
            v18 = 0x8000000000000000;
            fish_printf::printf_impl::sprintf_locale(&(char)v46, &v13, v18.localize(), v138, ".", 8, 0);
            (char)v46.unwrap(&g_14d86b0);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v18);
            *((int128_t *)&v20) = *((int128_t *)&v13);
            v23 = 0;
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v65);
            v67 = 0;
            *((int128_t *)&v65) = (int128_t)v20;
            v136.push(&(unsigned long long)v65, &g_14d86b0);
        }
        v100 = 121.make_error();
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(v88);
        return v100;
    }
}
