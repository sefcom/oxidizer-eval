long long fish::input_common::next_input_event(unsigned int a0, unsigned int a1, unsigned int a2)
{
    unsigned long long v0[3];  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    void* v2;  // [bp-0x40]
    unsigned int v4;  // eax
    unsigned long long v5;  // rax
    struct_2 *v6;  // rdx
    unsigned long v7;  // rbx
    unsigned int v8;  // eax
    unsigned long long v9;  // rbx
    unsigned int v10;  // eax

    *(v0) = 0;
    v1 = 4;
    while (true)
    {
        v2 = 0;
        v0.add(a0);
        v4 = fish::threads::iothread_port();
        v0.add(v4);
        v5 = fish::universal_notifier::default_notifier();
        v7 = v6->field_20(v5);
        if (((char)v7 & 1))
            v0.add((unsigned int)v6);
        v8 = v0.check_readable(a1, a2);
        if (v8 < 0)
            break;
        if (v8)
        {
            if (((char)v7 & 1) && (char)v0.test((unsigned int)v6) && (char)v6->field_28(v5, (unsigned int)v6))
            {
                core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
                return (v7 & 0xffffff00 | 3) & 4294967295;
            }
            if ((char)v0.test(a0))
            {
                v9 = (unsigned int)(int)fish::input_common::readb(a0) & 1.map_or((char)v6);
                core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
                return v9 & 4294967295;
            }
            if ((char)v0.test(v4))
            {
                core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
                return (v7 & 0xffffff00 | 4) & 4294967295;
            }
        }
        else if (a2 != 0x3b9aca00)
        {
            core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
            return (v7 & 0xffffff00 | 5) & 4294967295;
        }
        else
        {
            core::panicking::panic("assertion failed: !matches!(timeout, Timeout::Forever)ignoring fish_escape_delay_ms: value '%ls' is not an integer or is < 10 or >= 5000 ms\nignoring fish_sequence_key_delay_ms: value '%ls' is not an integer or is < 10 or >= 5000 ms\nassertion failed: key.ma", 54, &g_14daf78); /* do not return */
        }
    }
    v10 = errno::errno();
    if (v10 == 4)
    {
        core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
        return (v7 & 0xffffff00 | 2) & 4294967295;
    }
    else if (v10 != 11)
    {
        core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
    }
    else
    {
        core::ptr::drop_in_place<fish::ast::TokenStream>(v0, 4);
        return (v7 & 0xffffff00 | 2) & 4294967295;
    }
    return ((v7 & 0xffffff00 | 2) & 0xffffffffffffff00 | 1) & 4294967295;
}
