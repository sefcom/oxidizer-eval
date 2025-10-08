long long fish::builtins::shared::builtin_break_continue(unsigned long long a0, struct_0 *a1, void* a2, unsigned long long a3)
{
    char v0;  // [bp-0xb1]
    void* v1;  // [bp-0xb0], Other Possible Types: char, unsigned long long
    unsigned long long v2;  // [bp-0xa8]
    void* v3;  // [bp-0xa0], Other Possible Types: unsigned long long
    char v4;  // [bp-0x98]
    int v5;  // [bp-0x90], Other Possible Types: char
    void* v6;  // [bp-0x88]
    char v7;  // [bp-0x78]
    int v8;  // [bp-0x70]
    void* v9;  // [bp-0x58]
    unsigned long long v10;  // [bp-0x50]
    void* v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char v14;  // al
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    struct_1 *v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // r14
    unsigned long long v20;  // rax
    unsigned long long v21;  // r14
    unsigned long long v22;  // rax
    int v23;  // xmm1
    unsigned long long v24;  // rdx

    if (!a3)
        core::panicking::panic_bounds_check(0, 0, &g_14c6228); /* do not return */
    v14 = *((long long *)a2).eq_by(*((long long *)a2) + (long long)a2[8] * 4, "breakbreakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP", "breakpointbuiltincdcommandcommandlinecountdisownendfalsefgfish_key_readerforfunctionshistoryifnotorprintfpwdrandomreturnsetset_colorsourcestatusswitchulimitwhileP");
    v4.parse(a2, a3, a0, a1);
    if (v5 == 2)
    {
        v15 = *((int *)&v4) * 0x100000000;
        v16 = 1;
    }
    else if ((v5 & 1))
    {
        fish::builtins::shared::builtin_print_help(a0, a1, *((long long *)a2), (long long)a2[8]);
        goto LABEL_133375f;
    }
    else if (a3 == 1)
    {
        v0 = v14;
        v4.blocks_iter_rev(a0);
        while (true)
        {
            v17 = fish::parser::Parser::blocks_iter_rev::{{closure}}(&v4);
            if (!v17)
            {
LABEL_13337d9:
                core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>(*((long long *)&v5));
                v19 = a1->field_10;
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v2 = "%";
                v3 = 24;
                v1 = 0x8000000000000000;
                v20 = v1.localize();
                v4 = 1;
                *((int128_t *)&v5) = *((int128_t *)a2);
                fish_printf::printf_impl::sprintf_locale(&v12, &v9, v20, v18, ".", &v4, 1);
                v12.unwrap(&g_14c6240);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v4);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v1);
                memcpy(&v4, &v9, 16);
                v6 = 0;
                v19.append(&v4);
                return 4294967297;
            }
            v1 = v17->field_14;
            if (v1.slice_contains(&g_9fd8e2, 2))
                break;
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v18);
            if (v17->field_14 - 2 > 11)
                goto LABEL_13337d9;
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v18);
        core::ptr::drop_in_place<core::iter::sources::from_fn::FromFn<fish::parser::Parser::blocks_iter_rev::{{closure}}>>((long long)v5);
        *((char *)(a0.libdata_mut() + 129)) = 2 - v0;
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v18);
LABEL_133375f:
        v15 = 0;
        v16 = 0;
    }
    else
    {
        v21 = a1->field_10;
        v1 = 0;
        v2 = 4;
        v3 = 0;
        v22 = g_14c5fc8[0].localize();
        v23 = (int128_t)a2[16];
        v4 = 1;
        *((int128_t *)&v5) = *((int128_t *)a2);
        v7 = 1;
        v8 = v23;
        fish_printf::printf_impl::sprintf_locale(&(char)v9, &v1, v22, v24, ".", &v4, 2);
        (char)v9.unwrap(&g_14c6258);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v4);
        memcpy(&v4, &v1, 16);
        v6 = 0;
        v21.append(&v4);
        v16 = 1;
        v15 = 0x200000000;
    }
    return v15 | v16;
}
