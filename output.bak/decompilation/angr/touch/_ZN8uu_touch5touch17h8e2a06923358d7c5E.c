long long uu_touch::touch::h8e2a06923358d7c5(struct_1 *a0)
{
    char v0;  // [bp-0x170]
    unsigned long long v1;  // [sp-0x168]
    struct_1 *v2;  // [sp-0x160], Other Possible Types: unsigned long long
    struct_0 *v3;  // [sp-0x158]
    unsigned int v4[2];  // [bp-0x150]
    char v5;  // [bp-0x148]
    char v6;  // [bp-0x140]
    char v7;  // [bp-0x138]
    char v8;  // [bp-0x130]
    char v9;  // [bp-0x128]
    unsigned long long v10;  // [sp-0x120]
    int v11;  // [bp-0x118], Other Possible Types: unsigned int
    char v12;  // [bp-0x110]
    int v13;  // [bp-0x108], Other Possible Types: char
    char v14;  // [bp-0x100]
    char v15;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0xe8], Other Possible Types: unsigned long long
    struct_2 *v17;  // [sp-0xe0]
    unsigned long long v18;  // [sp-0xd8]
    unsigned long long v19;  // [sp-0xd0]
    unsigned long v20;  // [sp-0xc0], Other Possible Types: unsigned long long
    int v21;  // [sp-0xb8]
    unsigned long long v22;  // [sp-0xa8]
    char *v23;  // [sp-0xa0]
    unsigned long v24;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v25;  // [sp-0x88]
    void* v26;  // [sp-0x80]
    int v27;  // [sp-0x78]
    unsigned long long v28;  // [sp-0x68]
    char *v29;  // [sp-0x60]
    int v30;  // [sp-0x50]
    int v31;  // [sp-0x40]
    struct_3 *v33;  // rcx
    unsigned long long v34;  // rcx
    void* v35;  // rcx
    unsigned long v36;  // rsi
    struct_0 *v37;  // r14
    unsigned long long v38;  // r15
    unsigned long long v39;  // r12
    unsigned long long v40;  // rax
    struct_0 *v42;  // rcx
    unsigned long v43;  // rsi
    unsigned long long v44;  // r15
    struct_0 *v45;  // r14
    unsigned int v46;  // edx
    unsigned long long v47;  // rax
    unsigned long long v51;  // rcx
    int v52;  // ymm0
    int v53;  // ymm1
    int v55;  // xmm0
    struct_0 *v56;  // rax
    unsigned long long v57;  // rax
    int v58;  // xmm0
    int v59;  // xmm0
    int v60;  // ymm0
    int v61;  // ymm0
    unsigned long long v62;  // rax
    int v64;  // xmm0
    unsigned long long v65;  // r15
    unsigned long long v66;  // r12
    struct_2 *v67;  // rdx
    int v68;  // ymm1
    unsigned long long v70;  // r15
    unsigned long long v71;  // r13
    struct_2 *v72;  // rdx
    unsigned long long v73;  // rax
    unsigned long long v74;  // rcx
    struct_2 *v75;  // rdx
    unsigned long long v76;  // rsi
    struct_2 *v78;  // rcx
    unsigned long long v79;  // rax
    int v80;  // xmm0
    int v81;  // xmm0
    unsigned long long v82;  // rax
    int v83;  // xmm0
    int v84;  // xmm1

    v34 = v33->field_18;
    v35 = v34 - -9223372036854775809;
    if (v34 >= 9223372036854775810)
        v35 = 0;
    v3 = &v33->field_0;
    if (v35)
    {
        v10 = v36;
        if (v35 == 1)
        {
            v38 = v33->field_20;
            v39 = (unsigned int)v33->field_28;
            v40 = v39 & 4294967295;
        }
        else
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(v4);
            v38 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(v4);
            v39 = v46;
            v40 = v46;
            v42 = v3;
        }
        v1 = v40;
    }
    else
    {
        v37 = v33;
        uu_touch::stat::haa73667d17037b3b(&v11, v33->field_20, v33->field_28, -0x100 | !v33->field_31);
        if (!*((long long *)&v11))
        {
            v10 = v43;
            v44 = *((long long *)&v12);
            v39 = *((int *)&v13);
            v38 = *((long long *)&v14);
            v1 = *((int *)&v15);
        }
        else
        {
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hdd400a1e630fbbb5(v4, &v37->field_18, *((long long *)&v12));
            v47 = v4;
            v44 = *((long long *)&v5);
            v39 = *((long long *)&v6);
            v38 = *((long long *)&v7);
            if (v47 != 9223372036854775812)
            {
                v51 = *((long long *)&v9);
                a0->field_0 = v47;
                a0->field_8 = v44;
                *((unsigned long long *)&a0->field_10) = (unsigned long long)(v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v39);
                *((unsigned long long *)&(&a0->field_10)[2]) = v38;
                *((unsigned long long *)&a0->field_14) = (unsigned long long)(v53 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1);
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v51;
                return a0;
            }
            v10 = v43;
            v1 = *((long long *)&v8);
            v42 = v3;
        }
    }
    if (v45->field_0 != 0x8000000000000000)
    {
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v44, v39 & 4294967295);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v44;
            a0->field_10 = v39;
            return a0;
        }
        v55 = v11;
        v30 = v55;
        v56 = v3;
        v2 = v56->field_8;
        v19 = v56->field_10;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v30, v56->field_8, v19);
        v57 = v4;
        v44 = *((long long *)&v5);
        v39 = *((int *)&v6);
        if (v57 != 9223372036854775812)
        {
            v58 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->field_10)[1]) = v58;
            a0->field_0 = v57;
            a0->field_8 = v44;
            a0->field_10 = v39;
            return a0;
        }
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v38, v1);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v38;
            a0->field_10 = v1;
            return a0;
        }
        v59 = v11;
        v61 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v59;
        v31 = v59;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v31, v2, v19);
        v62 = v4;
        v38 = *((long long *)&v5);
        if (v62 != 9223372036854775812)
        {
            v64 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->field_10)[1]) = v64;
            a0->field_0 = v62;
            a0->field_8 = v38;
            a0->field_10 = v1;
            return a0;
        }
        v1 = *((int *)&v6);
    }
    v2 = a0;
    v24 = v10;
    v25 = v24 + v67 * 24;
    v26 = 0;
    while (true)
    {
        if (!v67)
        {
            a0 = v2;
            a0->field_0 = 9223372036854775812;
            return a0;
        }
        v38 = v38;
        v65 = v65;
        v20 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h549ada4c33c82e7d(&v24);
        v70 = *((long long *)&v67->field_0);
        v71 = 0x8000000000000000;
        if (v70 == 0x8000000000000000)
        {
            uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(v4);
            v73 = v4;
            v74 = *((long long *)&v5);
            v75 = *((long long *)&v6);
            v76 = *((long long *)&v7);
            if (v73 != 9223372036854775812)
            {
                a0 = v2;
                a0->field_14 = *((int128_t *)&v8);
                a0->field_0 = v73;
                a0->field_8 = v74;
                *((struct_2 **)&a0->field_10) = v75;
                *((unsigned long long *)&(&a0->field_10)[2]) = v76;
                return a0;
            }
        }
        v16 = v71;
        v17 = v72;
        v18 = v76;
        if (v16 != 0x8000000000000000)
            v78 = stack_base + -232;
        else
            v78 = v17;
        v66 = v66;
        v79 = uu_touch::touch_file::h877dc0441f137307(v78->field_8, v78->field_10, (-0x100 | v70 == 0x8000000000000000) & 4294967295 & 4294967295, v3, v65, v66 & 4294967295, v38, *((int *)&v0));
        v22 = v18;
        v80 = *((int128_t *)&v16);
        v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80;
        v21 = v80;
        v23 = &v20;
        if (!v79)
        {
            core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc5b9fab259fe0862(&v21);
        }
        else
        {
            v81 = v21;
            v28 = v22;
            v29 = v23;
            v27 = v81;
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf4c84b0974a1c31b(v4, &v27, v79, v67);
            v82 = v4;
            v83 = *((int128_t *)&v5);
            v61 = v61 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v81 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v84 = *((int128_t *)&v7);
            v68 = v68 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v84;
            v11 = v83;
            v13 = v84;
            v15 = *((long long *)&v9);
            if (v82 != 9223372036854775812)
            {
                a0 = v2;
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v15;
                *((void*)&(&a0->field_10)[2]) = v13;
                *((void*)&a0->field_8) = v11;
                a0->field_0 = v82;
                return a0;
            }
        }
    }
}
