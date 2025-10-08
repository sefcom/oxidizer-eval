void fish::env::environment_impl::EnvScopedImpl::get_exported(struct_0 **a0, unsigned long long a1)
{
    unsigned long v0;  // [bp-0xa8]
    int v1;  // [bp-0xa0]
    char v2;  // [bp-0x90]
    int v3;  // [bp-0x88]
    unsigned long long v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x48]
    unsigned long long v8[11];  // rbx
    unsigned long long v9;  // rax
    unsigned long long v10[3];  // rax
    void* v11;  // rdx
    void* v12;  // rbx
    void* v13;  // rbx
    unsigned long v14;  // cc_dep1
    char *v15;  // rdi
    unsigned long long v16;  // cc_ndep
    unsigned long long v17;  // cc_ndep

    v8 = *(a0);
    v9 = v8[2];
    if (v9 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d6b48); /* do not return */
    v0 = &v8[2];
    v16 = v9 < 9223372036854775807;
    v8[2] = v9 + 1;
    if (v8[10])
        v8[10].get_exported(a1);
    v5.iter(&v8[3]);
    if (v5.next())
    {
        do
        {
            v13 = v12;
            v14 = (char)v13[16] & 1;
            if (!((char)v13[16] & 1))
            {
                v1.remove(a1, v10);
                v15 = &v1;
            }
            else
            {
                fish::builtins::fish_indent::fish_indent::{{closure}}(&v1, v10[1], v10[2]);
                v4 = *((long long *)&v2);
                v3 = v1;
                v17 = _ccall(17, v14, 0, v16);
                if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*((long long *)v13)) + 1, 0, _ccall(17, v14, 0, v16)))
                    [D] Unsupported jumpkind Ijk_NoDecode at address 20545959()
                *((int128_t *)&v1) = *((int128_t *)v13);
                v2 = (char)v13[16];
                v6.insert(a1, &v3, &v1);
                v15 = &v6;
                v16 = v17;
            }
            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(v15);
            v10 = v5.next();
            v12 = v11;
        } while (v10);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v0);
    return;
}
