long long starship::print::format_duration(unsigned long long a0, struct_0 *a1)
{
    char *v0;  // [bp-0x60]
    unsigned long long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    char *v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    unsigned long long v6;  // [bp-0x30]
    char *v7;  // [bp-0x28]
    unsigned long long v8;  // [bp-0x20]
    void* v9;  // [bp-0x18]
    unsigned long v11;  // rax
    unsigned long long v12;  // rcx

    v11 = 1000 * a1->field_0;
    v12 = a1->field_8 * 1125899907 >> 50;
    v1 = v12 + v11;
    v2 = a1->field_0 / 18446744073709552 + ((v12 + v11 <= v12 ? 1 : 0) & 1);
    if (v2 || v1)
    {
        v0 = &v1;
        v3 = &v0;
        v4 = <&T as core::fmt::Debug>::fmt;
        v5 = &g_11f6f90;
        v6 = 2;
        v9 = 0;
        v7 = &v3;
        v8 = 1;
        a0.map_or_else(0, v2 | v1, &v5);
    }
    else
    {
        a0.to_vec("<1msI686big5DIRC*?[\\:", 4);
    }
    return a0;
}
