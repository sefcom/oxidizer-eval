long long uu_tail::paths::HeaderPrinter::print(char a0[2], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    struct struct_0 v2[8];  // [bp-0x68]
    unsigned long v3;  // [bp-0x60]
    char *v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    char *v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    char *v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    void* v12;  // [bp-0x18]
    unsigned long v14;  // rax
    unsigned long long v15;  // rax
    unsigned long v16;  // rax

    v0 = a1;
    v1 = a2;
    if (!a0[0])
        return v16;
    v14 = a0[1];
    *((int *)&v2[0]) = (!v14 ? "\n" : 1);
    v3 = v14 ^ 1;
    v4 = &v2[0].field_0;
    v5 = <&T as core::fmt::Display>::fmt;
    v6 = &v0;
    v7 = <&T as core::fmt::Display>::fmt;
    v8 = &g_637948;
    v9 = 3;
    v12 = 0;
    v10 = &v4;
    v11 = 2;
    v15 = std::io::stdio::_print(&v8);
    a0[1] = 0;
    return v15;
}
