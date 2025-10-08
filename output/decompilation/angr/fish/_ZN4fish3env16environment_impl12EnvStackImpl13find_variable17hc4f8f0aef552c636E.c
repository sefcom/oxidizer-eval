long long fish::env::environment_impl::EnvStackImpl::find_variable(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    struct_0 *v0;  // [bp-0x88]
    struct_0 *v1;  // [bp-0x80]
    int v2;  // [bp-0x78], Other Possible Types: unsigned long
    void* v3;  // [bp-0x78], Other Possible Types: unsigned long
    char v4;  // [bp-0x68]
    unsigned long long v5;  // [bp-0x60]
    unsigned long long v6;  // [bp-0x58]
    unsigned long long v7;  // [bp-0x50]
    uint128_t v8;  // [bp-0x48]
    struct_0 *v10;  // r15
    unsigned long v11;  // rax
    unsigned long v12;  // r13
    void* v13;  // rax

    v0 = a1.find_in_chain(a3, a4);
    if (!v0)
    {
        v10 = a2.find_in_chain(a3, a4);
        core::ptr::drop_in_place<core::option::Option<fish::env::environment_impl::EnvNodeRef>>(&v0);
        v0 = v10;
        if (!v0)
        {
            *((unsigned long long *)a0) = 0;
            return (unsigned long long)core::ptr::drop_in_place<core::option::Option<fish::env::environment_impl::EnvNodeRef>>(&v0);
        }
    }
    v1 = v0;
    v11 = v0->field_10;
    if (v11 >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d6dd8); /* do not return */
    v12 = &v0->field_10;
    v0->field_10 = v11 + 1;
    v13 = v0 + 1.get_inner(a3, a4);
    if (!v13)
    {
        v3 = 0;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v12);
        if (!v2)
        {
            v5 = &g_14d6dc8;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            core::panicking::panic_fmt(&v5, &g_14d6df0); /* do not return */
        }
    }
    else if (!((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add((long long)v13[24]) + 1, 0, _ccall(20, v13, 0, (unsigned long long)(char)(v11 < 9223372036854775807)))))
    {
        *((int128_t *)&v2) = (int128_t)v13[24];
        v4 = (char)v13[40];
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v12);
        if (!v3)
        {
            v5 = &g_14d6dc8;
            v6 = 1;
            v7 = 8;
            v8 = 0;
            core::panicking::panic_fmt(&v5, &g_14d6df0); /* do not return */
        }
    }
    else
    {
        [D] Unsupported jumpkind Ijk_NoDecode at address 20554103()
    }
    *((long long *)&a0[16]) = *((long long *)&v4);
    *(a0) = v2;
    return core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
}
