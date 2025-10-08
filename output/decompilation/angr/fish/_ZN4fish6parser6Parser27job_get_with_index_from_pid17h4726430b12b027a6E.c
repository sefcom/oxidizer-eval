long long fish::parser::Parser::job_get_with_index_from_pid(unsigned long long *a0, unsigned int a1)
{
    unsigned long v0;  // [bp-0x58]
    unsigned long long v1;  // [bp-0x50]
    unsigned long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x40]
    void* v4;  // [bp-0x38]
    unsigned long long v6[3];  // rax
    unsigned long long v7;  // r15
    unsigned long long v8;  // rax
    struct_0 **v9;  // rdx
    unsigned long long v10;  // rax
    unsigned int *v11;  // rax

    v6 = a0.jobs();
    v2 = v6[1];
    v3 = v6[1] + v6[2] * 8;
    v4 = 0;
    while (true)
    {
        v8 = v2.next();
        if (!v9)
            break;
        v0 = *(v9)->field_28;
        v1 = *(v9)->field_30 * 224 + *(v9)->field_28;
        while (true)
        {
            v10 = v0.find();
            if (!v10)
                break;
            v11 = v10 + 144.get();
            if (!v11)
            {
                core::option::unwrap_failed(&g_14de910); /* do not return */
            }
            else if (*(v11) == a1)
            {
                *(v9).inc_strong();
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
                return v8;
            }
        }
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    return v7;
}
