long long fish::threads::WorkerThread::dequeue_work_or_commit_to_exit(unsigned long a0, unsigned long a1)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x40]
    unsigned long long v3[7];  // rbx
    char v4;  // dl
    char v5;  // bpl
    unsigned long long v6;  // rax

    v1.lock(a0 + 16);
    v3 = v1.expect(&g_14e2ff8);
    v5 = v4 & 1;
    if (!v3[4] && v3[5] == a1)
    {
        if (!((char)_ccall(4, 24, v3[6] + 1, 0, (unsigned long long)(char)(v3[5] < a1))))
        {
            v3[6] = v3[6] + 1;
            v1.wait_timeout(a0 + 72, v3, v5);
            v0.expect(&v1);
            v3 = *((long long *)&v0);
            if (!v3[6])
                core::panicking::panic_const::panic_const_sub_overflow(&g_14e3040); /* do not return */
            v3[6] = v3[6] - 1;
        }
        else
        {
            core::panicking::panic_const::panic_const_add_overflow(&g_14e3010); /* do not return */
        }
    }
    v6 = v3[1].pop_front();
    if (!v6)
    {
        if (v3[5])
            v3[5] = v3[5] - 1;
        else
            core::panicking::panic_const::panic_const_sub_overflow(&g_14e3058); /* do not return */
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5);
    return v6;
}
