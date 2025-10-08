long long fish::builtins::test::test_expressions::TestParser::parse_4_arg_expression(struct_2 *a0, void* a1, unsigned long long a2)
{
    unsigned short v0;  // [bp-0x3c]
    char v1;  // [bp-0x3a]
    unsigned long long v2;  // [bp-0x38]
    struct_1 *v3;  // [bp-0x30]
    void* v4;  // [bp-0x28]
    struct_1 *v5;  // [bp-0x20]
    struct_1 *v7;  // rdx
    void* v8;  // rsi
    unsigned long long v9;  // rax

    if (a2 < a1)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d49c8); /* do not return */
    }
    else if (a2 - a1 == 4)
    {
        v0 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, a1), v7);
        v1 = 0;
        if ((char)v0 != 3)
            return (!(char)v0.eq(&g_a13171) ? a0.parse_combining_expression(a1, a2) : a0.parse_parenthetical(a1, a2));
        v8 = a1;
        if ((char)_ccall(4, 24, v8 + 1, 0, (unsigned long long)(char)((char)v0 < 3)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d49e0); /* do not return */
        v9 = a0.parse_3_arg_expression(v8 + 1, a2);
        if (!v9)
            return 0;
        v7->field_20(v9);
        v2 = v9;
        v3 = v7;
        v4 = a1;
        v5 = v7;
        return v2.new();
    }
    else
    {
        core::panicking::panic("assertion failed: end - start == 4argc should not be zero", 34, &g_14d49f8); /* do not return */
    }
}
