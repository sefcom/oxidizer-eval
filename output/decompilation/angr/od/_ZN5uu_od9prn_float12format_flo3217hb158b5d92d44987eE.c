long long uu_od::prn_float::format_flo32(unsigned long long a0)
{
    unsigned long v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned short v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned int v11;  // ymm0
    unsigned int v12;  // ecx

    v12 = v11 & 2147483647;
    if (!(v11 & 8388607) || (v11 & 2147483647) == 0x7f800000 || (v11 & 0x7f800000))
        return uu_od::prn_float::format_float(a0, 14, 8);
    v0 = &vvar_9{reg 224};
    v1 = core::fmt::float::<impl core::fmt::LowerExp for f32>::fmt;
    v2 = 0;
    v3 = 14;
    v4 = &g_41a940;
    v5 = 1;
    v8 = &g_41d228;
    v9 = 1;
    v6 = &v0;
    v7 = 2;
    return a0.map_or_else(&v4);
    return uu_od::prn_float::format_float(a0, 14, 8);
}
