long long fish::env::environment_impl::EnvStackImpl::resolve_unspecified_scope(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x40]
    struct_0 *v1;  // [bp-0x38]
    unsigned long long v3;  // cc_ndep
    struct_0 *v4;  // rax
    struct_0 *v5;  // rdi

    a0.parsed_source_ref();
    v0 = a0;
    while (true)
    {
        v4 = v0.next();
        if (!v4)
            break;
        v1 = v4;
        if (v4->field_10 >= 9223372036854775807)
            core::cell::panic_already_mutably_borrowed(&g_14d6db0); /* do not return */
        v5 = v4;
        v3 = (&v5->field_10 <= v5 ? 1 : 0);
        v4->field_10 = v4->field_10 + 1;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v5->field_10);
        if (v4->field_58)
        {
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
            return v1;
        }
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
    }
    core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a1) + 1, 0, _ccall(20, v4, 0, v3))))
        return a1;
    [D] Unsupported jumpkind Ijk_NoDecode at address 20553647()
}
