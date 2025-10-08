void bat::decorations::LineChangesDecoration::generate_cached(struct_1 *a0, struct_0 *a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x78], Other Possible Types: char
    unsigned long v1;  // [bp-0x68]
    unsigned long long v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x48]
    int v6;  // [bp-0x30]
    char v7;  // [bp-0x20]

    v7 = a1->field_10;
    *((uint128_t *)&v6) = a1->field_0;
    v2 = 0x8000000000000000;
    v3 = a2;
    v4 = a3;
    v5 = 9223372036854775810;
    v0.spec_to_string(&v2);
    a0->field_18 = a2.count(a3 + a2);
    *((void*)&a0->field_0) = v0;
    a0->field_10 = v1;
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
    return;
}
