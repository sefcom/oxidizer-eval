long long fish::builtins::bg::bg(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long long
    char v1;  // [bp-0x108], Other Possible Types: unsigned long
    int v2;  // [bp-0x108]
    char v3;  // [bp-0x100], Other Possible Types: unsigned long, unsigned long long
    void* v4;  // [bp-0xf8], Other Possible Types: unsigned long, unsigned long long
    void* v5;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xe8], Other Possible Types: unsigned short
    char *v8;  // [bp-0xe0], Other Possible Types: unsigned long
    void* v9;  // [bp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xb8]
    void* v11;  // [bp-0xb0], Other Possible Types: unsigned long long
    unsigned short v12;  // [bp-0xa8]
    unsigned int v13;  // [bp-0xa4]
    unsigned long long v14;  // [bp-0xa0]
    void* v15;  // [bp-0x98], Other Possible Types: char
    unsigned long long v16;  // [bp-0x90]
    void* v17;  // [bp-0x88]
    unsigned long long v18[3];  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    char v21;  // [bp-0x58], Other Possible Types: unsigned long long
    char v22;  // [bp-0x50]
    char v23;  // [bp-0x40]
    unsigned long long v25;  // r14
    unsigned int v26;  // ebx
    unsigned long v27;  // r15
    unsigned long long v28;  // rcx
    unsigned long long v29[3];  // rax
    char v30;  // al
    unsigned long long v31;  // rdx
    unsigned long v33;  // cc_ndep
    unsigned int v34;  // eax
    unsigned int v35;  // ebp
    unsigned long long v36;  // rax
    unsigned long long v37;  // rdx

    v25 = a2;
    v0.parse(a2, a3, a0, a1);
    v26 = 1;
    if (v3 == 2)
    {
        v25 = *((int *)&v0);
    }
    else if (a3)
    {
        v27 = a2[0];
        v28 = a2[1];
        if ((v3 & 1))
        {
            fish::builtins::shared::builtin_print_help(a0, a1, v27, v28);
            v26 = 0;
        }
        else if (v0 == a3)
        {
            v14 = v28;
            v29 = a0.jobs();
            v1 = v29[1];
            v3 = v29[1] + v29[2] * 8;
            v30 = v1.position();
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v31);
            if ((v30 & 1))
            {
                v26 = fish::builtins::bg::send_to_bg(a0, a1->field_10, v27, v14, v31);
                v25 = 1;
            }
            else
            {
                v9 = 0;
                v10 = 4;
                v11 = 0;
                v19 = "%";
                v20 = 32;
                *(v18) = 0x8000000000000000;
                v0 = 1;
                v3 = v27;
                v4 = v14;
                fish_printf::printf_impl::sprintf_locale(&v15, &v9, v18.localize(), v31, ".", &v0, 1);
                v15.unwrap(&g_14c74c0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v0);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v18);
                memcpy(&v0, &v9, 16);
                v4 = 0;
                a1->field_10.append(&v0);
                v25 = 1;
            }
        }
        else
        {
            v12 = 0;
            if (!((char)_ccall(6, 8, v0, a3, v33)))
                core::slice::index::slice_start_index_len_fail(v0, a3, &g_14c74a8); /* do not return */
            v0 = &a2[v0];
            v3 = &a2[a3];
            v4 = a1->field_10;
            v6 = v27;
            v25 = v28;
            v7 = v28;
            v8 = &v12;
            v21.collect(&v0);
            if (((char)v12 & 1))
            {
                v25 = v13;
                core::ptr::drop_in_place<alloc::vec::Vec<i32>>(v21, *((long long *)&v22));
            }
            else
            {
                (char)v18.into_iter(&v21);
                v34 = (char)v18.next();
                if (v34)
                {
                    v35 = v34;
                    do
                    {
                        v36 = a0.job_get_with_index_from_pid(v35);
                        if (v37)
                        {
                            v0 = v37;
                            if (((char)fish::builtins::bg::send_to_bg(a0, v4, v27, v25, v36) & 1))
                            {
                                core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v0);
                                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::proc::Pid>>(&(char)v18);
                                return 4294967297;
                            }
                            core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v0);
                        }
                        else
                        {
                            v15 = 0;
                            v16 = 4;
                            v17 = 0;
                            v10 = "%";
                            v11 = 29;
                            v9 = 0x8000000000000000;
                            v1 = 1;
                            v3 = v27;
                            v5 = v25;
                            v7 = 8197;
                            v8 = v35;
                            fish_printf::printf_impl::sprintf_locale(&v23, &v15, v9.localize(), v37, ".", &(unsigned long long)v2, 2);
                            v23.unwrap(&g_14c7490);
                            core::ptr::drop_in_place<[fish_printf::arg::Arg; 2]>(&(unsigned long long)v2);
                            core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v9);
                            *((int128_t *)&v2) = *((int128_t *)&v15);
                            v5 = 0;
                            v4.append(&(unsigned long long)v2);
                        }
                        v35 = (char)v18.next();
                    } while (v35);
                }
                core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::proc::Pid>>(&(char)v18);
                v26 = 0;
            }
        }
    }
    else
    {
        v25 = 2;
    }
    return v26 | v25 * 0x100000000;
}
