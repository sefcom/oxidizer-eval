long long uu_df::table::RowFormatter::percentage(unsigned long long a0, char a1)
{
    unsigned long long v0;  // [bp-0x90]
    char *v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char *v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    uint128_t v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x38]
    void* v11;  // [bp-0x28]
    unsigned long long v12;  // [bp-0x20]
    char v13;  // [bp-0x18]
    unsigned long long v14;  // [bp-0x8]
    unsigned long long v16;  // rbx
    unsigned long v17;  // xmm0lq
    double v18;  // xmm0lq

    if (!(a1 & 1))
        return a0.to_vec("-%src/uu/df/src/table.rs", 1);
    v14 = v16;
    v18 = (unsigned long long)(MulV(v17, 0x4059000000000000));
    ceil(v18);
    *((double *)&v0) = v18;
    v1 = &v0;
    v2 = core::fmt::float::<impl core::fmt::Display for f64>::fmt;
    v9 = 0;
    v10 = 2;
    v11 = 0;
    v12 = 32;
    v13 = 3;
    v3 = &g_59c988;
    v4 = 2;
    v7 = &v9;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    return a0.map_or_else(&v3);
}
