long long fish::parse_execution::ExecutionContext::run_while_statement(struct_0 *a0, void* a1, unsigned long a2, unsigned long long a3)
{
    char v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x78]
    int v2;  // [bp-0x70]
    unsigned long v3;  // [bp-0x50]
    uint128_t v4;  // [bp-0x48]
    unsigned int v5;  // [bp-0x38]
    unsigned short v6;  // [bp-0x34]
    unsigned long long v9;  // rax
    unsigned int v10;  // r13d
    unsigned long long v11;  // rdx
    unsigned long long v12;  // rax
    char v13;  // al
    char v15;  // r14b

    fish::trace::trace_if_enabled(a1.parser(), "w", 5);
    v0.just(0);
    v3 = a2 + 16;
    while (true)
    {
        if (!(char)a0.run_job_conjunction(a1, v3) && !(char)a0.run_andor_job_list(a1, a2 + 176))
        {
            if ((int)a1.parser().get_last_status())
            {
                a1.parser().set_last_statuses(&v0);
                v10 = 0;
                break;
            }
            v9 = a0->field_28.check_end_execution(a1);
            v10 = v9;
            if ((char)v9 != 4)
                goto LABEL_13dfa01;
            *((char *)(a1.parser().libdata_mut() + 129)) = 0;
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
            v6 = 2;
            v4 = 0;
            v5 = 0;
            v12 = a1.parser().push_block(&v4);
            a0.run_job_list(a1, a3);
            v13 = a0->field_28.check_end_execution(a1);
            a1.parser().pop_block(v12);
            if (v13 == 1)
            {
                v15 = *((char *)(a1.parser().libdata() + 129));
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
                *((char *)(a1.parser().libdata_mut() + 129)) = 0;
                core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v11);
                if (v15 != 1)
                    goto LABEL_13df8a0;
                goto LABEL_13df9fe;
            }
            if (fish::proc::no_exec())
                goto LABEL_13df9fe;
LABEL_13df8a0:
            core::ptr::drop_in_place<fish::env::var::Statuses>(v1, (long long)v2);
            v0.get_last_statuses(a1.parser());
        }
        else
        {
LABEL_13df9fe:
            v10 = 0;
LABEL_13dfa01:
            core::ptr::drop_in_place<fish::env::var::Statuses>(v1, (long long)v2);
            break;
        }
    }
    fish::trace::trace_if_enabled(a1.parser(), "e", 9);
    return v10;
}
