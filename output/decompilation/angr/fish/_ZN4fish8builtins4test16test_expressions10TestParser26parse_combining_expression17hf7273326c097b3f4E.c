long long fish::builtins::test::test_expressions::TestParser::parse_combining_expression(struct_2 *a0, struct_4 *a1, unsigned long long a2)
{
    void* v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    void* v2;  // [bp-0xc0]
    void* v3;  // [bp-0xb8]
    unsigned long long v4;  // [bp-0xb0]
    void* v5;  // [bp-0xa8]
    void* v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x98]
    void* v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    int v10;  // [bp-0x88]
    struct_4 *v11;  // [bp-0x80], Other Possible Types: unsigned long
    void* v12;  // [bp-0x78]
    char v13;  // [bp-0x70]
    void* v14;  // [bp-0x60]
    struct_4 *v15;  // [bp-0x58]
    struct_4 *v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x48]
    char v18;  // [bp-0x40]
    struct_4 *v20;  // rdx
    struct_4 *v21;  // r14
    unsigned long long v22;  // cc_ndep
    struct_4 *v23;  // r14
    unsigned long long v24;  // rax
    unsigned int v25;  // eax
    struct_4 *v26;  // r14
    unsigned long long v27;  // r12
    struct_4 *v28;  // r14
    struct_4 *v29;  // rbp
    struct_4 *v30;  // rax

    if (a1 >= a2)
        return 0;
    v6 = 0;
    v7 = 8;
    v8 = 0;
    v3 = 0;
    v4 = 1;
    v5 = 0;
    v17 = a0.parse_unary_expression(a1, a2);
    if (v17)
    {
        v20->field_20(v17);
        v6.push(v17, v20);
        while (true)
        {
            v23 = v21;
            if (v23 >= a2)
                break;
            v24 = fish::builtins::test::test_expressions::token_for_string(*((long long *)&a0->field_18).arg(a0->field_20, v23), v20);
            if ((char)v24 != 4)
            {
                v0 = 0;
                v1 = 4;
                v2 = 0;
                *((char *)&v10) = 4;
                v11 = &v23->padding_0[1];
                fish_printf::printf_impl::sprintf_locale(&v18, &v0, "Expected a combining operator like '-a' at index %u", 51, &(char)v10, 1);
                v18.unwrap(&g_14d4648);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v10);
                *((int128_t *)&v10) = *((int128_t *)&v0);
                v12 = 0;
                a0.insert(0, &(char)v10, &g_14d4660);
                a0->field_28 = v23;
                if (v8)
                {
                    v12 = v8;
                    *((int128_t *)&v10) = *((int128_t *)&v6);
                    memcpy(&v13, &v3, 16);
                    v14 = v5;
                    v15 = a1;
                    v16 = v23;
                    return v9.new();
                }
                goto LABEL_1382708;
            }
            v25 = (v24 & 4294967295) >> 8;
            v3.push(v25 & 1);
            v22 = _ccall(19, (unsigned long long)(v25 & 1), 0, v22);
            v26 = &v23->padding_0[1];
            v27 = a0.parse_unary_expression(v26, a2);
            v28 = v26;
            if (!v27)
                goto LABEL_1382548;
            v20->field_20(v27);
            v6.push(v27, v20);
            v20 = v20;
        }
        goto LABEL_1382708;
    }
    else
    {
        v28 = a1;
    }
LABEL_1382548:
    v23 = v28;
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, v29);
    v0 = 0;
    v1 = 4;
    v2 = 0;
    v30 = v23;
    if ((char)_ccall(4, 24, v30 + 1, 0, _ccall(19, 0, 0, v22)))
        core::panicking::panic_const::panic_const_add_overflow(&g_14d4690); /* do not return */
    *((char *)&v10) = 4;
    v11 = &v30->padding_0[1];
    fish_printf::printf_impl::sprintf_locale(&v18, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &(char)v10, 1);
    v18.unwrap(&g_14d46a8);
    core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&(char)v10);
    *((int128_t *)&v10) = *((int128_t *)&v0);
    v12 = 0;
    a0.add_error(v23, &(char)v10);
    if (v17 && v5)
        v5 -= 1;
    if (v8)
    {
        v12 = v8;
        *((int128_t *)&v10) = *((int128_t *)&v6);
        memcpy(&v13, &v3, 16);
        v14 = v5;
        v15 = a1;
        v16 = v23;
        return v9.new();
    }
LABEL_1382708:
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, 1);
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::boxed::Box<dyn fish::builtins::test::test_expressions::Expression>>>(&v6);
    return 0;
}
