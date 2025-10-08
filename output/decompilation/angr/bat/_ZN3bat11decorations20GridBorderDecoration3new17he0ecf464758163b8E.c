void bat::decorations::GridBorderDecoration::new(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0x68], Other Possible Types: char
    unsigned long v1;  // [bp-0x58]
    unsigned long long v2;  // [bp-0x50]
    unsigned long long v3;  // [bp-0x48]
    unsigned long long v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x38]
    int v6;  // [bp-0x20]
    char v7;  // [bp-0x10]

    v7 = a1->field_10;
    *((uint128_t *)&v6) = a1->field_0;
    v2 = 0x8000000000000000;
    v3 = &g_5a2896;
    v4 = 3;
    v5 = 9223372036854775810;
    v0.spec_to_string(&v2);
    a0->field_10 = v1;
    *((void*)&a0->field_0) = v0;
    a0->field_18 = 1;
    core::ptr::drop_in_place<nu_ansi_term::display::AnsiGenericString<str>>(&v2);
    return;
}
