long long fish::env::environment_impl::EnvNodeRef::next(struct_0 *a0)
{
    unsigned long long v1;  // rax
    void* v2;  // rax
    void* v3;  // rbx

    v1 = a0->field_10;
    if (v1 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d68b0); /* do not return */
    a0->field_10 = v1 + 1;
    v2 = a0->field_50;
    if (!v2)
    {
        v3 = 0;
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(v2) + 1, 0, _ccall(20, v2, 0, (unsigned long long)(char)(v1 < 9223372036854775807)))))
    {
        v3 = a0->field_50;
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20539821()
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a0->field_10);
    return v3;
}
