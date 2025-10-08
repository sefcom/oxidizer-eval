long long fish::fd_monitor::BackgroundFdMonitor::run(struct_0 *a0, unsigned long long a1)
{
    struct_3 *v0;  // [bp-0x130], Other Possible Types: struct_4 *
    char v1;  // [bp-0x121]
    void* v2;  // [bp-0x120]
    void* v3;  // [bp-0x118]
    unsigned long long v4;  // [bp-0x110]
    void* v5;  // [bp-0x108]
    void* v6;  // [bp-0x100]
    unsigned long long v7;  // [bp-0xf8]
    unsigned long long v8;  // [bp-0xf8]
    void* v9;  // [bp-0xf0]
    unsigned int v10;  // [bp-0xe4]
    unsigned long v11;  // [bp-0xe0]
    unsigned long v12;  // [bp-0xe0]
    void* v13;  // [bp-0xd8]
    unsigned long long v14;  // [bp-0xd0]
    void* v15;  // [bp-0xc8]
    unsigned long long v16;  // [bp-0xc0]
    unsigned long long v17;  // [bp-0xb8]
    char v18;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v19;  // [bp-0xa8]
    int v20;  // [bp-0xa0]
    unsigned long v21;  // [bp-0x90]
    unsigned long v22;  // [bp-0x90]
    struct_0 *v23;  // [bp-0x88]
    unsigned long long v24;  // [bp-0x80]
    char v25;  // [bp-0x78]
    char v26;  // [bp-0x68]
    unsigned long long v27;  // [bp-0x58]
    char v28;  // [bp-0x48]
    unsigned long v30;  // r14
    unsigned long long *v31;  // rax
    struct_1 *v32;  // rdx
    unsigned long v33;  // rsi
    unsigned long long v34;  // rdi
    void* v35;  // rsi
    char v36;  // dl
    unsigned long v37;  // rdx
    unsigned int v38;  // eax
    unsigned int v39;  // eax
    char v40;  // bpl
    unsigned long long v41;  // r14
    unsigned long long v42;  // r14
    unsigned long long v43;  // r15
    struct_2 *v44;  // r13
    unsigned long v46;  // r14
    char v47;  // bl

    v23 = a0;
    v24 = a1;
    fish::threads::assert_is_background_thread();
    v13 = 0;
    v14 = 4;
    v6 = 0;
    v8 = 8;
    v21 = a1 + 16;
    v12 = &a0->field_10;
    v22 = v21;
    v11 = v12;
    while (true)
    {
        v30 = v22;
        v15 = 0;
        v10 = *((int *)v11);
        v13.add(*((int *)v11));
        v16.lock(v30);
        v9 = 0;
        v0 = v16.expect(&g_14d8ae8);
        v6.reserve(v0->field_20);
        v16.iter(&v0->padding_0[8]);
        v27 = (long long)v20;
        memcpy(&v26, &v18, 16);
        memcpy(&v25, &v16, 16);
        if (v25.next())
        {
            do
            {
                v33 = v32->field_10;
                if ((unsigned int)v33 >= 0)
                {
                    v13.add(v33);
                    v6.push(*(v31));
                }
                v31 = v25.next();
            } while (v31);
        }
        v2 = v9;
        if (v9 >= 2)
        {
            v34 = v8;
            v35 = v2;
            if (v2 < 21)
                core::slice::sort::shared::smallsort::insertion_sort_shift_left(v8, v2, 1);
            else
                core::slice::sort::unstable::ipnsort(v8, v2, &v1);
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v36 & 1);
        v37 = (!v2 ? 0xf424000 : 0x3b9aca00);
        v38 = v13.check_readable(0, (!v2 ? 0xf424000 : 0x3b9aca00));
        v39 = errno::errno();
        if (v38 < 0 && v39 != 4 && v39 != 9)
            fish::wutil::perror("selectThread exitingTimeout too long but not forever!src/fd_readable_set.rssrc/fds.rs", 6);
        v16.lock(v30);
        v0 = v16.expect(&g_14d8b00);
        v40 = v36 & 1;
        if (v9)
        {
            v41 = v9 * 8;
            v7 = v8;
            do
            {
                v42 = v41;
                v43 = v7;
                v44 = v0->padding_0[8].get_inner_mut(v43);
                if (v44 && (char)v13.test(v44->field_18))
                    v44->padding_0[8].service();
                v46 = v42 - 8;
                v7 = v43 + 8;
                v41 = v46;
            } while (v42 != 8);
        }
        v47 = v13.test(v10);
        if (!((v47 ^ 1) & v2))
        {
            v12.try_consume();
            if (v0->field_39 || !v2 && !v47 && !v0->field_20)
                break;
        }
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v40);
        v22 = v21;
        v11 = v12;
    }
    if (!v0->field_38)
    {
        v16 = &g_14d8ad8;
        v17 = 1;
        v18 = 8;
        *((uint128_t *)&v19) = 0;
        core::panicking::panic_fmt(&v16, &g_14d8b18); /* do not return */
    }
    if ((char)core::sync::atomic::atomic_load(&g_15a9950, 0))
    {
        v3 = 0;
        v4 = 1;
        v5 = 0;
        v25.to_flog_str(&g_15a9940);
        v16.into_iter(&v25);
        v3.spec_extend(&v16);
        v3.push(58, &g_14d8b30);
        v3.push(32, &g_14d8b30);
        v28.to_vec("Thread exitingTimeout too long but not forever!src/fd_readable_set.rssrc/fds.rs", 14);
        v16.into_iter(&v28);
        v3.spec_extend(&v16);
        v3.push(10, &g_14d8b30);
        fish::flog::flog_impl(v4, 0);
        core::ptr::drop_in_place<alloc::vec::Vec<i8>>(v3, v4);
    }
    v0->field_38 = 0;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v0, v40);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>(v6, v8);
    core::ptr::drop_in_place<fish::ast::TokenStream>(v13, 4);
    return core::ptr::drop_in_place<fish::fd_monitor::BackgroundFdMonitor>(&v23);
}
