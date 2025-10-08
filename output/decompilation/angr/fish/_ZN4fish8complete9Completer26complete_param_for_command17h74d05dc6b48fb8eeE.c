void fish::complete::Completer::complete_param_for_command(struct_2 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, void* a6, char a7, char *a8)
{
    char v0;  // [sp-0x226]
    char v1;  // [bp-0x225]
    unsigned int v3;  // [bp-0x224]
    char v4;  // [bp-0x211]
    int v5;  // [bp-0x208]
    void* v6;  // [bp-0x208]
    unsigned long long v7;  // [bp-0x200]
    void* v8;  // [bp-0x1f8], Other Possible Types: unsigned long
    unsigned long long v10;  // [bp-0x1e8]
    unsigned long long v11;  // [bp-0x1e0], Other Possible Types: char
    void* v12;  // [bp-0x1d8], Other Possible Types: char
    char v13;  // [bp-0x1d8]
    unsigned int v14;  // [bp-0x1d0], Other Possible Types: unsigned long long
    unsigned int v15;  // [bp-0x1d0]
    char v16;  // [sp-0x1c8], Other Possible Types: unsigned long long
    char v17;  // [bp-0x1c8]
    unsigned long long v18;  // [bp-0x1b0]
    char v19;  // [bp-0x1b0]
    char v20;  // [bp-0x1b0]
    int v21;  // [bp-0x1a8]
    unsigned long long v22;  // [bp-0x1a0]
    unsigned long long v23;  // [bp-0x198]
    unsigned long long v24;  // [sp-0x188]
    unsigned long long v25;  // [bp-0x188]
    char v26;  // [bp-0x180], Other Possible Types: unsigned int, unsigned long, unsigned long long
    unsigned long long v27;  // [bp-0x180]
    char v28;  // [bp-0x180]
    unsigned long long v29;  // [bp-0x180]
    unsigned long long v30;  // [bp-0x180]
    unsigned long long v31;  // [bp-0x180]
    void* v32;  // [bp-0x178], Other Possible Types: unsigned long long
    unsigned long v33;  // [bp-0x170], Other Possible Types: unsigned long long
    char v34;  // [bp-0x168], Other Possible Types: unsigned long
    unsigned long long v35;  // [bp-0x160]
    void* v36;  // [bp-0x158], Other Possible Types: unsigned long long
    unsigned long v37;  // [bp-0x150]
    int v38;  // [bp-0x148]
    char *v39;  // [bp-0x138]
    char *v40;  // [bp-0x130]
    int v41;  // [bp-0x128]
    int v42;  // [bp-0x128]
    int v43;  // [bp-0x128]
    int v44;  // [bp-0x128]
    void* v45;  // [bp-0x118], Other Possible Types: unsigned long
    unsigned long long v46;  // [bp-0x108]
    unsigned long long v47;  // [bp-0x100]
    int v48;  // [bp-0xf8]
    void* v49;  // [bp-0xf0]
    unsigned long long v50;  // [bp-0xe8]
    int v51;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v52;  // [bp-0xc8]
    unsigned long long v53;  // [bp-0xb8]
    unsigned long v54;  // [bp-0xb0]
    char v55;  // [bp-0xa8]
    int v56;  // [bp-0xa8]
    unsigned long long v57;  // [bp-0x98]
    unsigned long long v58;  // [bp-0x90]
    unsigned long long v59;  // [bp-0x88]
    unsigned long long v60;  // [bp-0x80]
    char v61;  // [bp-0x78]
    unsigned long long v62;  // [bp-0x68]
    char v63;  // [bp-0x60]
    char v64;  // [bp-0x48]
    void* v65;  // rax
    unsigned long long v66;  // rcx
    unsigned long v67;  // r8
    void* v68;  // rax
    unsigned long long v69;  // rcx
    unsigned long v70;  // r8
    unsigned long long v72;  // r14
    char v73;  // dl
    char v74;  // bpl
    struct_1 *v75;  // r14
    unsigned int v76;  // edx
    unsigned long v77;  // rbp
    unsigned long v78;  // rax
    int v79;  // xmm0
    unsigned long v80;  // xmm0lq
    unsigned long long v81;  // rcx
    char v82;  // bpl
    unsigned long long v83;  // rbp
    unsigned long long v84;  // r14
    void* v85;  // r12
    unsigned long long v86;  // rdx
    unsigned long long v87;  // r15
    unsigned long long v88;  // r15
    unsigned long v89;  // rax
    unsigned int v91;  // eax
    unsigned long long v92;  // r13
    unsigned long v93;  // rcx
    unsigned long long v94;  // rbp
    unsigned long long v95;  // rax
    unsigned long v96;  // rsi
    unsigned long long v97;  // rax
    struct_0 *v98;  // rbx
    unsigned long long v99;  // r14
    unsigned long long v100;  // r14
    unsigned long long v101;  // r14
    unsigned long long v102;  // r15
    unsigned long v103;  // r13
    unsigned long long v104;  // r15
    unsigned long long v105;  // rax
    unsigned long v106;  // r15
    unsigned long long v113;  // rax
    unsigned long v114;  // rax
    unsigned long v115;  // r15
    unsigned long long v116;  // rax
    char v117;  // al
    unsigned int v118;  // eax
    unsigned long long v119;  // rax
    unsigned long long v120;  // r14
    unsigned long long v121;  // r13
    unsigned long long v122;  // rax
    void* v124;  // rbx
    void* v125;  // rbx
    char v129;  // r14b
    unsigned long long v130;  // rax
    char v131;  // [bp-0x1e0]
    char v133;  // bl

    v65 = a0->field_38;
    if (!*((long long *)v65))
    {
        v66 = 472 + (long long)v65[8];
        v67 = &g_14c7518;
    }
    else if ((int)*((long long *)v65) == 1)
    {
        v66 = (long long)v65[8];
        v67 = (long long)v65[16];
    }
    else
    {
        v66 = (long long)v65[16];
        v67 = (long long)v65[24];
    }
    fish::complete::parse_cmd_string(&v26, a1, a2, v66, v67);
    v23 = v33;
    *((int128_t *)&v21) = *((int128_t *)&v26);
    v62 = v36;
    memcpy(&v61, &v34, 16);
    if (!fish::builtins::shared::builtin_exists(v22, v33) && !(char)fish::function::exists_no_autoload(v22, v23))
    {
        v68 = a0->field_38;
        if (*((long long *)v68) == 2)
        {
            v69 = (long long)v68[16];
            v70 = (long long)v68[24];
        }
        else if ((int)*((long long *)v68) == 1)
        {
            v69 = (long long)v68[8];
            v70 = (long long)v68[16];
        }
        else
        {
            v69 = 472 + (long long)v68[8];
            v70 = &g_14c7518;
        }
        fish::path::path_get_path(&v26, v22, v23, v69, v70);
        core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&v26);
        if (v26 != 0x8000000000000000)
            goto LABEL_138cdef;
        if ((char)core::sync::atomic::atomic_load(&g_15a9a10, 0))
        {
            v6 = 0;
            v7 = 1;
            v8 = 0;
            v51.to_flog_str(&g_15a9a00);
            v26.into_iter(&v51);
            v6.spec_extend(&v26);
            v6.push(58, &g_14d5e68);
            v6.push(32, &g_14d5e68);
            v64.to_vec("Skipping completions for non-existent commandError while expanding string '%ls'Don't know how to tab complete with a parser but a different variable set", 45);
            v26.into_iter(&v64);
            v6.spec_extend(&v26);
            v6.push(10, &g_14d5e68);
            fish::flog::flog_impl(v7, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v6, v7);
        }
    }
    else
    {
LABEL_138cdef:
        if (*((int *)a0->field_38) == 1)
        {
            v26.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
            v72 = v26.unwrap();
            v74 = v73 & 1;
            if (v72 + 8.has_attempted_autoload(v22, v23))
            {
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v72, v74);
            }
            else
            {
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v72, v74);
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v26, v22, v23);
                v52 = v33;
                memcpy(&v51, &v26, 16);
                a0->padding_18[8].push(&v51, &g_14d5e98);
            }
        }
        else
        {
            fish::complete::complete_load(v22, v23, (long long)a0->field_38[8]);
        }
    }
    v26.lock();
    v75 = v26.unwrap();
    v77 = v76;
    v78 = v75->field_8;
    if (v78)
    {
        v79 = v75->field_10;
        v80 = (unsigned long long)v79;
        v81 = 1;
    }
    else
    {
        v79 = 0;
        v80 = 0;
        v81 = 0;
    }
    v82 = (char)v77 & 1;
    v83 = v77 & 0xffffff00 | v82;
    v30 = v81;
    v32 = 0;
    v33 = v78;
    v34 = v80;
    v35 = v81;
    v36 = 0;
    v37 = v78;
    v38 = v79;
    v39 = &v61;
    v40 = &(char)v21;
    v63.collect(&v30);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v75, v82);
    v51.into_iter(&v63);
    v55.next(&v51);
    if (*((long long *)&v55) != 0x8000000000000000)
    {
        v4 = a6 & a7;
        v10 = 9223372036854775809;
        v46 = &g_14d5ef8;
        v3 = 0;
        do
        {
            v48 = v56;
            v84 = v57;
            v50 = v84;
            v85 = v49;
            v47 = fish::complete::short_option_pos(a5, a6, v85, v84);
            v18 = v76;
            v1 = 2;
            if (a7)
            {
                if ((int)a5.char_at(a6, 0) == 45)
                {
                    if (v84)
                    {
                        v87 = v84 * 104;
                        v88 = v87 + v85;
                        v89 = v85 + 104;
                        v14 = v18 + 1;
                        v12 = _ccall(4, 24, v18 + 1, 0, (v87 + v85 <= v87 ? 1 : 0));
                        v11 = 1;
LABEL_138d262:
                        if (((char)v47 & 1))
                        {
                            v85 = v89;
                            if ((char)v85[101] != 1)
                            {
LABEL_138d2e6:
                                fish::complete::param_match2(v85, a5, a6);
                                v92 = v86;
LABEL_138d315:
                                v94 = v83;
                                if (a0.conditions_test((long long)v85[56], (long long)v85[64]))
                                {
                                    if ((char)v85[101] == 1)
                                    {
                                        v83 = (char)v85[100];
                                        v1.get_or_insert_with(v83);
                                        v1 &= (char)v83;
                                    }
                                    v94 = v83;
                                    if ((v133 & 1))
                                    {
                                        v0 = (char)v85[100];
                                        *((int *)&v10) = ((char)v85[98] ? 0 : v10 & 4294967295);
                                        v3 = ((char)v85[99] ? 1 : v3);
                                        v53 = a5.slice_to(a6, v92);
                                        v16 = v86;
                                        v24 = a5.slice_from(a6, v92);
                                        v54 = a0->field_10;
                                        v95 = v85 + 72.localize();
                                        a0.complete_from_args(v24, v86, (long long)v85[32], (long long)v85[40], v95, v86, (int)v85[96]);
                                        v11 = v131 & (v0 ^ 1);
                                        v96 = a0->field_10;
                                        if (v54 > v96)
                                            core::slice::index::slice_start_index_len_fail(v54, v96, &g_14d5ee0); /* do not return */
                                        v94 = v86;
                                        if (v54 != v96)
                                        {
                                            v97 = v54 * 56;
                                            v98 = a0->field_8 + v97;
                                            v99 = v96 * 56 - v97;
                                            do
                                            {
                                                v100 = v99;
                                                if ((v98->field_32 & 2))
                                                    v98.insert_slice(0, v53, v16);
                                                v98 = &v98[1].padding_0[5];
                                                v101 = v100 - 56;
                                                v99 = v101;
                                                v94 = v86;
                                            } while (v100 != 56);
                                        }
                                    }
                                }
                                v83 = v94;
                                v89 = v85 + 104;
                                if (v85 == v88)
                                {
                                    v89 = v85;
                                    if (v85 == v88)
                                        goto LABEL_138d630;
                                    goto LABEL_138d262;
                                }
                                else
                                {
                                    if (v85 == v88)
                                        goto LABEL_138d630;
                                    goto LABEL_138d262;
                                }
                            }
                            v91 = (long long)v85[8].char_at((long long)v85[16], 0);
                            if (v91 != (int)a5.char_at(a6, v18))
                            {
                                v89 = v85 + 104;
                            }
                            else
                            {
                                v133 = 1;
                                v92 = v14;
                                if (!v13)
                                    goto LABEL_138d315;
                                v130 = &g_14d5ec8;
                                goto LABEL_138dc41;
                            }
                            goto LABEL_138dc41;
                        }
                        else
                        {
                            do
                            {
                                v93 = v89;
                                if ((char)v85[101] != 1)
                                {
                                    v85 = v93;
                                    goto LABEL_138d2e6;
                                }
                                v89 = v93 + 104;
                                v85 = v93;
                            } while (v93 != v88);
                        }
LABEL_138d630:
                        if (!(v131 & 1))
                            continue;
                        goto LABEL_138d63b;
                    }
                    else
                    {
LABEL_138d63b:
                        v85 = v49;
                        v84 = v50;
                    }
                }
                else
                {
                    if ((int)a3.char_at(a4, 0) == 45)
                    {
                        v24 = v84 * 104;
                        if (v84)
                        {
                            v103 = v85 + 72;
                            v11 = 1;
                            do
                            {
                                v104 = v102;
                                if (*((char *)(v103 + 29)) == 2 && (char)fish::complete::param_match(v103 - 72, a3, a4) && a0.conditions_test(*((long long *)(v103 - 16)), *((long long *)(v103 - 8))))
                                {
                                    v12 = *((char *)(v103 + 28));
                                    v83 = *((char *)(v103 + 26));
                                    v16 = *((long long *)(v103 - 40));
                                    v14 = *((long long *)(v103 - 32));
                                    v105 = v103.localize();
                                    v3 = (*((char *)(v103 + 27)) ? 1 : v3);
                                    *((int *)&v10) = ((v83 & 255) ? 0 : v10 & 4294967295);
                                    a0.complete_from_args(a5, a6, v16, v14, v105, v86, *((int *)(v103 + 24)));
                                    v11 = v131 & (v13 ^ 1);
                                }
                                v103 += 104;
                                v106 = v104 - 104;
                                v102 = v106;
                            } while (v104 != 104);
                        }
                        else
                        {
                            v11 = 1;
                        }
                        v16 = fish::complete::short_option_pos(a3, a4, v85, v84);
                        v25 = v24 + v85;
                        v83 = v83 & 0xffffffffffffff00 | _ccall(4, 24, (unsigned long long)v76 + 1, 0, (v24 + v85 <= v24 ? 1 : 0)) & 255;
                        continue;
                    }
                }
            }
            if (!v84)
                continue;
            v113 = v84 * 104;
            v11 = v113 + v85;
            v114 = v85 + 104;
            v19 = _ccall(4, 24, v18 + 1, 0, (v113 + v85 <= v113 ? 1 : 0));
            v16 = v18 + 1 != a6 | v1;
            v115 = v114;
            v31 = v30;
            if (a0.conditions_test((long long)v85[56], (long long)v85[64]))
            {
                if ((long long)v85[16])
                {
                    v31 = v30;
                    if (!v4)
                        goto LABEL_138db80;
                }
                else
                {
                    v83 = (char)v85[99];
                    v116 = v85 + 72.localize();
                    a0.complete_from_args(a5, a6, (long long)v85[32], (long long)v85[40], v116, v86, (int)v85[96]);
                    v3 = v3 & 0xffffff00 | (char)v3 | (char)v83;
                    v10 = v10 & 0xffffffffffffff00 | (char)v10 & ((char)v85[98] ^ 1);
                    v31 = v30;
                    if (!v4)
                        goto LABEL_138db80;
                }
                v117 = (char)v85[101];
                v44 = v43;
                if (v117 == 1)
                {
                    v118 = (long long)v85[8].char_at((long long)v85[16], 0);
                    if (!((char)v47 & 1))
                    {
                        v26 = v30;
                        v31 = v30;
                        if (!(char)a5.equal(a6, "-", 1))
                            goto LABEL_138db80;
LABEL_138d7c9:
                        v30 = v26;
                        v119 = v85 + 72.localize();
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v30, (long long)v85[8], (long long)v85[16]);
                        v45 = v33;
                        memcpy(&v44, &v26, 16);
                        v30.to_vec(v119, v86);
                        v8 = v33;
                        *((int128_t *)&v5) = *((int128_t *)&v30);
                        v30.with_desc(&v44, &v6);
                        if (!a0.add(&v30))
                            goto LABEL_138dbe5;
                        v117 = (char)v85[101];
                        v44 = v41;
                        goto LABEL_138d872;
                    }
                    else if (!v20)
                    {
                        v31 = v30;
                        if ((v17 & 1))
                            goto LABEL_138db80;
                        v26 = v118;
                        v26 = v29;
                        v31 = v29;
                        if (v31.slice_contains(a5, a6))
                            goto LABEL_138db80;
                        goto LABEL_138d7c9;
                    }
                    else
                    {
                        v130 = &g_14d5f10;
                    }
                }
                else
                {
LABEL_138d872:
                    v43 = v44;
                    v31 = v30;
                    if ((v117 & 254) != 2)
                        goto LABEL_138db80;
                    alloc::slice::<impl [T]>::repeat(&(char)v31, "-", (v117 == 3) + 1);
                    v8 = v33;
                    *((int128_t *)&v5) = *((int128_t *)&(char)v31);
                    v58.add(&v6, (long long)v85[8], (long long)v85[16]);
                    v120 = v60;
                    v42 = v43;
                    if (v120 < a6)
                    {
LABEL_138db6e:
                        v43 = v42;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v58);
                        v31 = v30;
                        goto LABEL_138db80;
                    }
                    v42 = v43;
                    if (!a5.starts_with(a6, "-/home/34r7hm4n/dev/oxidizer/oxidizer-eval/targets/src/fish-shell/crates/printf/src/printf_impl.rs0X0xassertion failed: c == '0' || c == ' '", 1))
                        goto LABEL_138db6e;
                    v121 = v59;
                    v122 = fish::wcstringutil::string_fuzzy_match_string(a5, a6, v121, v120, a0->field_72 ^ 1);
                    v42 = v43;
                    if ((char)v122 == 3)
                        goto LABEL_138db6e;
                    if (!(unsigned int)v122)
                    {
                        if (((char)v86 & 254) == 2)
                            v124 = 0;
                        else
                            v124 = a6;
                        v125 = v124;
                        v83 = (((char)v86 & 254) == 2) * 2;
                        v27 = v30;
                        if (!(long long)v85[40])
                            goto LABEL_138dac7;
                    }
                    else
                    {
                        v83 = v83 & 0xffffffffffff0000 | 2;
                        v125 = 0;
                        v27 = v30;
                        if (!(long long)v85[40])
                            goto LABEL_138dac7;
                    }
                    v27 = v30;
                    if ((char)v85[101] == 3)
                    {
                        v27 = v30;
                        if (!(char)v85[100])
                        {
                            v14 = v83;
                            v6 = 0;
                            v7 = 4;
                            v8 = 0;
                            v12 = v125;
                            v28 = 1;
                            v32 = v121.slice_from(v120, v125);
                            v33 = v86;
                            fish_printf::printf_impl::sprintf_locale(&v43, &v6, "%ls=>", 4, &v28, 1);
                            v43.unwrap(&g_14d5f28);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v28);
                            v45 = 0;
                            memcpy(&v44, &v6, 16);
                            v28.to_vec(v85 + 72.localize(), a2);
                            v8 = v33;
                            *((int128_t *)&v5) = *((int128_t *)&v27);
                            v83 = v15;
                            v28.new(&v42, &v6, 0, 0, (unsigned int)v83 | 1);
                            v125 = v12;
                            v27 = v29;
                            if (!a0.add(&v27))
                                goto LABEL_138dbd8;
                        }
                    }
LABEL_138dac7:
                    v30 = v27;
                    (char)v30.to_vec(v121.slice_from(v120, v125), a2);
                    v45 = v33;
                    memcpy(&v44, &v26, 16);
                    (char)v30.to_vec(v85 + 72.localize(), a2);
                    v8 = v33;
                    *((int128_t *)&v5) = *((int128_t *)&(char)v31);
                    (char)v30.new(&v42, &(unsigned long long)v5, 0, 0, v83);
                    v42 = v41;
                    if (a0.add(&(char)v30))
                        goto LABEL_138db6e;
LABEL_138dbd8:
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v58);
LABEL_138dbe5:
                    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::CompleteEntryOpt>>(&(char)v48);
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<fish::complete::CompleteEntryOpt>>>(&v51);
                    goto LABEL_138dbff;
                }
LABEL_138dc41:
                v46 = v130;
                core::panicking::panic_const::panic_const_add_overflow(v46); /* do not return */
            }
            else
            {
LABEL_138db80:
                v30 = v31;
                v114 = v115 + 104;
                if (v115 == v11)
                {
                    v114 = v115;
                    if (v115 == v11)
                        goto LABEL_138d030;
                }
                else if (v115 == v11)
                {
                    goto LABEL_138d030;
                }
                v85 = v115;
                if (v115)
                    continue;
            }
LABEL_138d030:
            core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::CompleteEntryOpt>>(&(char)v48);
            v55.next(&v51);
        } while (*((long long *)&v55) != 0x8000000000000000);
        v129 = (char)v10 ^ 1;
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::vec::Vec<fish::complete::CompleteEntryOpt>>>(&v51);
    if (((v129 | v133) & 1))
        *(a8) = v133 & 1;
LABEL_138dbff:
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v61);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v21);
    return;
}
