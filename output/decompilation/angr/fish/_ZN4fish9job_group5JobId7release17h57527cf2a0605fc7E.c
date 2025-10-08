long long fish::job_group::JobId::release(unsigned int a0)
{
    unsigned int v0;  // [bp-0x34]
    char v1;  // [bp-0x30]
    unsigned long long v3[4];  // rbx
    unsigned long long v5;  // rdx

    v0 = a0;
    v1.lock();
    v3 = v1.expect(&g_14dba68);
    core::slice::<impl [T]>::binary_search_by(v3[2], v3[3], &v0).expect(v5);
    v3[1].remove(v5);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, (char)v5 & 1);
}
