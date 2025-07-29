long long uu_od::prn_int::format_item_oct64(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x98]
    char *v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    void* v3;  // [bp-0x80]
    unsigned long long v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    char *v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    char *v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    struct struct_0 v11[16];  // [bp-0x40]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    void* v14;  // [bp-0x20]
    unsigned long long v15;  // [bp-0x18]
    char v16;  // [bp-0x10]

    v0 = a1;
    v1 = &v0;
    v2 = core::fmt::num::<impl core::fmt::Octal for isize>::fmt;
    v3 = 0;
    v4 = 22;
    *((unsigned long long *)&v11[0]) = 2;
    v12 = 1;
    v13 = 1;
    v14 = 0;
    v15 = 34359738400;
    v16 = 3;
    v5 = &g_595a68;
    v6 = 1;
    v9 = &v11[0].field_0;
    v10 = 1;
    v7 = &v1;
    v8 = 2;
    a0.map_or_else(&v5);
    return a0;
}
