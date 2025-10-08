long long fish::event::remove_handlers_if()
{
    char v0;  // [bp-0x49]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v3[4];  // rbx
    char v4;  // dl
    unsigned long v5;  // r14
    void* v6;  // r13
    unsigned long v7;  // r14
    unsigned long v8;  // rbp
    unsigned int v9[12];  // rax

    v1.lock();
    v3 = v1.expect(&g_14d77c8);
    v0 = v4 & 1;
    if (!v3[3])
        return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
    v5 = v3[3] - 1;
    v6 = 0;
    do
    {
        v7 = v5;
        if (v7 >= v3[3])
            core::panicking::panic_bounds_check(v7, v3[3], &g_14d77e0); /* do not return */
        v8 = v3[2];
        v6 = v6;
        if ((char)fish::event::fire_internal::{{closure}}(*((long long *)(v8 + v7 * 8)) + 16))
        {
            core::sync::atomic::atomic_store(*((long long *)(v8 + v7 * 8)) + 72, 1, 0);
            v9 = *((long long *)(v8 + v7 * 8));
            if (v9[10] == 1)
                fish::event::dec_signal_observed(v9[11]);
            v1 = v3[1].remove(v7);
            core::ptr::drop_in_place<alloc::sync::Arc<fish::event::EventHandler>>(&v1);
            v6 += 1;
            if ((char)_ccall(4, 24, v6 + 1, 0, (unsigned long long)(char)(v9[10] < 1)))
                core::panicking::panic_const::panic_const_add_overflow(&g_14d7810); /* do not return */
        }
        v5 = v7 - 1;
    } while ((char)__CFADD__(v7, -1));
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v0);
}
