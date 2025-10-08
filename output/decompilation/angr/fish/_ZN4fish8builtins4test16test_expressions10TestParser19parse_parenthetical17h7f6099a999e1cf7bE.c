long long fish::builtins::test::test_expressions::TestParser::parse_parenthetical(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned short v0;  // [bp-0x78]
    char v1;  // [bp-0x78], Other Possible Types: unsigned long long
    int v2;  // [bp-0x78], Other Possible Types: char
    int v3;  // [bp-0x78]
    char v4;  // [bp-0x76]
    struct_2 *v5;  // [bp-0x70], Other Possible Types: unsigned long
    void* v6;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long v7;  // [bp-0x60]
    void* v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    void* v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    struct_2 *v13;  // rdx
    unsigned long long v14;  // rax
    unsigned long long v15;  // r14
    char v16;  // al
    unsigned long v17;  // cc_dep1
    unsigned long v19;  // cc_ndep

    if ((char)__CFADD__(a1, 3))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d4850); /* do not return */
    if (a1 + 3 >= a2)
        return 0;
    v0 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, a1), v13);
    v4 = 0;
    if ((char)v0.eq(&g_a13171))
    {
        v14 = a0.parse_expression(a1 + 1, a2);
        if (v14)
        {
            v15 = v14;
            v13->field_20(v14);
            if (v13 > a2)
                core::panicking::panic("assertion failed: close_index <= endassertion failed: end - start == 3assertion failed: end - start == 4argc should not be zero", 36, &g_14d4868); /* do not return */
            if (v13 == a2)
            {
                v8 = 0;
                v9 = 4;
                v10 = 0;
                if ((char)_ccall(4, 24, a2 + 1, 0, (unsigned long long)(char)(v13 < a2)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d48f0); /* do not return */
                v1 = 4;
                v5 = a2 + 1;
                fish_printf::printf_impl::sprintf_locale(&v11, &v8, "Missing close paren at index %u", 31, &(unsigned short)v2, 1);
                v11.unwrap(&g_14d4908);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned short)v2);
                *((int128_t *)&v2) = *((int128_t *)&v8);
                v6 = 0;
                a0.error(a2, &(unsigned short)v2);
            }
            else
            {
                *((short *)&v1) = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, v13), v13);
                v4 = 0;
                v16 = (unsigned short)v1.eq(&g_a13193);
                v17 = v16;
                if (v16)
                {
                    if (!((char)_ccall(4, 24, v13 + 1, 0, _ccall(17, v17, 0, v19))))
                    {
                        v1 = v15;
                        v5 = v13;
                        v6 = a1;
                        v7 = &v13->padding_0[1];
                        return (unsigned short)v1.new();
                    }
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d4880); /* do not return */
                }
                v8 = 0;
                v9 = 4;
                v10 = 0;
                if ((char)_ccall(4, 24, v13 + 1, 0, _ccall(17, v17, 0, v19)))
                    core::panicking::panic_const::panic_const_add_overflow(&g_14d48c0); /* do not return */
                v2 = 4;
                v5 = &v13->padding_0[1];
                fish_printf::printf_impl::sprintf_locale(&v11, &v8, &g_54e848, 32, &(unsigned short)v3, 1);
                v11.unwrap(&g_14d48d8);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(unsigned short)v3);
                *((int128_t *)&v3) = *((int128_t *)&v8);
                v6 = 0;
                a0.error((unsigned int)v13, &(unsigned short)v3);
            }
            core::ptr::drop_in_place<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>(v15, v13);
        }
    }
    return 0;
}
