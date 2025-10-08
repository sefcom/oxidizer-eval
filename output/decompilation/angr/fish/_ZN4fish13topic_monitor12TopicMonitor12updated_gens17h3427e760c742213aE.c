long long fish::topic_monitor::TopicMonitor::updated_gens(void* a0, unsigned int a1)
{
    char v0;  // [bp-0x38]
    void* v2;  // rax
    char v3;  // dl

    v0.lock(a1 + 16);
    v2 = v0.unwrap(&g_14e4080);
    a0.updated_gens_in_data(a1, v2);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v3 & 1);
}
