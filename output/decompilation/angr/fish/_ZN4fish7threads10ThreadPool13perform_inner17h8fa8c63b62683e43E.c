long long fish::threads::ThreadPool::perform_inner(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    void* v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    void* v2;  // [bp-0x118]
    unsigned int v3;  // [bp-0x10c]
    char v4;  // [bp-0x108]
    unsigned long v5;  // [bp-0xe8]
    struct_0 *v6;  // [bp-0xe0]
    int v7;  // [bp-0xd8], Other Possible Types: char
    unsigned long v8;  // [bp-0xc0]
    unsigned long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0x90]
    char v12;  // [bp-0x78]
    char v13;  // [bp-0x60]
    char v14;  // [bp-0x48]
    unsigned long long v16[7];  // rax
    unsigned long long v17[7];  // r15
    char v18;  // dl
    char v19;  // bpl
    unsigned long v20;  // r14
    unsigned long v22;  // rax
    unsigned long long v23;  // cc_op
    unsigned long v24;  // cc_dep1
    void* v25;  // cc_dep2
    unsigned long v26;  // cc_dep1
    unsigned long v27;  // cc_ndep
    struct_1 *v28;  // r14

    v3 = a3;
    v5 = a0[0];
    v8 = v5 + 16;
    v4.lock(v5 + 16);
    v16 = v4.expect(&g_14e2f08);
    v17 = v16;
    v19 = v18 & 1;
    v20 = v16[5];
    v16[1].push_back(a1, a2);
    if ((char)core::sync::atomic::atomic_load(&g_15a9920, 0))
    {
        v20 = v16[5];
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v7.to_flog_str(&g_15a9910);
        v4.into_iter(&v7);
        v0.spec_extend(&v4);
        v0.push(58, &g_14e2f38);
        v0.push(32, &g_14e2f38);
        v10.to_vec("enqueuing work item (count is notifying thread pthread spawned got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 30);
        v4.into_iter(&v10);
        v0.spec_extend(&v4);
        v0.push(32, &g_14e2f38);
        v11.to_vec(core::fmt::num::imp::<impl usize>::_fmt(v17[4], &v4, 20), a2);
        v4.into_iter(&v11);
        v0.spec_extend(&v4);
        v0.push(32, &g_14e2f38);
        v12.to_vec(")all output expected to be valid chars/home/34r7hm4n/.cargo/git/checkouts/rust-pcre2-cea4c3ff42e4f4e4/85b7afb/src/ffi.rsJIT compilation failed: ", 1);
        v4.into_iter(&v12);
        v0.spec_extend(&v4);
        v0.push(10, &g_14e2f38);
        fish::flog::flog_impl(v1, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
    }
    if (v17[6] < v17[4])
    {
        v22 = v17[5];
        v23 = 5;
        v24 = (char)v3;
        v25 = 0;
        v26 = v24;
        if (!(char)v3)
        {
            v23 = 8;
            v25 = a0[2];
            v26 = v22;
            if (v26 >= a0[2])
            {
                core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v17, v19);
                return v20;
            }
        }
        if ((char)_ccall(4, 24, v22 + 1, 0, _ccall(v23, v26, v25, v27)))
            core::panicking::panic_const::panic_const_add_overflow(&g_14e2f50); /* do not return */
        v17[5] = v22 + 1;
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v17, v19);
        if (!v5.spawn_thread(a0[1]))
        {
            v4.lock(v8);
            v28 = v4.expect(&g_14e2f80);
            if (!v28->field_28)
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e2f98); /* do not return */
            v28->field_28 = v28->field_28 - 1;
            core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v28, v18 & 1);
            return v20;
        }
        else if ((char)core::sync::atomic::atomic_load(&g_15a9920, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v7.to_flog_str(&g_15a9910);
            v4.into_iter(&v7);
            v0.spec_extend(&v4);
            v0.push(58, &g_14e2fb0);
            v0.push(32, &g_14e2fb0);
            v14.to_vec("pthread spawned got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 15);
            v4.into_iter(&v14);
            v0.spec_extend(&v4);
            v0.push(10, &g_14e2fb0);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
            return v20;
        }
        else
        {
            return v20;
        }
    }
    else
    {
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v17, v19);
        if ((char)core::sync::atomic::atomic_load(&g_15a9920, 0))
        {
            v0 = 0;
            v1 = 1;
            v2 = 0;
            v7.to_flog_str(&g_15a9910);
            v4.into_iter(&v7);
            v0.spec_extend(&v4);
            v0.push(58, &g_14e2f68);
            v0.push(32, &g_14e2f68);
            v13.to_vec("notifying thread pthread spawned got workSomething should be active now.overflow when subtracting durationsoverflow when adding durations\n________________________________________________________src/timer.rs\nExecuted in  \n   usr time  \n   sys time  millismicros  external", 17);
            v4.into_iter(&v13);
            v0.spec_extend(&v4);
            v0.push(32, &g_14e2f68);
            v6 = std::thread::current::current();
            v9 = v6->field_10;
            v7.to_flog_str(&v9);
            v4.into_iter(&v7);
            v0.spec_extend(&v4);
            core::ptr::drop_in_place<std::thread::Thread>(&v6);
            v0.push(10, &g_14e2f68);
            fish::flog::flog_impl(v1, 0);
            core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v0, v1);
        }
        v5 + 72.notify_one();
        return v20;
    }
}
