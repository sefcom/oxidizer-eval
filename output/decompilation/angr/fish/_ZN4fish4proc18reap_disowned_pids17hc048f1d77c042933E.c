long long fish::proc::reap_disowned_pids()
{
    char v0;  // [bp-0x30]
    unsigned long long v2;  // rax
    char v3;  // dl

    v0.lock();
    v2 = v0.unwrap(&g_14df5f8);
    v2 + 8.retain();
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v3 & 1);
}
