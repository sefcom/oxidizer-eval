long long uu_cp::context_for(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    char *v0;  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    char *v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    char v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    char *v14;  // [bp-0x20]
    unsigned long long v15;  // [bp-0x18]
    void* v16;  // [bp-0x10]

    v4 = 1;
    v5 = a1;
    v6 = a2;
    v7 = 1;
    v8 = 1;
    v9 = a3;
    v10 = a4;
    v11 = 1;
    v0 = &v4;
    v1 = <os_display::Quoted as core::fmt::Display>::fmt;
    v2 = &v8;
    v3 = <os_display::Quoted as core::fmt::Display>::fmt;
    v12 = &g_55eb98;
    v13 = 2;
    v16 = 0;
    v14 = &v0;
    v15 = 2;
    return a0.map_or_else(&v12);
}
