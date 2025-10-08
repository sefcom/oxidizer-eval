long long bat::line_range::LineRanges::check(unsigned long long a0[5], unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long v3;  // [bp-0x30]
    unsigned long long v4;  // [bp-0x28]
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax

    v0 = a1;
    v1 = a2;
    v2 = a3;
    v3 = a0[1];
    v4 = a0[2] * 32 + a0[1];
    v6 = v3.any(&v0, &v1);
    if ((char)v6)
        return 0;
    v7 = v6;
    if (((char)a2 & 1))
    {
        v7 = v6 & 0xffffffffffffff00 | 2;
        if (a1 > (a0[4] <= a3 ? a3 - a0[4] : 0))
            return v6 & 0xffffffffffffff00 | 2;
    }
    return v7 & 0xffffffffffffff00 | 2 - (a1 < a0[3]);
}
