long long uu_numfmt::format::transform_to::hb7e422fe87e2abd5(struct_0 *a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long long a4)
{
    unsigned long v0;  // [bp-0x128], Other Possible Types: char
    char v1;  // [sp-0x127]
    unsigned long long v2;  // [sp-0x120]
    char *v3;  // [sp-0x120]
    unsigned long long v4;  // [sp-0x118]
    char *v5;  // [sp-0x110], Other Possible Types: struct struct_1 **
    unsigned long long v6;  // [sp-0x108]
    char *v7;  // [sp-0x100], Other Possible Types: unsigned long long
    void* v8;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v9;  // [sp-0xf0]
    char *v10;  // [sp-0xe8]
    unsigned long v11;  // [sp-0xe8]
    unsigned long long v12;  // [sp-0xe0]
    struct struct_1 **v13;  // [sp-0xd8], Other Possible Types: char *, unsigned long long
    void* v14;  // [sp-0xd0], Other Possible Types: unsigned long long
    char *v15;  // [sp-0xc8]
    unsigned long long v16;  // [sp-0xc0]
    char v17;  // [bp-0xb8], Other Possible Types: unsigned long, unsigned long long
    int v18;  // [sp-0xb8], Other Possible Types: void*, unsigned long long
    unsigned long v19;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v20;  // [sp-0xa8], Other Possible Types: unsigned long long
    char v21;  // [bp-0xa7]
    char v22;  // [bp-0xa6]
    char v23;  // [bp-0xa2]
    void* v24;  // [sp-0x98]
    unsigned long long v25;  // [sp-0x90]
    char v26;  // [sp-0x88]
    unsigned long long v27;  // [sp-0x80]
    unsigned long long v28;  // [sp-0x70]
    unsigned long long v29;  // [sp-0x60]
    unsigned long long v30;  // [sp-0x58]
    char v31;  // [sp-0x50]
    char v32;  // [bp-0x40]
    char v33;  // [bp-0x30]
    unsigned long long v35;  // rdx
    unsigned long long v36;  // xmm0lq
    int v37;  // ymm0
    int v38;  // ymm0
    char v39;  // cl
    unsigned long long v40;  // rax
    int v41;  // xmm0
    int v42;  // ymm0
    struct struct_1 **v43;  // rsi

    uu_numfmt::format::consider_suffix::h00abba19284ba538(&v17, a2);
    v35 = v17;
    v36 = v19;
    v38 = v37 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v36;
    v39 = v20;
    v40 = v21;
    if (v35 != 0x8000000000000000)
    {
        *((short *)((char *)&a0[1].field_0 + 5)) = *((short *)&v23);
        *((int *)((char *)&a0[1].field_0 + 1)) = *((int *)&v22);
        a0->field_8 = v35;
        *((unsigned long long *)&a0->padding_10[0]) = v36;
        a0->field_18 = v39;
        *((char *)&a0[1].field_0) = v40;
        a0->field_0 = 1;
        return v40;
    }
    v41 = DivV((uint128_t)v38, AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000));
    v42 = v38 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v41;
    v9 = (unsigned long long)v42;
    if ((char)v40 == 2)
    {
        uu_numfmt::format::round_with_precision::h7f1d296807047857(a3, a4);
        v0 = v9;
        v10 = &v0;
        v12 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v13 = a4;
        v14 = 0;
        v17 = 1;
        v19 = 1;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v2 = &g_416000;
        v4 = 1;
        v7 = &v17;
        v8 = 1;
        goto LABEL_4c40f0;
    }
    else if (a4)
    {
        v0 = v39;
        v1 = (char)v40 & 1;
        v3 = &v9;
        v4 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v5 = &v0;
        v6 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
        v7 = a4;
        v8 = 0;
        v17 = 1;
        v19 = 2;
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v11 = &g_41a370;
        v12 = 2;
        v15 = &v17;
        v16 = 2;
        v13 = &v3;
        v14 = 3;
        v43 = &v11;
    }
    else
    {
        if ((((char)(CmpF(0x4024000000000000, (unsigned long long)(v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v41 & 170141183460469231722463931679029329919))) & 69) | (char)((CmpF(0x4024000000000000, (unsigned long long)(v42 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v41 & 170141183460469231722463931679029329919))) & 69) >> 6)) & 1) != 1)
        {
            v0 = v39;
            v1 = v1;
            v10 = &v9;
            v12 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v13 = &v0;
            v14 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            v18 = 0;
            v18 = 1;
        }
        else
        {
            v0 = v39;
            v1 = v1;
            v10 = &v9;
            v12 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v13 = &v0;
            v14 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            *((uint128_t *)&v18) = 0;
        }
        v20 = 2;
        v24 = 0;
        v25 = 32;
        v26 = 3;
        v27 = 2;
        v28 = 2;
        v29 = 1;
        v30 = 32;
        v31 = 3;
        v2 = &g_41a370;
        v4 = 2;
        v7 = &v17;
        v8 = 2;
LABEL_4c40f0:
        v5 = &v11;
        v6 = 2;
        v43 = &v3;
    }
    ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82(&v32, v43);
    v40 = *((long long *)&v33);
    *((unsigned long long *)&a0->field_18) = v40;
    *((int128_t *)&a0->field_8) = *((int128_t *)&v32);
    a0->field_0 = 0;
    return v40;
}
