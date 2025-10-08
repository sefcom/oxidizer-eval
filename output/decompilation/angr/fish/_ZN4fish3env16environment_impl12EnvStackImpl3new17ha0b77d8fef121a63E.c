long long fish::env::environment_impl::EnvStackImpl::new(struct_0 *a0)
{
    unsigned long v0;  // [bp-0x18], Other Possible Types: unsigned long long
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax
    unsigned long v4;  // cc_op
    unsigned long v5;  // cc_dep1
    unsigned long v6;  // cc_dep2
    unsigned long v7;  // cc_ndep
    unsigned long long v8;  // rax

    v0 = v2;
    v3 = once_cell::sync::OnceCell<T>::get_or_try_init();
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*(v3)) + 1, 0, _ccall(v4, v5, v6, v7))))
    {
        v0 = *(v3);
        v8 = a0.new(0.new(0), *(v3));
        a0->field_68 = 0;
        a0->field_70 = 8;
        a0->field_78 = 0;
        return v8;
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20547955()
}
