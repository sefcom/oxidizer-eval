void fish::screen::Screen::reset_abandoning_line(struct_0 *a0, unsigned long a1)
{
    void* v0;  // [bp-0x70]
    unsigned long long v1;  // [bp-0x68]
    void* v2;  // [bp-0x60]
    char v3;  // [bp-0x58]
    char v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x58]
    struct_1 *v6;  // [bp-0x58], Other Possible Types: char
    unsigned long v7;  // [bp-0x50]
    unsigned long v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x40]
    void* v10;  // [bp-0x30]
    unsigned long long v11;  // [bp-0x28]
    unsigned long v13;  // rax
    struct_1 *v14;  // r12
    unsigned long long v15;  // rdx
    unsigned long v16;  // rdi
    unsigned long v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v21;  // rax
    unsigned long v22;  // r15
    unsigned long v23;  // r15
    unsigned long long v24;  // rax
    unsigned long v25;  // r14
    unsigned long v26;  // r14

    a0->field_68 = 0;
    a0->padding_0[56].resize(0);
    core::ptr::drop_in_place<core::option::Option<widestring::utfstring::Utf32String>>(&a0->field_88);
    a0->field_88 = 0x8000000000000000;
    a0->field_da = 1;
    if ((char)__CFADD__(a1, 32))
        core::panicking::panic_const::panic_const_add_overflow(&g_14e19d8); /* do not return */
    v9 = a1 + 32.with_capacity_in(4, 4, &g_14bd1e0);
    v10 = 0;
    v13 = fish::common::get_omitted_newline_width();
    if (a1 > v13)
    {
        if ((char)fish::terminal::use_terminfo())
        {
            v14 = fish::terminal::term();
            v6 = v14;
            if (!v14->field_60 || !fish::screen::Screen::reset_abandoning_line::{{closure}}(&v9, v14->field_60.clone(v14->field_68), v15))
            {
                v16 = v14->field_b0;
                if (v16 && v14->field_10 == 1)
                {
                    v17 = v14->field_18;
                    v18 = 237;
                    if (v17 <= 237)
                    {
                        v18 = 8;
                        if (v17 < 9)
                        {
                            if (v17 < 2 || !v14->field_30)
                                goto LABEL_140c43f;
                            fish::screen::Screen::reset_abandoning_line::{{closure}}(&v9, v14->field_30.clone(v14->field_38), v15);
                            v16 = v14->field_b0;
                            v18 = 0;
                        }
                    }
                    fish::screen::Screen::reset_abandoning_line::{{closure}}(&v9, fish::terminal::tparm1(v16, v14->field_b8, v18), v15);
                }
            }
LABEL_140c43f:
            core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&v6);
        }
        else
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v6 = 2;
            v0.write_command(&v6);
            fish::common::str2wcstring(&v6, v1, 0);
            v9.spec_extend(v7, v7 + v8 * 4);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v6);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v21 = fish::common::get_omitted_newline_str();
        v9.spec_extend(v21, v21 + v15 * 4);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v3 = 0;
        v0.write_command(&v3);
        fish::common::str2wcstring(&v3, v1, 0);
        v9.spec_extend(v7, v7 + v8 * 4);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v3);
        v22 = a1 - v13 + 1;
        while (true)
        {
            v23 = v22 - 1;
            if (v22 == 1)
                break;
            v9.push(32);
            v22 = v23;
        }
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    v9.push(13);
    v24 = fish::common::get_omitted_newline_str();
    v9.spec_extend(v24, v24 + v15 * 4);
    v25 = v13 + 1;
    while (true)
    {
        v26 = v25 - 1;
        if (v25 == 1)
            break;
        v9.push(32);
        v25 = v26;
    }
    v9.push(13);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v4 = 10;
    v0.write_command(&v4);
    fish::common::str2wcstring(&v4, v1, 0);
    v9.spec_extend(v7, v7 + v8 * 4);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v4);
    fish::common::wcs2osstring(&v4, v15, 0);
    v11 = fish::common::safe_write_loop(1, v7, v8);
    core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v11);
    a0->field_60 = 0;
    a0.save_status();
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v5, v7);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&v9);
    return;
}
