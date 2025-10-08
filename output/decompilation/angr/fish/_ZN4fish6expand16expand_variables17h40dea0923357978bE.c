long long fish::expand::expand_variables(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_1 *a4, unsigned long long *a5)
{
    void* v0;  // [bp-0x1e8], Other Possible Types: int
    unsigned long long v1;  // [bp-0x1e8]
    unsigned long v2;  // [bp-0x1e0], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x1d8]
    void* v4;  // [bp-0x1d8]
    int v5;  // [bp-0x1c8], Other Possible Types: unsigned long long
    int v6;  // [bp-0x1c8]
    unsigned long long v7;  // [bp-0x1c0]
    void* v8;  // [sp-0x1b8], Other Possible Types: unsigned long long
    uint128_t v9;  // [bp-0x1b0]
    unsigned int v10;  // [bp-0x194]
    unsigned long long *v11;  // [bp-0x190]
    unsigned long long *v12;  // [bp-0x190]
    void* v13;  // [bp-0x188]
    int v14;  // [bp-0x178], Other Possible Types: char
    unsigned long long v16;  // [bp-0x170]
    void* v17;  // [bp-0x168], Other Possible Types: unsigned long
    void* v18;  // [bp-0x148]
    unsigned int v19;  // [bp-0x13c]
    int v20;  // [bp-0x138], Other Possible Types: void*
    unsigned long long v21;  // [bp-0x130]
    void* v22;  // [bp-0x128]
    int v23;  // [bp-0x118], Other Possible Types: void*
    void* v26;  // [bp-0x108]
    int v27;  // [bp-0xf8], Other Possible Types: unsigned long
    unsigned long long v28;  // [bp-0xf8]
    char v29;  // [bp-0xf0]
    unsigned long long v30;  // [bp-0xf0]
    unsigned long long v31;  // [bp-0xe8]
    unsigned long long v32;  // [bp-0xd8]
    void* v33;  // [bp-0xd0]
    unsigned long long v34;  // [bp-0xc8]
    void* v35;  // [bp-0xc0]
    char v36;  // [bp-0xb8]
    int v37;  // [bp-0xb8]
    unsigned long long v38;  // [bp-0xa8]
    unsigned long long v39;  // [bp-0xa0]
    int v41;  // [bp-0x98]
    unsigned long long v42;  // [bp-0x90]
    int v43;  // [bp-0x88], Other Possible Types: void*
    unsigned long v44;  // [bp-0x80]
    int v45;  // [bp-0x7f]
    char v46;  // [bp-0x70]
    int v48;  // [bp-0x68]
    unsigned long long v49;  // [bp-0x60]
    int v50;  // [bp-0x58], Other Possible Types: void*
    unsigned long v51;  // [bp-0x50]
    int v52;  // [bp-0x4f]
    char v53;  // [bp-0x40]
    unsigned long long v55;  // r14
    unsigned long long v56;  // rbp
    unsigned long long v57;  // 4096
    unsigned long long v58;  // r12
    unsigned long long v59;  // rbx
    unsigned long long v60;  // rbx
    unsigned long long v61;  // rbx
    unsigned long long v62;  // r13
    unsigned long long v63;  // r13
    unsigned long long v67;  // rsi
    unsigned long long v68;  // r13
    unsigned int *v69;  // rax
    unsigned long long v70;  // rdx
    unsigned int *v71;  // r15
    void* v72;  // rbx
    char v73;  // al
    unsigned long long v74;  // r15
    unsigned long long v75;  // rbx
    unsigned long long *v76;  // r15
    unsigned long long v78;  // r13
    unsigned long long v79;  // r13
    unsigned int v82;  // r15d
    void* v84;  // rax
    unsigned long long v85;  // rax
    unsigned long long v86;  // rdi
    unsigned long long v87;  // rcx
    unsigned long long v89;  // rdx
    unsigned long long v90[4];  // rax
    unsigned int v93;  // ebx
    void* v95;  // rax
    unsigned long long v96;  // rsi
    unsigned long long v97;  // rax
    unsigned long long *v98;  // r15
    void* v100;  // rax
    unsigned long long v101;  // rsi
    unsigned long long v102;  // rax
    unsigned long v103;  // rdi

    v55 = a0[2];
    if (a2 > v55)
    {
        v5 = &g_14d82d0;
        v67 = &g_14d82f0;
LABEL_13ab227:
        v7 = 1;
        v8 = 8;
        v9 = 0;
        core::panicking::panic_fmt(&v5, v67); /* do not return */
    }
    if (a2)
    {
        v56 = a0[1];
        v57 = a2;
        do
        {
            v58 = v57 - 1;
            if (v57 < 1)
            {
                if (a1.add(a0))
                    goto LABEL_13aa590;
                v103 = *(a5);
                goto LABEL_13aa5a2;
            }
            v19 = *((int *)(v56 + v58 * 4));
            v57 = v58;
        } while (!v19.slice_contains(&g_54a618, 2));
        v10 = v19;
        v59 = v58 + 1;
        v60 = v59;
        if (v60 < v55)
        {
            v61 = v59;
            do
            {
                v62 = v61;
                if (*((int *)(v56 + v62 * 4)) != 64985)
                {
                    v63 = v62;
                    if (!fish::common::valid_var_name_char(*((int *)(v56 + v63 * 4))))
                        goto LABEL_13aa5b4;
                    else
                        goto LABEL_13aa554;
                }
                else
                {
                    v63 = v62 + 1;
                    goto LABEL_13aa5b4;
                }
LABEL_13aa554:
                v61 = v62 + 1;
            } while (v61 < v55);
            v63 = v55;
LABEL_13aa5b4:
            v60 = v63;
            if (v60 >= v59)
                goto LABEL_13aa5bd;
            v5 = &g_14d82e0;
            v67 = &g_14d8308;
            goto LABEL_13ab227;
        }
        else
        {
LABEL_13aa5bd:
            v68 = v60;
            v69 = v56.index(v55, v59, v68, &g_14d8320);
            if (!v70)
            {
                if (*(a5))
                    fish::parse_util::parse_util_expand_variable_error(v56, v55, 0, v58, *(a5));
                v82 = 121.make_error();
                goto LABEL_13ab1de;
            }
            v71 = v69;
            v18 = 0;
            v23 = 0;
            if (v69.eq_by(&v69[v70], "historyifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", "ifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP"))
            {
                fish::history::history_session_id(&(char)v5, a3, a4);
                v72 = v7.with_name(v8);
                core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v18);
                v13 = v72;
                v18 = v13;
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v5);
            }
            else
            {
                if (v70 != 1 || *(v71) != 64985)
                {
                    a4->field_18(&(char)v5, a3, v71, v70);
                    core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v23);
                    v26 = v8;
                    *((int128_t *)&v23) = *((int128_t *)&v5);
                }
                v13 = 0;
            }
            v33 = 0;
            v34 = 8;
            v35 = 0;
            v73 = 1;
            v74 = 8;
            if (v68 >= v55 || *((int *)(v56 + v68 * 4)) != 91)
            {
                v79 = v68;
                if (v13 || !(1))
                    goto LABEL_13aa904;
                goto LABEL_13aa777;
            }
            v75 = (!v13 ? 1 : v13 + 16.size());
            v12 = a5;
            v76 = v12;
            fish::expand::parse_slice(&(char)v27, v56.index(v55, v68, &g_14d8338), a2, &v33, v75);
            if (v29 != 2)
            {
                if ((v29 & 1))
                {
                    if (*(v76))
                    {
                        *((unsigned long long *)&v48) = 0;
                        v49 = 4;
                        *((uint128_t *)&v50) = 0;
                        *((uint128_t *)&v52) = 0;
                        if ((char)__CFADD__(v68, v27))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d84a0); /* do not return */
                        v51 = v68 + v27;
                        v53 = 1;
                        v0 = 0;
                        v2 = 4;
                        v3 = 0;
                        v7 = "I";
                        v8 = 19;
                        v5 = 0x8000000000000000;
                        fish_printf::printf_impl::sprintf_locale(&v14, &v0, v5.localize(), v70, ".", 8, 0);
                        v14.unwrap(&g_14d84b8);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                        *((int128_t *)&v6) = *((int128_t *)&v0);
                        v8 = 0;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v48);
                        v50 = 0;
                        *((int128_t *)&v48) = (int128_t)v6;
                        *(v76).push(&(unsigned long long)v48, &g_14d84b8);
                    }
                }
                else
                {
                    if (*(v76))
                    {
                        *((unsigned long long *)&v41) = 0;
                        v42 = 4;
                        *((uint128_t *)&v43) = 0;
                        *((uint128_t *)&v45) = 0;
                        if ((char)__CFADD__(v68, v27))
                            core::panicking::panic_const::panic_const_add_overflow(&g_14d8470); /* do not return */
                        v44 = v68 + v27;
                        v46 = 1;
                        v0 = 0;
                        v2 = 4;
                        v3 = 0;
                        v7 = "a";
                        v8 = 32;
                        v5 = 0x8000000000000000;
                        fish_printf::printf_impl::sprintf_locale(&v14, &v0, v5.localize(), v70, ".", 8, 0);
                        v14.unwrap(&g_14d8488);
                        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                        *((int128_t *)&v6) = *((int128_t *)&v0);
                        v8 = 0;
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v41);
                        v43 = 0;
                        *((int128_t *)&v41) = (int128_t)v6;
                        *(v76).push(&(unsigned long long)v41, &g_14d8488);
                    }
                }
                v82 = 121.make_error();
                goto LABEL_13ab1af;
            }
            v78 = v68 + v27;
            if ((char)__CFADD__(v68, v27))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d8350); /* do not return */
            v74 = v34;
            v73 = 0;
            v79 = v78;
            if (!v13)
            {
LABEL_13aa777:
                if (v10 == 64979)
                {
                    (char)v5.to_vec(v56.index(v55, v58, &g_14d8440), a2);
                    v3 = v8;
                    *((int128_t *)&v0) = *((int128_t *)&v5);
                    v84 = v3 * 4 + v2;
                    if (!!v84 - 4 && !!v8 && (int)v84[4] == 64979)
                        (char)v0.push(64985);
                    v85 = v56.index(v55, v79, &g_14d8458);
                    (char)v0.spec_extend(v85, v85 + v70 * 4);
                    v8 = v3;
                    *((int128_t *)&v5) = (int128_t)v0;
                    v82 = fish::expand::expand_variables(&(char)v5, a1, v58, a3, a4, v11);
                    goto LABEL_13ab1af;
                }
                else
                {
                    v82 = 0;
                    goto LABEL_13ab1af;
                }
            }
LABEL_13aa904:
            v20 = 0;
            v21 = 8;
            v22 = 0;
            if (v73)
            {
                if (v13)
                {
                    (char)v5.get_history(v13 + 16);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20);
                    v22 = v8;
                    *((int128_t *)&v20) = *((int128_t *)&v5);
                    goto LABEL_13aabdb;
                }
                else
                {
                    v86 = &g_14d83b0;
                    goto LABEL_13ab264;
                }
            }
            v87 = v74;
            if (!v13)
            {
                v86 = &g_14d8380;
LABEL_13ab264:
                core::option::unwrap_failed(v86); /* do not return */
            }
            v32 = v87;
            (char)v5.items_at_indexes(v13 + 16, v74.as_ref(v87), v70);
            v28 = v74;
            v30 = v32;
            if (((char)v28.find_map() & 1))
            {
                do
                {
                    v39 = v89;
                    v90 = (char)v5.get_inner(&v39);
                    if (v90)
                    {
                        fish::builtins::fish_indent::fish_indent::{{closure}}(&v1, v90[2], v90[3]);
                        v17 = v4;
                        *((int128_t *)&v14) = *((int128_t *)&v1);
                        v20.push(&(unsigned long long)v14, &g_14d8368);
                    }
                } while (((char)v28.find_map() & 1));
            }
            core::ptr::drop_in_place<std::collections::hash::map::HashMap<usize,widestring::utfstring::Utf32String>>(&(char)v5);
LABEL_13aabdb:
            if (v10 == 64979)
            {
                v93 = 32;
                if (!v13)
                {
                    v86 = &g_14d83f8;
                    goto LABEL_13ab264;
                }
                else
                {
                    (char)v5.to_vec(v56.index(v55, v58, &g_14d8410), a2);
                    v3 = v8;
                    *((int128_t *)&v0) = *((int128_t *)&v5);
                    if (v3)
                    {
                        v95 = v3 * 4 + v2;
                        v96 = 64984;
                        if (v95 != 4 && (int)v95[4] == 64979)
                        {
                            v96 = 64985;
                            if (!v22 || !*((long long *)24))
                                goto LABEL_13aac98;
                        }
                        else
                        {
LABEL_13aac98:
                            (unsigned long long)v0.push(v96);
                        }
                    }
                    fish::wcstringutil::join_strings(&(char)v5, 8, v22, v93);
                    (unsigned long long)v0.spec_extend(v7, v7 + v8 * 4);
                    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v5);
                    v97 = v56.index(v55, v79, &g_14d8428);
                    (unsigned long long)v0.spec_extend(v97, v97 + v70 * 4);
                    v8 = v3;
                    *((int128_t *)&v5) = *((int128_t *)&v1);
                    v82 = fish::expand::expand_variables(&(char)v5, a1, v58, a3, a4, v11);
                    core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v20);
                }
LABEL_13ab1af:
                core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v33, v34);
                core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v23);
                core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v18);
LABEL_13ab1de:
                core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
                return v82;
            }
            (char)v5.into_iter(&v20);
            v36.next(&(char)v5);
            v98 = a5;
            if (!((char)(((0 ^ *((long long *)&v36)) & (0 ^ -(*((long long *)&v36)))) >> 63)))
            {
                if (!v58 && v79 == v55)
                {
                    do
                    {
                        if (!a1.add(&v36))
                            v82 = fish::expand::append_overflow_error(*(v98));
                        v36.next(&(char)v5);
                    } while (*((long long *)&v36) != 0x8000000000000000);
                }
                else
                {
                    do
                    {
                        v31 = v38;
                        v27 = v37;
                        (unsigned long long)v0.to_vec(v56.index(v55, v58, &g_14d83c8), a2);
                        v17 = v4;
                        *((int128_t *)&v14) = *((int128_t *)&v1);
                        if (v17)
                        {
                            v100 = v17 * 4 + v16;
                            v101 = 64984;
                            if (v100 != 4 && (int)v100[4] == 64978)
                            {
                                if (v31)
                                    goto LABEL_13aaef6;
                                v101 = 64985;
                            }
                            (unsigned long long)v14.push(v101);
                        }
LABEL_13aaef6:
                        (unsigned long long)v14.spec_extend(v30, v30 + v31 * 4);
                        v102 = v56.index(v55, v79, &g_14d83e0);
                        (unsigned long long)v14.spec_extend(v102, v102 + v70 * 4);
                        v4 = v17;
                        *((int128_t *)&v0) = *((int128_t *)&(unsigned long long)v14);
                        v82 = fish::expand::expand_variables(&(unsigned long long)v0, a1, v58, a3, a4, v98);
                        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(char)v27);
                        if ((char)v70 == 2)
                            goto LABEL_13aae2a;
                        else
                            goto LABEL_0x13ab1a5;
LABEL_13aae2a:
                        v36.next(&(char)v5);
                        v98 = a5;
                    } while (*((long long *)&v36) != 0x8000000000000000);
                }
            }
            core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<widestring::utfstring::Utf32String>>(&(char)v5);
            core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v33, v34);
            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v23);
            core::ptr::drop_in_place<core::option::Option<alloc::sync::Arc<fish::history::History>>>(&v18);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(a0);
        }
    }
    else if (!a1.add(a0))
    {
        v103 = *(a5);
LABEL_13aa5a2:
        return (unsigned int)fish::expand::append_overflow_error(v103);
    }
LABEL_13aa590:
    return 0;
}
