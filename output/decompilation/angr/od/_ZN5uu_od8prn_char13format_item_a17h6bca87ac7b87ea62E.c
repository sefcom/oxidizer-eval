long long uu_od::prn_char::format_item_a(unsigned long long a0, unsigned int a1)
{
    struct struct_0 v0[8];  // [bp-0x88]
    char *v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char *v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    struct struct_0 v9[16];  // [bp-0x40]
    void* v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    void* v12;  // [bp-0x20]
    unsigned long long v13;  // [bp-0x18]
    char v14;  // [bp-0x10]

    *((char **)&v0[0]) = &(&_ZN5uu_od8prn_char7A_CHARS17h39f9bf2741c5386fE)[16 * (a1 & 127)];
    v1 = &v0[0].field_0;
    v2 = <&T as core::fmt::Display>::fmt;
    *((unsigned long long *)&v9[0]) = 2;
    v10 = 0;
    v11 = 4;
    v12 = 0;
    v13 = 32;
    v14 = 1;
    v3 = &g_432030;
    v4 = 1;
    v7 = &v9[0].field_0;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    a0.map_or_else(&v3);
    return a0;
}
