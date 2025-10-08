long long check_docs::check_validity_of_anchor_pair(struct_0 *a0, struct_1 *a1)
{
    struct_0 *v0;  // [bp-0x60]
    struct_1 *v1;  // [bp-0x58]
    char *v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    char *v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    unsigned long long v7;  // [bp-0x28]
    char *v8;  // [bp-0x20]
    unsigned long long v9;  // [bp-0x18]
    void* v10;  // [bp-0x10]

    v0 = a0;
    v1 = a1;
    if (a0->field_30 > a1->field_30)
    {
        v2 = &v1;
        v3 = <&T as core::fmt::Debug>::fmt;
        v4 = &v0;
        v5 = <&T as core::fmt::Debug>::fmt;
        v6 = &g_5d3568;
        v7 = 2;
        v10 = 0;
        v8 = &v2;
        v9 = 2;
        return ::0x4e9780::anyhow::__private::format_err(&v6);
    }
    return 0;
}
