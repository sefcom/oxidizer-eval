long long fish::threads::WorkerThread::run(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x120]
    unsigned long long v1;  // [bp-0x118]
    void* v2;  // [bp-0x110]
    struct_0 *v3;  // [bp-0x108], Other Possible Types: struct_1 *
    unsigned long v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf8]
    unsigned long long v6;  // [bp-0xf0]
    unsigned long long v7;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    int v9;  // [bp-0xc8]
    int v10;  // [bp-0xb0]
    int v11;  // [bp-0x90]
    int v12;  // [bp-0x78]
    char v13;  // [bp-0x60]
    char v14;  // [bp-0x48]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx

    v7 = a0;
    v8 = a1;
    v6 = &g_15a9920;
    v5 = &g_15a9910;
    while (true)
    {
        v16 = a0.dequeue_work_or_commit_to_exit(a1);
        if (!v16)
            break;
        if ((char)core::sync::atomic::atomic_load(v6, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v9.to_flog_str(v5);
            v10.into_iter(&v9);
            v0.spec_extend(&v10);
            v0.push(58, &g_14e2fc8);
            v0.push(32, &g_14e2fc8);
            v11.to_vec("pthread kw_beginparm_dchDead cow[logins]", 8);
            v10.into_iter(&v11);
            v0.spec_extend(&v10);
            v0.push(32, &g_14e2fc8);
            v3 = std::thread::current::current();
            v4 = v3->field_10;
            v9.to_flog_str(&v4);
            v10.into_iter(&v9);
            v0.spec_extend(&v10);
            core::ptr::drop_in_place<std::thread::Thread>(&v3);
            v0.push(32, &g_14e2fc8);
            v12.to_vec(" got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 9);
            v10.into_iter(&v12);
            v0.spec_extend(&v10);
            v0.push(10, &g_14e2fc8);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v16.call_once(v17);
    }
    core::ptr::drop_in_place<core::option::Option<alloc::boxed::Box<dyn fish::universal_notifier::UniversalNotifier>>>(0, v17);
    if (!(char)core::sync::atomic::atomic_load(v6, 0))
        return core::ptr::drop_in_place<fish::threads::WorkerThread>(&v7);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v9.to_flog_str(v5);
    v10.into_iter(&v9);
    v0.spec_extend(&v10);
    v0.push(58, &g_14e2fe0);
    v0.push(32, &g_14e2fe0);
    v13.to_vec("pthread kw_beginparm_dchDead cow[logins]", 8);
    v10.into_iter(&v13);
    v0.spec_extend(&v10);
    v0.push(32, &g_14e2fe0);
    v3 = std::thread::current::current();
    v4 = v3->field_10;
    v9.to_flog_str(&v4);
    v10.into_iter(&v9);
    v0.spec_extend(&v10);
    core::ptr::drop_in_place<std::thread::Thread>(&v3);
    v0.push(32, &g_14e2fe0);
    v14.to_vec(" exitingstring.1Completeacs_lteeSet home", 8);
    v10.into_iter(&v14);
    v0.spec_extend(&v10);
    v0.push(10, &g_14e2fe0);
    fish::flog::flog_impl(v1, 0);
    core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    return core::ptr::drop_in_place<fish::threads::WorkerThread>(&v7);
}
