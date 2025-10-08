long long fish::env::environment_impl::EnvStackImpl::find_in_chain(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    struct_0 *v1;  // [bp-0x38]
    struct_0 *v3;  // rax
    unsigned long long v4;  // rax
    struct_0 *v5;  // rbx

    a0.parsed_source_ref();
    v0 = a0;
    while (true)
    {
        v3 = v0.next();
        if (v3)
        {
            v1 = v3;
            if (v3->field_10 >= 9223372036854775807)
                core::cell::panic_already_mutably_borrowed(&g_14d6d10); /* do not return */
            v3->field_10 = v3->field_10 + 1;
            v4 = v3 + 1.get_inner(a1, a2);
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v3->field_10);
            if (!v4)
            {
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
            }
            else
            {
                v5 = v1;
                break;
            }
        }
        else
        {
            v5 = 0;
            break;
        }
    }
    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
    return v5;
}
