long long uu_numfmt::format::format_string(unsigned long a0, unsigned long long a1, unsigned long long a2, struct_1 *a3, unsigned long long a4, unsigned long a5)
{
    int v0;  // [bp-0x1c8], Other Possible Types: char
    char *v1;  // [bp-0x1c8]
    unsigned long long v2;  // [bp-0x1c0]
    void* v3;  // [bp-0x1b8], Other Possible Types: unsigned long, unsigned long long
    unsigned long v4;  // [bp-0x1b0]
    char *v5;  // [bp-0x1a8], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v6;  // [bp-0x1a0], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x198], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0x190]
    void* v9;  // [bp-0x188], Other Possible Types: char *
    unsigned long long v10;  // [bp-0x180]
    char v11;  // [bp-0x178], Other Possible Types: unsigned long, unsigned long long
    char v12;  // [bp-0x170], Other Possible Types: unsigned long long
    char *v13;  // [bp-0x168], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0x160]
    void* v15;  // [bp-0x158], Other Possible Types: unsigned long
    unsigned long long v16;  // [bp-0x150]
    char v17;  // [bp-0x148]
    struct_0 *v18;  // [bp-0x140]
    int v19;  // [bp-0x138]
    unsigned long long v20;  // [bp-0x128]
    int v21;  // [bp-0x118], Other Possible Types: char
    unsigned long long v22;  // [bp-0x108]
    char v23;  // [bp-0xf8]
    unsigned long long v24;  // [bp-0xe8]
    unsigned long long v25;  // [bp-0xe0]
    int v26;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v27;  // [bp-0xc8]
    int v28;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v29;  // [bp-0xb0]
    int v30;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v31;  // [bp-0x98]
    int v32;  // [bp-0x90], Other Possible Types: char
    unsigned long long v33;  // [bp-0x80]
    int v34;  // [bp-0x78], Other Possible Types: char
    unsigned long v35;  // [bp-0x68]
    char v36;  // [bp-0x60]
    char v37;  // [bp-0x48]
    unsigned long long v39;  // 4096
    unsigned long long v40;  // rax
    unsigned long long v41;  // rdx
    void* v42;  // r13
    char v43;  // al
    char v44;  // bpl
    unsigned long v45;  // rax
    struct_2 *v46;  // r12
    char v47;  // r13b
    unsigned long long v48;  // rax

    v25 = a4;
    v39 = a1;
    if (!((char)(((0 ^ a3->field_88) & (0 ^ -(a3->field_88))) >> 63)))
    {
        v40 = a3->field_90.strip_suffix_of(a3->field_98, a1, a2);
        if (v40)
        {
            a2 = v41;
            if (!(v40))
                goto LABEL_4ade93;
LABEL_4ade92:
            v39 = v40;
        }
        else
        {
            a2 = a2;
            if (v40)
                goto LABEL_4ade92;
LABEL_4ade93:
            v39 = a1;
        }
    }
    if (a3->field_10 == 1)
    {
        v42 = a3->field_18;
    }
    else
    {
        v42 = 0;
        if (a3->field_b0 == 5 && a3->field_b1 == 5)
        {
            v42 = uu_numfmt::format::parse_implicit_precision(v39, a2);
            v43 = 5;
        }
    }
    uu_numfmt::format::transform_from(&v5, v39, a2, *((long long *)&a3->field_a0), v43);
    if (v5 != 0x8000000000000000)
    {
        *((unsigned long *)&v18->field_8) = v5;
        *((unsigned long *)&v18->padding_9[7]) = v6;
        v18->field_18 = v7;
        v18->field_0 = 1;
        return v5;
    }
    uu_numfmt::format::transform_to(&v11, *((long long *)&a3->field_a8), a3->field_b1, a3->field_ca, v42);
    memcpy(&v0, &v12, 16);
    v3 = v14;
    if ((v11 & 1))
    {
        v18->field_18 = v3;
        *((int128_t *)&v18->field_8) = *((int128_t *)&v0);
        v18->field_0 = 1;
        return v3;
    }
    v22 = v3;
    memcpy(&v21, &v0, 16);
    if (a3->field_88 == 0x8000000000000000)
    {
        v20 = v22;
        v19 = v21;
        if (!((char)v25 & 1))
            goto LABEL_4adff7;
    }
    else
    {
        v1 = &a3->field_88;
        v5 = &v21;
        v6 = <alloc::string::String as core::fmt::Display>::fmt;
        v7 = &v1;
        v8 = <&T as core::fmt::Display>::fmt;
        v11 = &g_4151a8;
        v12 = 2;
        v15 = 0;
        v13 = &v5;
        v14 = 2;
        v28.map_or_else(&v11);
        v19 = v28;
        v20 = v29;
        v44 = 1;
        if (!((char)v25 & 1))
        {
LABEL_4adff7:
            a5 = a3->field_b8;
        }
    }
    v45 = a5;
    if (!a3->field_0)
    {
        if (!v45)
            goto LABEL_4ae25e;
        if (v45 <= 0)
            goto LABEL_4ae27f;
LABEL_4ae01a:
        if (a3->field_51 == 1)
        {
            v1 = &v19;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = 0;
            v4 = v45;
            v11 = 2;
            v13 = 1;
            v14 = 1;
            v15 = 0;
            v16 = 48;
            v17 = 1;
            v5 = &g_415500;
            v6 = 1;
            v9 = &v11;
            v10 = 1;
            v7 = &v1;
            v8 = 2;
            v26.map_or_else(&v5);
            memcpy(&v23, &v26, 16);
            v24 = v27;
            if (a5)
            {
                if (a5 > 0)
                {
                    v1 = &v23;
                    v2 = <alloc::string::String as core::fmt::Display>::fmt;
                    v3 = 0;
                    v4 = a5;
                    v11 = 2;
                    v13 = 1;
                    v14 = 1;
                    v15 = 0;
                    v16 = 32;
                    v17 = 1;
                    v5 = &g_415500;
                    v6 = 1;
                    v9 = &v11;
                    v10 = 1;
                    v7 = &v1;
                    v8 = 2;
                    v46 = &v36;
                    v36.map_or_else(&v5);
                }
                else
                {
                    v1 = &v23;
                    v2 = <alloc::string::String as core::fmt::Display>::fmt;
                    v3 = 0;
                    v4 = -(a5);
                    v11 = 2;
                    v13 = 1;
                    v14 = 1;
                    v15 = 0;
                    v16 = 32;
                    v17 = 0;
                    v5 = &g_415500;
                    v6 = 1;
                    v9 = &v11;
                    v10 = 1;
                    v7 = &v1;
                    v8 = 2;
                    v46 = &v37;
                    v37.map_or_else(&v5);
                }
                v3 = v46->field_10;
                *((char [16])&v0) = v46->field_0;
                ::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v23);
            }
            else
            {
                v3 = v27;
                v0 = v26;
                goto LABEL_4ae4e4;
            }
        }
        else
        {
            v1 = &v19;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = 0;
            v4 = v45;
            v11 = 2;
            v13 = 1;
            v14 = 1;
            v15 = 0;
            v16 = 32;
            v17 = 1;
            v5 = &g_415500;
            v6 = 1;
            v9 = &v11;
            v10 = 1;
            v7 = &v1;
            v8 = 2;
            v30.map_or_else(&v5);
            v0 = v30;
            v3 = v31;
            goto LABEL_4ae4e4;
        }
        goto LABEL_4ae4e4;
    }
    else
    {
        v45 = a3->field_8;
        if (v45)
        {
            if (!(v45 <= 0))
                goto LABEL_4ae01a;
LABEL_4ae27f:
            v1 = &v19;
            v2 = <alloc::string::String as core::fmt::Display>::fmt;
            v3 = 0;
            v4 = -(v45);
            v11 = 2;
            v13 = 1;
            v14 = 1;
            v15 = 0;
            v16 = 32;
            v17 = 0;
            v5 = &g_415500;
            v6 = 1;
            v9 = &v11;
            v10 = 1;
            v7 = &v1;
            v8 = 2;
            v32.map_or_else(&v5);
            v0 = v32;
            v3 = v33;
LABEL_4ae4e4:
            v47 = 1;
        }
        else
        {
LABEL_4ae25e:
            v3 = v20;
            v0 = v19;
        }
    }
    v11 = &a3->padding_20;
    v12 = <alloc::string::String as core::fmt::Display>::fmt;
    v13 = &v1;
    v14 = <alloc::string::String as core::fmt::Display>::fmt;
    v15 = &a3->padding_20[24];
    v16 = <alloc::string::String as core::fmt::Display>::fmt;
    v5 = &g_417640;
    v6 = 3;
    v9 = 0;
    v7 = &v11;
    v8 = 3;
    v34.map_or_else(&v5);
    v18->field_18 = v35;
    *((void*)&v18->field_8) = v34;
    v18->field_0 = 0;
    v48 = (unsigned long long)::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v1);
    if (v47)
        v48 = (unsigned long long)::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v19);
    if (v44)
        return (unsigned long long)::0x4ab5f0::core::ptr::drop_in_place<alloc::string::String>(&v21);
    return v48;
}
