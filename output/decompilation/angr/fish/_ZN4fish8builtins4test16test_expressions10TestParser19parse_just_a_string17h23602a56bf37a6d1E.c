long long fish::builtins::test::test_expressions::TestParser::parse_just_a_string(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned short v0;  // [bp-0x94]
    char v1;  // [bp-0x92]
    void* v2;  // [bp-0x90]
    unsigned long long v3;  // [bp-0x88]
    void* v4;  // [bp-0x80]
    char v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70], Other Possible Types: unsigned long
    void* v7;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v8;  // [bp-0x60]
    unsigned long v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    char v12;  // [bp-0x28]
    unsigned long long v14;  // rdx
    unsigned long long v16;  // rax

    if (a1 < a2)
    {
        v0 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, a1), v14);
        v1 = 0;
        if (!(char)v0.eq(&g_a13130))
        {
            v2 = 0;
            v3 = 4;
            v4 = 0;
            v5 = 4;
            v6 = a1 + 1;
            fish_printf::printf_impl::sprintf_locale(&v10, &v2, "Unexpected argument type at index %uUnknown option at index %u", 36, &v5, 1);
            v10.unwrap(&g_14d47b0);
        }
        else if (fish::future_feature_flags::test(5))
        {
            v2 = 0;
            v3 = 4;
            v4 = 0;
            v5 = 4;
            v6 = a1;
            fish_printf::printf_impl::sprintf_locale(&v10, &v2, "Unknown option at index %u", 26, &v5, 1);
            v10.unwrap(&g_14d4798);
        }
        else
        {
            v11.to_vec(*((long long *)&a0->field_18).arg(a0->field_20, a1), a2);
            v7 = *((long long *)&v12);
            memcpy(&v5, &v11, 16);
            v8 = a1;
            v9 = a1 + 1;
            return v5.new();
        }
    }
    else
    {
        v2 = 0;
        v3 = 4;
        v4 = 0;
        v16 = a1;
        if ((char)_ccall(4, 24, v16 + 1, 0, (unsigned long long)(char)(a1 < a2)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d47c8); /* do not return */
        v5 = 4;
        v6 = v16 + 1;
        fish_printf::printf_impl::sprintf_locale(&v10, &v2, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v5, 1);
        v10.unwrap(&g_14d47e0);
    }
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v5);
    memcpy(&v5, &v2, 16);
    v7 = 0;
    a0.error(a1, &v5);
    return 0;
}
