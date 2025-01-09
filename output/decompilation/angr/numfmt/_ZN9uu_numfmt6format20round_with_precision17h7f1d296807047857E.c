double uu_numfmt::format::round_with_precision::h7f1d296807047857(long long a0, long long a1)
{
    char v0;  // [sp-0x11]
    unsigned long long v1;  // [sp-0x10]
    int v3;  // ymm0
    int v4;  // ymm0
    unsigned long v5;  // xmm1lq
    int v6;  // xmm0

    v0 = a0;
    v4 = (((v3 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | a1) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | InterleaveLOV(0x4530000043300000, a1)) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | InterleaveLOV(0x4530000043300000, a1) - 0x45300000000000004330000000000000) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | 0x4024000000000000;
    pow(v4, v5);
    v1 = 0x4024000000000000;
    v6 = MulV((uint128_t)(v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v3 & 18446744073709551615), (uint128_t)v4);
    uu_numfmt::options::RoundMethod::round::hb878c776bde79bde(&v0);
    return (unsigned long long)(((v4 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 & 0xffffffffffffffffffffffffffffffffffffffffffffffff0000000000000000 | v3 & 18446744073709551615) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)v6) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | (uint256_t)(DivV(v6, v1)));
}
