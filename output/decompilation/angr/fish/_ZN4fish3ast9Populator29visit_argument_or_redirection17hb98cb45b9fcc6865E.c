long long fish::ast::Populator::visit_argument_or_redirection(struct_1 *a0, struct_0 *a1)
{
    int v0;  // [bp-0xd8]
    void* v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    void* v3;  // [bp-0xc8]
    void* v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    void* v6;  // [bp-0xa8]
    void* v7;  // [bp-0xa0], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x98]
    void* v9;  // [bp-0x90]
    char v10;  // [bp-0x84], Other Possible Types: unsigned long
    unsigned int v11;  // [bp-0x7c]
    char v12;  // [bp-0x78]
    int v13;  // [bp-0x70]
    unsigned int v14[8];  // [bp-0x58]
    char v15;  // [bp-0x38]
    unsigned long long v17;  // rax
    unsigned long long v18;  // rax

    v10.try_parse(a0);
    if (*((int *)&v10) != 2)
    {
        core::ptr::drop_in_place<fish::ast::ArgumentOrRedirection>(a1);
        a1->field_0 = 0;
        *((unsigned long *)&a1->field_4[0]) = v10;
        *((unsigned int *)&a1->field_4[8]) = v11;
        return v11;
    }
    v14.try_parse(a0);
    if (v14[0] != 2)
    {
        v17 = v14.new();
        v18 = (unsigned long long)core::ptr::drop_in_place<fish::ast::ArgumentOrRedirection>(a1);
        a1->field_0 = 1;
        *((unsigned long long *)&a1->field_4[4]) = v17;
        return v18;
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
    {
        v1 = 0;
        v2 = 1;
        v3 = 0;
        v7.to_flog_str(&g_15a93a0);
        v12.into_iter(&v7);
        v1.spec_extend(&v12);
        v1.push(58, &g_14c5710);
        v1.push(32, &g_14c5710);
        v15.to_vec("Internal parse error from {$func} - this indicates a bug in fish.Unable to parse argument or redirectionInternal parse error from {$func} - this indicates a bug in fish.Should not have created variable_assignment_t from this token", 104);
        v12.into_iter(&v15);
        v1.spec_extend(&v12);
        v1.push(10, &g_14c5710);
        fish::flog::flog_impl(v2, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v1, v2);
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
    {
        v4 = 0;
        v5 = 1;
        v6 = 0;
        v7.to_flog_str(&g_15a93a0);
        v12.into_iter(&v7);
        v4.spec_extend(&v12);
        v4.push(58, &g_14c5710);
        v4.push(32, &g_14c5710);
        v7 = 0;
        v8 = 4;
        v9 = 0;
        v12 = 1;
        *((int128_t *)&v13) = *((int128_t *)&(&a0->padding_0)[1]);
        fish_printf::printf_impl::sprintf_locale(&v1, &v7, "Encountered while parsing:<<<<\n%s\n>>>Internal parse error from {$func} - this indicates a bug in fish.Type %ls not handledShould not be a commentCannot consume terminate token, caller should check status first", 37, &v12, 1);
        v1.unwrap(&g_14c5710);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
        *((int128_t *)&v0) = *((int128_t *)&v7);
        v3 = 0;
        v7.to_flog_str(&v1);
        v12.into_iter(&v7);
        v4.spec_extend(&v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v1);
        v4.push(10, &g_14c5710);
        fish::flog::flog_impl(v5, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
    }
    fish::ast::Populator::visit_argument_or_redirection::panic_cold_explicit(); /* do not return */
}
