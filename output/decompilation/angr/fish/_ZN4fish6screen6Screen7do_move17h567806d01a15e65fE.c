void fish::screen::Screen::do_move(struct_2 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x70], Other Possible Types: char
    unsigned long long v1;  // [bp-0x68]
    struct_0 *v2;  // [bp-0x58], Other Possible Types: char
    char v3;  // [bp-0x57]
    unsigned long long v4;  // [bp-0x50]
    unsigned long long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v8;  // r13
    unsigned long long v9;  // rbp
    unsigned long long v10;  // rbx
    unsigned long long *v11;  // r12
    unsigned long long v12;  // rbx
    unsigned long long v13;  // r15
    unsigned long long v14;  // r15
    struct_4 *v15;  // rax
    char v16;  // dl
    struct_0 *v17;  // rax
    unsigned long long *v18;  // r12
    unsigned long long v19;  // r15
    unsigned long long v20;  // r15
    void* v21;  // r15
    unsigned long long v22;  // rbx
    unsigned long long v23;  // rbx
    unsigned long long *v24;  // r12
    unsigned long long v25;  // rdx
    unsigned long long v26;  // rdx
    unsigned long long v27;  // rax
    unsigned long long v28;  // rax
    char v30;  // [bp-0x58]

    v8 = a2;
    v9 = a1;
    if (a0->field_38 == 1 && a0->field_60 == a0->field_40)
    {
        v10 = a0->field_68;
        v11 = a0->field_c0;
        if (a2 > v10)
        {
            if (!*(v11))
            {
                *(v11) = 18446744073709551615;
                v11 + 1.push(10);
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
                a0->field_68 = v10 + 1;
            }
            else
            {
                core::cell::panic_already_borrowed(&g_14e1ae0); /* do not return */
            }
        }
        else
        {
            if (!*(v11))
            {
                *(v11) = 18446744073709551615;
                v11 + 1.push(13);
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
            }
            else
            {
                core::cell::panic_already_borrowed(&g_14e1bb8); /* do not return */
            }
        }
        a0->field_60 = 0;
    }
    a2 >> 63.unwrap(&g_14e1af8);
    v12 = a0->field_68;
    v12 >> 63.unwrap(&g_14e1b10);
    v13 = a2;
    v14 = v13 - v12;
    if ((char)(((v13 ^ v12) & (v13 ^ v13 - v12)) >> 63))
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1b28); /* do not return */
    if (v14 >= 0)
    {
        if (!v14)
            goto LABEL_140ce20;
        v15 = fish::common::shell_modes();
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v15, v16 & 1);
        if ((v15->field_c & 4))
        {
            if ((char)fish::terminal::use_terminfo())
            {
                v17 = fish::terminal::term();
                v2 = v17;
                if (v17->field_120 && v17->field_128 == 2 && v17->field_120->field_0 == 10)
                {
                    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&(char)v2);
                    goto LABEL_140cd8a;
                }
                else
                {
                    core::ptr::drop_in_place<alloc::sync::Arc<fish::terminal::Term>>(&(char)v2);
                }
            }
            else
            {
LABEL_140cd8a:
                a0->field_60 = 0;
            }
        }
        v5 = a1;
        v6 = a2;
        v0 = 17;
    }
    else
    {
        v5 = a1;
        v6 = a2;
        v0 = 16;
        v14 = -(v14);
    }
    v18 = a0->field_c0;
    do
    {
        v19 = v14;
        if (*(v18))
            core::cell::panic_already_borrowed(&g_14e1b40); /* do not return */
        *(v18) = 18446744073709551615;
        v30.clone(&v0);
        v18 + 1.write_command(&v30);
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v18);
        v20 = v19 - 1;
        v14 = v20;
    } while (v19 != 1);
    v8 = v6;
    v9 = v5;
LABEL_140ce20:
    v9 >> 63.unwrap(&g_14e1b58);
    v21 = a0->field_60;
    v21 >> 63.unwrap(&g_14e1b70);
    v22 = v9;
    v23 = v22 - v21;
    if ((char)(((v22 ^ v21) & (v22 ^ v22 - v21)) >> 63))
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e1b88); /* do not return */
    if ((v22 != v21 & !v9))
    {
        v24 = a0->field_c0;
        if (*(v24))
            core::cell::panic_already_borrowed(&g_14e1ba0); /* do not return */
        *(v24) = 18446744073709551615;
        v24 + 1.push(13);
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v24);
        v0 = v24.new();
        v1 = v25;
    }
    else
    {
        v0 = a0->field_c0.new();
        v1 = v26;
        if (v23 == -1)
        {
            v2 = 18;
            v0.write_command(&v2);
        }
        else if (v23)
        {
            if (v23 == 1)
            {
                v2 = 19;
                v0.write_command(&v2);
            }
            else
            {
                v27 = v23;
                v28 = -(v27);
                if ((char)(-(v27) >> 63))
                    v28 = v23;
                v3 = 2 - (char)(v23 >> 63);
                v4 = v28;
                v2 = 20;
                v0.write_command(&v2);
            }
        }
    }
    a0->field_60 = v9;
    a0->field_68 = v8;
    core::ptr::drop_in_place<fish::terminal::BufferedOutputter>(&v0);
    return;
}
