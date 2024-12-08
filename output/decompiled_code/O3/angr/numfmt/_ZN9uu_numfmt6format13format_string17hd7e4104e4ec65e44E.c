long long uu_numfmt::format::format_string::hd7e4104e4ec65e44(unsigned long long a0[4], unsigned long long a1, unsigned long long a2, struct_1 *a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0x1e8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v1;  // [sp-0x1e0]
    unsigned long long v2;  // [sp-0x1d8]
    void* v3;  // [sp-0x1d0]
    char v4;  // [bp-0x1c0], Other Possible Types: unsigned long, unsigned long long
    unsigned long v5;  // [sp-0x1b8], Other Possible Types: unsigned long long
    unsigned long v6;  // [sp-0x1b0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x1a8]
    void* v8;  // [sp-0x1a0], Other Possible Types: unsigned long long
    unsigned long long v9;  // [sp-0x198]
    char v10;  // [bp-0x190], Other Possible Types: unsigned long, unsigned long long
    char v11;  // [bp-0x188], Other Possible Types: unsigned long long
    unsigned long long v12;  // [sp-0x180]
    unsigned long v13;  // [sp-0x178], Other Possible Types: unsigned long long
    void* v14;  // [sp-0x170], Other Possible Types: unsigned long long
    unsigned long long v15;  // [sp-0x168]
    char v16;  // [sp-0x160]
    unsigned long long v17;  // [sp-0x158]
    unsigned int v18;  // [sp-0x14c]
    int v19;  // [sp-0x148]
    unsigned long long v20;  // [sp-0x138]
    unsigned long long v21;  // [sp-0x120]
    int v22;  // [sp-0x118]
    unsigned long long v23;  // [sp-0x108]
    int v24;  // [sp-0xf8]
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
    char *v39;  // 4096
    void* v42;  // r13
    unsigned long v43;  // rax
    unsigned long long v44;  // rax
    unsigned long long v45;  // 4098
    unsigned int v46;  // eax
    unsigned long long v48;  // r13
    unsigned long long v50;  // r13
    struct_0 *v51;  // r12

    v17 = a5;
    v21 = a3->field_88;
    if (v21 != 0x8000000000000000)
    {
    }
    if (a3->field_10)
    {
        v42 = a3->field_18;
        v43 = a3->field_b0;
    }
    else
    {
        v43 = a3->field_b0;
        v42 = 0;
        if ((char)v43 == 5 && a3->field_b1 == 5)
        {
            v42 = uu_numfmt::format::parse_implicit_precision::h537d407bf7122af0(v39, a2);
            v43 = v42 | -0x100 | 5;
        }
    }
    uu_numfmt::format::transform_from::h4b2908aedf51b3a7(&v4, v39, a2, *((long long *)&a3->field_a0), v43 & 4294967295);
    v44 = v4;
    if (v44 != 0x8000000000000000)
    {
        a0[1] = v44;
        a0[2] = v5;
        a0[3] = v6;
    }
    else
    {
        uu_numfmt::format::transform_to::hffb08fd4e34da328(&v10, *((long long *)&a3->field_a8), a3->field_b1, a3->field_c9, v42);
        v45 = v10;
        *((int128_t *)&v0) = *((int128_t *)&v11);
        v2 = v13;
        if (v45)
        {
            v44 = v2;
            a0[3] = v44;
            *((int128_t *)&a0[1]) = (int128_t)v0;
        }
        else
        {
            v23 = v2;
            *((int128_t *)&v22) = (int128_t)v0;
            if (v21 != 0x8000000000000000)
            {
                v0 = &a3->field_88;
                v4 = &v22;
                v5 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v6 = &v0;
                v7 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h89b3cf3e892874bf;
                v10 = &g_41a4f0;
                v11 = 2;
                v14 = 0;
                v12 = &v4;
                v13 = 2;
                v18 = -15;
                ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v28, &v10);
                *((int128_t *)&v19) = *((int128_t *)&v28);
                v20 = *((long long *)&v29);
                v46 = v20 | -0x100 | 1;
                if (!a3->field_0)
                    goto LABEL_4c4812;
LABEL_4c475e:
            }
            else
            {
                v20 = v23;
                v19 = v22;
                v46 = 0;
                if (!(!a3->field_0))
                    goto LABEL_4c475e;
LABEL_4c4812:
                v48 = v17;
            }
            v50 = v48;
            v18 = v46;
            if (!v50)
            {
                v2 = v20;
                v0 = v19;
            }
            else if (!(v50 <= 0 || !a3->field_51))
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = v50;
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 48;
                v16 = 1;
                v4 = &g_416200;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v26, &v4);
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
                        v4 = &g_416200;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v51 = &v37;
                        ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v37, &v4);
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
                        v4 = &g_416200;
                        v5 = 1;
                        v8 = &v10;
                        v9 = 1;
                        v6 = &v0;
                        v7 = 2;
                        v51 = &v36;
                        ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v36, &v4);
                    }
                    v2 = v51->field_10;
                    *((uint128_t *)&v0) = v51->field_0;
                    ::0x4c23e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v24);
                }
            }
            else if (v50 > 0)
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = v50;
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 1;
                v4 = &g_416200;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v30, &v4);
                *((int128_t *)&v0) = *((int128_t *)&v30);
                v2 = *((long long *)&v31);
            }
            else
            {
                v0 = &v19;
                v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                v2 = -(v50);
                v3 = 0;
                v10 = 2;
                v12 = 1;
                v13 = 1;
                v14 = 0;
                v15 = 32;
                v16 = 0;
                v4 = &g_416200;
                v5 = 1;
                v8 = &v10;
                v9 = 1;
                v6 = &v0;
                v7 = 2;
                ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v32, &v4);
                *((int128_t *)&v0) = *((int128_t *)&v32);
                v2 = *((long long *)&v33);
            }
            v10 = &a3->padding_20;
            v11 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v12 = &v0;
            v13 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v14 = &a3->padding_20[24];
            v15 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v4 = &g_4232a0;
            v5 = 3;
            v8 = 0;
            v6 = &v10;
            v7 = 3;
            ::0x4c2ec0::core::option::Option$LT$T$GT$::map_or_else::hca653ed3c714ac3f(&v34, &v4);
            a0[3] = *((long long *)&v35);
            *((int128_t *)&a0[1]) = *((int128_t *)&v34);
            a0[0] = 0;
            ::0x4c23e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v0);
            if (v50)
                ::0x4c23e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v19);
            if (v21 != 0x8000000000000000)
            {
                v44 = ::0x4c23e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf446c3e764178b4(&v22);
                return v44;
            }
            return 0x8000000000000000;
        }
    }
    a0[0] = 1;
    return v44;
}
