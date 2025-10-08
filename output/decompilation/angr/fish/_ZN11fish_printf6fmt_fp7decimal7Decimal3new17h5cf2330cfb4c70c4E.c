long long fish_printf::fmt_fp::decimal::Decimal::new(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x78]
    unsigned int v6;  // [bp-0x70]
    char v7;  // [bp-0x6c]
    void* v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    void* v10;  // [bp-0x58]
    unsigned long v11;  // [bp-0x50]
    int v12;  // [bp-0x48]
    int v14;  // ymm0
    int v15;  // xmm1
    uint128_t v16;  // xmm0
    uint256_t v17;  // ymm0
    unsigned int v18;  // r12d
    int v19;  // ymm1
    uint256_t v20;  // ymm1
    unsigned int v21;  // r12d
    unsigned long long v22;  // cc_ndep
    unsigned long long v23;  // cc_ndep
    unsigned int v24;  // r12d
    uint256_t v25;  // ymm1
    unsigned int v26;  // ebp
    uint256_t v27;  // ymm0
    uint256_t v28;  // ymm1
    int v29;  // xmm1
    int v30;  // xmm1
    int v31;  // xmm0

    v15 = (uint128_t)v14;
    v12 = v15;
    v16 = 170141183460469231722463931679029329919 & v15;
    v17 = (v14 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
    v18 = fish_printf::fmt_fp::frexp();
    v20 = (v19 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v15) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if (((char)((CmpF((unsigned long long)v17, (unsigned long long)v20) & 69) >> 6) & 1) == 1)
    {
        v21 = v18;
        if (!((char)_ccall(10, 0, (unsigned long long)(CmpF((unsigned long long)v17, (unsigned long long)v20) & 69), 0, v22)))
            goto LABEL_1440154;
    }
    v24 = v18 - 29;
    if (((unsigned int)~(v18 ^ 4294967267) & (v18 ^ v18 + -29)) < 0)
        core::panicking::panic_const::panic_const_sub_overflow(&g_1517e00); /* do not return */
    v16 = MulV(v16, 0x41c0000000000000);
    v17 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
    v21 = v24;
LABEL_1440154:
    v8 = 0;
    v9 = 4;
    v10 = 0;
    if (((char)((CmpF((unsigned long long)v17, (unsigned long long)v20) & 69) >> 6) & 1) != 1 || (char)_ccall(10, 0, (unsigned long long)(CmpF((unsigned long long)v17, (unsigned long long)v20) & 69), 0, v23))
    {
        while (true)
        {
            v11 = (unsigned long long)v14;
            v25 = (v20 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x41efffffffe00000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | MinV(0x41efffffffe00000, MaxV(0, v16));
            v26 = v25;
            v8.push(v26);
            v27 = v17 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v26;
            v28 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v11;
            v29 = SubV((uint128_t)v28, (uint128_t)v27);
            v30 = MulV(v29, 0x41cdcd6500000000);
            v20 = (v28 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v29) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v30;
            v16 = v30;
            v17 = v27 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v16;
            if (((CmpF((unsigned long long)v20, 0) & 69) >> 6 & 1) != 1)
                continue;
            if (!((char)_ccall(10, 0, (unsigned long long)(CmpF((unsigned long long)v20, 0) & 69), 0, v23)))
                break;
        }
    }
    v0.into_raw_parts_with_alloc(&v8);
    v0 = v4;
    v2 = v1;
    v4 = 0;
    v5 = v3;
    v6 = 0;
    v7 = (unsigned long long)v12 >> 63;
    if (v21 >= 0)
    {
        v0.shift_left(v21);
    }
    else if ((v21 & (unsigned int)-(v21)) >= 0)
    {
        v0.shift_right(-(v21), a1, a2);
    }
    else
    {
        core::panicking::panic_const::panic_const_neg_overflow(&g_1517e18); /* do not return */
    }
    a0->field_20 = *((long long *)&v6);
    v31 = *((int128_t *)&v0);
    a0->field_10 = *((int128_t *)&v4);
    *((void*)&a0->field_0) = v31;
    return a0;
}
