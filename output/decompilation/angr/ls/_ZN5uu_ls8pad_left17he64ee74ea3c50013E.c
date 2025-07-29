long long uu_ls::pad_left(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x98]
    unsigned long long v1;  // [bp-0x90]
    char *v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x68]
    unsigned long long v7;  // [bp-0x60]
    char *v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    char *v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    struct struct_0 v12[16];  // [bp-0x38]
    unsigned long long v13;  // [bp-0x28]
    unsigned long long v14;  // [bp-0x20]
    void* v15;  // [bp-0x18]
    unsigned long long v16;  // [bp-0x10]
    char v17;  // [bp-0x8]

    v0 = a1;
    v1 = a2;
    v2 = &v0;
    v3 = <&T as core::fmt::Display>::fmt;
    v4 = 0;
    v5 = a3;
    *((unsigned long long *)&v12[0]) = 2;
    v13 = 1;
    v14 = 1;
    v15 = 0;
    v16 = 32;
    v17 = 1;
    v6 = &g_4259a0;
    v7 = 1;
    v10 = &v12[0].field_0;
    v11 = 1;
    v8 = &v2;
    v9 = 2;
    return a0.map_or_else(&v6);
}
