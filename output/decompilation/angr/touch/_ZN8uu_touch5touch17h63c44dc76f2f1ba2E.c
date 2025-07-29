long long uu_touch::touch(struct_2 *a0, unsigned long long a1, unsigned long a2)
{
    unsigned long v0;  // [bp-0x160]
    unsigned long v1;  // [bp-0x160]
    unsigned long long v2;  // [bp-0x160]
    struct_2 *v3;  // [bp-0x158], Other Possible Types: unsigned long
    struct_0 *v4;  // [bp-0x150]
    char v5;  // [bp-0x148], Other Possible Types: unsigned long long
    struct_1 *v6;  // [bp-0x140], Other Possible Types: unsigned long long
    unsigned int v7;  // [bp-0x138]
    char v8;  // [sp-0x138]
    unsigned int v9;  // [bp-0x134]
    unsigned long long v10;  // [bp-0x130]
    unsigned long long v12;  // [bp-0x128]
    unsigned long v14;  // [bp-0x120], Other Possible Types: unsigned long long
    struct_1 *v15;  // [bp-0x118], Other Possible Types: char
    unsigned long long v16;  // [bp-0x110]
    int v17;  // [bp-0x108], Other Possible Types: char
    unsigned long long v18;  // [bp-0x100]
    char v19;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0xf0]
    struct_1 *v21;  // [bp-0xe8]
    unsigned long long v22;  // [bp-0xe0]
    unsigned long v23;  // [bp-0xd8]
    unsigned long long v24;  // [bp-0xc0]
    int v25;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v26;  // [bp-0xa8]
    char *v27;  // [bp-0xa0]
    unsigned long long v28;  // [bp-0x90]
    unsigned long long v29;  // [bp-0x88]
    void* v30;  // [bp-0x80]
    int v31;  // [bp-0x78]
    unsigned long long v32;  // [bp-0x68]
    char *v33;  // [bp-0x60]
    char v34;  // [bp-0x50]
    char v35;  // [bp-0x40]
    struct_0 *v37;  // rcx
    unsigned long v38;  // rcx
    unsigned long long v39;  // r15
    struct_1 *v40;  // r12
    unsigned long long v41;  // rax
    unsigned long long v42;  // r15
    struct_0 *v43;  // rcx
    unsigned int v44;  // edx
    unsigned long long v46;  // r15
    unsigned long long v47;  // r14
    struct_0 *v48;  // r14
    unsigned long long v51;  // rax
    struct_1 *v52;  // rdx
    struct_1 *v53;  // rdx
    unsigned long long v54;  // rsi
    struct_1 *v55;  // rdx
    unsigned long long v56;  // rcx
    struct_1 *v57;  // rdx
    struct_1 *v58;  // rdx
    struct_1 *v59;  // rdx
    unsigned long long v60;  // rax
    struct_1 *v61;  // xmm1
    struct_1 *v62;  // xmm0
    struct_1 *v63;  // xmm0
    struct_1 *v64;  // xmm0

    v38 = v37->field_18 - -9223372036854775809;
    if (v37->field_18 >= 9223372036854775810)
        v38 = 0;
    v4 = v37;
    if (v38)
    {
        if (v38 == 1)
        {
            v39 = v37->field_20;
            v40 = *((int *)&v37->field_28);
            v41 = v40 & 4294967295;
            v42 = v37->field_20;
            v43 = v37;
        }
        else
        {
            v5.now();
            v39 = uu_touch::datetime_to_filetime(&v5);
            v40 = v44;
            v41 = v44;
            v42 = v39;
            v43 = v4;
        }
        v46 = v42;
        v1 = v41;
        v2 = v1;
        v47 = v39;
        if (!(v43->field_0 == 0x8000000000000000))
            goto LABEL_5b588b;
    }
    else
    {
        v48 = v37;
        uu_touch::stat(&v15, v37->field_20, *((long long *)&v37->field_28), v37->field_31 ^ 1);
        if ((v15 & 1))
        {
            uu_touch::touch::{{closure}}(&v5, &v48->field_18, v16);
            v46 = v6;
            v40 = *((long long *)&v8);
            v39 = v10;
            if (v5 != 9223372036854775812)
            {
                a0->field_0 = v5;
                a0->field_8 = v46;
                *((struct_1 **)&a0->padding_10) = v40;
                *((unsigned long long *)&a0->padding_15[3]) = v39;
                a0->field_20[0] = v12;
                a0->field_20[1] = v14;
                return a0;
            }
            v1 = v12;
            v2 = v1;
            v47 = v39;
            if (!(v4->field_0 == 0x8000000000000000))
                goto LABEL_5b588b;
        }
        else
        {
            v46 = v16;
            v40 = *((int *)&v17);
            v1 = *((int *)&v19);
            v39 = v18;
            v2 = v1;
            v47 = v39;
            if (v48->field_0 != 0x8000000000000000)
            {
LABEL_5b588b:
                uu_touch::filetime_to_datetime(&v15, v46, v40 & 4294967295);
                if (!*((int *)&v15))
                {
                    a0->field_0 = 9223372036854775809;
                    a0->field_8 = v46;
                    *((unsigned int *)&a0->padding_10[0]) = (unsigned int)v40;
                    return a0;
                }
                memcpy(&v34, &v15, 16);
                v3 = v4->field_8;
                v23 = v4->field_10;
                uu_touch::parse_date(&v5, &v34, v4->field_8, v4->field_10);
                v46 = v6;
                v40 = v7;
                if (v5 != 9223372036854775812)
                {
                    v64 = *((int128_t *)&v9);
                    *((int128_t *)&a0->field_20[0]) = *((int128_t *)&v12);
                    *((struct_1 **)&a0->field_14) = v64;
                    a0->field_0 = v5;
                    a0->field_8 = v46;
                    *((unsigned int *)&a0->padding_10[0]) = (unsigned int)v40;
                    return a0;
                }
                uu_touch::filetime_to_datetime(&v15, v39, v1);
                if (!*((int *)&v15))
                {
                    a0->field_0 = 9223372036854775809;
                    a0->field_8 = v39;
                    *((unsigned int *)&a0->padding_10[0]) = v1;
                    return a0;
                }
                memcpy(&v35, &v15, 16);
                uu_touch::parse_date(&v5, &v35, v3, v23);
                if (v5 != 9223372036854775812)
                {
                    v63 = *((int128_t *)&v9);
                    *((int128_t *)&a0->field_20[0]) = *((int128_t *)&v12);
                    *((struct_1 **)&a0->field_14) = v63;
                    a0->field_0 = v5;
                    a0->field_8 = v6;
                    *((unsigned int *)&a0->padding_10[0]) = v0;
                    return a0;
                }
                v0 = v7;
                v2 = v0;
                v47 = v6;
            }
        }
    }
    v3 = a0;
    v28 = a1;
    v29 = a1 + a2 * 24;
    v30 = 0;
    v51 = v28.next();
    if (v52)
    {
        while (true)
        {
            v55 = v53;
            v24 = v51;
            v56 = 0x8000000000000000;
            v57 = v55;
            if (v57->field_0 == 0x8000000000000000)
            {
                uu_touch::pathbuf_from_stdout(&v5);
                v56 = v6;
                v58 = *((long long *)&v7);
                v54 = v10;
                v57 = v58;
                if (v5 != 9223372036854775812)
                {
                    *((int128_t *)&v3->field_20[0]) = *((int128_t *)&v12);
                    v3->field_0 = v5;
                    v3->field_8 = v6;
                    *((struct_1 **)&v3->padding_10) = v58;
                    *((unsigned long long *)&v3->padding_15[3]) = v10;
                    return v3;
                }
            }
            v59 = v57;
            v20 = v56;
            v21 = v59;
            v22 = v54;
            if (v56 != 0x8000000000000000)
                v59 = &v20;
            v60 = uu_touch::touch_file(v59->field_8, v59->field_10, v55->field_0 == 0x8000000000000000, v4, v46, v40 & 4294967295, v47, v2);
            v26 = v22;
            memcpy(&v25, &v20, 16);
            v27 = &v24;
            if (!v60)
            {
                core::ptr::drop_in_place<uu_touch::touch::{{closure}}>(&v25);
                v51 = v28.next();
                v52 = v52;
                if (!v53)
                    break;
            }
            else
            {
                v32 = v26;
                v33 = v27;
                v31 = v25;
                uu_touch::touch::{{closure}}(&v5, &v31, v60, v52);
                v61 = *((int128_t *)&v10);
                *((int128_t *)&v15) = *((int128_t *)&v6);
                *((struct_1 **)&v17) = v61;
                v19 = v14;
                if (v5 != 9223372036854775812)
                {
                    v3->field_20[1] = v19;
                    v62 = *((int128_t *)&v15);
                    *((int128_t *)&v3->padding_15[3]) = (int128_t)v17;
                    v3->field_8 = v62;
                    v3->field_0 = v5;
                    return v3;
                }
                v51 = v28.next();
                v52 = v52;
                if (!v53)
                    break;
            }
        }
    }
    v3->field_0 = 9223372036854775812;
    return v3;
}
