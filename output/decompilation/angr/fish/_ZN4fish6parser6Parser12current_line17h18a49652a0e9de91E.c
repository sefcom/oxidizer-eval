long long fish::parser::Parser::current_line(void* a0, struct_1 *a1)
{
    unsigned long long v0;  // [bp-0x110]
    unsigned long long v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    unsigned int v5;  // [bp-0xf4]
    unsigned long long v6[3];  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xf0]
    char v8;  // [bp-0xe8]
    unsigned long long v9;  // [bp-0xe8]
    unsigned long long v10;  // [bp-0xe0]
    void* v12;  // [bp-0xd8], Other Possible Types: int, char
    int v13;  // [bp-0xd8]
    int v14;  // [bp-0xd0], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v15;  // [bp-0xc8]
    int v16;  // [sp-0xc8]
    unsigned long long v17;  // [bp-0xc0]
    int v18;  // [bp-0xbf]
    char v19;  // [bp-0xb8]
    unsigned long v20;  // [bp-0xb0]
    unsigned long long v21;  // [bp-0x90]
    void* v22;  // [bp-0x88]
    unsigned long long v23;  // [bp-0x80]
    void* v24;  // [bp-0x78]
    void* v25;  // [bp-0x70]
    unsigned long long v26;  // [bp-0x68]
    void* v27;  // [bp-0x60]
    unsigned long long v28[5];  // [bp-0x58]
    unsigned long long v29[5];  // [bp-0x50]
    unsigned long v30;  // [bp-0x48]
    char v31;  // [bp-0x40]
    unsigned long v33;  // r12
    char v34;  // al
    unsigned long long v35;  // rdx
    unsigned long long v36;  // rax
    struct_2 *v37;  // rax
    unsigned long long v40;  // rbp
    unsigned long long v41[5];  // r13
    char v42;  // bl
    char v43;  // al

    if (a1->field_110)
        core::cell::panic_already_borrowed(&g_14de670); /* do not return */
    v33 = &a1->field_110;
    a1->field_110 = 18446744073709551615;
    v34 = a1->field_120.source_offset_of_node();
    v40 = v35;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v33);
    if (!(v34 & 1))
    {
        *((unsigned long long *)a0) = 0;
        *((unsigned long long *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = 0;
        return a0;
    }
    v5 = a1.get_lineno_for_display();
    v41 = a1.current_filename();
    v28[0] = v41;
    v22 = 0;
    v23 = 4;
    v24 = 0;
    if (a1->field_5a)
    {
        v42 = 1;
        if (!(char)a1.is_function())
            goto LABEL_13eb048;
    }
    v21 = v35;
    if (v41)
    {
        v29[0] = v41;
        v25 = 0;
        v26 = 4;
        v27 = 0;
        v2 = "%";
        v3 = 15;
        v0 = 0x8000000000000000;
        v36 = v0.localize();
        fish::parser::user_presentable_path(&v6, v41[3], v41[4], &a1[1].padding_5b[85]);
        v30 = v41;
        v12 = 1;
        *((int128_t *)&v14) = *((int128_t *)&v8);
        v19 = 4;
        v20 = v5;
        fish_printf::printf_impl::sprintf_locale(&v31, &v25, v36, v35, ".", &v12, 2);
        v31.unwrap(&g_14de610);
        core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&v12);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
        core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v0);
        v15 = 0;
        *((int128_t *)&v13) = *((int128_t *)&v25);
        v22.spec_extend(v14, v14 + v15 * 4);
        v41 = v30;
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        core::ptr::drop_in_place<alloc::sync::Arc<widestring::utfstring::Utf32String>>(&v29);
        v40 = v21;
LABEL_13eb048:
        if (!a1->field_5a)
            goto LABEL_13eb274;
LABEL_13eb053:
        v43 = (char)a1.is_function() ^ 1;
    }
    else
    {
        v37 = a1.libdata();
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v35);
        if (v37->field_7c)
        {
            v0 = 0;
            v2 = 4;
            v3 = 0;
            v9 = "S";
            v10 = 19;
            v7 = 0x8000000000000000;
            v12 = 4;
            v14 = v5;
            fish_printf::printf_impl::sprintf_locale(&(char)v25, &v0, v7.localize(), v35, ".", &v12, 1);
            (char)v25.unwrap(&g_14de640);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
            v15 = v3;
            *((int128_t *)&v12) = *((int128_t *)&v0);
            v22.spec_extend(v14, v14 + v3 * 4);
        }
        else
        {
            v0 = 0;
            v2 = 4;
            v3 = 0;
            v9 = "S";
            v10 = 26;
            v7 = 0x8000000000000000;
            v12 = 4;
            v14 = v5;
            fish_printf::printf_impl::sprintf_locale(&(char)v25, &v0, v7.localize(), v35, ".", &v12, 1);
            (char)v25.unwrap(&g_14de628);
            core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v12);
            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v7);
            v15 = v3;
            *((int128_t *)&v12) = *((int128_t *)&v0);
            v22.spec_extend(v14, v14 + v3 * 4);
        }
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v12);
        v42 = 1;
        v40 = v21;
        if (a1->field_5a)
            goto LABEL_13eb053;
LABEL_13eb274:
    }
    v12 = 0;
    v14 = 4;
    *((uint128_t *)&v16) = 0;
    *((uint128_t *)&v18) = 0;
    v17 = v40;
    if (*((long long *)v33) >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14de658); /* do not return */
    a1->field_110 = *((long long *)v33) + 1;
    v0.describe_with_prefix(&v12, a1->field_118->field_18, a1->field_118->field_20, 4, 0, a1->field_5a, v43);
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v33);
    if (v3)
        v0.push(10);
    v7.stack_trace(a1);
    v0.spec_extend(v9, v9 + v10 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v7);
    *((unsigned long long *)&a0[16]) = v3;
    *((int128_t *)a0) = *((int128_t *)&v0);
    core::ptr::drop_in_place<fish::parser::ProfileItem>(&v12);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v22);
    if (!v41)
    {
        return a0;
    }
    else if (v42)
    {
        core::ptr::drop_in_place<alloc::sync::Arc<widestring::utfstring::Utf32String>>(&v28);
        return a0;
    }
    else
    {
        return a0;
    }
}
