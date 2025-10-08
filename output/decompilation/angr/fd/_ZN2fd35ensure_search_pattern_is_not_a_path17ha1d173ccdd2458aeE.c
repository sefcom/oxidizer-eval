long long fd::ensure_search_pattern_is_not_a_path(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x88]
    char *v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    char *v7;  // [bp-0x50]
    unsigned long long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    unsigned long long v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v14;  // [bp-0x8]
    unsigned long long v16;  // r15
    unsigned long long v17;  // r14
    unsigned long long v18;  // rbx
    unsigned long long v19;  // rdx

    if (a0->field_1ee)
        return 0;
    v14 = v16;
    v13 = v17;
    v12 = v18;
    if (!a0->field_90.is_contained_in(a0->field_98) || !(char)a0->field_90.is_dir(a0->field_98))
        return 0;
    v0 = &a0->padding_0[136];
    v1 = &v0;
    v2 = <&T as core::fmt::Display>::fmt;
    v3 = "/";
    v4 = <char as core::fmt::Display>::fmt;
    v5 = &g_802868;
    v6 = 6;
    v9 = &g_47b7e0;
    v10 = 5;
    v7 = &v1;
    v8 = 2;
    v11.map_or_else(0, v19, &v5);
    return v11.msg();
    return 0;
}
