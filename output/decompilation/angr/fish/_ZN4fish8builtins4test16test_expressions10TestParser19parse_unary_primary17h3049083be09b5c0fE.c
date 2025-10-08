long long fish::builtins::test::test_expressions::TestParser::parse_unary_primary(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xa0]
    unsigned long long v1;  // [bp-0x98]
    void* v2;  // [bp-0x90]
    char v3;  // [bp-0x88]
    int v4;  // [bp-0x88]
    unsigned long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x70]
    unsigned long v8;  // [bp-0x68]
    char v9;  // [bp-0x60]
    char v10;  // [bp-0x5f]
    char v11;  // [bp-0x50]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x30]
    unsigned long v15;  // r12
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rax
    char *v19;  // rdx
    struct_0 *v20;  // rdi
    unsigned int v21;  // esi
    unsigned long long v22;  // rax

    if (a1 < a2)
    {
        v15 = a1 + 1;
        if (v15 < a2)
        {
            v17 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, a1), v16);
            if ((char)v17 == 1)
            {
                v12.to_vec(*((long long *)&a0->field_18).arg(a0->field_20, v15), a2);
                v6 = *((long long *)&v13);
                memcpy(&v3, &v12, 16);
                v9 = (v17 & 4294967295) >> 8;
                v10 = (v17 & 4294967295) >> 16;
                v7 = a1;
                v8 = a1 + 2;
                return v3.new();
            }
        }
        else
        {
            v0 = 0;
            v1 = 4;
            v2 = 0;
            if ((char)__CFADD__(a1, 2))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d4710); /* do not return */
            *((char *)&v4) = 4;
            v5 = a1 + 2;
            fish_printf::printf_impl::sprintf_locale(&v11, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &(char)v4, 1);
            v11.unwrap(&g_14d4728);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v4);
            *((int128_t *)&v4) = *((int128_t *)&v0);
            v6 = 0;
            v19 = &(char)v4;
            v20 = a0;
            v21 = v15;
LABEL_138298f:
            v20.error(v21, v19);
        }
        return 0;
    }
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v22 = a1;
    if ((char)_ccall(4, 24, v22 + 1, 0, (unsigned long long)(char)(a1 < a2)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d4740); /* do not return */
    *((char *)&v4) = 4;
    v5 = v22 + 1;
    fish_printf::printf_impl::sprintf_locale(&v11, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &(char)v4, 1);
    v11.unwrap(&g_14d4758);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v4);
    *((int128_t *)&v4) = *((int128_t *)&v0);
    v6 = 0;
    v19 = &(char)v4;
    v20 = a0;
    v21 = a1;
    goto LABEL_138298f;
}
