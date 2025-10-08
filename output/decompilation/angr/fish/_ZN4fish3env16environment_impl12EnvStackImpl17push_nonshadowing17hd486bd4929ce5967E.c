long long fish::env::environment_impl::EnvStackImpl::push_nonshadowing(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep
    unsigned long v7;  // rbx
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = v2;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a0->field_50) + 1, 0, _ccall(v3, v4, v5, v6))))
    {
        v7 = &a0->field_50;
        v8 = 0.new(a0->field_50);
        v9 = core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(v7);
        *((unsigned long long *)v7) = v8;
        return v9;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20550994()
}
