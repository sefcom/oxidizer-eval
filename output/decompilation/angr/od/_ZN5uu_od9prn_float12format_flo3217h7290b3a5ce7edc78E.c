long long uu_od::prn_float::format_flo32(unsigned long long a0)
{
    struct struct_0 v0[8];  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    char *v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    char *v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    struct struct_0 v10[16];  // [bp-0x38]
    unsigned long long v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    void* v13;  // [bp-0x18]
    unsigned long long v14;  // [bp-0x10]
    char v15;  // [bp-0x8]
    unsigned int v17;  // ymm0
    unsigned int v18;  // ecx

    v18 = v17 & 2147483647;
    if (!((v17 & 8388607) && !(v17 & 2147483647) == 0x7f800000 && !(v17 & 0x7f800000)))
        return uu_od::prn_float::format_float(a0, 14, 8);
    *((int **)&v0[0]) = &vvar_9{reg 224};
    v1 = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
    v2 = 0;
    v3 = 14;
    *((unsigned long long *)&v10[0]) = 2;
    v11 = 1;
    v12 = 1;
    v13 = 0;
    v14 = 32;
    v15 = 3;
    v4 = &g_432030;
    v5 = 1;
    v8 = &v10[0].field_0;
    v9 = 1;
    v6 = &v0[0].field_0;
    v7 = 2;
    return a0.map_or_else(&v4);
    return uu_od::prn_float::format_float(a0, 14, 8);
}
