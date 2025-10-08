long long fish::event::PendingSignals::acquire_pending()
{
    void* v0;  // [bp-0x168]
    char v1;  // [bp-0x48], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x40]
    void* v3;  // [bp-0x38]
    struct_0 *v5;  // rbx
    unsigned int v6;  // eax
    void* v7;  // r14
    unsigned long long v8;  // rax
    unsigned long long v9;  // rdx
    unsigned long long v10;  // r13

    v1.lock();
    v5 = v1.expect();
    v6 = core::sync::atomic::atomic_load(&g_15aa74c, 2);
    if (v6 == v5->field_8)
    {
        v7 = 0;
    }
    else
    {
        v5->field_8 = v6;
        v1 = &_ZN4fish5event15PENDING_SIGNALS17h4995e538f545ebfbE;
        v2 = &g_15aa74c;
        v3 = 0;
        v7 = 0;
        while (true)
        {
            v8 = v1.next();
            if (!v9)
                break;
            v10 = v8;
            if ((char)core::sync::atomic::atomic_load(v9, 0))
            {
                if (v10 <= 63)
                {
                    v0 = v7;
                    *((char *)&v0 + ((v10 & 63) >> 3)) = *((char *)&v0 + ((v10 & 63) >> 3)) | 1 << ((char)v10 & 63 & 7);
                    v7 = v0;
                    core::sync::atomic::atomic_store(v9, 0, 0);
                }
                else
                {
                    core::panicking::panic_const::panic_const_shl_overflow(&g_14d7690); /* do not return */
                }
            }
        }
    }
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v5, (char)v9 & 1);
    return v7;
}
