long long uu_numfmt::format::transform_from(int a0[17], unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned int a4)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x2f]
    unsigned int v4;  // [bp-0x2e]
    unsigned short v5;  // [bp-0x2a]
    unsigned int v6;  // [bp-0x28]
    unsigned short v7;  // [bp-0x24]
    unsigned long v9;  // rax
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    uu_numfmt::format::parse_suffix(&v0, a1, a2);
    v9 = v3;
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v7 = v5;
        v6 = v4;
        *((unsigned short *)&a0[22]) = v5;
        *((unsigned int *)&a0[18]) = v4;
        *((unsigned long long *)&a0[0]) = v0;
        *((unsigned long *)&a0[8]) = v1;
        *((char *)&a0[16]) = v2;
        *((char *)&a0[17]) = v9;
        return v9;
    }
    uu_numfmt::format::remove_suffix(&v0, v2, v9, a4);
    if (v0 != 0x8000000000000000)
    {
        v11 = *((long long *)&v2);
        *((unsigned long long *)&a0[16]) = v11;
        *((int128_t *)&a0[0]) = *((int128_t *)&v0);
        return v11;
    }
    v10 = uu_numfmt::format::transform_from::{{closure}}(a4);
    *((unsigned long *)&a0[8]) = v1;
    *((unsigned long long *)&a0[0]) = 0x8000000000000000;
    return v10;
}
