long long fish::env::environment_impl::EnvStackImpl::remove_from_chain(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x58]
    struct_0 *v1;  // [bp-0x50]
    int v2;  // [bp-0x48]
    char v3;  // [bp-0x38]
    struct_0 *v5;  // r15
    unsigned long v6;  // rbp
    unsigned long v7;  // r12

    a0.parsed_source_ref();
    v0 = a0;
    while (true)
    {
        v5 = v0.next();
        if (!v5)
            break;
        v1 = v5;
        if (v5->field_10)
            core::cell::panic_already_borrowed(&g_14d6d28); /* do not return */
        v6 = &v5->field_10;
        v5->field_10 = 18446744073709551615;
        v7 = v5 + 1;
        v2.remove(v7, a1, a2);
        if (!(long long)v2)
        {
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v2);
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
        }
        else
        {
            if ((v3 & 1))
                v7.changed_exported();
            core::ptr::drop_in_place<fish::env::var::EnvVar>(&v2);
            core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
            break;
        }
    }
    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
    return (unsigned int)a2 & 0xffffff00 | v5;
}
