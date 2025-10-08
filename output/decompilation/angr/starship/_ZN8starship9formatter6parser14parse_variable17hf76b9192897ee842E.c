long long starship::formatter::parser::parse_variable(unsigned long long a0)
{
    int v0;  // [bp-0x98]
    char v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x78]
    int v3;  // [bp-0x70], Other Possible Types: char
    char v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x50]
    char v6;  // [bp-0x48]
    unsigned long long v8;  // rax

    v6.into_inner(a0);
    v3.next(&v6);
    if (!*((long long *)&v3))
        core::option::unwrap_failed(&g_11f3770); /* do not return */
    v2 = v5;
    memcpy(&v1, &v4, 16);
    v0 = v3;
    v8 = v0.as_str();
    core::ptr::drop_in_place<pest::iterators::pair::Pair<starship::formatter::parser::Rule>>(&v0);
    core::ptr::drop_in_place<pest::iterators::pairs::Pairs<starship::formatter::parser::Rule>>(&v6);
    return v8;
}
