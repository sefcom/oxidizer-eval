long long fish::proc::process_clean_after_marking(struct_1 *a0, char a1)
{
    char v0;  // [bp-0x149]
    unsigned int v1;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x148]
    char *v3;  // [bp-0x140]
    void* v4;  // [bp-0x138]
    unsigned long long v5;  // [bp-0x130]
    void* v6;  // [bp-0x128]
    char *v7;  // [bp-0x120], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x118]
    char *v9;  // [bp-0x110]
    char *v10;  // [bp-0x108]
    int v11;  // [bp-0x100]
    unsigned long long v12;  // [bp-0xf0]
    unsigned long long v13;  // [bp-0xe8]
    void* v14;  // [bp-0xc8]
    unsigned long long v15;  // [bp-0xc0]
    void* v16;  // [bp-0xb8]
    void* v17;  // [bp-0xb0]
    unsigned long long v18;  // [bp-0xa8]
    void* v19;  // [bp-0xa0]
    char v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    int v22;  // [bp-0x78]
    unsigned long long v23;  // [bp-0x68]
    char v24;  // [bp-0x58]
    void* v26;  // rbx
    unsigned long long v28;  // rdx
    unsigned long long v29[3];  // rax
    unsigned long long v30;  // rbp
    unsigned long long v31;  // r15
    unsigned long long *v32;  // r12
    struct_0 *v33;  // rax
    unsigned long v34;  // r13
    unsigned long long v35[3];  // rax
    unsigned long long *v36;  // rbp
    unsigned long long *v37;  // rbp
    unsigned long long *v38;  // rbp
    unsigned long long v40;  // rax

    v0 = a1;
    if (a0->field_5d)
    {
        v26 = 0;
    }
    else
    {
        v24.scoped_mod(&a0->padding_0[64]);
        fish::proc::remove_disowned_jobs(a0.jobs_mut());
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
        v14 = 0;
        v15 = 8;
        v16 = 0;
        v3 = &v0;
        v4 = 0;
        v5 = 8;
        v6 = 0;
        v29 = a0.jobs();
        v1 = v28;
        v30 = v29[2];
        if (v29[2])
        {
            v31 = v29[1];
            v32 = 0;
            do
            {
                if ((char)*((long long *)(v31 + (char *)v32)) + 16.is_stopped())
                {
                    v33 = *((long long *)(v31 + (char *)v32)) + 16.flags();
                    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
                    if (!v33->field_1)
                    {
                        v34 = *((long long *)(v31 + (char *)v32)) + 16;
                        if ((char)v34.is_constructed() && (v0 || !fish::proc::job_or_proc_wants_summary(v34)) && (char)fish::proc::job_wants_summary(*((long long *)(v31 + (char *)v32)) + 16))
                        {
                            *((char *)(*((long long *)(v31 + (char *)v32)) + 16.mut_flags() + 1)) = 1;
                            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
                            *((long long *)(v31 + (char *)v32)).inc_strong();
                            v4.push(*((long long *)(v31 + (char *)v32)), &g_14df930);
                        }
                    }
                }
                v32 += 1;
            } while (v30 * 8 != v32);
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v1);
        v35 = a0.jobs();
        v36 = 0;
        while (true)
        {
            v37 = v36;
            if (v35[2] * 8 == v37)
                break;
            v38 = v37 + 1;
            fish::proc::generate_process_exit_events(*((long long *)(v35[1] + (char *)v37)) + 16, &v14);
            v36 = v38;
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
        v17 = 0;
        v18 = 8;
        v19 = 0;
        v7 = &v3;
        v8 = &v4;
        v9 = &v14;
        v10 = &v17;
        a0.jobs_mut().retain(&v7);
        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
        v7.into_iter(&v17);
        if (v7.next())
        {
            do
            {
                v13 = v40;
                fish::proc::save_wait_handle_for_completed_job(v40 + 16, a0.mut_wait_handles());
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v28);
                core::ptr::drop_in_place<alloc::rc::Rc<fish::proc::Job>>(&v13);
                v40 = v7.next();
            } while (v40);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<alloc::rc::Rc<fish::proc::Job>>>(&v7);
        v1 = fish::proc::summarize_jobs((unsigned int)a0, 0x8, 0);
        v13.into_iter(&v14);
        v7.next(&v13);
        if (!((char)(((0 ^ v7) & (0 ^ -(v7))) >> 63)))
        {
            do
            {
                v23 = v12;
                v22 = v11;
                memcpy(&v21, &v9, 16);
                memcpy(&v20, &v7, 16);
                fish::event::fire(a0, &v20);
                v7.next(&v13);
            } while (v7 != 0x8000000000000000);
        }
        core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::event::Event>>(&v13);
        v26 = v2;
        if ((char)v26)
        {
            v7 = std::io::stdio::stdout();
            v13 = v7.flush();
            core::ptr::drop_in_place<core::option::Option<std::io::error::Error>>(&v13);
        }
        core::ptr::drop_in_place<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>(&v4);
        core::ptr::drop_in_place<fish::common::ScopeGuard<&fish::common::ScopedCell<fish::parser::ScopedData>,fish::common::ScopedCell<fish::parser::ScopedData>::scoped_mod<fish::reader::reader_read::{{closure}}>::{{closure}}>>(&v24);
    }
    return v26 & 4294967295;
}
