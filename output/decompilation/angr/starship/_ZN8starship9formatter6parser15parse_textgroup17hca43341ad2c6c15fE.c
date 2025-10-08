long long starship::formatter::parser::parse_textgroup(struct_0 *a0, unsigned long long a1)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    int v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xc8]
    int v3;  // [bp-0xc0], Other Possible Types: char
    unsigned long v4;  // [bp-0xb0]
    int v5;  // [bp-0xa8]
    int v6;  // [bp-0x98]
    unsigned long long v7;  // [bp-0x88]
    int v8;  // [bp-0x78]
    char v9;  // [bp-0x68]
    unsigned long long v10;  // [bp-0x58]
    char v11;  // [bp-0x48]

    v11.into_inner(a1);
    v0.next(&v11);
    if (!*((long long *)&v0))
        core::option::unwrap_failed(&g_11f3740); /* do not return */
    v7 = v2;
    v6 = v1;
    v5 = v0;
    v0.next(&v11);
    if (!*((long long *)&v0))
        core::option::unwrap_failed(&g_11f3758); /* do not return */
    v10 = v2;
    memcpy(&v9, &v1, 16);
    v8 = v0;
    starship::formatter::parser::parse_format(&v3, &v5);
    starship::formatter::parser::parse_style(&v0, &v8);
    a0->field_10 = v4;
    *((void*)&a0->field_0) = v3;
    *((void*)&(&a0->field_10)[1]) = v0;
    *((long long *)((char *)&a0->field_18 + 8)) = (long long)v1;
    return core::ptr::drop_in_place<pest::iterators::pairs::Pairs<starship::formatter::parser::Rule>>(&v11);
}
