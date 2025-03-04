long long uu_df::table::RowFormatter::percentage::hd76ce7d818616919(unsigned long long a0, unsigned long a1)
{
    unsigned long v0;  // [sp-0x90]
    unsigned long v1;  // [sp-0x88]
    unsigned long long v2;  // [sp-0x80]
    unsigned long v3;  // [sp-0x78]
    unsigned long long v4;  // [sp-0x70]
    char *v5;  // [sp-0x68]
    unsigned long long v6;  // [sp-0x60]
    char *v7;  // [sp-0x58]
    unsigned long long v8;  // [sp-0x50]
    int v9;  // [sp-0x48]
    unsigned long long v10;  // [sp-0x38]
    void* v11;  // [sp-0x28]
    unsigned long long v12;  // [sp-0x20]
    char v13;  // [sp-0x18]
    unsigned long long v14;  // [sp-0x8]
    unsigned long v16;  // rbx
    unsigned long v17;  // xmm0lq
    int v18;  // ymm0

    if (a1)
    {
        v14 = v16;
        ceil(v17);
        v0 = (unsigned long long)(v18 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | MulV((uint128_t)v18, 0x4059000000000000));
        v1 = &v0;
        v2 = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::hdf81dcc7e03fc666;
        *((uint128_t *)&v9) = 0;
        v10 = 2;
        v11 = 0;
        v12 = 32;
        v13 = 3;
        v3 = &g_541b30;
        v4 = 2;
        v7 = &v9;
        v8 = 1;
        v5 = &v1;
        v6 = 1;
        return ::0x4ca0b0::core::option::Option$LT$T$GT$::map_or_else::h87f8290896e212c8(a0, &v3);
    }
    return ::0x4ca150::_$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::hed7ddb801416678d(a0, "-", 1);
}
