long long fish::builtins::test::test_expressions::TestParser::parse_expression(void* a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    unsigned long long v3;  // [bp-0x58], Other Possible Types: char
    unsigned long long v4;  // [bp-0x50], Other Possible Types: unsigned long
    void* v5;  // [bp-0x48], Other Possible Types: unsigned long long
    uint128_t v6;  // [bp-0x40]
    char v7;  // [bp-0x28]
    unsigned long v9;  // rax
    unsigned long v10;  // rax

    if (a2 > a1)
    {
        switch (a2 - a1)
        {
        case 0:
            v3 = &g_14d4a10;
            v4 = 1;
            v5 = 8;
            v6 = 0;
            core::panicking::panic_fmt(&v3, &g_14d4a20); /* do not return */
        case 1:
            v0 = 0;
            v1 = 4;
            v2 = 0;
            v9 = a1;
            if ((char)__CFADD__(v9, 2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d4a38); /* do not return */
            v3 = 4;
            v4 = v9 + 2;
            fish_printf::printf_impl::sprintf_locale(&v7, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v3, 1);
            v7.unwrap(&g_14d4a50);
            a1 += 1;
            break;
        case 2:
            return a0.parse_unary_expression(a1, a2);
        case 3:
            return a0.parse_3_arg_expression(a1, a2);
        case 4:
            return a0.parse_4_arg_expression(a1, a2);
        default:
            return a0.parse_combining_expression(a1, a2);
        }
    }
    else
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v10 = a1;
        if ((char)_ccall(4, 24, v10 + 1, 0, (unsigned long long)(char)(a2 < a1)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d4a68); /* do not return */
        v3 = 4;
        v4 = v10 + 1;
        fish_printf::printf_impl::sprintf_locale(&v7, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v3, 1);
        v7.unwrap(&g_14d4a80);
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
    memcpy(&v3, &v0, 16);
    v5 = 0;
    a0.error(a1, &v3);
    return 0;
}
