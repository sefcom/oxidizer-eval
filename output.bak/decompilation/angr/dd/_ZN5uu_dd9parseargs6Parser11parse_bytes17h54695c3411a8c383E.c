long long uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(uint128_t a0[2], unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x18]
    int v4;  // xmm0

    v4 = *((int128_t *)&v0);
    if (*((long long *)&v0) != 14)
        a0[1] = *((int128_t *)&v1);
    *((void*)&a0[0]) = v4;
    return uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(&v0, a1, a2);
}
