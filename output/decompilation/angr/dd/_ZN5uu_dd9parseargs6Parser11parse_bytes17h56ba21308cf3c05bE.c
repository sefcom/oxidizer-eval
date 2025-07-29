long long uu_dd::parseargs::Parser::parse_bytes(uint128_t a0[2], unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x28], Other Possible Types: char
    char v1;  // [bp-0x18]
    unsigned long long v3;  // rax

    v3 = uu_dd::parseargs::parse_bytes_with_opt_multiplier(&v0, a1, a2);
    if (*((long long *)&v0) != 14)
        a0[1] = *((int128_t *)&v1);
    *((void*)&a0[0]) = v0;
    return v3;
}
