long long uu_sort::Line::print_debug(unsigned long long a0, unsigned long long a1, struct_1 *a2, unsigned long long a3)
{
    unsigned long long v0;  // [sp-0xf0]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [sp-0xe8]
    char *v3;  // [sp-0xe0], Other Possible Types: char, unsigned long long
    unsigned long long v4;  // [bp-0xe0]
    unsigned long long v5;  // [bp-0xe0]
    int v6;  // [bp-0xd8], Other Possible Types: char, unsigned long long
    unsigned long long v7;  // [bp-0xd8]
    int v8;  // [bp-0xd8]
    void* v9;  // [bp-0xd0], Other Possible Types: unsigned long long
    char v10;  // [bp-0xc8]
    unsigned int v11;  // [bp-0xc0]
    unsigned short v12;  // [bp-0xbc]
    unsigned short v13;  // [bp-0xba]
    unsigned long long v14;  // [bp-0xb8]
    int v15;  // [bp-0xb8]
    int v16;  // [bp-0xb8]
    char v17;  // [bp-0xb0], Other Possible Types: unsigned long long
    char *v18;  // [bp-0xa8], Other Possible Types: unsigned long long
    char *v19;  // [bp-0x98]
    unsigned long long v20;  // [bp-0x90]
    unsigned long v21;  // [sp-0x88], Other Possible Types: unsigned long long
    void* v22;  // [bp-0x80]
    unsigned long long v23;  // [bp-0x78]
    void* v24;  // [bp-0x70]
    char v25[153];  // [bp-0x68]
    char v26;  // [bp-0x60]
    unsigned long long v27;  // [bp-0x58]
    unsigned long long v28;  // [bp-0x50]
    unsigned long v29;  // [bp-0x48]
    void* v30;  // [bp-0x40]
    struct_0 *v31;  // [bp-0x38]
    void* v33;  // r15
    struct_0 *v34;  // r12
    struct_0 *v35;  // rax
    void* v36;  // rbp
    unsigned long v37;  // r14
    void* v38;  // rdx
    void* v39;  // r15
    unsigned long long v40;  // r12
    unsigned long long v41;  // rax
    char v42;  // al
    unsigned long long v43;  // r14
    unsigned long long v44;  // rsi
    unsigned long long v45;  // rdi
    void* v46;  // rsi
    unsigned long long v47;  // rax
    void* v48;  // rdx, Other Possible Types: unsigned long long, unsigned long
    unsigned long long v49;  // rax
    unsigned long long v51;  // rax
    unsigned long long v52;  // r14
    void* v53;  // rbx
    void* v54;  // r13
    unsigned long long v55;  // r14
    unsigned long long v56;  // rax
    unsigned long long v57;  // rax
    unsigned long long v58;  // rdx
    void* v63;  // rbx
    unsigned long long v64;  // rax
    uint256_t v66;  // ymm0
    unsigned long long v67;  // rax
    unsigned long long v75;  // 4103
    int v79;  // ymm0, Other Possible Types: uint256_t

    alloc::str::<impl str>::replace(&v26, a0, a1);
    v14 = &v26;
    v17 = <alloc::string::String as core::fmt::Display>::fmt;
    v1 = &g_58ce68;
    v2 = 2;
    v9 = 0;
    v4 = &v14;
    v7 = 1;
    v33 = a3.write_fmt(&v1);
    if (!v33)
    {
        v22 = 0;
        v23 = 8;
        v24 = 0;
        uu_sort::tokenize(a0, a1, a2->field_78, &v22);
        v34 = a2->field_8;
        v21 = 56 * a2->field_10 + (char *)v34;
        v29 = a2->field_10;
        if (v29)
        {
            v35 = &v34[1].padding_0[2];
            while (true)
            {
                v31 = v35;
                v36 = v34.get_range(a0, a1, v23, 0);
                v37 = v34->field_35;
                if ((unsigned int)v37 >= 2)
                {
                    if ((char)v37 != 2)
                    {
                        v38 = v48;
                        if ((unsigned int)v37 != 3)
                            goto LABEL_4d1224;
                        v39 = v36.clone(v48);
                        v40 = a0;
                        v41 = v39.get(v48, v40, a1);
                        if (!v41)
                            core::str::slice_error_fail(v40, a1, v39, v48, &g_58cf10); /* do not return */
                        v1 = v41;
                        v2 = v41 + v48;
                        v4 = 0;
                        v6 = 0;
                        v42 = uu_sort::month_parse(v41, v48);
                        v43 = v1.try_fold(&v6);
                        if (!v42)
                        {
                            v43 = v43.map_or((unsigned int)v48, v48, v48);
                            v46 = v48;
                        }
                        else if ((unsigned int)v48 != 0x110000)
                        {
                            v44 = 0x110000;
                            if (!v1.advance_by())
                            {
                                v45 = v1.try_fold(&v6);
                                v44 = (unsigned int)v48;
                            }
                            v46 = v45.map_or(v44, v48);
                        }
                        else
                        {
                            core::option::unwrap_failed(&g_58cf28); /* do not return */
                        }
                        v47 = v43.len(v46);
                    }
                    else
                    {
                        v39 = v36.clone(v48);
                        v40 = a0;
                        v49 = v39.get(v48, v40, a1);
                        if (!v49)
                            core::str::slice_error_fail(v40, a1, v39, v48, &g_58cef8); /* do not return */
                        v43 = uu_sort::get_leading_gen(v49, v48);
                        v47 = v43.len(v48);
                    }
                    v36 += v43;
                    v38 = v47 + v36;
                }
                else
                {
                    v39 = v36.clone(v48);
                    v51 = v39.get(v48, a0, a1);
                    if (!v51)
                        core::str::slice_error_fail(a0, a1, v39, v48, &g_58ce98); /* do not return */
                    v30 = v48;
                    v17 = (char)v37 == 1;
                    v14 = 0x2e00110000;
                    v1.parse(v51, a2);
                    v52 = v4;
                    v36 += v52;
                    v53 = v52.len(1) + v36;
                    if (v34->field_35 == 1)
                    {
                        v54 = v30;
                        v40 = a0;
                        v55 = a1;
                        v56 = v53.get(v54, v40, v55);
                        if (!v56)
                            core::str::slice_error_fail(v40, v55, v53, v54, &g_58cec8); /* do not return */
                        v53 += (unsigned int)v56.is_prefix_of(v48);
                    }
                    else
                    {
                        v55 = a1;
                        v40 = a0;
                    }
                    if (!v39.get(v36, v40, v55))
                    {
                        core::str::slice_error_fail(v40, v55, v39, v36, &g_58cee0); /* do not return */
                    }
                    while (true)
                    {
                        v38 = v53;
                        if (!v57.is_suffix_of(v58))
                            break;
                        v36 -= 1;
                        v57 = v39.get(v36, v40, v55);
                        if (!v57)
                            core::str::slice_error_fail(v40, v55, v39, v36, &g_58cee0); /* do not return */
                    }
                }
LABEL_4d1224:
                v63 = v38;
                v40 = v27;
                v55 = v28;
                v64 = v36.get(v40, v55);
                if (!v64)
                    core::str::slice_error_fail(v40, v55, 0, v36, &g_58cf40); /* do not return */
                alloc::slice::<impl [T]>::repeat(&v1, " ^ no match for key\n", v64.rfold(v48 + v64));
                v18 = v4;
                v66 = v79 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v1);
                *((int128_t *)&v15) = *((int128_t *)&v1);
                v19 = &(unsigned long long)v16;
                v20 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_4275d0;
                v2 = 1;
                v9 = 0;
                v3 = &v19;
                v7 = 1;
                v33 = a3.write_fmt(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v16);
                if (v33)
                    break;
                if (v36 < v63)
                {
                    v40 = v27;
                    v55 = v28;
                    v67 = v36.get(v63, v40, v55);
                    if (!v67)
                        core::str::slice_error_fail(v40, v55, v36, v63, &g_58cf58); /* do not return */
                    alloc::slice::<impl [T]>::repeat(&v0, "_>assertion failed: token_buffer.is_empty()failed to parse field index ", v67.rfold(v48 + v67));
                    v18 = v3;
                    v79 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((int128_t *)&v0);
                    *((int128_t *)&v16) = *((int128_t *)&v0);
                    v19 = &(unsigned long long)v16;
                    v20 = <alloc::string::String as core::fmt::Display>::fmt;
                    v1 = &g_58ce68;
                    v2 = 2;
                    v9 = 0;
                    v4 = &v19;
                    v7 = 1;
                    v33 = a3.write_fmt(&v1);
                    core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v16);
                    if (v33)
                        break;
                }
                else
                {
                    v1 = &g_58ce88;
                    v2 = 1;
                    v4 = 8;
                    v79 = v66 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
                    *((uint128_t *)&v8) = 0;
                    if (a3.write_fmt(&v1))
                        break;
                }
                v34 = v31;
                v35 = &v34[1].padding_0[2];
                if (v34 == v21)
                {
                    v35 = v34;
                    if (v34 == v21)
                        goto LABEL_4d1416;
                }
                else if (v34 == v21)
                {
                    goto LABEL_4d1416;
                }
            }
        }
LABEL_4d1416:
        if (v25[152] != 5 && !v25[131] && !v25[132])
        {
            v3 = v4;
            if (!v25[127])
            {
                v3 = v4;
                if (v25[125] != 1)
                {
                    v3 = v4;
                    if (!v25[126])
                    {
                        v3 = v4;
                        if (v25[152] == 6)
                        {
                            v3 = v4;
                            if (!v25[128])
                            {
                                v75 = v21;
                                v21 = v75 - 56;
                                v3 = v4;
                                if (!!v75 - 56 && !!v29)
                                {
                                    v7 = 1;
                                    v9 = 1;
                                    v10 = 0;
                                    v3 = 2;
                                    v11 = 4294967295 & (int)<uu_sort::KeySettings as core::default::Default>::default();
                                    v12 = 0;
                                    v13 = 0;
                                    v3 = v5;
                                    if ((char)v21.eq(&v1))
                                        goto LABEL_4d1569;
                                }
                            }
                        }
                    }
                }
            }
            if (a1)
            {
                alloc::slice::<impl [T]>::repeat(&v1, "_>assertion failed: token_buffer.is_empty()failed to parse field index ", v27.rfold(v28 + v27));
                v18 = v3;
                *((int128_t *)&v15) = *((int128_t *)&v1);
                v19 = &(unsigned long long)v15;
                v20 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = &g_58ce68;
                v2 = 2;
                v9 = 0;
                v3 = &v19;
                v6 = 1;
                v33 = a3.write_fmt(&v0);
                core::ptr::drop_in_place<alloc::string::String>(&(unsigned long long)v15);
            }
            else
            {
                v0 = &g_58ce88;
                v2 = 1;
                v3 = 8;
                *((uint128_t *)&v6) = 0;
                v33 = a3.write_fmt(&v0);
            }
            if (v33)
                goto LABEL_4d156c;
        }
LABEL_4d1569:
        v33 = 0;
LABEL_4d156c:
        core::ptr::drop_in_place<alloc::vec::Vec<std::sync::mpmc::array::Slot<uu_sort::chunks::Chunk>>>(v22, v23);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v26);
    return v33;
}
