long long fish::env::environment_impl::EnvScopedImpl::get_names(unsigned long long a0, unsigned long long a1, struct_0 *a2, unsigned int a3)
{
    char v0[12];  // [bp-0x104]
    char v1;  // [bp-0x103]
    char v2;  // [bp-0x101]
    char v3;  // [bp-0x100]
    char v4;  // [bp-0xfe]
    char v5;  // [bp-0xfd]
    int v6;  // [bp-0xe8], Other Possible Types: unsigned long long
    int v7;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v8;  // [bp-0xc8]
    int v9;  // [bp-0xb8], Other Possible Types: char
    int v10;  // [bp-0xa8]
    char v11;  // [bp-0x98]
    char v12;  // [bp-0x88]
    struct_1 *v13;  // [bp-0x70]
    char v14;  // [bp-0x60]
    struct_1 *v16;  // rax
    unsigned long long v17;  // rbx
    unsigned long long v18;  // rax
    char v19;  // dl

    v0.new(a3);
    v9.default();
    if (v1)
    {
        a1.parsed_source_ref();
        v6 = a1;
        while (true)
        {
            v16 = v6.next();
            if (!v16)
                break;
            v13 = v16;
            if (v16->field_10 >= 9223372036854775807)
                core::cell::panic_already_mutably_borrowed(&g_14d6ad0); /* do not return */
            v16->field_10 = v16->field_10 + 1;
            fish::env::environment_impl::EnvScopedImpl::get_names::{{closure}}(&v0, v16 + 1, &v9);
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v16->field_10);
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v13);
        }
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v6);
    }
    if (v2)
    {
        if (a2->field_10 < 9223372036854775807)
        {
            a2->field_10 = a2->field_10 + 1;
            fish::env::environment_impl::EnvScopedImpl::get_names::{{closure}}(&v0, a2 + 1, &v9);
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&a2->field_10);
            v17 = 16;
            do
            {
                if (((&v4)[((&g_14d6968)[v17] & 4) < 1] & 1))
                {
                    v13.to_vec(*((long long *)(v17 - -21850456)), *((long long *)(v17 - -21850464)));
                    v7 = *((long long *)&v14);
                    memcpy(&v6, &v13, 16);
                    v9.insert(&v6);
                }
                v17 += 24;
            } while (v17 != 352);
        }
        else
        {
            core::cell::panic_already_mutably_borrowed(&g_14d6ab8); /* do not return */
        }
    }
    if (v3)
    {
        v18 = fish::env::environment_impl::uvars();
        v12.get_names(v18 + 8, v4, v5);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v18, v19 & 1);
        v9.extend(&v12);
    }
    memcpy(&v8, &v11, 16);
    v7 = v10;
    v6 = v9;
    v13.into_iter(&v6);
    return a0.collect(&v13);
}
