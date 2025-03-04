long long uu_numfmt::format::format_string::h230c6a9d10700455(unsigned long long a0[4], unsigned long long a1, unsigned long long a2, struct_2 *a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x1e8], Other Possible Types: struct struct_0 **
    struct struct_0 **v1;  // [sp-0x1e8]
    unsigned long long v2;  // [sp-0x1e0]
    unsigned long long v3;  // [sp-0x1d8]
    void* v4;  // [sp-0x1d0]
    struct struct_0 **v5;  // [sp-0x1c0], Other Possible Types: unsigned long
    unsigned long v6;  // [sp-0x1b8], Other Possible Types: unsigned long long
    char *v7;  // [sp-0x1b0], Other Possible Types: struct struct_0 **, unsigned long
    unsigned long long v8;  // [sp-0x1a8]
    void* v9;  // [sp-0x1a0], Other Possible Types: char *
    unsigned long long v10;  // [sp-0x198]
    char v11;  // [sp-0x190], Other Possible Types: unsigned long, unsigned long long
    char v12;  // [bp-0x188], Other Possible Types: unsigned long long
    struct struct_0 **v13;  // [sp-0x180], Other Possible Types: struct struct_3 **, unsigned long long
    unsigned long v14;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v15;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v16;  // [sp-0x168]
    char v17;  // [sp-0x160]
    unsigned long long v18;  // [sp-0x158]
    unsigned int v19;  // [sp-0x14c]
    struct struct_0 **v20;  // [sp-0x148]
    unsigned long long v21;  // [sp-0x138]
    unsigned long long v22;  // [sp-0x120]
    struct struct_0 **v23;  // [sp-0x118]
    unsigned long long v24;  // [sp-0x108]
    struct struct_0 **v25;  // [sp-0xf8]
    unsigned long long v26;  // [sp-0xe8]
    char v27;  // [bp-0xd8]
    char v28;  // [bp-0xc8]
    char v29;  // [bp-0xc0]
    char v30;  // [bp-0xb0]
    char v31;  // [bp-0xa8]
    char v32;  // [bp-0x98]
    char v33;  // [bp-0x90]
    char v34;  // [bp-0x80]
    char v35;  // [bp-0x78]
    char v36;  // [bp-0x68]
    char v37;  // [bp-0x60]
    char v38;  // [bp-0x48]
    char *v40;  // rbp, Other Possible Types: unsigned long long
    unsigned long long v41;  // 4096
    unsigned long long v42;  // rax
    unsigned long v43;  // rdx
    void* v45;  // r13
    unsigned long long v46;  // rax
    unsigned long long v47;  // rax
    unsigned long long v48;  // 4098
    unsigned int v49;  // eax
    unsigned long long v50;  // r13
    struct_1 *v51;  // r12

    v18 = a5;
    v40 = a1;
    v22 = a3->field_88;
    v41 = a2;
    if (v22 != 0x8000000000000000)
    {
        v42 = _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::strip_suffix_of::h989ea700a39d3e29(a3->field_90, a3->field_98, a1, a2);
        if (v42)
            v40 = v42;
        if (v42)
            v41 = v43;
    }
    if (a3->field_10)
    {
        v45 = a3->field_18;
        v46 = a3->field_b0;
    }
    else
    {
        v46 = a3->field_b0;
        v45 = 0;
        if ((char)v46 == 5 && a3->field_b1 == 5)
        {
            v45 = uu_numfmt::format::parse_implicit_precision::habeeb6a1b0c09cbd(v40, v41);
            v46 = v45 & 0xffffffffffffff00 | 5;
        }
    }
    uu_numfmt::format::transform_from::h06c22e665722480c(&v5, v40, v41, *((long long *)&a3->field_a0), v46 & 4294967295);
    v47 = v5;
    if (v47 != 0x8000000000000000)
    {
        a0[1] = v47;
        a0[2] = v6;
        a0[3] = v7;
    }
    else
    {
        uu_numfmt::format::transform_to::hb7e422fe87e2abd5(&v11, *((long long *)&a3->field_a8), a3->field_b1, a3->field_c9, v45);
        v48 = v11;
        *((int128_t *)&v1) = *((int128_t *)&v12);
        v3 = v14;
        if (v48)
        {
            v47 = v3;
            a0[3] = v47;
            *((int128_t *)&a0[1]) = *((int128_t *)&v1);
        }
        else
        {
            v24 = v3;
            *((int128_t *)&v23) = *((int128_t *)&v1);
            if (v22 != 0x8000000000000000)
            {
                v1 = &a3->field_88;
                v5 = &v23;
                v6 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v7 = &v1;
                v8 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4dc19265c681ac20;
                v11 = &g_41a370;
                v12 = 2;
                v15 = 0;
                v13 = &v5;
                v14 = 2;
                *((char **)&v19) = &g_41a301;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v29, &v11);
                *((int128_t *)&v20) = *((int128_t *)&v29);
                v21 = *((long long *)&v30);
                v49 = v21 & 0xffffffffffffff00 | 1;
                if (!a3->field_0)
                    goto LABEL_4c43c2;
LABEL_4c430e:
                v50 = a3->field_8;
            }
            else
            {
                v21 = v24;
                v20 = v23;
                v49 = 0;
                if (!(!a3->field_0))
                    goto LABEL_4c430e;
LABEL_4c43c2:
                v50 = v18;
                if (!a4)
                    v50 = a3->field_b8;
            }
            v19 = v49;
            if (!v50)
            {
                v3 = v21;
                v0 = v20;
            }
            else if (!(v50 <= 0 || !a3->field_51))
            {
                v1 = &v20;
                v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = v50;
                v4 = 0;
                v11 = 2;
                v13 = 1;
                v14 = 1;
                v15 = 0;
                v16 = 48;
                v17 = 1;
                v5 = &g_416000;
                v6 = 1;
                v9 = &v11;
                v10 = 1;
                v7 = &v1;
                v8 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v27, &v5);
                v26 = *((long long *)&v28);
                *((int128_t *)&v25) = *((int128_t *)&v27);
                if (!a4)
                    v18 = a3->field_b8;
                if (!v18)
                {
                    v3 = *((long long *)&v28);
                    *((int128_t *)&v0) = *((int128_t *)&v27);
                }
                else
                {
                    if (v18 <= 0)
                    {
                        v1 = &v25;
                        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = -(v18);
                        v4 = 0;
                        v11 = 2;
                        v13 = 1;
                        v14 = 1;
                        v15 = 0;
                        v16 = 32;
                        v17 = 0;
                        v5 = &g_416000;
                        v6 = 1;
                        v9 = &v11;
                        v10 = 1;
                        v7 = &v1;
                        v8 = 2;
                        v51 = &v38;
                        ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v38, &v5);
                    }
                    else
                    {
                        v1 = &v25;
                        v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                        v3 = v18;
                        v4 = 0;
                        v11 = 2;
                        v13 = 1;
                        v14 = 1;
                        v15 = 0;
                        v16 = 32;
                        v17 = 1;
                        v5 = &g_416000;
                        v6 = 1;
                        v9 = &v11;
                        v10 = 1;
                        v7 = &v1;
                        v8 = 2;
                        v51 = &v37;
                        ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v37, &v5);
                    }
                    v3 = v51->field_10;
                    *((int128_t *)&v0) = *((int128_t *)&v51->field_0);
                    ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v25);
                }
            }
            else if (v50 > 0)
            {
                v1 = &v20;
                v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = v50;
                v4 = 0;
                v11 = 2;
                v13 = 1;
                v14 = 1;
                v15 = 0;
                v16 = 32;
                v17 = 1;
                v5 = &g_416000;
                v6 = 1;
                v9 = &v11;
                v10 = 1;
                v7 = &v1;
                v8 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v31, &v5);
                *((int128_t *)&v0) = *((int128_t *)&v31);
                v3 = *((long long *)&v32);
            }
            else
            {
                v1 = &v20;
                v2 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v3 = -(v50);
                v4 = 0;
                v11 = 2;
                v13 = 1;
                v14 = 1;
                v15 = 0;
                v16 = 32;
                v17 = 0;
                v5 = &g_416000;
                v6 = 1;
                v9 = &v11;
                v10 = 1;
                v7 = &v1;
                v8 = 2;
                ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v33, &v5);
                *((int128_t *)&v0) = *((int128_t *)&v33);
                v3 = *((long long *)&v34);
            }
            v11 = &a3->padding_20;
            v12 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v13 = &v1;
            v14 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v15 = &a3->padding_20[24];
            v16 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v5 = &g_423118;
            v6 = 3;
            v9 = 0;
            v7 = &v11;
            v8 = 3;
            ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v35, &v5);
            a0[3] = *((long long *)&v36);
            *((int128_t *)&a0[1]) = *((int128_t *)&v35);
            a0[0] = 0;
            ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v1);
            if (v50)
                ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v20);
            if (v22 != 0x8000000000000000)
            {
                v47 = ::0x4c1f90::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb0bde7aa45c92349(&v23);
                return v47;
            }
            return 0x8000000000000000;
        }
    }
    a0[0] = 1;
    return v47;
}
