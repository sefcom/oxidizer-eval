long long fish::env::environment_impl::EnvStackImpl::push_shadowing(struct_2 *a0)
{
    struct_0 *v0;  // [bp-0xd8]
    unsigned long v1;  // [bp-0xd0]
    struct_3 *v2;  // [bp-0xc8]
    struct_0 *v3;  // [bp-0xc0]
    struct_0 *v4;  // [bp-0xb8]
    struct_0 *v5;  // [bp-0xa8]
    int v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x78]
    int v8;  // [bp-0x70]
    char v9;  // [bp-0x58]
    struct_0 *v11;  // r13
    unsigned long v12;  // r12
    unsigned long v13;  // r13
    struct_3 *v14;  // rax
    unsigned long v15;  // rcx
    unsigned long long v16[3];  // rax
    unsigned long long v17[3];  // rbx
    void* v18;  // rdx
    void* v19;  // rbp
    unsigned long long v20;  // rax
    unsigned long long v21;  // cc_ndep
    unsigned long long v22;  // cc_ndep
    struct_2 *v23;  // rdi
    int v24;  // [bp-0xa0]
    char v25;  // [bp-0x90]

    v11 = 1.new(0);
    v5 = v11;
    a0->field_50.parsed_source_ref();
    v4 = a0->field_50;
    v0 = v4;
    v12 = &v11->field_10;
    v3 = v11;
    v13 = v11 + 1;
    while (true)
    {
        v14 = v0.next();
        if (!v14)
        {
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
            v23 = a0;
            a0->field_50 = v3;
            return a0[1].padding_0[16].push(v4);
        }
        v2 = v14;
        v15 = v14->field_10;
        if (v15 >= 9223372036854775807)
            core::cell::panic_already_mutably_borrowed(&g_14d6cb8); /* do not return */
        v1 = &v14->field_10;
        v21 = v15 < 9223372036854775807;
        v14->field_10 = v15 + 1;
        v9.iter(v14 + 1);
        v16 = v9.next();
        if (v16)
        {
            v17 = v16;
            v19 = v18;
            do
            {
                if (((char)v19[16] & 1))
                {
                    if (!*((long long *)v12))
                    {
                        *((unsigned long long *)v12) = 18446744073709551615;
                        v20 = v13.get_inner(v17);
                        v21 = v21;
                        if (!v20)
                        {
                            fish::builtins::fish_indent::fish_indent::{{closure}}(&v24, v17[1], v17[2]);
                            v7 = *((long long *)&v25);
                            v6 = v24;
                            v22 = _ccall(20, v20, 0, v21);
                            if ((char)_ccall(14, 24, (unsigned long long)atomic_fetch_add(*((long long *)v19)) + 1, 0, _ccall(20, v20, 0, v21)))
                                [D] Unsupported jumpkind Ijk_NoDecode at address 20550859()
                            *((int128_t *)&v24) = *((int128_t *)v19);
                            v25 = (char)v19[16];
                            v8.insert(v13, &v6, &v24);
                            core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v8);
                            v21 = v22;
                        }
                        v13.changed_exported();
                        core::ptr::drop_in_place<core::cell::RefMut<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v12);
                    }
                    else
                    {
                        core::cell::panic_already_borrowed(&g_14d6ca0); /* do not return */
                    }
                }
                v17 = v9.next();
                v19 = v18;
            } while (v17);
        }
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v1);
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v2);
    }
}
