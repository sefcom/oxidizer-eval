long long fish::ast::Populator::visit_variable_assignment(struct_0 *a0, unsigned int a1[3])
{
    void* v0;  // [bp-0xa8]
    int v1;  // [bp-0xa8]
    unsigned long long v2;  // [bp-0xa0]
    void* v3;  // [bp-0x98]
    void* v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    void* v6;  // [bp-0x78]
    void* v7;  // [bp-0x70], Other Possible Types: char, unsigned long long
    unsigned long long v8;  // [bp-0x68]
    void* v9;  // [bp-0x60]
    char v10;  // [bp-0x58]
    int v11;  // [bp-0x50]
    char v12;  // [bp-0x38]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rax
    unsigned int v16;  // edx

    v14 = a0.unsource_leaves();
    if ((char)v14)
    {
        a1[0] = 0;
        return v14;
    }
    else if (*((char *)(a0.peek_token(0) + 14)))
    {
        v15 = a0.consume_token_type(2);
        a1[0] = 1;
        a1[1] = v15;
        a1[2] = v16;
        return v15;
    }
    else
    {
        if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
        {
            v0 = 0;
            v2 = 1;
            v3 = 0;
            v7.to_flog_str(&g_15a93a0);
            v10.into_iter(&v7);
            v0.spec_extend(&v10);
            v0.push(58, &g_14c5728);
            v0.push(32, &g_14c5728);
            v12.to_vec("Internal parse error from {$func} - this indicates a bug in fish.Should not have created variable_assignment_t from this token", 126);
            v10.into_iter(&v12);
            v0.spec_extend(&v10);
            v0.push(10, &g_14c5728);
            fish::flog::flog_impl(v2, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v2);
        }
        if ((char)core::sync::atomic::atomic_load(&g_15a93b0, 0))
        {
            v4 = 0;
            v5 = 1;
            v6 = 0;
            v7.to_flog_str(&g_15a93a0);
            v10.into_iter(&v7);
            v4.spec_extend(&v10);
            v4.push(58, &g_14c5728);
            v4.push(32, &g_14c5728);
            v7 = 0;
            v8 = 4;
            v9 = 0;
            v10 = 1;
            *((int128_t *)&v11) = *((int128_t *)&(&a0->padding_0)[1]);
            fish_printf::printf_impl::sprintf_locale(&v0, &v7, "Encountered while parsing:<<<<\n%s\n>>>Internal parse error from {$func} - this indicates a bug in fish.Type %ls not handledShould not be a commentCannot consume terminate token, caller should check status first", 37, &v10, 1);
            v0.unwrap(&g_14c5728);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v10);
            *((int128_t *)&v1) = *((int128_t *)&v7);
            v3 = 0;
            v7.to_flog_str(&v0);
            v10.into_iter(&v7);
            v4.spec_extend(&v10);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v0);
            v4.push(10, &g_14c5728);
            fish::flog::flog_impl(v5, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v4, v5);
        }
        fish::ast::Populator::visit_variable_assignment::panic_cold_explicit(); /* do not return */
    }
}
