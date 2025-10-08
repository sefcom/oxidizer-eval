long long fish::builtins::disown::disown(unsigned long long a0, struct_0 *a1, unsigned long long a2[2], unsigned long long a3)
{
    unsigned short v0;  // [bp-0xd0]
    char v1;  // [bp-0xcf]
    unsigned short v2;  // [bp-0xce]
    unsigned int v3;  // [bp-0xcc]
    void* v4;  // [sp-0xc8], Other Possible Types: unsigned long
    unsigned long long v5[3];  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    char v8;  // [bp-0xa8], Other Possible Types: unsigned long
    char v9;  // [bp-0xa0], Other Possible Types: unsigned long, unsigned long long
    void* v10;  // [bp-0x98], Other Possible Types: unsigned long
    unsigned long v11;  // [bp-0x90]
    unsigned long v12;  // [bp-0x88]
    char *v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x78]
    unsigned long v15;  // [bp-0x60]
    void* v16;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x50]
    void* v18;  // [bp-0x48]
    char v19;  // [bp-0x40]
    unsigned long long v21;  // rbx
    void* v22;  // rcx
    unsigned long v23;  // rax
    void* v24;  // rdx
    unsigned long v25;  // r14
    unsigned long long v26[3];  // rax
    unsigned long long v27;  // rbx
    unsigned long long *v28;  // rbp
    unsigned long long v29;  // rdx
    unsigned long long v30;  // rdx
    char v32;  // sil
    unsigned long long v33;  // rax

    v8.parse(a2, a3, a0, a1);
    v21 = 1;
    if (v9 == 2)
    {
        v22 = 0;
        v23 = *((int *)&v8);
        v24 = 0;
    }
    else if (a3)
    {
        v25 = a2[0];
        if ((v9 & 1))
        {
            v23 = fish::builtins::shared::builtin_print_help(a0, a1, v25, a2[1]);
            v22 = 0;
            v24 = 0;
            v21 = 0;
        }
        else
        {
            v15 = a2[1];
            if (v8 == a3)
            {
                v4 = 0;
                v26 = a0.jobs();
                if (v26[2])
                {
                    v27 = v26[1];
                    v28 = 0;
                    do
                    {
                        if ((char)*((long long *)(v27 + (char *)v28)) + 16.is_constructed() && !*((long long *)(v27 + (char *)v28)) + 16.is_completed())
                        {
                            *((long long *)(v27 + (char *)v28)).inc_strong();
                            core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::proc::Job>>>(&v4);
                            v4 = *((long long *)(v27 + (char *)v28));
                            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v29);
                            v8 = v4;
                            fish::builtins::disown::disown_job(v25, v15, a1->field_10, v4 + 16);
                            v0 = 0;
                            core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v8);
                            goto LABEL_1349231;
                        }
                        v28 += 1;
                    } while (v26[2] * 8 != v28);
                    goto LABEL_1349231;
                }
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v29);
                v16 = 0;
                v17 = 4;
                v18 = 0;
                v6 = "%";
                v7 = 32;
                *(v5) = 0x8000000000000000;
                v8 = 1;
                v9 = v25;
                v10 = v15;
                fish_printf::printf_impl::sprintf_locale(&v19, &v16, v5.localize(), v30, ".", &v8, 1);
                v19.unwrap(&g_14c8cd0);
                core::ptr::drop_in_place<[fish_printf::arg::Arg; 1]>(&v8);
                core::ptr::drop_in_place<core::result::Result<fish::parser::EvalRes,widestring::utfstring::Utf32String>>(&v5);
                memcpy(&v8, &v16, 16);
                v10 = 0;
                a1->field_10.append(&v8);
                v3 = 1;
                v32 = 1;
                goto LABEL_1349231;
            }
            else
            {
                v0 = 0;
                v8 = a2 + 1;
                v9 = &a2[a3];
                v10 = a1->field_10;
                v11 = v25;
                v12 = v15;
                v13 = &(char)v0;
                v14 = a0;
                (char)v5.collect(&v8);
                if (((char)v0 & 1))
                {
                    core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>(&(char)v5);
                    v23 = v3;
                    v22 = 0;
                    v24 = 0;
                }
                else
                {
                    core::slice::<impl [T]>::sort_unstable_by_key(v6, v7);
                    (char)v5.dedup_by_key();
                    v8.into_iter(&(char)v5);
                    if (v8.next())
                    {
                        do
                        {
                            v16 = v33;
                            fish::builtins::disown::disown_job(v25, v15, a1->field_10, v33 + 16);
                            core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v16);
                            v33 = v8.next();
                        } while (v33);
                    }
                    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::rc::Rc<fish::proc::Job>>>(&v8);
LABEL_1349231:
                    v23 = v3;
                    v22 = v2 * 0x10000;
                    v24 = v1 * 0x100;
                    v21 = v32;
                }
            }
        }
    }
    else
    {
        core::panicking::panic_bounds_check(0, 0, &g_14c8cb8); /* do not return */
    }
    return v23 * 0x100000000 | v22 | v24 | v21;
}
