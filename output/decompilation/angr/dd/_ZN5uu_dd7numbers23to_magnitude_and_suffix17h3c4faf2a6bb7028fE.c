long long uu_dd::numbers::to_magnitude_and_suffix(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long v0;  // [bp-0x118]
    double v1;  // [bp-0x110]
    char *v2;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x100]
    char *v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    char *v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xe0]
    char *v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xd0]
    char *v10;  // [bp-0xc8]
    unsigned long long v11;  // [bp-0xc0]
    void* v12;  // [bp-0xb8], Other Possible Types: char, unsigned long long
    unsigned long long v13;  // [bp-0xb0]
    char *v14;  // [bp-0xa8], Other Possible Types: char, unsigned long long
    unsigned long long v15;  // [bp-0xa0]
    void* v16;  // [bp-0x98]
    unsigned long long v17;  // [bp-0x90]
    char v18;  // [bp-0x88]
    unsigned long long v19;  // [bp-0x80]
    unsigned long long v20;  // [bp-0x70]
    unsigned long long v21;  // [bp-0x60]
    unsigned long long v22;  // [bp-0x58]
    char v23;  // [bp-0x50]
    struct struct_0 v24[16];  // [bp-0x40]
    int v26;  // xmm0
    char *v27;  // rsi

    v12.base_and_suffix(a3, a1, a2);
    v26 = *((int128_t *)&v14);
    *((void*)&v24->field_0) = v26;
    __floatuntidf(a1, a2, a2, a3);
    v0 = (unsigned long long)v26;
    __floatuntidf(v12, v13, a2, a3);
    *((unsigned long long *)&v1) = (unsigned long long)(DivV(v0, v26));
    if ((((char)(CmpF(0x4024000000000000, v1) & 69) | (char)((CmpF(0x4024000000000000, v1) & 69) >> 6)) & 1) != 1)
    {
        v8 = &v1;
        v9 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v10 = &v24[0].field_0;
        v11 = <&T as core::fmt::Display>::fmt;
        v12 = 0;
        v13 = 1;
        v14 = 2;
        v16 = 0;
        v17 = 32;
        v18 = 3;
        v19 = 2;
        v20 = 2;
        v21 = 1;
        v22 = 32;
        v23 = 3;
        v2 = &g_5dfed8;
        v3 = 2;
        v6 = &v12;
        v7 = 2;
        v4 = &v8;
        v5 = 2;
        v27 = &v2;
    }
    else
    {
        round(v1);
        *((double *)&v8) = v1;
        v2 = &v8;
        v3 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
        v4 = &v24[0].field_0;
        v5 = <&T as core::fmt::Display>::fmt;
        v12 = &g_5dfed8;
        v13 = 2;
        v16 = 0;
        v14 = &v2;
        v15 = 2;
        v27 = &v12;
    }
    a0.map_or_else(v27);
    return a0;
}
