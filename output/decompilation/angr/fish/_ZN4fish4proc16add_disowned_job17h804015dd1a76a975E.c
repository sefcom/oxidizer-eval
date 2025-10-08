long long fish::proc::add_disowned_job(unsigned long long a0[5])
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long
    unsigned long long v1;  // [bp-0x30]
    unsigned long long v3;  // rbx
    unsigned long long v4;  // rax
    unsigned int *v5;  // rax
    char v6;  // dl

    v0.lock();
    v3 = v0.unwrap(&g_14df5b0);
    v0 = a0[3];
    v1 = a0[4] * 224 + a0[3];
    while (true)
    {
        v4 = v0.find();
        if (!v4)
            return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v6 & 1);
        v5 = v4 + 144.get();
        if (!v5)
            core::option::unwrap_failed(&g_14df5c8); /* do not return */
        v3 + 8.push(*(v5));
    }
}
