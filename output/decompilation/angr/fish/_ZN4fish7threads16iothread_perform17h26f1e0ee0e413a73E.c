long long fish::threads::iothread_perform(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rbx
    char v5;  // dl

    v0 = v2;
    v3 = fish::threads::borrow_io_thread_pool();
    v3 + 8.perform_inner(a0.new(), &g_14e30a0, 0);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5 & 1);
}
