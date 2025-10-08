void fish::env::environment_impl::EnvScopedImpl::enumerate_generations(unsigned long long a0, unsigned long long a1[10], unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1[10];  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    struct_0 *v4;  // rax
    char v5;  // dl
    unsigned long v6;  // r12
    unsigned long long v7[10];  // rax

    v4 = fish::env::environment_impl::uvars();
    fish::env::environment_impl::EnvScopedImpl::export_array::{{closure}}(a2, v4->field_90);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v4, v5 & 1);
    if (a1[2] >= 9223372036854775807)
        core::cell::panic_already_mutably_borrowed(&g_14d6b30); /* do not return */
    v6 = &a1[2];
    a1[2] = a1[2] + 1;
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
    if (a1[9])
    {
        if (*((long long *)v6) < 9223372036854775807)
        {
            a1[2] = *((long long *)v6) + 1;
            fish::env::environment_impl::EnvScopedImpl::export_array::{{closure}}(a2, a1[9]);
            core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v6);
        }
        else
        {
            core::cell::panic_already_mutably_borrowed(&g_14d6b18); /* do not return */
        }
    }
    a0.parsed_source_ref();
    v0 = a0;
    v2 = &g_14d6b00;
    while (true)
    {
        v7 = v0.next();
        if (!v7)
        {
            core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeIter>(&v0);
            return;
        }
        v1[0] = v7;
        if (v7[2] >= 9223372036854775807)
            break;
        v7[2] = v7[2] + 1;
        core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v7[2]);
        if (v7[9])
        {
            if (v1[2] < 9223372036854775807)
            {
                v1[2] = v1[2] + 1;
                fish::env::environment_impl::EnvScopedImpl::export_array::{{closure}}(a2, v1[9]);
                core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(&v1[2]);
            }
            else
            {
                v2 = &g_14d6ae8;
                break;
            }
        }
        core::ptr::drop_in_place<fish::env::environment_impl::EnvNodeRef>(&v1);
    }
    core::cell::panic_already_mutably_borrowed(v2); /* do not return */
}
