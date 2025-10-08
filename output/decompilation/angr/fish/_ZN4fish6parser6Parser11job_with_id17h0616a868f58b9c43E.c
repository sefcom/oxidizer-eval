long long fish::parser::Parser::job_with_id(unsigned long long *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x38]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    unsigned long long *v4;  // r15
    unsigned long v5;  // r15
    unsigned long long v6;  // r12
    void* v7;  // r14
    unsigned long v8;  // r15
    unsigned long long v9;  // rdx

    v0 = v2;
    v3 = a0.jobs();
    v4 = v3->field_8;
    if (a1)
    {
        v5 = v3->field_8 + 1;
        v6 = v3->field_10 * 8;
        v7 = 0;
        while (true)
        {
            v8 = v5;
            if (!v6)
                break;
            v6 -= 8;
            v5 = v8 + 8;
            if (a1 == (int)*((long long *)(v8 + 8)) + 16.job_id())
                goto LABEL_13ec213;
        }
    }
    else if (v3->field_10)
    {
LABEL_13ec213:
        *(v4).inc_strong();
        v7 = *(v4);
    }
    else
    {
        v7 = 0;
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v9);
    return v7;
}
