long long fish::builtins::test::test_expressions::TestParser::parse_binary_primary(void* a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v3;  // [bp-0xa8]
    unsigned long v4;  // [bp-0xa0]
    void* v5;  // [bp-0x98], Other Possible Types: unsigned long long
    char v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x80]
    unsigned long v8;  // [bp-0x78]
    unsigned long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    char v11;  // [bp-0x67]
    char v12;  // [bp-0x58]
    char v13;  // [bp-0x48]
    char v14;  // [bp-0x38]
    unsigned long v16;  // r13
    unsigned long v18;  // r15
    unsigned long v20;  // r15
    unsigned long long v21;  // r12
    unsigned long long v22;  // rdx
    unsigned long v23;  // rbp

    v16 = a1 + 3;
    if ((char)__CFADD__(a1, 3))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d47f8); /* do not return */
    if (a1 < v16)
    {
        if (a1 < a2)
        {
            v18 = a1 + 1;
            if (v18 < a2)
            {
                v18 = a1 + 2;
                if (v18 < a2)
                    goto LABEL_1382cc9;
            }
        }
        else
        {
            v18 = a1;
        }
        v0 = 0;
        v1 = 4;
        v2 = 0;
        v3 = 4;
        v4 = v18 + 1;
        fish_printf::printf_impl::sprintf_locale(&v12, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v3, 1);
        v12.unwrap(&g_14d4838);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
        memcpy(&v3, &v0, 16);
        v5 = 0;
        a0.error(v18, &v3);
    }
    else
    {
LABEL_1382cc9:
        v20 = (long long)a0[24];
        v21 = (long long)a0[32];
        v23 = (unsigned int)fish::builtins::test::test_expressions::token_for_string(v20.arg(v21, a1 + 1), v22);
        if ((char)v23 == 2)
        {
            v13.to_vec(v20.arg(v21, a1), a2);
            (char)v0.to_vec(v20.arg(v21, a1 + 2), a2);
            v7 = v2;
            memcpy(&v6, &v0, 16);
            memcpy(&v3, &v13, 16);
            v5 = *((long long *)&v14);
            v10 = (v23 & 4294967295) >> 8;
            v11 = (v23 & 4294967295) >> 16;
            v8 = a1;
            v9 = v16;
            return v3.new();
        }
    }
    return 0;
}
