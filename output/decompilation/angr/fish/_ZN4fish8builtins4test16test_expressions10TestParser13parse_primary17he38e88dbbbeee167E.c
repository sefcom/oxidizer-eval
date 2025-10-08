long long fish::builtins::test::test_expressions::TestParser::parse_primary(void* a0, unsigned long a1, unsigned long long a2)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    unsigned long v4;  // [bp-0x50]
    void* v5;  // [bp-0x48]
    char v6;  // [bp-0x38]
    unsigned long long v8;  // r15
    unsigned long long v9;  // r15
    unsigned long long v10;  // r15
    unsigned long long v11;  // rax

    if (a1 < a2)
    {
        v8 = a0.parse_parenthetical(a1, a2);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, a1);
        if (v8)
            return v8;
        v9 = a0.parse_unary_primary(a1, a2);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, &g_14d4898);
        if (v9)
            return v9;
        v10 = a0.parse_binary_primary(a1, a2);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, &g_14d46e8);
        if (!v10)
        {
            v11 = a0.parse_just_a_string(a1, a2);
            core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, &g_14d4810);
            return v11;
        }
        return v10;
    }
    else
    {
        v0 = 0;
        v1 = 4;
        v2 = 0;
        if ((char)_ccall(4, 24, a1 + 1, 0, (unsigned long long)(char)(a1 < a2)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14d4920); /* do not return */
        v3 = 4;
        v4 = a1 + 1;
        fish_printf::printf_impl::sprintf_locale(&v6, &v0, "Missing argument at index %uExpected a combining operator like '-a' at index %u", 28, &v3, 1);
        v6.unwrap(&g_14d4938);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v3);
        memcpy(&v3, &v0, 16);
        v5 = 0;
        a0.error(a1, &v3);
        return 0;
    }
}
