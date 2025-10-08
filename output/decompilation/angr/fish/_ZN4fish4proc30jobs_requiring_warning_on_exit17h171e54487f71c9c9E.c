long long fish::proc::jobs_requiring_warning_on_exit(struct_0 *a0, unsigned long long *a1)
{
    void* v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    void* v2;  // [bp-0x38]
    unsigned long long v4[3];  // rax
    unsigned long long v5;  // rbp
    unsigned long long *v6;  // r14
    unsigned long long v7;  // rdx

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v4 = a1.jobs();
    if (v4[2])
    {
        v5 = v4[1];
        v6 = 0;
        do
        {
            if (!*((long long *)(v5 + (char *)v6)) + 16.is_foreground() && (char)*((long long *)(v5 + (char *)v6)) + 16.is_constructed() && !*((long long *)(v5 + (char *)v6)) + 16.is_completed())
            {
                *((long long *)(v5 + (char *)v6)).inc_strong();
                v0.push(*((long long *)(v5 + (char *)v6)), &g_14df488);
            }
            v6 += 1;
        } while (v4[2] * 8 != v6);
    }
    core::ptr::drop_in_place<core::cell::Ref<alloc::vec::Vec<alloc::rc::Rc<fish::proc::Job>>>>(v7);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return a0;
}
