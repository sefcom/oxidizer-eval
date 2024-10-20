int uu_env::split_iterator::SplitIterator::split::h6b85f5500c06e841()
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long, unsigned long
    char v1;  // [bp-0xa4]
    char *v3;  // [sp-0xa0], Other Possible Types: unsigned long long
    char *v4;  // [sp-0x98], Other Possible Types: unsigned long, char, unsigned long long
    char v5;  // [bp-0x93]
    char *v6;  // [bp-0x90], Other Possible Types: int
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x84]
    unsigned int v9;  // [sp-0x74]
    unsigned int v10;  // [sp-0x70]
    char v11;  // [sp-0x6c], Other Possible Types: unsigned int
    int v12;  // [bp-0x6b]
    char *v13;  // [sp-0x68]
    char *v14;  // [bp-0x60], Other Possible Types: unsigned long long
    int v15;  // [bp-0x5b]
    struct_1 *v16;  // [bp-0x58], Other Possible Types: char
    unsigned long long v17;  // [bp-0x50]
    unsigned int v18;  // [sp-0x4c]
    char *v19;  // [sp-0x40]
    unsigned long long v20;  // [sp-0x38]
    struct_3 *v22;  // rsi
    unsigned long long *v23;  // r12
    char *v24;  // r13
    int v25;  // ymm0
    int v26;  // ymm1
    char *v27;  // rcx
    char *v28;  // rax
    unsigned int v29;  // eax
    unsigned int v30;  // r8
    unsigned int v31;  // r9
    unsigned int v32;  // edx
    unsigned int v33;  // rcx
    unsigned long long v34;  // rsi
    char *v35;  // rdi
    unsigned long long v36;  // rsi
    unsigned long long v37;  // rsi
    unsigned int v38;  // r15d
    char *v39;  // rcx
    char *v40;  // r15
    char *v42;  // rax
    char *v43;  // rcx
    unsigned int v44;  // eax
    unsigned long long v45;  // rax
    char *v47;  // rsi
    unsigned long long v48;  // rdx
    char *v49;  // rax
    char *v50;  // rdx
    unsigned int v51;  // eax
    unsigned long v52;  // rbp
    char v54;  // al
    struct_1 *v55;  // rax
    char v56;  // al
    int v57;  // xmm0
    int v58;  // xmm1
    char *v59;  // rax
    char *v62;  // rdi
    char *v63;  // r15
    struct_2 *v64;  // rdi
    struct_2 *v65;  // r14
    struct_0 *v67;  // rcx
    struct_0 *v68;  // rax
    unsigned long long v69;  // rdi
    unsigned long long v70;  // r14
    struct_5 *v71;  // r12
    unsigned long long v72;  // r14

    v23 = &v22->field_18;
    v20 = &v0;
    while (true)
    {
        v27 = v22->field_20;
        v28 = v22->field_38;
        if (v27 < v28)
        {
LABEL_4a5771:
            v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
            v3 = 1;
            v4 = 8;
            *((int128_t *)&v6) = 0;
            core::panicking::panic_fmt::he12d0d7468628bb4(v20); /* do not return */
        }
        if (v27 == v28)
        {
LABEL_4a564b:
            v65 = v64;
            *((unsigned long long *)((char *)&v65->field_8 + 8)) = v22->field_50;
            *((int128_t *)&(&v65->padding_4)[1]) = *((int128_t *)&v22->field_40);
            v65->field_0 = 8;
            if (!v22->field_0)
                break;
            v69 = v22->field_8;
            goto LABEL_4a5735;
        }
        else
        {
            v29 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v28[*(v23)]);
            if (v29 == 0x110000)
                v29 = 65533;
            if (v29 <= 31)
            {
                if (v29 - 9 < 5)
                    goto LABEL_4a5212;
                goto LABEL_4a5482;
            }
            if (v29 > 91)
            {
                if (v29 != 92)
                {
                    if (v29 == 0x110000)
                        goto LABEL_4a564b;
LABEL_4a5482:
                    uu_env::split_iterator::SplitIterator::state_unquoted::hc9198090e24e4a57(&v0, v22);
                    v38 = v0;
                    if (v38 == 8)
                        continue;
                    v9 = *((int *)&v1);
                    v24 = v6;
                    v39 = *((long long *)&v7);
                    v4 = v4;
                    v3 = v3;
                    goto LABEL_4a5636;
                }
                uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, v23, v32, v33, v30, v31);
                v36 = v0;
                v35 = v3;
                if (v36 == 0x8000000000000000)
                    goto LABEL_4a5685;
                if (v36)
                    __rust_dealloc(v35);
                v40 = v22->field_38;
                if (v22->field_20 < v40)
                    goto LABEL_4a5771;
                if (v22->field_20 == v40)
                {
LABEL_4a55bc:
                    v55 = __rust_alloc(9, 1);
                    if (!v55)
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    v55->field_0 = 7310584013770220868;
                    v55->field_8 = 114;
                    v10 = 1;
                    v13 = v40;
                    v14 = 9;
                    v16 = v55;
                    v17 = 9;
                    v38 = 1;
                    v10 = v10;
                    goto LABEL_4a561a;
                    goto LABEL_4a561a;
                }
                v51 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v40[*(v23)]);
                v52 = (v51 == 0x110000 ? 65533 : v51);
                if ((unsigned int)(v52 - 34) <= 65)
                    goto *((int *)(4329256 + (v52 - 34 & 4294967295) * 4)) + 4329256;
                if ((unsigned int)v52 == 10)
                {
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, v23, v32, v33, v30, v31);
                    v34 = v0;
                    v35 = v3;
                    if (!(v34 == 0x8000000000000000))
                        goto LABEL_4a523a;
                    v56 = v4;
                    v10 = 5;
                    v13 = v35;
                    v14 = v13;
                    v16 = v56;
                    v38 = 5;
                    v10 = v10;
                    goto LABEL_4a561a;
                }
                if ((unsigned int)v52 == 0x110000)
                {
                    v40 = v22->field_38;
                    goto LABEL_4a55bc;
                }
                uu_env::split_iterator::SplitIterator::check_and_replace_ascii_escape_code::h1eacd878b675f23d(&v0, v22, v52 & 4294967295, v33, v30, v31);
                v38 = v0;
                v54 = v1;
                if (v10 != 8)
                {
                    v18 = *((int *)&v8);
                    v57 = *((int128_t *)&(&v1)[1]);
                    v25 = v25 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v57;
                    v58 = *((int128_t *)&v5);
                    v26 = v26 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
                    v15 = v58;
                    v12 = v57;
                    v10 = v38;
                    v11 = v54;
                    v10 = v10;
                }
                else if (!v11)
                {
                    v59 = v22->field_38;
                    v10 = 3;
                    v11 = v52;
                    v13 = v59;
                    v38 = 3;
                    v10 = v10;
                }
                else
                {
                    uu_env::split_iterator::SplitIterator::state_unquoted::hc9198090e24e4a57(&v10, v22);
                    v38 = v10;
                    v10 = v10;
                    if (v38 == 8)
                        continue;
                }
LABEL_4a561a:
                v10 = v10;
                v9 = v11;
                v24 = (long long)(&v15)[3];
                v39 = (long long)(&v15)[11];
                v13 = v13;
                v3 = v13;
LABEL_4a5636:
                v13 = v13;
                v19 = v39;
                if (!(v38 == 7))
                    goto LABEL_4a5645;
            }
            else
            {
                if (v29 == 32)
                {
LABEL_4a5212:
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, v23, v32, v33, v30, v31);
                    v34 = v0;
                    v35 = v3;
                    if (!(v34 == 0x8000000000000000))
                        goto LABEL_4a523a;
LABEL_4a5682:
LABEL_4a5685:
                    v24 = v63 & -0x100 | (char)v4;
                    v38 = 5;
                }
                else
                {
                    if (!(v29 == 35))
                        goto LABEL_4a5482;
                    uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, v23, v32, v33, v30, v31);
                    v37 = v0;
                    v35 = v3;
                    if (v37 == 0x8000000000000000)
                        goto LABEL_4a5682;
                    if (v37)
                        __rust_dealloc(v35);
                    v42 = v22->field_20;
                    v43 = v22->field_38;
                    while (true)
                    {
                        if (v42 < v43)
                        {
                            v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
LABEL_4a57b7:
                            v3 = 1;
                            v4 = 8;
                            *((int128_t *)&v6) = 0;
                            core::panicking::panic_fmt::he12d0d7468628bb4(&v0); /* do not return */
                        }
                        v38 = 6;
                        if (v42 == v43)
                            break;
                        v44 = uu_env::native_int_str::get_char_from_native_int::h0450fbe3acce94e3(v43[*(v23)]);
                        if (v44 == 0x110000)
                            v44 = 65533;
                        if (v44 == 0x110000)
                            break;
                        if (v44 != 10)
                        {
                            v45 = v22->field_30;
                            if (v45)
                            {
                                v47 = 0;
                                do
                                {
                                    if (*((char *)(v22->field_28 + v47)) == 10)
                                    {
                                        v49 = v22->field_20;
                                        v50 = v22->field_38;
                                        v43 = v50 + v47;
                                        v22->field_38 = v43;
                                        if (v49 >= v43)
                                        {
                                            v48 = &v50[*(v23)] + v47;
                                            v35 = v49 - v50 - v47;
                                            goto LABEL_4a52c4;
                                        }
                                        else
                                        {
                                            v0 = &anon.c479f575d13bdc6af5496164023f20a6.5.llvm.1842864401518779319;
                                            goto LABEL_4a57b7;
                                        }
                                    }
                                } while ((v47 += 1, v45 != v47));
                            }
                            v43 = v22->field_20;
                            v22->field_38 = v43;
                            v48 = &v43[v22->field_18];
                            v35 = 0;
LABEL_4a52c4:
                            v22->field_28 = v48;
                            v22->field_30 = v35;
                        }
                        else
                        {
                            uu_env::string_parser::StringParser::consume_one_ascii_or_all_non_ascii::hc2165e82d9d51b92(&v0, v23, v32, v33, v30, v31);
                            v34 = v0;
                            v35 = v3;
                            if (v34 == 0x8000000000000000)
                            {
                                v43 = v4;
                                v38 = 5;
                                break;
                            }
LABEL_4a523a:
                            if (v34)
                                __rust_dealloc(v35);
                        }
                    }
                    v24 = v24 & -0x100 | v43 & 4294967295;
                    if (v38 == 7)
                        continue;
LABEL_4a5645:
                    if (v38 == 6)
                        goto LABEL_4a564b;
                }
                v67 = v64;
                v67->field_4 = v9;
                v67->field_8 = v35;
                v68 = v67;
                v68->field_10 = v62;
                v68->field_18 = v24;
                v68->field_20 = v19;
                v68->field_0 = v38;
                if (v22->field_0)
                    __rust_dealloc(v22->field_8);
                v69 = v22->padding_48;
                v70 = v22->field_50;
                if (v70)
                {
                    v71 = v69 + 8;
                    do
                    {
                        v72 = v70;
                        if (v71->field_0)
                            __rust_dealloc(v71->field_-8);
                    } while ((v47 += 1, v45 != v47));
                }
                if (!v22->field_40)
                    break;
LABEL_4a5735:
                __rust_dealloc(v69);
                break;
            }
        }
    }
}
