long long uu_touch::touch::h10e8d27419cb70a1(struct_0 *a0, unsigned long long a1, unsigned long a2, struct_1 *a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x180]
    struct_0 *v1;  // [sp-0x170], Other Possible Types: unsigned long long
    char v2;  // [bp-0x168]
    char v3;  // [bp-0x164]
    char v4;  // [bp-0x160]
    char v5;  // [bp-0x158]
    char v6;  // [bp-0x150]
    char v7;  // [bp-0x148]
    char v8;  // [bp-0x140]
    unsigned long long v9;  // [sp-0x138]
    unsigned long long v10;  // [sp-0x130]
    int v11;  // [bp-0x128], Other Possible Types: unsigned int
    char v12;  // [bp-0x120]
    int v13;  // [bp-0x118], Other Possible Types: char
    char v14;  // [bp-0x110]
    char v15;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0xf8]
    unsigned long v17;  // [sp-0xe8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [sp-0xe0]
    unsigned long long v19;  // [sp-0xd8]
    unsigned long long v20;  // [sp-0xd0]
    unsigned long v21;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v22;  // [sp-0xb8]
    unsigned long long v23;  // [sp-0xa8]
    unsigned long long v24;  // [sp-0xa0]
    unsigned long v25;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v26;  // [sp-0x88]
    void* v27;  // [sp-0x80]
    int v28;  // [sp-0x78]
    unsigned long long v29;  // [sp-0x68]
    unsigned long long v30;  // [sp-0x60]
    int v31;  // [sp-0x50]
    int v32;  // [sp-0x40]
    unsigned long long v34;  // rcx
    void* v35;  // rcx
    unsigned long long v36;  // r13
    unsigned long long v37;  // r15
    unsigned long long v38;  // rbp
    unsigned long long v39;  // rdx
    unsigned long long v40;  // rcx
    unsigned long long v41;  // rax
    unsigned long long v42;  // rcx
    int v43;  // ymm0
    int v44;  // ymm1
    unsigned long long v46;  // 4100
    unsigned long long v47;  // r14
    int v48;  // xmm0
    unsigned long long v49;  // rbp
    unsigned long long v50;  // r8
    unsigned long long v51;  // r9
    unsigned long long v52;  // rax
    unsigned long long v53;  // rcx
    unsigned int v54;  // r14d
    int v55;  // xmm0
    int v56;  // xmm0
    int v57;  // ymm0
    int v58;  // ymm0
    unsigned long long v59;  // rax
    int v60;  // xmm0
    unsigned long long v61;  // rax
    unsigned long long v62;  // rdx
    unsigned long long v63;  // rdx
    unsigned long long v64;  // rsi
    unsigned long long v65;  // rdx
    int v66;  // ymm1
    unsigned long long v67;  // r12
    unsigned long long v68;  // r13
    unsigned long long v69;  // rax
    unsigned long long v70;  // rcx
    unsigned long long v72;  // rcx
    unsigned long long v73;  // rax
    int v74;  // xmm0
    int v75;  // xmm0
    unsigned long long v76;  // rax
    int v77;  // xmm0
    int v78;  // xmm1

    v34 = a3->field_18;
    v35 = v34 - -9223372036854775809;
    if (v34 >= 9223372036854775810)
        v35 = 0;
    if (v35)
    {
        v9 = a1;
        if (v35 == 1)
        {
            v37 = a3->field_20;
            v38 = (unsigned int)a3->field_28;
        }
        else
        {
            chrono::offset::local::Local::now::h9676919418f603da(&v2, a1, 9223372036854775810);
            v38 = *((int *)&v4);
            v37 = -62135683200 + *((int *)&v3) + (unsigned int)::0x5c08b0::chrono::naive::date::NaiveDate::num_days_from_ce::h5c90bef67c86960c(*((int *)&v2)) * 86400;
        }
        v40 = v38 & 4294967295;
    }
    else
    {
        v36 = a1;
        uu_touch::stat::h0d3df34496a53c6f(&v11, a3->field_20, a3->field_28, -0x100 | !a3->field_31);
        if (!*((long long *)&v11))
        {
            v9 = v36;
            v37 = *((long long *)&v12);
            v38 = *((int *)&v13);
            v39 = *((long long *)&v14);
            v40 = *((int *)&v15);
        }
        else
        {
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::ha3dbc8916558e87c(&v2, &a3->field_18, *((long long *)&v12));
            v41 = *((long long *)&v2);
            v37 = *((long long *)&v4);
            v38 = *((long long *)&v5);
            v39 = *((long long *)&v6);
            v40 = *((long long *)&v7);
            if (v41 != 9223372036854775812)
            {
                v42 = *((long long *)&v8);
                a0->field_0 = v41;
                a0->field_8 = v37;
                *((unsigned long long *)&a0->field_10) = (unsigned long long)(v43 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38);
                *((unsigned long long *)&(&a0->field_10)[2]) = v39;
                *((unsigned long long *)&a0->field_14) = (unsigned long long)(v44 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v40);
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v42;
                return a0;
            }
            v9 = v36;
        }
    }
    v46 = a3->field_0;
    v10 = v40;
    v47 = v39;
    if (v46 == 0x8000000000000000)
    {
        v16 = v38;
        goto LABEL_5c1cc2;
    }
    else
    {
        uu_touch::filetime_to_datetime::h4025a4cac6979cb8(&v11, v37, v16 & 4294967295);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v37;
            a0->field_10 = v16;
            return a0;
        }
        v48 = v11;
        v31 = v48;
        v49 = a3->field_8;
        v1 = a3->field_10;
        uu_touch::parse_date::hf8e561607cc418b5(&v2, &v31, v49, a3->field_10, v50, v51);
        v52 = *((long long *)&v2);
        v37 = *((long long *)&v4);
        v53 = *((int *)&v5);
        if (v52 != 9223372036854775812)
        {
            v55 = *((int128_t *)&(&v5)[4]);
            a0->field_14 = *((int128_t *)&v7);
            *((void*)&(&a0->field_10)[1]) = v55;
            a0->field_0 = v52;
            a0->field_8 = v37;
        }
        else
        {
            v20 = v49;
            v16 = v53;
            v54 = v10;
            uu_touch::filetime_to_datetime::h4025a4cac6979cb8(&v11, v47, v54);
            if (!v11)
            {
                a0->field_0 = 9223372036854775809;
                a0->field_8 = v47;
                a0->field_10 = v54;
                return a0;
            }
            v56 = v11;
            v58 = v57 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v48 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v56;
            v32 = v56;
            uu_touch::parse_date::hf8e561607cc418b5(&v2, &v32, v20, v1, v50, v51);
            v59 = *((long long *)&v2);
            v47 = *((long long *)&v4);
            v53 = *((int *)&v5);
            if (v59 != 9223372036854775812)
            {
                v60 = *((int128_t *)&(&v5)[4]);
                a0->field_14 = *((int128_t *)&v7);
                *((void*)&(&a0->field_10)[1]) = v60;
                a0->field_0 = v59;
                a0->field_8 = v47;
            }
            else
            {
                v10 = v53;
LABEL_5c1cc2:
                v1 = a0;
                v25 = v9;
                v26 = v25 + a2 * 24;
                v27 = 0;
                v61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h57bd9ae353f26715(&v25);
                if (v62)
                {
                    do
                    {
                        v63 = v65;
                        v21 = v61;
                        v67 = *((long long *)v63);
                        if (v67 == 0x8000000000000000)
                        {
                            uu_touch::pathbuf_from_stdout::hfac88899ba555a41(&v2);
                            v69 = *((long long *)&v2);
                            v70 = *((long long *)&v4);
                            v63 = *((long long *)&v5);
                            v64 = *((long long *)&v6);
                            if (v69 != 9223372036854775812)
                            {
                                a0 = v1;
                                a0->field_14 = *((int128_t *)&v7);
                                a0->field_0 = v69;
                                a0->field_8 = v70;
                                *((unsigned long long *)&a0->field_10) = v63;
                                *((unsigned long long *)&(&a0->field_10)[2]) = v64;
                                return a0;
                            }
                        }
                        v17 = v68;
                        v18 = v63;
                        v19 = v64;
                        if (v17 == 0x8000000000000000)
                            v72 = v18;
                        v73 = uu_touch::touch_file::h4b1b86463075d5ee(*((long long *)(v72 + 8)), *((long long *)(v72 + 16)), (-0x100 | v67 == 0x8000000000000000) & 4294967295 & 4294967295, a3, v37, v16, v47, *((int *)&v0));
                        v23 = v19;
                        v74 = *((int128_t *)&v17);
                        v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v74;
                        v22 = v74;
                        v24 = &v21;
                        if (!v73)
                        {
                            core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7df9c2cadc3d2b16(&v22);
                        }
                        else
                        {
                            v75 = v22;
                            v29 = v23;
                            v30 = v24;
                            v28 = v75;
                            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::h45efb6414cfdba72(&v2, &v28, v73, v62);
                            v76 = *((long long *)&v2);
                            v77 = *((int128_t *)&v4);
                            v58 = v58 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v77;
                            v78 = *((int128_t *)&v6);
                            v66 = v66 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v78;
                            v11 = v77;
                            v13 = v78;
                            v15 = *((long long *)&v8);
                            if (v76 != 9223372036854775812)
                            {
                                a0 = v1;
                                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v15;
                                *((void*)&(&a0->field_10)[2]) = v13;
                                *((void*)&a0->field_8) = v11;
                                a0->field_0 = v76;
                                return a0;
                            }
                        }
                        v61 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h57bd9ae353f26715(&v25);
                    } while (v62);
                }
                a0 = v1;
                a0->field_0 = 9223372036854775812;
                return a0;
            }
        }
        a0->field_10 = v53;
        return a0;
    }
}
