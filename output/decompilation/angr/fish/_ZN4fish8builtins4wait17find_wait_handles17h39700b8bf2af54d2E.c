long long fish::builtins::wait::find_wait_handles(struct_6 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x81]
    void* v1;  // [bp-0x80]
    unsigned long v2;  // [bp-0x70]
    void* v3;  // [bp-0x50], Other Possible Types: unsigned long
    unsigned long v4;  // [bp-0x48]
    unsigned long v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    struct_2 *v8;  // rax
    void* *v9;  // rdx
    unsigned long long v10;  // rbx
    void* *v11;  // rbp
    void* *v12;  // rbp
    unsigned int v13;  // r13d
    unsigned long long v14;  // rax
    unsigned int v15;  // r13d
    struct_4 *v16;  // rax
    struct_3 **v17;  // r14
    unsigned long v18;  // rax
    char v19;  // al
    unsigned long long v20[9];  // rcx
    unsigned long v21;  // rdx
    unsigned long long v22;  // rbp
    unsigned long long v23;  // r15
    unsigned long long v24;  // rcx
    unsigned long v25;  // r14
    unsigned long long v26;  // rbp
    unsigned long long v27;  // rcx
    unsigned long long v28;  // rbp
    unsigned long long v29;  // rbp
    void* v30;  // rax
    unsigned long long v35;  // rbx

    v8 = a1.mut_wait_handles();
    if (a0->field_0)
    {
        v3 = v8->field_18;
        v4 = v8->field_30->field_10;
        v5 = v8->field_38->field_8;
        if (!v9 || !v3.next())
        {
            v10 = 0;
        }
        else
        {
            v10 = 0;
            while (true)
            {
                v12 = v11;
                if ((char)fish::builtins::wait::wait_handle_matches(a0, *(v12)))
                {
                    *(v12).inc_strong();
                    v10 = v10 & 0xffffffffffffff00 | 1;
                    a2.push(*(v12), &g_14d54d0);
                }
                if (!v3.next())
                    break;
                v9 = v9;
                if (!v11)
                    break;
            }
        }
        v13 = v10;
    }
    else
    {
        v14 = v8.get_by_pid(a0->field_8);
        if (v14)
        {
            v13 = v15 & 0xffffff00 | 1;
            a2.push(v14, &g_14d54a0);
        }
        else
        {
            v13 = 0;
        }
    }
    v16 = a1.jobs();
    if (v16->field_10)
    {
        v17 = v16->field_8;
        v6 = &v17[v16->field_10];
        v18 = v17 + 1;
        do
        {
            v19 = fish::builtins::wait::can_wait_on_job(&*(v17)->padding_0[16]);
            v2 = v18;
            v20 = *(v17);
            if (!v20[6])
            {
                v21 = v13;
            }
            else
            {
                v22 = v20[5];
                v23 = v20[6] * 224 + v22;
                v24 = v22 + 224;
                v21 = v13;
                if (v19)
                {
                    while (true)
                    {
                        v0 = v21;
                        while (true)
                        {
                            v26 = v22;
                            v22 = v24;
                            v3 = v26.make_wait_handle(v20[8]);
                            if (v3)
                                break;
                            core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v3);
                            v24 = v22 + 224;
                            if (v22 == v23)
                            {
                                v21 = v0;
                                goto LABEL_1388913;
                            }
                        }
                        v1 = v3;
                        if ((char)fish::builtins::wait::wait_handle_matches(a0, v1))
                        {
                            v1.inc_strong();
                            v0 = 1;
                            a2.push(v1, &g_14d54b8);
                        }
                        core::ptr::drop_in_place<alloc::rc::Rc<fish::wait_handle::WaitHandle>>(&v1);
                        v27 = v22 + 224;
                        if (v22 == v23)
                            v28 = v22;
                        else
                            v28 = v27;
                        v24 = v28;
                        v21 = v0;
                    }
                }
                else
                {
                    while (true)
                    {
                        v29 = v24;
                        v30 = v22.make_wait_handle(v20[8]);
                        v3 = v30;
                        if (!v30)
                        {
                            core::ptr::drop_in_place<core::option::Option<alloc::rc::Rc<fish::wait_handle::WaitHandle>>>(&v3);
                            v22 = v29;
                            v24 = v29 + 224;
                            if (v22 != v23)
                                continue;
                            v21 = v25 & 4294967295;
                            break;
                        }
                        else
                        {
                            v1 = v30;
                            v25 = v25 & 0xffffffffffffff00 | (char)fish::builtins::wait::wait_handle_matches(a0, v30) | (char)v25;
                            core::ptr::drop_in_place<alloc::rc::Rc<fish::wait_handle::WaitHandle>>(&v1);
                            v21 = v25 & 4294967295;
                            if (v29 == v23)
                            {
                                v22 = v29;
                                v24 = v29;
                                if (v22 == v23)
                                    break;
                            }
                            else
                            {
                                v22 = v29;
                                v24 = v29 + 224;
                                if (v22 == v23)
                                    break;
                            }
                        }
                    }
                }
            }
LABEL_1388913:
            v13 = v21;
            v17 = v2;
            v18 = &v17[v17 != v6];
        } while (v17 != v6);
    }
    else
    {
        v21 = v13;
    }
    v35 = v21 & 4294967295;
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    return (unsigned int)v35 & 0xffffff00 | (char)v35 & 1;
}
