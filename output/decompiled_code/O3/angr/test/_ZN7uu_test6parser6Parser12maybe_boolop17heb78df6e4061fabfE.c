int uu_test::parser::Parser::maybe_boolop::heb78df6e4061fabf()
{
    unsigned long long v0[5];  // [bp-0xf8], Other Possible Types: unsigned long long (64 bits)[3], int, unsigned long long
    int v1;  // [bp-0xf0], Other Possible Types: void*
    int v2;  // [bp-0xe8], Other Possible Types: unsigned long
    unsigned long long v3;  // [sp-0xd8]
    void* v4;  // [sp-0xc8], Other Possible Types: unsigned long long
    int v5;  // [sp-0xb8]
    unsigned long long v6;  // [sp-0xa8]
    char v7;  // [bp-0xa0]
    char v8;  // [bp-0x98]
    char v10;  // [bp-0x88]
    unsigned long v11;  // [sp-0x80], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x78], Other Possible Types: unsigned long
    unsigned long long v13;  // [sp-0x70]
    unsigned long long v14[5];  // [bp-0x58]
    char v15;  // [bp-0x48]
    char v16;  // [bp-0x38]
    struct_2 *v18;  // rsi
    unsigned long long v19;  // rax
    struct_1 *v20;  // rcx
    unsigned long v22;  // r15
    unsigned long long v23;  // r13
    unsigned long long v24;  // r15
    unsigned long long *v25;  // rax
    unsigned long long v26;  // rax
    struct_1 *v27;  // rax
    unsigned long long v28;  // rax
    struct_1 *v29;  // rcx
    unsigned long v31;  // r15
    unsigned long long v32;  // rbp
    unsigned long long v33;  // rbp
    int v34;  // xmm0
    unsigned long long v35;  // r12
    unsigned long long v36;  // r13
    unsigned long long v37;  // r15
    unsigned long long v38;  // rdx
    unsigned long long v39;  // rbx
    unsigned long long *v40;  // rax
    uint128_t *v41;  // rbx
    uint128_t *v42;  // rax
    uint128_t *v43;  // rcx
    unsigned long long v44;  // rdx
    int v45;  // xmm0
    int v46;  // xmm0
    uint128_t v47[2];  // rdi
    uint128_t v48[2];  // rax
    unsigned long long *v49;  // rax
    unsigned long long v50;  // rbx
    struct_0 *v52;  // rcx
    unsigned long long *v53;  // rax
    unsigned long long *v54;  // rbp

    v19 = v18->field_18;
    if (v19 == 9223372036854775809)
    {
        v20 = v18->field_38;
        v19 = 0x8000000000000000;
        if (v20 != v18->field_48)
        {
            v18->field_38 = (char *)&v20->field_8 + 8;
            v19 = v20->field_0;
            *((int128_t *)&v0) = *((int128_t *)&(&v20->field_0)[1]);
        }
        v18->field_18 = v19;
        *((int128_t *)&v18->field_20) = (int128_t)v0;
    }
    if (v19 == 0x8000000000000000)
    {
        v11 = 0x8000000000000000;
        goto LABEL_483f84;
    }
    v22 = *((long long *)&v18->padding_28[0]);
    if (!v22)
    {
        v23 = 1;
        goto LABEL_483f60;
    }
    else
    {
        if (v22 < 0)
        {
            v4 = 0;
        }
        else
        {
            v4 = 1;
            v23 = __rust_alloc(v22, 1);
            if (v23)
            {
LABEL_483f60:
                memcpy(v12, v18->field_20, v22);
                v11 = v22;
                v12 = v23;
                v13 = v22;
LABEL_483f84:
                uu_test::parser::Symbol::new::h6625985994e45cab(v0, &v11);
                v24 = v0;
                if (v24 - 2 <= 3)
                {
                    v25 = *((long long *)&(&g_4102c0)[16 + 8 * v24]);
                    if (*((long long *)(v0 + (char *)v25)))
                        __rust_dealloc(*((long long *)(&v0 + v25)));
                }
                if ((unsigned int)v24 != 2)
                {
                    *(v54) = 7;
                    return;
                }
                v26 = v18->field_18;
                v18->field_18 = 9223372036854775809;
                if (v0 != 9223372036854775809)
                {
                    *((int128_t *)&v1) = *((int128_t *)&v18->field_20);
                    v0 = v26;
                }
                else
                {
                    v27 = v18->field_38;
                    if (v27 == v18->field_48)
                    {
                        v0 = 0x8000000000000000;
                    }
                    else
                    {
                        v18->field_38 = (char *)&v27->field_8 + 8;
                        v2 = v27->field_8;
                        *((int128_t *)&v0) = *((int128_t *)&v27->field_0);
                    }
                }
                uu_test::parser::Symbol::new::h6625985994e45cab(v14, v0);
                v28 = v18->field_18;
                if (v28 == 9223372036854775809)
                {
                    v29 = v18->field_38;
                    v28 = 0x8000000000000000;
                    if (v29 != v18->field_48)
                    {
                        v18->field_38 = (char *)&v29->field_8 + 8;
                        v28 = v29->field_0;
                        *((int128_t *)v0) = *((int128_t *)&(&v29->field_0)[1]);
                    }
                    v18->field_18 = v28;
                    *((int128_t *)&v18->field_20) = *((int128_t *)&v0[0]);
                }
                if (v28 == 0x8000000000000000)
                {
                    v0 = 0x8000000000000000;
                }
                else
                {
                    v31 = *((long long *)&v18->padding_28[0]);
                    if (!v31)
                    {
                        v32 = 1;
                    }
                    else if (v31 < 0)
                    {
                        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    else
                    {
                        v32 = __rust_alloc(v31, 1);
                        if (!v32)
                            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
                    }
                    memcpy(v1, v18->field_20, v31);
                    v0 = v31;
                    v1 = v32;
                    v2 = v31;
                }
                uu_test::parser::Symbol::new::h6625985994e45cab(&v11, v0);
                v33 = v11;
                if (v33 == 6)
                {
                    goto *((int *)(4297376 + *((long long *)v14) * 4)) + 4297376;
                }
                else
                {
                    v4 = &v11;
                    v3 = *((long long *)&v16);
                    v34 = *((int128_t *)&v14[0]);
                    *((int128_t *)&v2) = *((int128_t *)&v15);
                    v0 = v34;
                    std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v7, "-asrc/uu/test/src/parser.rs", 2);
                    v35 = *((long long *)&v7);
                    v36 = *((long long *)&v8);
                    v37 = v0;
                    if (v37 == 2 && (long long)(&v2)[8] == v38 && !bcmp((long long)v2, v36, v38))
                    {
                        if (v35)
                            __rust_dealloc(v36);
                        uu_test::parser::Parser::term::h6d50acb9adbf5b34(&v7, v18);
                        v39 = *((long long *)&v7);
                        if (v39 == 7)
                            goto LABEL_4841d4;
                        v6 = *((long long *)&v10);
                        *((int128_t *)&v5) = *((int128_t *)&v8);
                        v40 = 8;
LABEL_484313:
                        if (*((long long *)(v0 + (char *)v40)))
                            __rust_dealloc(*((long long *)(&v0 + v40)));
                    }
                    else
                    {
                        if (v35)
                            __rust_dealloc(v36);
                        uu_test::parser::Parser::expr::h5e5770957878cc20(&v7, v18);
                        v39 = *((long long *)&v7);
                        if (v39 == 7)
                        {
LABEL_4841d4:
                            v41 = v18->field_10;
                            if (v41 == v18->field_0)
                                alloc::raw_vec::RawVec$LT$T$C$A$GT$::grow_one::hdd9dfba5dd59dd3b(v18);
                            v42 = v18->field_8;
                            v43 = v41 * 5;
                            v44 = *((long long *)&v16);
                            *((long long *)(32 + (char *)v42 + 0x8 * v43)) = *((long long *)&v16);
                            v45 = *((int128_t *)&v14[0]);
                            *((int128_t *)(16 + (char *)v42 + 0x8 * v43)) = *((int128_t *)&v15);
                            *((void*)((char *)v42 + 0x8 * v43)) = v45;
                            v18->field_10 = (char *)v41 + 1;
                            uu_test::parser::Parser::maybe_boolop::heb78df6e4061fabf(v0, v18, v44, v43);
                            if ((int)v0 != 7)
                            {
                                v46 = (int128_t)v0;
                                v48 = v47;
                                v48[1] = (int128_t)v2;
                                *((void*)&v48[0]) = v46;
                            }
                            else
                            {
                                if (v33 - 2 <= 3)
                                {
                                    v49 = *((long long *)&(&g_4102c0)[16 + 8 * v33]);
                                    if (*((long long *)(&v11 + v49)))
                                        __rust_dealloc(*((long long *)(&v12 + v49)));
                                }
                                *(v54) = 7;
                                return;
                            }
LABEL_484346:
                            if (v33 - 2 > 3)
                                return;
                            v53 = *((long long *)&(&g_4102c0)[16 + 8 * v33]);
                            if (*((long long *)(&v11 + v53)))
                                __rust_dealloc(*((long long *)(&v12 + v53)));
                        }
                        else
                        {
                            v6 = *((long long *)&v10);
                            *((int128_t *)&v5) = *((int128_t *)&v8);
                            v40 = 8;
                            if (v37 - 2 < 2)
                                goto LABEL_484313;
                            if ((unsigned int)v37 == 4 || (unsigned int)v37 == 5)
                            {
                                v40 = 16;
                                goto LABEL_484313;
                            }
                        }
                    }
                    v52 = v47;
                    *((unsigned long long *)((char *)&v52->field_8 + 8)) = v6;
                    *((void*)&(&v52->field_0)[1]) = v5;
                    v52->field_0 = v50;
                    goto LABEL_484346;
                }
            }
        }
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    }
}
