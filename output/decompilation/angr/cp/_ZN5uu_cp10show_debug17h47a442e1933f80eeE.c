long long uu_cp::show_debug(char a0[3])
{
    unsigned long v0;  // [bp-0x90]
    unsigned long v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    unsigned long v3;  // [bp-0x78]
    unsigned long v4;  // [bp-0x70]
    unsigned long v5;  // [bp-0x68]
    char *v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char *v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    char *v10;  // [bp-0x40]
    unsigned long long v11;  // [bp-0x38]
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    char *v14;  // [bp-0x20]
    unsigned long long v15;  // [bp-0x18]
    void* v16;  // [bp-0x10]
    unsigned long long v18[703974];  // rax
    unsigned long long v19[703974];  // rax
    unsigned long v20;  // rax

    v18 = a0[0] * 8;
    v0 = *((long long *)(v18 + &g_55ef28));
    v1 = *((long long *)(v18 + &g_424f28));
    v19 = a0[1] * 8;
    v2 = *((long long *)(v19 + &g_55ef28));
    v3 = *((long long *)(v19 + &g_424f28));
    v20 = a0[2];
    v4 = g_424ee0[v20] + (char *)&g_424ee0[0];
    v5 = g_424ef8[v20];
    v6 = &v0;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = &v2;
    v9 = <&T as core::fmt::Display>::fmt;
    v10 = &v4;
    v11 = <&T as core::fmt::Display>::fmt;
    v12 = &g_55e858;
    v13 = 4;
    v16 = 0;
    v14 = &v6;
    v15 = 3;
    return std::io::stdio::_print(&v12);
}
