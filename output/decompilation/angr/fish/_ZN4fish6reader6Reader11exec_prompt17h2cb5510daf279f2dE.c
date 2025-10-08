long long fish::reader::Reader::exec_prompt(struct_0 *a0, void* a1, char a2, unsigned int a3)
{
    int v0;  // [bp-0xc8], Other Possible Types: char
    unsigned long long v1;  // [bp-0xb8]
    char v2;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x58]
    unsigned long v9;  // rbp
    unsigned long v10;  // r12
    unsigned long long v11;  // r12
    unsigned int v12;  // r15d
    unsigned long v13;  // r13
    unsigned long v14;  // r12
    unsigned long v15;  // r13
    struct_1 *v16;  // rax
    unsigned long long v17;  // rdx

    v9 = a3;
    v10 = a1 + 64;
    v6.scoped_mod(v10);
    v7.scoped_mod(v10);
    v5.new(fish::reader::reader_save_screen_state);
    v5.disable_tty_protocols();
    a1.update_termsize();
    *((unsigned long long *)((char *)&a0->field_728 + 8)) = 0;
    if ((char)fish::function::exists("f", 16, a1))
    {
        v2.exec_prompt_cmd(a1, "f", 16, v9);
        v0.from_iter(&v2);
        core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&(&a0->field_720)[1]);
        *((unsigned long long *)((char *)&a0->field_728 + 8)) = v1;
        *((void*)&(&a0->field_720)[1]) = v0;
    }
    if (a2)
    {
        a0->field_720 = 0;
        *((unsigned long long *)&a0->field_740) = 0;
        v11 = a0->field_4c0;
        v12 = v9;
        if (v11)
        {
            v13 = a0->field_4b8;
            if ((char)v13.equal(v11, "f", 11))
            {
                if ((char)fish::function::exists(v13, v11, a1))
                {
                    v13 = a0->field_4b8;
                    v11 = a0->field_4c0;
                }
                else
                {
                    v13 = "e";
                    v11 = 35;
                }
            }
            v2.exec_prompt_cmd(a1, v13, v11, v12);
            fish::wcstringutil::join_strings(&v0, v3, v4, 10);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a0->field_710);
            a0->field_720 = v1;
            *((void*)&a0->field_710) = v0;
            core::ptr::drop_in_place<alloc::vec::Vec<widestring::utfstring::Utf32String>>(&v2);
            if ((char)v9)
                a0->padding_0[920].multiline_prompt_hack();
        }
        v14 = a0->field_4d8;
        if (v14)
        {
            v15 = a0->field_4d0;
            if ((char)v15.equal(v14, "f", 17))
            {
                if (!(char)fish::function::exists(v15, v14, a1))
                    goto LABEL_140316d;
                v15 = a0->field_4d0;
                v14 = a0->field_4d8;
            }
            v2.exec_prompt_cmd(a1, v15, v14, v12);
            v0.from_iter(&v2);
            core::ptr::drop_in_place<widestring::utfstring::Utf32String>(&a0->field_738);
            *((unsigned long long *)&a0->field_740) = v1;
            *((void*)&a0->field_738) = v0;
        }
    }
LABEL_140316d:
    fish::reader::reader_write_title(4, 0, a1, 0);
    fish::proc::job_reap(a1, 1);
    v16 = a1.libdata();
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v17);
    a0->padding_758[227] = a0->padding_758[227] | v16->field_80;
    *((char *)(a1.libdata_mut() + 128)) = 0;
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v17);
    core::ptr::drop_in_place<fish::tty_handoff::TtyHandoff>(&v5);
    core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v7);
    return core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v6);
}
