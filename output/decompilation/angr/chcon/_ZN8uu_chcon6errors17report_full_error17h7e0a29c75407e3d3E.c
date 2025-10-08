long long uu_chcon::errors::report_full_error(unsigned long a0, unsigned long long a1, struct_1 *a2)
{
    unsigned long long v0;  // [bp-0xa0]
    struct_1 *v1;  // [bp-0x98]
    unsigned long long v2;  // [bp-0x90]
    struct_1 *v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    char *v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    struct_2 *v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    char *v10;  // [bp-0x50]
    unsigned long long v11;  // [bp-0x48]
    void* v12;  // [bp-0x40]
    struct_1 *v14;  // rdx
    unsigned long long v16;  // rax

    v0 = a1;
    v1 = a2;
    v2 = 0x100.with_capacity_in(1, 1, &g_4f0310);
    v3 = v14;
    v4 = 0;
    v5 = &v0;
    v6 = <&T as core::fmt::Display>::fmt;
    v8 = &g_419d80;
    v9 = 1;
    v12 = 0;
    v10 = &v5;
    v11 = 1;
    (unsigned int)v2.spec_write_fmt(&v8).unwrap(&g_4f0328);
    while (true)
    {
        v16 = v1->field_30(v0);
        if (!v16)
            break;
        v0 = v16;
        v1 = v14;
        v5 = &v0;
        v6 = <&T as core::fmt::Display>::fmt;
        v8 = &g_4f0300;
        v9 = 1;
        v12 = 0;
        v10 = &v5;
        v11 = 1;
        (unsigned int)v2.spec_write_fmt(&v8).unwrap(&g_4f0340);
    }
    v7->field_10 = 0;
    v7->field_0 = *((int128_t *)&v2);
    return v7;
}
