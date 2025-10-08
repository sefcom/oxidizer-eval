long long starship::formatter::parser::parse_value(void* a0, unsigned long long a1[5])
{
    int v0;  // [bp-0xa0], Other Possible Types: char
    char v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x58]
    char v6;  // [bp-0x50]
    unsigned long long v8;  // rdi
    unsigned long long v9;  // rsi
    unsigned long long v10;  // rax
    unsigned long v11;  // rdx

    v8 = a1[0];
    v9 = a1[4];
    a1[0].as_rule(a1[4]);
    switch ((int)a1[0].as_rule(a1[4]))
    {
    case 3:
        v10 = starship::formatter::parser::parse_variable(a1);
        *((unsigned long long *)&a0[8]) = 0x8000000000000000;
        *((unsigned long long *)&a0[16]) = v10;
        *((unsigned long *)&a0[24]) = v11;
        *((unsigned long long *)a0) = 9223372036854775809;
        return v10;
    case 9:
        starship::formatter::parser::parse_text(a0 + 8, a1);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    case 14:
        return starship::formatter::parser::parse_textgroup(a0, a1);
    case 17:
        v6.into_inner(a1);
        v0.next(&v6);
        if (!*((long long *)&v0))
            core::option::unwrap_failed(&g_11f3710); /* do not return */
        v5 = v2;
        memcpy(&v4, &v1, 16);
        v3 = v0;
        starship::formatter::parser::parse_format(&v0, &v3);
        *((long long *)&a0[24]) = *((long long *)&v1);
        a0[8] = v0;
        *((unsigned long long *)a0) = 9223372036854775811;
        return core::ptr::drop_in_place<pest::iterators::pairs::Pairs<starship::formatter::parser::Rule>>(&v6);
    default:
        core::panicking::panic("internal error: entered unreachable code/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/rayon-core-1.13.0/src/job.rs", 40, &g_11f3728); /* do not return */
    }
}
