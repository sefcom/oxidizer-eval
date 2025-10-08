long long uu_df::table::RowFormatter::percentage(unsigned long long a0, char a1)
{
    unsigned long v0;  // [bp-0x50]
    char *v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    char *v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v9;  // [bp-0x8]
    unsigned long long v11;  // rbx
    unsigned long v12;  // xmm0lq

    if (!(a1 & 1))
        return a0.to_vec("-total%", 1);
    v9 = v11;
    ceil();
    v0 = MulV(v12, 0x4059000000000000);
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v3 = &g_502e98;
    v4 = 2;
    v7 = &g_41b118;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    return a0.map_or_else(&v3);
}
