char fish::threads::Debounce::run_next(unsigned long a0, unsigned long a1)
{
    char v0;  // [bp-0x40]
    struct_0 *v2;  // rax
    struct_0 *v3;  // r14
    char v4;  // dl
    char v5;  // bpl
    unsigned long v6;  // rbx
    unsigned long v7;  // r15
    unsigned int v8;  // edx

    v0.lock(a0 + 16);
    v2 = v0.expect(&g_14e3118);
    v3 = v2;
    v5 = v4 & 1;
    v6 = v2->field_8;
    v7 = v2->field_10;
    v2->field_8 = 0;
    if (v6)
    {
        v3->field_28 = std::time::Instant::now();
        v3->field_30 = v8;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5);
        v6.call_once(v7);
    }
    else
    {
        if (a1 == v3->field_18)
            v3->field_18 = 0;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5);
        core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, v7);
    }
    return v6;
}
