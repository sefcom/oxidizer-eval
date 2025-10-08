long long fish::builtins::test::test_expressions::TestParser::parse_unary_expression(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x68], Other Possible Types: unsigned long long
    struct_2 *v1;  // [bp-0x60], Other Possible Types: unsigned long
    void* v2;  // [bp-0x58], Other Possible Types: unsigned long long
    struct_2 *v3;  // [bp-0x50]
    void* v4;  // [bp-0x48]
    unsigned long long v5;  // [bp-0x40]
    void* v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    struct_2 *v9;  // rdx
    unsigned long long v10;  // rax
    unsigned long long v11;  // rax

    if (a1 >= a2)
    {
        v4 = 0;
        v5 = 4;
        v6 = 0;
        v11 = a1;
        if ((char)_ccall(4, 24, v11 + 1, 0, (unsigned long long)(char)(a1 < a2)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d4600); /* do not return */
        v0 = 4;
        v1 = v11 + 1;
        fish_printf::printf_impl::sprintf_locale(&v7, &v4, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v0, 1);
        v7.unwrap(&g_14d4618);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
        memcpy(&v0, &v4, 16);
        v2 = 0;
        a0.error(a1, &v0);
        return 0;
    }
    else if ((char)fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, a1), v9) == 3)
    {
        v10 = a0.parse_unary_expression(a1 + 1, a2);
        if (!v10)
            return 0;
        v9->field_20(v10);
        v0 = v10;
        v1 = v9;
        v2 = a1;
        v3 = v9;
        return v0.new();
    }
    else
    {
        return a0.parse_primary(a1, a2);
    }
}
