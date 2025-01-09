double uu_numfmt::format::div_round::hcdae20ad69b44c09(long long a0)
{
    unsigned long v0;  // [bp-0x8]
    char v1;  // [sp-0x1]
    unsigned long v3;  // rax
    int v4;  // ymm0
    int v5;  // ymm1
    int v6;  // xmm0
    int v7;  // ymm2
    int v8;  // xmm0

    v0 = v3;
    v1 = a0;
    v6 = DivV((uint128_t)v4, (uint128_t)v5);
    if ((((char)(CmpF(0x4024000000000000, (unsigned long long)((v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(170141183460469231722463931679029329919 & v6))) & 69) | (char)((CmpF(0x4024000000000000, (unsigned long long)((v5 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | 170141183460469231722463931679029329919) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(170141183460469231722463931679029329919 & v6))) & 69) >> 6)) & 1) != 1)
    {
        v8 = MulV(v6, (uint128_t)(v7 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000));
        uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&v1);
        return (unsigned long long)(((v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v8) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(v8, 0x4024000000000000)));
    }
    uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&v1);
    return (unsigned long long)(v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6);
}
