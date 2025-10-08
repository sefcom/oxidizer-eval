long long uu_dd::numbers::to_magnitude_and_suffix(unsigned long long a0, unsigned long long a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa0]
    char *v2;  // [bp-0x98], Other Possible Types: char
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [bp-0x80]
    char *v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    char *v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long v10;  // [bp-0x58]
    unsigned long long v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    int v13;  // [bp-0x40]
    int v15;  // xmm0
    unsigned long long v16;  // xmm1lq
    unsigned long long v17;  // xmm1lq

    v0.base_and_suffix(a3, a1, a2);
    v15 = *((int128_t *)&v2);
    v13 = v15;
    __floatuntidf(a1, a2);
    v10 = (unsigned long long)v15;
    __floatuntidf(v0, v1);
    v16 = (unsigned long long)(DivV(v10, v15));
    v17 = v16;
    v11 = v16;
    if (((CmpF(0x4024000000000000, v11) & 69 | (char)((CmpF(0x4024000000000000, v11) & 69) >> 6)) & 1) != 1)
    {
        v6 = &v11;
        v7 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v8 = &v13;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_53d8d8;
        v1 = 2;
        v4 = &g_421120;
        v5 = 2;
    }
    else
    {
        round();
        v12 = v16;
        v6 = &v12;
        v7 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v8 = &v13;
        v9 = <&T as core::fmt::Display>::fmt;
        v0 = &g_53d8d8;
        v1 = 2;
        v4 = 0;
    }
    v2 = &v6;
    v3 = 2;
    return a0.map_or_else(&v0);
}
