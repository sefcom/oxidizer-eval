long long uu_touch::touch::h8e2a06923358d7c5(struct_3 *a0)
{
    char v0;  // [bp-0x170]
    unsigned long long v1;  // [sp-0x168]
    struct_3 *v2;  // [sp-0x160], Other Possible Types: unsigned long long
    struct_0 *v3;  // [sp-0x158]
    unsigned int v4[2];  // [bp-0x150]
    char v5;  // [bp-0x148]
    char v6;  // [bp-0x140]
    char v7;  // [bp-0x138]
    char v8;  // [bp-0x130]
    char v9;  // [bp-0x128]
    unsigned long long v10;  // [sp-0x120]
    int v11;  // [sp-0x118], Other Possible Types: unsigned int
    char v12;  // [bp-0x110]
    int v13;  // [sp-0x108], Other Possible Types: char
    char v14;  // [bp-0x100]
    char v15;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v16;  // [sp-0xe8]
    struct_2 *v17;  // [sp-0xe0]
    unsigned long long v18;  // [sp-0xd8]
    unsigned long long v19;  // [sp-0xd0]
    unsigned long v20;  // [sp-0xc0]
    int v21;  // [sp-0xb8]
    unsigned long long v22;  // [sp-0xa8]
    char *v23;  // [sp-0xa0]
    unsigned long v24;  // [sp-0x90]
    unsigned long long v25;  // [sp-0x88]
    void* v26;  // [sp-0x80]
    int v27;  // [sp-0x78]
    unsigned long long v28;  // [sp-0x68]
    char *v29;  // [sp-0x60]
    int v30;  // [sp-0x50]
    int v31;  // [sp-0x40]
    struct_1 *v33;  // rcx
    struct_0 *v34;  // r8
    unsigned long long v35;  // rcx
    unsigned long long v36;  // rax
    unsigned long v37;  // rsi
    struct_0 *v38;  // r14
    unsigned long long v39;  // r14
    unsigned long long v40;  // rax
    unsigned long v41;  // rsi
    unsigned int v42;  // edx
    unsigned long long v43;  // rax
    unsigned long long v46;  // rcx
    int v47;  // ymm0
    int v48;  // ymm1
    int v49;  // xmm0
    struct_0 *v50;  // rax
    unsigned long long v51;  // rax
    int v52;  // xmm0
    int v53;  // xmm0
    int v54;  // ymm0
    int v55;  // ymm0
    unsigned long long v56;  // rax
    int v58;  // xmm0
    unsigned long long v59;  // r15
    unsigned long long v60;  // r12
    struct_2 *v61;  // rdx
    int v62;  // ymm1
    unsigned long long v64;  // r15
    unsigned long long v65;  // rcx
    struct_2 *v66;  // rdx
    unsigned long long v67;  // rax
    struct_2 *v68;  // rdx
    unsigned long long v69;  // rsi
    struct_2 *v70;  // rdx
    unsigned long long v71;  // rax
    int v72;  // xmm0
    int v73;  // xmm0
    unsigned long long v74;  // rax
    int v75;  // xmm0
    int v76;  // xmm1

    v34 = v33;
    v35 = v33->field_18;
    v36 = (v35 < 9223372036854775810 ? v35 - -9223372036854775809 : 0);
    v3 = &v33->field_0;
    if (v36)
    {
        v10 = v37;
        if (v36 == 1)
        {
            v59 = v33->field_20;
            v60 = (unsigned int)v33->field_28;
            v39 = v59;
            v40 = v60 & 4294967295;
        }
        else
        {
            chrono::offset::local::Local::now::ha82adb6e05d16f38(v4);
            v34 = v3;
            v59 = uu_touch::datetime_to_filetime::hee2fe932dd2f3a25(v4);
            v60 = v42;
            v39 = v59;
            v40 = v42;
        }
        v1 = v40;
    }
    else
    {
        v38 = v33;
        uu_touch::stat::haa73667d17037b3b(&v11, v33->field_20, v33->field_28, !v33->field_31);
        if (!*((long long *)&v11))
        {
            v10 = v41;
            v59 = *((long long *)&v12);
            v60 = *((int *)&v13);
            v1 = *((int *)&v15);
            v34 = v38;
            v39 = *((long long *)&v14);
        }
        else
        {
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hdd400a1e630fbbb5(v4, &v38->field_18, *((long long *)&v12));
            v43 = v4;
            v59 = *((long long *)&v5);
            v60 = *((long long *)&v6);
            v39 = *((long long *)&v7);
            if (v43 != 9223372036854775812)
            {
                v46 = *((long long *)&v9);
                a0->field_0 = v43;
                a0->field_8 = v59;
                *((unsigned long long *)&a0->padding_10) = (unsigned long long)(v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v60);
                *((unsigned long long *)&(&a0->padding_10)[2]) = v39;
                *((unsigned long long *)&a0->field_14) = (unsigned long long)(v48 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v1);
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v46;
                return a0;
            }
            v10 = v41;
            v1 = *((long long *)&v8);
            v34 = v3;
        }
    }
    if (v34->field_0 != 0x8000000000000000)
    {
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v59, v60 & 4294967295);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v59;
            *((unsigned int *)&a0->padding_10[0]) = v60;
            return a0;
        }
        v49 = v11;
        v30 = v49;
        v50 = v3;
        v2 = v50->field_8;
        v19 = v50->field_10;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v30, v50->field_8, v19);
        v51 = v4;
        v59 = *((long long *)&v5);
        v60 = *((int *)&v6);
        if (v51 != 9223372036854775812)
        {
            v52 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->padding_10)[1]) = v52;
            a0->field_0 = v51;
            a0->field_8 = v59;
            *((unsigned int *)&a0->padding_10[0]) = v60;
            return a0;
        }
        uu_touch::filetime_to_datetime::h118b2d8253ee418f(&v11, v39, v1);
        if (!v11)
        {
            a0->field_0 = 9223372036854775809;
            a0->field_8 = v39;
            *((unsigned int *)&a0->padding_10[0]) = v1;
            return a0;
        }
        v53 = v11;
        v55 = (v54 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v49) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v53;
        v31 = v53;
        uu_touch::parse_date::h59fdcf28d83a7f45(v4, &v31, v2, v19);
        v56 = v4;
        v39 = *((long long *)&v5);
        if (v56 != 9223372036854775812)
        {
            v58 = *((int128_t *)&(&v6)[4]);
            a0->field_14 = *((int128_t *)&v8);
            *((void*)&(&a0->padding_10)[1]) = v58;
            a0->field_0 = v56;
            a0->field_8 = v39;
            *((unsigned int *)&a0->padding_10[0]) = v1;
            return a0;
        }
        v1 = *((int *)&v6);
    }
    v2 = a0;
    v24 = v10;
    v25 = v24 + v61 * 24;
    v26 = 0;
    while (true)
    {
        if (!v61)
        {
            a0 = v2;
            a0->field_0 = 9223372036854775812;
            return a0;
        }
        v20 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h549ada4c33c82e7d(&v24);
        v64 = *((long long *)&v61->field_0);
        v65 = 0x8000000000000000;
        if (v64 == 0x8000000000000000)
        {
            uu_touch::pathbuf_from_stdout::h2920ee1b816c3101(v4);
            v67 = v4;
            v65 = *((long long *)&v5);
            v68 = *((long long *)&v6);
            v69 = *((long long *)&v7);
            if (v67 != 9223372036854775812)
            {
                a0 = v2;
                a0->field_14 = *((int128_t *)&v8);
                a0->field_0 = v67;
                a0->field_8 = v65;
                *((struct_2 **)&a0->padding_10) = v68;
                *((unsigned long long *)&(&a0->padding_10)[2]) = v69;
                return a0;
            }
        }
        v70 = v66;
        v16 = v65;
        v17 = v70;
        v18 = v69;
        if (v65 != 0x8000000000000000)
            v70 = &v16;
        v71 = uu_touch::touch_file::h877dc0441f137307(v70->field_8, v70->field_10, v64 == 0x8000000000000000, v3, v59, v60 & 4294967295, v39, *((int *)&v0));
        v22 = v18;
        v72 = *((int128_t *)&v16);
        v55 = v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v72;
        v21 = v72;
        v23 = &v20;
        if (!v71)
        {
            core::ptr::drop_in_place$LT$uu_touch..touch..$u7b$$u7b$closure$u7d$$u7d$$GT$::hc5b9fab259fe0862(&v21);
        }
        else
        {
            v73 = v21;
            v28 = v22;
            v29 = v23;
            v27 = v73;
            uu_touch::touch::_$u7b$$u7b$closure$u7d$$u7d$::hf4c84b0974a1c31b(v4, &v27, v71, v61);
            v74 = v4;
            v75 = *((int128_t *)&v5);
            v55 = (v55 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v73) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v75;
            v76 = *((int128_t *)&v7);
            v62 = v62 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v76;
            v11 = v75;
            v13 = v76;
            v15 = *((long long *)&v9);
            if (v74 != 9223372036854775812)
            {
                a0 = v2;
                *((unsigned long long *)((char *)&a0->field_14 + 8)) = v15;
                *((void*)&(&a0->padding_10)[2]) = v13;
                *((void*)&a0->field_8) = v11;
                a0->field_0 = v74;
                return a0;
            }
        }
    }
}
