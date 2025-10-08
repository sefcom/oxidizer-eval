void fish::complete::Completer::complete_from_args(struct_1 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned short a7)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    int v2;  // [bp-0xe8], Other Possible Types: char
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8]
    unsigned long long v6;  // [bp-0xc8]
    unsigned long long v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xb0]
    char v9;  // [bp-0xa8]
    unsigned int v10;  // [bp-0xa0]
    unsigned int v11;  // [bp-0x98]
    int v12;  // [bp-0x78], Other Possible Types: char
    int v13;  // [bp-0x68]
    unsigned long long v14;  // [bp-0x58]
    char v15;  // [bp-0x53]
    int v16;  // [bp-0x48]
    unsigned int v17;  // ebp
    struct_0 *v18;  // rbx

    v17 = a0->field_70;
    v15 = 3;
    v18 = a0->field_38;
    v1 = 0x8000000000000000;
    if (v18->field_0 != 1)
    {
        v1 = 0x8000000000000000;
        v2.get_last_statuses(v18->field_8);
        v1 = v3;
        v0 = v4;
        v16 = v5;
        core::ptr::drop_in_place<core::option::Option<fish::env::var::Statuses>>(0x8000000000000000, a1);
        v2.scoped_mod(v18->field_8 + 64);
        core::ptr::drop_in_place<core::option::Option<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::complete::Completer::complete_from_args::{{closure}}>::{{closure}}>>>(&v12);
        v14 = v6;
        v13 = v5;
        memcpy(&v12, &v2, 16);
    }
    v9.expand_argument_list(a3, a4, v17, v18);
    if (v18->field_0 != 1)
    {
        if (v1 != 0x8000000000000000)
        {
            v3 = v1;
            v4 = v0;
            memcpy(&v5, &v16, 16);
            v18->field_8.set_last_statuses(&v3);
        }
        else
        {
            core::option::unwrap_failed(&g_14d5e50); /* do not return */
        }
    }
    v6 = v14;
    memcpy(&v5, &v13, 16);
    v2 = v12;
    core::ptr::drop_in_place<core::option::Option<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::complete::Completer::complete_from_args::{{closure}}>::{{closure}}>>>(&(unsigned long long)v2);
    fish::common::escape(&(unsigned long long)v2, a1, a2);
    v7 = fish::complete::const_desc(a5, a6);
    v8 = &g_14d5a68;
    a0.complete_strings(v4, (long long)v5, &v7, v10, v11, a7, 0x400);
    core::ptr::drop_in_place<alloc::boxed::Box<dyn core::ops::function::Fn<(&widestring::utfstr::Utf32Str,)>+Output = widestring::utfstring::Utf32String>>(&v7);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(unsigned long long)v2);
    core::ptr::drop_in_place<alloc::vec::Vec<fish::complete::Completion>>(&v9);
    core::ptr::drop_in_place<core::option::Option<fish::env::var::Statuses>>(v1, v0);
    return;
}
