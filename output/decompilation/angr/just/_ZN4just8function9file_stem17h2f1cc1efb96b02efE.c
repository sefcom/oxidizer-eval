long long just::function::file_stem(struct_0 *a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    char v2;  // [bp-0x48], Other Possible Types: unsigned long, unsigned long long
    char v3;  // [bp-0x40], Other Possible Types: unsigned long long
    char *v4;  // [bp-0x38]
    unsigned long long v5;  // [bp-0x30]
    void* v6;  // [bp-0x28]
    char *v7;  // [bp-0x18]
    unsigned long long v8;  // [bp-0x10]
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    v0 = a2;
    v1 = a3;
    v10 = a2.file_stem(a3);
    if (v10)
    {
        v2.to_vec(v10, a2);
        a0->field_10 = *((int128_t *)&v3);
        a0->field_8 = v2;
        v11 = 0;
    }
    else
    {
        v7 = &v0;
        v8 = <&T as core::fmt::Display>::fmt;
        v2 = &g_82fec8;
        v3 = 2;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        a0->field_8.map_or_else(0, a2, &v2);
        v11 = 1;
    }
    a0->field_0 = v11;
    return a0;
}
