long long uu_od::prn_int::format_item_dec_u32(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x60]
    char *v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    void* v3;  // [bp-0x48]
    unsigned short v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    char *v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    unsigned long long v10;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
    v3 = 0;
    v4 = 10;
    v5 = &g_503838;
    v6 = 1;
    v9 = &g_41d228;
    v10 = 1;
    v7 = &v1;
    v8 = 2;
    a0.map_or_else(&v5);
    return a0;
}
