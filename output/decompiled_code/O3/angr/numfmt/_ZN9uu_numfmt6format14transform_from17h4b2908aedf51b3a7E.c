long long uu_numfmt::format::transform_from::h4b2908aedf51b3a7(struct_0 *a0, char *a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x38]
    char v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    char v3;  // [bp-0x27]
    char v4;  // [bp-0x26]
    char v5;  // [bp-0x22]
    unsigned long v7;  // rbp
    unsigned long long v8;  // rdx
    unsigned long long v9;  // xmm0lq
    unsigned long v10;  // rcx
    unsigned long long v11;  // rax
    int v12;  // xmm1
    int v13;  // xmm1
    int v14;  // xmm1
    unsigned long long v15;  // xmm1lq
    int v16;  // ymm1
    int v17;  // ymm1
    int v18;  // ymm0
    int v19;  // ymm0
    int v20;  // ymm0

    v7 = a4;
    uu_numfmt::format::parse_suffix::h2674c4ae362697e4(&v0, a1, a2);
    v8 = *((long long *)&v0);
    v9 = *((long long *)&v1);
    v10 = v2;
    v11 = v3;
    if (v8 != 0x8000000000000000)
    {
        *((short *)((char *)&a0[1].field_0 + 5)) = *((short *)&v5);
        *((int *)((char *)&a0[1].field_0 + 1)) = *((int *)&v4);
        a0->field_0 = v8;
        *((unsigned long long *)&a0->padding_8[0]) = v9;
        a0->field_10 = v10;
        *((char *)&a0[1].field_0) = v11;
        return v11;
    }
    v12 = a3;
    v13 = InterleaveLOV(0x4530000043300000, v12);
    v14 = v13 - 0x45300000000000004330000000000000;
    v11 = uu_numfmt::format::remove_suffix::h01ffc90e94d98f7e(&v0, v10 & 4294967295, v11 & 4294967295, v7 & 4294967295);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v11 = *((long long *)&v2);
        *((unsigned long long *)&a0->field_10) = v11;
        *((int128_t *)&a0->field_0) = *((int128_t *)&v0);
        return v11;
    }
    v15 = *((long long *)&v1);
    v17 = v16 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v12 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v13 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v14 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v15;
    v19 = v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v9 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(MulV((uint128_t)(v18 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v9), AddV((unsigned long long)(v14 >> 64) CONCAT (unsigned long long)(v14 >> 64), v14))) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000;
    if ((char)v7 == 5)
    {
        v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | CmpEQV(0, (uint128_t)v17) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | ~(CmpEQV(0, (uint128_t)v17)) & (uint128_t)v17;
    }
    else if ((((char)(CmpF((unsigned long long)v19, v15) & 69) | (char)((CmpF((unsigned long long)v19, v15) & 69) >> 6)) & 1) == 1)
    {
        v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v17 & 340282366920938463463374607431768211455;
        v11 = ceil(v20);
    }
    else
    {
        v11 = ceil(v19);
        v20 = v19 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint128_t)v17 & 170141183460469231722463931679029329919 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint128_t)v17 & 170141183460469231722463931679029329919 ^ 0x80000000000000008000000000000000;
    }
    *((unsigned long long *)&a0->padding_8[0]) = (unsigned long long)v20;
    a0->field_0 = 0x8000000000000000;
    return v11;
}
