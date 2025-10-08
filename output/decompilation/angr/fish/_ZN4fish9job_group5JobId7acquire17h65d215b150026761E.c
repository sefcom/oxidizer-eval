long long fish::job_group::JobId::acquire()
{
    char v0;  // [bp-0x30]
    unsigned long long v2[4];  // rbx
    unsigned int v3;  // eax
    char v4;  // dl

    v0.lock();
    v2 = v0.expect(&g_14dba20);
    if (v2[3])
    {
        v3 = *((int *)(v2[2] + v2[3] * 4 - 4)).next();
        1.unwrap(&g_14dba38);
    }
    else
    {
        v3 = 1;
        1.unwrap(&g_14dba38);
    }
    v2[1].push(v3);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v4 & 1);
    return v3;
}
