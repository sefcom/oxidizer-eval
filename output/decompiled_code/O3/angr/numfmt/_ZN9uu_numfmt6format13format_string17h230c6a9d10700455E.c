long long uu_numfmt::format::format_string::h230c6a9d10700455(unsigned long long a0[4], char *a1, unsigned long long a2, struct_1 *a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x1e8], Other Possible Types: struct struct_0 **
    unsigned long long v1;  // [sp-0x1e0]
    unsigned long long v2;  // [sp-0x1d8]
    void* v3;  // [sp-0x1d0]
    struct struct_0 **v4;  // [bp-0x1c0], Other Possible Types: unsigned long
    unsigned long v5;  // [sp-0x1b8], Other Possible Types: unsigned long long
    char *v6;  // [sp-0x1b0], Other Possible Types: struct struct_0 **, unsigned long
    unsigned long long v7;  // [sp-0x1a8]
    void* v8;  // [sp-0x1a0], Other Possible Types: char *
    unsigned long long v9;  // [sp-0x198]
    char v10;  // [bp-0x190], Other Possible Types: unsigned long, unsigned long long
    char v11;  // [bp-0x188], Other Possible Types: unsigned long long
    struct struct_0 **v12;  // [sp-0x180], Other Possible Types: struct struct_3 **, unsigned long long
    unsigned long v13;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x168]
    char v16;  // [sp-0x160]
    unsigned long long v17;  // [sp-0x158]
    unsigned int v18;  // [sp-0x14c]
    struct struct_0 **v19;  // [sp-0x148]
    unsigned long long v20;  // [sp-0x138]
    unsigned long long v21;  // [sp-0x120]
    struct struct_0 **v22;  // [sp-0x118]
    unsigned long long v23;  // [sp-0x108]
    struct struct_0 **v24;  // [sp-0xf8]
    unsigned long long v25;  // [sp-0xe8]
    char v26;  // [bp-0xd8]
    char v27;  // [bp-0xc8]
    char v28;  // [bp-0xc0]
    char v29;  // [bp-0xb0]
    char v30;  // [bp-0xa8]
    char v31;  // [bp-0x98]
    char v32;  // [bp-0x90]
    char v33;  // [bp-0x80]
    char v34;  // [bp-0x78]
    char v35;  // [bp-0x68]
    char v36;  // [bp-0x60]
    char v37;  // [bp-0x48]
    unsigned long long v39;  // 4096
    void* v44;  // r13
    unsigned long long v45;  // rax
    unsigned long long v46;  // rax
    unsigned long long v47;  // 4098
    unsigned int v48;  // eax
    unsigned long long v50;  // r13
    unsigned long long v52;  // r13
    struct_2 *v53;  // r12

    v17 = a5;
    v21 = a3->field_88;
    if (v21 != 0x8000000000000000)
    {
    }
    if (a3->field_10)
    {
        v44 = a3->field_18;
        v45 = a3->field_b0;
    }
    else
    {
        v45 = a3->field_b0;
        v44 = 0;
        if ((char)v45 == 5 && a3->field_b1 == 5)
        {
            v44 = uu_numfmt::format::parse_implicit_precision::habeeb6a1b0c09cbd(a1, v39);
            v45 = v44 | -0x100 | 5;
        }
    }
    uu_numfmt::format::transform_from::h06c22e665722480c(&v4, a1, v39, *((long long *)&a3->field_a0), v45 & 4294967295);
    v46 = v4;
    if (v46 != 0x8000000000000000)
    {
        a0[1] = v46;
        a0[2] = v5;
        a0[3] = v6;
    }
    else
    {
        uu_numfmt::format::transform_to::hb7e422fe87e2abd5(&v10, *((long long *)&a3->field_a8), a3->field_b1, a3->field_c9, v44);
        v47 = v10;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        v2 = v13;
        if (v47)
        {
            v46 = v2;
            a0[3] = v46;
            *((int128_t *)&a0[1]) = *((int128_t *)&v0);
        }
        else
        {
            v23 = v2;
            *((int128_t *)&v22) = *((int128_t *)&v0);
            if (v21 != 0x8000000000000000)
            {
                v0 = &a3->field_88;
                v4 = &v22;
                v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &v0;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                v10 = &g_41a370;
                v11 = 2;
                v14 = 0;
                v12 = &v4;
                v13 = 2;
                v18 = -143;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v28, &v10);
                *((int128_t *)&v19) = *((int128_t *)&v28);
                v20 = *((long long *)&v29);
                v48 = v20 | -0x100 | 1;
                if (!a3->field_0)
                    goto LABEL_4c43c2;
LABEL_4c430e:
                v50 = a3->field_8;
            }
            else
            {
                v20 = v23;
                v19 = v22;
                v48 = 0;
                if (!(!a3->field_0))
                    goto LABEL_4c430e;
LABEL_4c43c2:
                v50 = v17;
                if (!a4)
                    v50 = a3->field_b8;
            }
            v52 = v50;
            v18 = v48;
            if (!v52)
            {
                v2 = v20;
                v0 = v19;
            }
            else if (!(v52 <= 0 || !a3->field_51))
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = v52;
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 48;
                v16 = 1;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v26, &v4);
                v25 = *((long long *)&v27);
                *((int128_t *)&v24) = *((int128_t *)&v26);
                if (!a4)
                    v17 = a3->field_b8;
                if (!v17)
                {
                    v2 = *((long long *)&v27);
                    *((int128_t *)&v0) = *((int128_t *)&v26);
                }
                else
                {
                    if (v17 <= 0)
                    {
                        v0 = &v24;
                        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v2 = -(v17);
                        v3 = 0;
                        v10 = 2;
                        v12 = 1;
                        v13 = 1;
                        v14 = 0;
                        v15 = 32;
                        v16 = 0;
                        v4 = &g_416000;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v53 = &v37;
                        ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v37, &v4);
                    }
                    else
                    {
                        v0 = &v24;
                        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v2 = v17;
                        v3 = 0;
                        v10 = 2;
                        v12 = 1;
                        v13 = 1;
                        v14 = 0;
                        v15 = 32;
                        v16 = 1;
                        v4 = &g_416000;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v53 = &v36;
                        ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v36, &v4);
                    }
                    v2 = v53->field_10;
                    *((int128_t *)&v0) = *((int128_t *)&v53->field_0);
                    ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v24);
                }
            }
            else if (v52 > 0)
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = v52;
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 1;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v30, &v4);
                *((int128_t *)&v0) = *((int128_t *)&v30);
                v2 = *((long long *)&v31);
            }
            else
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = -(v52);
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 0;
                v4 = &g_416000;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v32, &v4);
                *((int128_t *)&v0) = *((int128_t *)&v32);
                v2 = *((long long *)&v33);
            }
            v10 = &a3->padding_20;
            v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v12 = &v0;
            v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v14 = &a3->padding_20[24];
            v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v4 = &g_423118;
            v5 = 3;
            v8 = 0;
            v6 = &v10;
            v7 = 3;
            ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v34, &v4);
            a0[3] = *((long long *)&v35);
            *((int128_t *)&a0[1]) = *((int128_t *)&v34);
            a0[0] = 0;
            ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v0);
            if (v52)
                ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v19);
            if (v21 != 0x8000000000000000)
            {
                v46 = ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v22);
                return v46;
            }
            return 0x8000000000000000;
        }
    }
    a0[0] = 1;
    return v46;
}
