long long uu_numfmt::format::transform_to::hb7e422fe87e2abd5(struct_1 *a0, unsigned long a1, unsigned int a2, unsigned int a3, unsigned long long a4)
{
    unsigned long v0;  // [bp-0x128], Other Possible Types: char
    char v1;  // [sp-0x127]
    char *v2;  // [sp-0x120], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0x118]
    char *v4;  // [sp-0x110]
    unsigned long long v5;  // [sp-0x108]
    char *v6;  // [sp-0x100], Other Possible Types: unsigned long long
    void* v7;  // [sp-0xf8], Other Possible Types: unsigned long long
    unsigned long v8;  // [sp-0xf0], Other Possible Types: unsigned long long
    char *v9;  // [sp-0xe8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v10;  // [sp-0xe0]
    struct struct_0 **v11;  // [sp-0xd8], Other Possible Types: char *, unsigned long long
    void* v12;  // [sp-0xd0], Other Possible Types: unsigned long long
    char *v13;  // [sp-0xc8]
    unsigned long long v14;  // [sp-0xc0]
    int v15;  // [bp-0xb8], Other Possible Types: void*, char, unsigned long, unsigned long long
    unsigned long v16;  // [sp-0xb0], Other Possible Types: unsigned long long
    char v17;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v18;  // [bp-0xa7]
    char v19;  // [bp-0xa6]
    char v20;  // [bp-0xa2]
    void* v21;  // [sp-0x98]
    unsigned long long v22;  // [sp-0x90]
    char v23;  // [sp-0x88]
    unsigned long long v24;  // [sp-0x80]
    unsigned long long v25;  // [sp-0x70]
    unsigned long long v26;  // [sp-0x60]
    unsigned long long v27;  // [sp-0x58]
    char v28;  // [sp-0x50]
    char v29;  // [bp-0x40]
    char v30;  // [bp-0x30]
    unsigned long long v32;  // rdx
    unsigned long long v33;  // xmm0lq
    int v34;  // ymm0
    int v35;  // ymm0
    char v36;  // cl
    unsigned long long v37;  // rax
    int v38;  // xmm0
    int v39;  // ymm0

    uu_numfmt::format::consider_suffix::h00abba19284ba538(&v15, a2);
    v32 = v15;
    v33 = v16;
    v35 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v33;
    v36 = v17;
    v37 = v18;
    if (v32 != 0x8000000000000000)
    {
        *((short *)((char *)&a0[1].field_0 + 5)) = *((short *)&v20);
        *((int *)((char *)&a0[1].field_0 + 1)) = *((int *)&v19);
        a0->field_8 = v32;
        *((unsigned long long *)&a0->padding_10[0]) = v33;
        a0->field_18 = v36;
        *((char *)&a0[1].field_0) = v37;
        a0->field_0 = 1;
        return v37;
    }
    v38 = DivV((uint128_t)v35, AddV((unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64) CONCAT (unsigned long long)(InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000 >> 64), InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000));
    v39 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v38;
    v8 = (unsigned long long)v39;
    if ((char)v37 == 2)
    {
        uu_numfmt::format::round_with_precision::h7f1d296807047857(a3, a4);
        v0 = v8;
        v9 = &v0;
        v10 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v11 = a4;
        v12 = 0;
        v15 = 1;
        v16 = 1;
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v2 = &g_416000;
        v3 = 1;
        v6 = &v15;
        v7 = 1;
        goto LABEL_4c40f0;
    }
    else if (a4)
    {
        v0 = v36;
        v1 = (char)v37 & 1;
        v2 = &v8;
        v3 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        v4 = &v0;
        v5 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
        v6 = a4;
        v7 = 0;
        v15 = 1;
        v16 = 2;
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v24 = 2;
        v25 = 2;
        v26 = 1;
        v27 = 32;
        v28 = 3;
        v9 = &g_41a370;
        v10 = 2;
        v13 = &v15;
        v14 = 2;
        v11 = &v2;
        v12 = 3;
    }
    else
    {
        if ((((char)(CmpF(0x4024000000000000, (unsigned long long)(v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v38 & 170141183460469231722463931679029329919))) & 69) | (char)((CmpF(0x4024000000000000, (unsigned long long)(v39 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(v38 & 170141183460469231722463931679029329919))) & 69) >> 6)) & 1) != 1)
        {
            v0 = v36;
            v1 = v1;
            v9 = &v8;
            v10 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v11 = &v0;
            v12 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            v15 = 0;
            v16 = 1;
        }
        else
        {
            v0 = v36;
            v1 = v1;
            v9 = &v8;
            v10 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
            v11 = &v0;
            v12 = _$LT$uu_numfmt..units..DisplayableSuffix$u20$as$u20$core..fmt..Display$GT$::fmt::h8c9f187f28d813a1;
            *((int128_t *)&v15) = 0;
        }
        v17 = 2;
        v21 = 0;
        v22 = 32;
        v23 = 3;
        v24 = 2;
        v25 = 2;
        v26 = 1;
        v27 = 32;
        v28 = 3;
        v2 = &g_41a370;
        v3 = 2;
        v6 = &v15;
        v7 = 2;
LABEL_4c40f0:
        v4 = &v9;
        v5 = 2;
    }
    ::0x4c2a70::core::option::Option$LT$T$GT$::map_or_else::hab58af973b71ab82();
    v37 = *((long long *)&v30);
    *((unsigned long long *)&a0->field_18) = v37;
    *((int128_t *)&a0->field_8) = *((int128_t *)&v29);
    a0->field_0 = 0;
    return v37;
}
