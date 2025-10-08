long long fish::env::environment_impl::EnvScopedImpl::try_get_function(unsigned long long a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    struct_1 *v0;  // [bp-0x80]
    struct_1 *v1;  // [bp-0x78]
    void* v2;  // [bp-0x70]
    void* v3;  // [bp-0x68]
    unsigned long v4;  // [bp-0x68]
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x58]
    struct_0 *v7;  // [bp-0x50]
    int v8;  // [bp-0x48]
    unsigned long long v9;  // [bp-0x38]
    char v10;  // [bp-0x30]
    struct_1 *v12;  // r13
    void* v13;  // rax
    unsigned long long v14;  // rcx

    v3 = 0;
    if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(a1) + 1, 0, (unsigned long long)(char)(&v10 < 88))))
    {
        v0 = a1;
        while (true)
        {
            v12 = a1.next();
            if (!v12)
                break;
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v0);
            a1 = v12;
            if (v12->field_10 >= 9223372036854775807)
                core::cell::panic_already_mutably_borrowed(&g_14d6950); /* do not return */
            v12->field_10 = v12->field_10 + 1;
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v12->field_10);
            v0 = a1;
            if (v12->field_58)
                break;
            v0 = a1;
        }
        v0.parsed_source_ref();
        v1 = v0;
        while (true)
        {
            v13 = v1.next();
            if (!v13)
                break;
            v2 = v13;
            v8.find_entry(v13, a2, a3);
            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v5);
            v6 = v9;
            v5 = v8;
            if (!v4)
            {
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v2);
            }
            else
            {
                core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v2);
                break;
            }
        }
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v1);
        v14 = a0;
        v7->field_10 = v6;
        *((void*)&v7->field_0) = v5;
        return core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v0);
    }
    [D] Unsupported jumpkind Ijk_NoDecode at address 20542528()
}
