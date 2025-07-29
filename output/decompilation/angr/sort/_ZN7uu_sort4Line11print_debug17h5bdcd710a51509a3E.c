long long uu_sort::Line::print_debug(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned long long a3)
{
    int v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf8]
    char v3;  // [bp-0xf0], Other Possible Types: unsigned long long
    char *v4;  // [sp-0xe8]
    unsigned long long v5;  // [bp-0xe0]
    unsigned long long v6;  // [bp-0xd8]
    unsigned long long v7;  // [bp-0xd0]
    unsigned long long v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc8]
    char *v10;  // [bp-0xc0], Other Possible Types: char
    char *v11;  // [bp-0xc0]
    char *v12;  // [bp-0xc0]
    char v13;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xb8]
    void* v15;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v16;  // [bp-0xa8]
    unsigned int v17;  // [bp-0xa0]
    unsigned short v18;  // [bp-0x9c]
    unsigned short v19;  // [bp-0x9a]
    char *v20;  // [bp-0x98]
    unsigned long long v21;  // [bp-0x90]
    char v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    unsigned long long v24;  // [bp-0x70]
    void* v25;  // [bp-0x60]
    unsigned long long v26;  // [bp-0x58]
    void* v27;  // [bp-0x50]
    unsigned long long v28;  // [bp-0x40]
    unsigned long long v29;  // [bp-0x38]
    unsigned long long v31;  // r15
    unsigned long long v32;  // rbx
    unsigned long long v33;  // rdx
    struct_1 *v34;  // rax
    struct_1 *v35;  // r14
    unsigned long long v36;  // r12
    unsigned long v37;  // r15
    unsigned long long v38;  // rdx
    void* v39;  // rbx
    unsigned long long v40;  // rax
    char v41;  // al
    unsigned long long v42;  // rbx
    unsigned long long v43;  // rsi
    unsigned long long v44;  // rdi
    unsigned long long v45;  // rsi
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v49;  // rax
    char *v50;  // r13
    unsigned long long v51;  // rbp
    unsigned long long v52;  // r15
    unsigned long long v53;  // rax
    unsigned long long v55;  // rdx
    unsigned long long v57;  // r13
    unsigned long long v58;  // r14
    unsigned long long v59;  // rax
    unsigned long long v61;  // rbp
    unsigned long long v62;  // rax
    unsigned long long v64;  // rax
    unsigned long long v66;  // rax
    unsigned long long v67;  // rbx

    v31 = a1;
    alloc::str::<impl str>::replace(&v22, a0, a1);
    v1 = &v22;
    v3 = <alloc::string::String as core::fmt::Display>::fmt;
    v8 = &g_670540;
    v9 = 2;
    v15 = 0;
    v11 = &v1;
    v14 = 1;
    v32 = a3.write_fmt(&v8);
    if (v32)
    {
LABEL_50c00f:
        ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v22);
        return v32;
    }
    v25 = 0;
    v26 = 8;
    v27 = 0;
    uu_sort::tokenize(a0, a1, a2->field_78, &v25);
    v28 = a2.into_iter();
    v29 = v33;
    v34 = v28.next();
    if (v34)
    {
        v35 = v34;
        v6 = &g_670608;
        v5 = a1;
        while (true)
        {
            v36 = v35.get_range(a0, v31, 8, 0);
            v37 = v35->field_35;
            if ((unsigned int)v37 >= 2)
            {
                if ((char)v37 != 2)
                {
                    v38 = v33;
                    if (!((unsigned int)v37 == 3))
                        continue;
                    v39 = v36.clone(v33);
                    v40 = v39.get(v33, a0, v5);
                    if (v40)
                    {
                        v8 = v40;
                        v9 = v40 + v33;
                        v11 = 0;
                        v13 = 0;
                        v41 = uu_sort::month_parse(v40, v33);
                        v42 = v8.try_fold(&v13);
                        if (!v41)
                        {
                            v42 = v42.map_or((unsigned int)v33, v33, v33);
                            v45 = v33;
                        }
                        else if ((unsigned int)v33 != 0x110000)
                        {
                            v43 = 0x110000;
                            if (!v8.advance_by())
                            {
                                v44 = v8.try_fold(&v13);
                                v43 = (unsigned int)v33;
                            }
                            v45 = v44.map_or(v43, v33);
                        }
                        else
                        {
                            core::option::unwrap_failed(&g_6705f0); /* do not return */
                        }
                        v46 = v42.len(v45);
                        goto LABEL_50bbec;
                    }
                    else
                    {
                        v58 = a0;
                        v52 = v5;
                        v36 = v33;
                        v66 = &g_6705d8;
                        goto LABEL_50c0e9;
                    }
                }
                else
                {
                    v39 = v36.clone(v33);
                    v47 = v39.get(v33, a0, v5);
                    if (v47)
                    {
                        v42 = uu_sort::get_leading_gen(v47, v33);
                        v46 = v42.len(v33);
LABEL_50bbec:
                        v36 += v42;
                        v38 = v46 + v36;
                        continue;
                    }
                    else
                    {
                        v58 = a0;
                        v52 = v5;
                        v36 = v33;
                        v66 = &g_6705c0;
                        goto LABEL_50c0e9;
                    }
                }
            }
            v39 = v36.clone(v33);
            v49 = v39.get(v33, a0, v5);
            if (v49)
            {
                v3 = (char)v37 == 1;
                v1 = 0x2e00110000;
                v8.parse(v49, a2);
                v50 = v11;
                v36 = &v50[v36];
                v51 = v50.len(1) + v36;
                if (v50 || !1.eq())
                {
                    if (v35->field_35 == 1)
                    {
                        v57 = v33;
                        v58 = a0;
                        v52 = v5;
                        v59 = v51.get(v57, v58, v52);
                        if (v59)
                        {
                            v51 += (unsigned int)v59.is_prefix_of(v33);
                            continue;
                        }
                        else
                        {
                            v39 = v51;
                            v36 = v57;
                            v66 = &g_670578;
                            goto LABEL_50c0e9;
                        }
                    }
                    else
                    {
                        v52 = v5;
                        v58 = a0;
                        continue;
                    }
                }
                v39 = v36.clone(v51);
                v52 = v5;
                v53 = v39.get(v33, a0, v52);
                if (v53)
                {
                    if (!core::str::<impl str>::find(v53, v33))
                        v55 = 0;
                    else
                        v55 = v33;
                    v36 += v55;
                    v38 = v51 + v55;
                    v61 = v38;
                    v58 = v23;
                    v52 = v24;
                    v62 = v36.get(v58, v52);
                    if (!v62)
                    {
                        v39 = 0;
LABEL_50c0ee:
                        core::str::slice_error_fail(v58, v52, v39, v36, v6); /* do not return */
                    }
                    alloc::slice::<impl [T]>::repeat(&v8, " _>sort-error-no-match-for-keyassertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered u", 1, v62.rfold(v33 + v62));
                    v4 = v11;
                    *((int128_t *)&v0) = *((int128_t *)&v8);
                    v20 = &v1;
                    v21 = <alloc::string::String as core::fmt::Display>::fmt;
                    v7 = &g_441be0;
                    v9 = 1;
                    v15 = 0;
                    v10 = &v20;
                    v14 = 1;
                    if (a3.write_fmt(&v7))
                    {
                        ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                        goto LABEL_50c002;
                    }
                    ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                    if (v36 < v61)
                    {
                        v58 = v23;
                        v52 = v24;
                        v64 = v36.get(v61, v58, v52);
                        if (v64)
                        {
                            alloc::slice::<impl [T]>::repeat(&v7, "_>sort-error-no-match-for-keyassertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered un", 1, v64.rfold(v33 + v64));
                            v4 = v10;
                            *((int128_t *)&v2) = *((int128_t *)&v7);
                            v20 = &v1;
                            v21 = <alloc::string::String as core::fmt::Display>::fmt;
                            v8 = &g_670540;
                            v9 = 2;
                            v15 = 0;
                            v11 = &v20;
                            v14 = 1;
                            if (!a3.write_fmt(&v8))
                            {
                                ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                            }
                            else
                            {
                                ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                                goto LABEL_50c002;
                            }
                        }
                        else
                        {
                            v39 = v36;
                            v36 = v61;
                            v66 = &g_670620;
                            goto LABEL_50c0e9;
                        }
                    }
                    else
                    {
                        uucore::mods::locale::get_message(&v1, "sort-error-no-match-for-keyassertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unre", 27);
                        v20 = &v1;
                        v21 = <alloc::string::String as core::fmt::Display>::fmt;
                        v8 = &g_670540;
                        v9 = 2;
                        v15 = 0;
                        v11 = &v20;
                        v14 = 1;
                        if (!a3.write_fmt(&v8))
                        {
                            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                        }
                        else
                        {
                            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
                            goto LABEL_50c002;
                        }
                        v35 = v28.next();
                        v31 = v5;
                        if (!v35)
                            break;
                    }
                }
                else
                {
                    v58 = a0;
                    v36 = v33;
                    v66 = &g_6705a8;
LABEL_50c0e9:
                    v6 = v66;
                    goto LABEL_50c0ee;
                }
            }
            else
            {
                v58 = a0;
                v52 = v5;
                v36 = v33;
                v66 = &g_670560;
                goto LABEL_50c0e9;
            }
        }
    }
    if (a2->field_98 == 5 || a2->field_83 == 1 || a2->field_84)
    {
LABEL_50be5c:
        ::0x507460::core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&v25);
        ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v22);
        return 0;
    }
    v10 = v11;
    if (!a2->field_7f)
    {
        v10 = v11;
        if (a2->field_7d != 1)
        {
            v10 = v11;
            if (!a2->field_7e)
            {
                v10 = v11;
                if (a2->field_98 == 6)
                {
                    v10 = v11;
                    if (!a2->field_80)
                    {
                        v67 = a2->field_10 * 56 + a2->field_8;
                        v10 = v11;
                        if (!!v67 - 56 && !!a2->field_10)
                        {
                            v13 = 1;
                            v15 = 1;
                            v16 = 0;
                            v10 = 2;
                            v17 = <uu_sort::KeySettings as core::default::Default>::default();
                            v18 = 0;
                            v19 = 0;
                            v10 = v12;
                            if (!(!(char)v67 - 56.eq(&v8)))
                                goto LABEL_50be5c;
                        }
                    }
                }
            }
        }
    }
    if (v31)
    {
        alloc::slice::<impl [T]>::repeat(&v8, "_>sort-error-no-match-for-keyassertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered un", 1, v23.rfold(v24 + v23));
        v4 = v10;
        *((int128_t *)&v0) = *((int128_t *)&v8);
        v20 = &v1;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &g_670540;
        v9 = 2;
        v15 = 0;
        v10 = &v20;
        v13 = 1;
        v32 = a3.write_fmt(&v7);
        if (v32)
        {
            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
            goto LABEL_50c002;
        }
        else
        {
            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
            goto LABEL_50be5c;
        }
    }
    else
    {
        uucore::mods::locale::get_message(&v1, "sort-error-no-match-for-keyassertion failed: token_buffer.is_empty()fielderrorsort-field-index-cannot-be-zerosort-failed-parse-field-indexkeysort-failed-parse-char-indexoptionsort-invalid-optionsort-invalid-char-index-zero-startinternal error: entered unre", 27);
        v20 = &v1;
        v21 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &g_670540;
        v9 = 2;
        v15 = 0;
        v10 = &v20;
        v13 = 1;
        v32 = a3.write_fmt(&v7);
        if (v32)
        {
            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
LABEL_50c002:
            ::0x507460::core::ptr::drop_in_place<alloc::vec::Vec<core::ops::range::Range<usize>>>(&v25);
            goto LABEL_50c00f;
        }
        else
        {
            ::0x5069e0::core::ptr::drop_in_place<alloc::string::String>(&v1);
            goto LABEL_50be5c;
        }
    }
}
