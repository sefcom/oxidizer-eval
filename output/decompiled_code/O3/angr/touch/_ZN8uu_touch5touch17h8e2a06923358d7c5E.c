long long uu_touch::touch::h8e2a06923358d7c5(struct_3 *a0, unsigned long long a1, unsigned long a2, struct_0 *a3, unsigned long a4, unsigned long a5)
{
    char v0;  // [bp-0x170]
    unsigned long long v1;  // [sp-0x168]
    struct_3 *v2;  // [sp-0x160], Other Possible Types: unsigned long long
    struct_2 *v3;  // [sp-0x158]
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
    struct_1 *v17;  // [sp-0xe0]
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
    unsigned long long v33;  // rcx
    void* v34;  // rcx
    unsigned long long v35;  // r13
    struct_2 *v36;  // r14
    unsigned long long v37;  // r15
    unsigned long long v38;  // r12
    unsigned long long v39;  // rax
    struct_2 *v40;  // 4096
    unsigned long long v42;  // r15
    struct_2 *v43;  // r14
    struct_1 *v44;  // edx, Other Possible Types: unsigned int, unsigned long
    unsigned long long v45;  // rax
    unsigned long long v48;  // rcx
    int v49;  // ymm0
    int v50;  // ymm1
    int v52;  // xmm0
    struct_2 *v53;  // rax
    unsigned long long v54;  // r8
    unsigned long long v55;  // r9
    unsigned long long v56;  // rax
    int v57;  // xmm0
    int v58;  // xmm0
    int v59;  // ymm0
    int v60;  // ymm0
    unsigned long long v61;  // rax
    unsigned long long v62;  // r14
    int v64;  // xmm0
    unsigned long long v65;  // r15
    unsigned long long v66;  // r12
    int v67;  // ymm1
    unsigned long long v69;  // r15
    struct_1 *v70;  // rdx
    unsigned long long v71;  // r13
    unsigned long long v72;  // rax
    unsigned long long v73;  // rcx
    struct_1 *v74;  // rdx
    unsigned long long v75;  // rsi
    struct_1 *v77;  // rcx
    unsigned long long v78;  // rax
    int v79;  // xmm0
    int v80;  // xmm0
    unsigned long long v81;  // rax
    int v82;  // xmm0
    int v83;  // xmm1

    v33 = a3->field_18;
    v34 = v33 - -9223372036854775809;
    if (v33 >= 9223372036854775810)
        v34 = 0;
    v3 = &a3->field_0;
    if (v34)
    {
        v10 = a1;
        if (v34 == 1)
        {
            v37 = a3->field_20;
            v38 = (unsigned int)a3->field_28;
            v39 = v38 & 4294967295;
        }
        else
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(v4, a1, 9223372036854775810);
            v37 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(v4);
            v38 = v44;
            v39 = v44;
            v40 = v3;
        }
        v1 = v39;
    }
    else
    {
        v35 = a1;
        v36 = a3;
        uu_touch::stat::haa73667d17037b3b(&v11, a3->field_20, a3->field_28, -0x100 | !a3->field_31);
        if (!*((long long *)&v11))
        {
            v10 = v35;
            v42 = *((long long *)&v12);
            v38 = *((int *)&v13);
            v37 = *((long long *)&v14);
            v1 = *((int *)&v15);
        }
        else
        {
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hdd400a1e630fbbb5(v4, &v36->field_18, *((long long *)&v12));
            v45 = v4;
            v42 = *((long long *)&v5);
            v38 = *((long long *)&v6);
            v37 = *((long long *)&v7);
            if (v45 != 9223372036854775812)
            {
                v48 = *((long long *)&v9);
                a0->field_0 = v45;
                a0->field_8 = v42;
                *((unsigned long long *)&a0->field_10) = (unsigned long long)(v49 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38);
                *((unsigned long long *)&(&a0->field_10)[2]) = v37;
                *((unsigned long long *)&a0->field_14) = (unsigned long long)(v50 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1);
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v48;
                return a0;
            }
            v10 = v35;
            v1 = *((long long *)&v8);
            v40 = v3;
        }
    }
    if (v43->field_0 != 0x8000000000000000)
    {
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v42, v38 & 4294967295);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v42;
            a0->field_10 = v38;
            return a0;
        }
        v52 = v11;
        v30 = v52;
        v53 = v3;
        v2 = v53->field_8;
        v19 = v53->field_10;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v30, v53->field_8, v19, v54, v55);
        v56 = v4;
        v42 = *((long long *)&v5);
        v38 = *((int *)&v6);
        if (v56 != 9223372036854775812)
        {
            v57 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->field_10)[1]) = v57;
            a0->field_0 = v56;
            a0->field_8 = v42;
            a0->field_10 = v38;
            return a0;
        }
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v37, v1);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v37;
            a0->field_10 = v1;
            return a0;
        }
        v58 = v11;
        v60 = v59 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v58;
        v31 = v58;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v31, v2, v19, v54, v55);
        v61 = v4;
        v62 = *((long long *)&v5);
        if (v61 != 9223372036854775812)
        {
            v64 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->field_10)[1]) = v64;
            a0->field_0 = v61;
            a0->field_8 = v62;
            a0->field_10 = v1;
            return a0;
        }
        v1 = *((int *)&v6);
    }
    v2 = a0;
    v24 = v10;
    v25 = v24 + a2 * 24;
    v26 = 0;
    while (true)
    {
        if (!v44)
        {
            a0 = v2;
            a0->field_0 = 9223372036854775812;
            return a0;
        }
        v62 = v62;
        v65 = v65;
        v20 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h549ada4c33c82e7d(&v24);
        v69 = *((long long *)v44);
        v71 = 0x8000000000000000;
        if (v69 == 0x8000000000000000)
        {
            uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(v4);
            v72 = v4;
            v73 = *((long long *)&v5);
            v74 = *((long long *)&v6);
            v75 = *((long long *)&v7);
            if (v72 != 9223372036854775812)
            {
                a0 = v2;
                a0->field_14 = *((int128_t *)&v8);
                a0->field_0 = v72;
                a0->field_8 = v73;
                *((struct_1 **)&a0->field_10) = v74;
                *((unsigned long long *)&(&a0->field_10)[2]) = v75;
                return a0;
            }
        }
        v16 = v71;
        v17 = v70;
        v18 = v75;
        if (v16 != 0x8000000000000000)
            v77 = stack_base + -232;
        else
            v77 = v17;
        v66 = v66;
        v78 = uu_touch::touch_file::h877dc0441f137307(v77->field_8, v77->field_10, (-0x100 | v69 == 0x8000000000000000) & 4294967295 & 4294967295, v3, v65, v66 & 4294967295, v62, *((int *)&v0));
        v22 = v18;
        v79 = *((int128_t *)&v16);
        v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v79;
        v21 = v79;
        v23 = &v20;
        if (!v78)
        {
            core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc5b9fab259fe0862(&v21);
        }
        else
        {
            v80 = v21;
            v28 = v22;
            v29 = v23;
            v27 = v80;
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf4c84b0974a1c31b(v4, &v27, v78, v44);
            v81 = v4;
            v82 = *((int128_t *)&v5);
            v60 = v60 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v80 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v82;
            v83 = *((int128_t *)&v7);
            v67 = v67 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v83;
            v11 = v82;
            v13 = v83;
            v15 = *((long long *)&v9);
            if (v81 != 9223372036854775812)
            {
                a0 = v2;
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v15;
                *((void*)&(&a0->field_10)[2]) = v13;
                *((void*)&a0->field_8) = v11;
                a0->field_0 = v81;
                return a0;
            }
        }
    }
}
