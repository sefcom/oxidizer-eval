long long fish::event::fire_delayed(struct_1 *a0)
{
    unsigned long long v0;  // [bp-0x298]
    unsigned int v1;  // [bp-0x16c]
    unsigned int v2;  // [bp-0x16c]
    int v3;  // [bp-0x168]
    int v4;  // [bp-0x158]
    int v5;  // [bp-0x158]
    int v6;  // [bp-0x148]
    unsigned long long v7;  // [bp-0x138]
    int v8;  // [bp-0x128]
    unsigned int v9;  // [bp-0x128]
    unsigned int v10;  // [bp-0x124]
    int v11;  // [bp-0x118]
    int v12;  // [bp-0x108]
    unsigned long long v13;  // [bp-0xf8]
    int v14;  // [bp-0xe8]
    void* v15;  // [bp-0xd8]
    int v16;  // [bp-0xc8]
    unsigned long long v18;  // [bp-0xb8]
    int v19;  // [bp-0xa8]
    int v20;  // [bp-0x98]
    char v21;  // [bp-0x88]
    char v22;  // [bp-0x68], Other Possible Types: unsigned long long
    struct_0 *v23;  // [bp-0x60]
    unsigned long long v24;  // [bp-0x58]
    char v25;  // [bp-0x50]
    int v26;  // [bp-0x40]
    unsigned long long v28;  // rax
    void* v29;  // rax
    char v30;  // dl
    unsigned long long v31;  // r14
    char *v32;  // r12
    unsigned int v33;  // r13d
    struct_0 *v34;  // rax
    struct_0 *v35;  // rbp
    char *v38;  // rax
    unsigned long v39;  // rax

    if (a0->field_59)
        return v39;
    v28 = fish::signal::signal_check_cancel();
    if ((unsigned int)v28)
        return v28;
    (char)v8.lock();
    v29 = (char)v8.expect("Mutex poisoned!Mutex poisonedEvent %ls\nExecuted job %d from command '%ls'src/exec.rs", 15, &g_14d7870);
    v15 = (long long)v29[24];
    *((int128_t *)&v14) = (int128_t)v29[8];
    *((unsigned long long *)&v29[8]) = 0;
    *((unsigned long long *)&v29[16]) = 8;
    *((unsigned long long *)&v29[24]) = 0;
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v29, v30 & 1);
    v31 = fish::event::PendingSignals::acquire_pending();
    v32 = &v22;
    while (v31)
    {
        v33 = (!v31 ? 64 : UnaryOp Ctz);
        v33.new();
        v2 = v33;
        v1 = v2;
        if (v1 == 28)
        {
            _ZN4fish8termsize16SHARED_CONTAINER17h8242f69b8c8dea36E.updating(a0);
            v1 = v2;
        }
        v10 = v1;
        v9 = 1;
        v34 = 8.alloc_impl(24, 0);
        if (!v34)
            alloc::alloc::handle_alloc_error(8, 24); /* do not return */
        v35 = v34;
        v3.to_vec(v2.name(), rdx<8>);
        v0 = v31;
        *((char *)&v0 + ((v2 & 63) >> 3)) = *((char *)&v0 + ((v2 & 63) >> 3)) & ~(1 << ((char)v2 & 63 & 7));
        v31 = v0;
        v18 = (long long)v5;
        v16 = v3;
        v35->field_10 = (long long)v5;
        *((void*)&v35->field_0) = v3;
        v26 = v11;
        memcpy(&v25, &v9, 16);
        v22 = 1;
        v23 = v35;
        v24 = 1;
        v14.push(&v22, &g_14d78b8);
    }
    v21.into_iter(&v14);
    v16.next(&v21);
    if (!((char)(((0 ^ (long long)v16) & (0 ^ -((long long)v16))) >> 63)))
    {
        do
        {
            v7 = (long long)v20;
            v6 = v19;
            memcpy(&v5, &v18, 16);
            v3 = v16;
            if (a0.is_blocked())
            {
                (char)v8.lock();
                v38 = (char)v8.expect("Mutex poisonedEvent %ls\nExecuted job %d from command '%ls'src/exec.rs", 14, &g_14d7888);
                core::ptr::drop_in_place<core::option::Option<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::event::Event>>>>(v32, 2);
                v32 = v38;
                v13 = v7;
                v12 = v6;
                v11 = v4;
                v8 = v3;
                v32 + 8.push(&(char)v8, &g_14d78a0);
            }
            else
            {
                fish::event::fire_internal(a0, &v3);
                core::ptr::drop_in_place<fish::event::Event>(&v3);
            }
            v16.next(&v21);
        } while ((long long)v16 != 0x8000000000000000);
    }
    core::ptr::drop_in_place<alloc::vec::into_iter::IntoIter<fish::event::Event>>(&v21);
    return core::ptr::drop_in_place<core::option::Option<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::event::Event>>>>(v32, 2);
}
