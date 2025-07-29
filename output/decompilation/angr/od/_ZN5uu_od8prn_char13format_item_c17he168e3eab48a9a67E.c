long long uu_od::prn_char::format_item_c(unsigned long long a0, char *a1, unsigned long a2)
{
    struct struct_0 v0[1];  // [bp-0x89]
    char *v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    char *v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x28]
    void* v13;  // [bp-0x20]
    unsigned long long v14;  // [bp-0x18]
    char v15;  // [bp-0x10]
    unsigned long long v17;  // rax

    if (!a2)
        core::panicking::panic_bounds_check(0, 0, &g_5977f0); /* do not return */
    v0->field_0 = *(a1);
    if (v0 >= 0)
    {
        v9 = &_ZN5uu_od8prn_char7C_CHARS17hec0bd8f590159fd6E + 16 * v0;
        v1 = &v9;
        v2 = <&T as core::fmt::Display>::fmt;
        v10 = 2;
        v11 = 0;
        v12 = 4;
        v13 = 0;
        v14 = 32;
        v15 = 1;
        v17 = &g_432030;
    }
    else
    {
        v1 = &v0[0].field_0;
        v2 = core::fmt::num::<impl core::fmt::Octal for i8>::fmt;
        v10 = 2;
        v11 = 0;
        v12 = 3;
        v13 = 0;
        v14 = 34359738400;
        v15 = 3;
        v17 = &g_597808;
    }
    v3 = v17;
    v4 = 1;
    v7 = &v10;
    v8 = 1;
    v5 = &v1;
    v6 = 1;
    a0.map_or_else(&v3);
    return a0;
}
