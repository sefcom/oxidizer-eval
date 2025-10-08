long long fish::builtins::test::test_expressions::TestParser::parse_3_arg_expression(struct_0 *a0, unsigned long a1, unsigned long long a2)
{
    unsigned int v0;  // [bp-0x94]
    unsigned long long v1;  // [bp-0x90]
    unsigned long long v2[4];  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    char v4;  // [bp-0x78]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    char *v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    unsigned long long v12;  // rax
    unsigned long v13;  // r15
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // r12
    unsigned long v18;  // rsi
    unsigned long v19;  // rdx
    unsigned long long v20;  // rax
    unsigned long long v21[4];  // rax
    char *v22;  // rax

    v12 = a2 - a1;
    if (a2 < a1)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14d4950); /* do not return */
    }
    else if (v12 == 3)
    {
        v13 = a1 + 1;
        if ((char)_ccall(4, 24, a1 + 1, 0, (unsigned long long)(char)(v12 < 3)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d4968); /* do not return */
        v15 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, v13), v14);
        if ((char)v15 == 2)
        {
            return a0.parse_binary_primary(a1, a2);
        }
        else if ((unsigned int)v15 == 4)
        {
            v0 = v15;
            v16 = a0.parse_unary_expression(a1, v13);
            if (!v16)
                return 0;
            v17 = v16;
            v18 = a1;
            if ((char)__CFADD__(v18, 2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d4980); /* do not return */
            v19 = a1;
            if ((char)__CFADD__(v19, 3))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d4998); /* do not return */
            v20 = a0.parse_unary_expression(v18 + 2, v19 + 3);
            if (v20)
            {
                v21 = 8.alloc_impl(32, 0);
                if (!v21)
                    alloc::alloc::handle_alloc_error(8, 32); /* do not return */
                v21[0] = v17;
                v21[1] = v14;
                v21[2] = v20;
                v21[3] = v14;
                v1 = 2;
                v2[0] = v21;
                v3 = 2;
                v22 = 1.alloc_impl(1, 0);
                if (!v22)
                    alloc::alloc::handle_alloc_error(1, 1); /* do not return */
                *(v22) = (char)(v0 >> 8) & 1;
                v5 = 2;
                memcpy(&v4, &v1, 16);
                v6 = 1;
                v7 = v22;
                v8 = 1;
                v9 = a1;
                v10 = a2;
                return v4.new();
            }
            core::ptr::drop_in_place<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>(v17, v14);
            return 0;
        }
        else
        {
            return a0.parse_unary_expression(a1, a2);
        }
    }
    else
    {
        core::panicking::panic("assertion failed: end - start == 3assertion failed: end - start == 4argc should not be zero", 34, &g_14d49b0); /* do not return */
    }
}
