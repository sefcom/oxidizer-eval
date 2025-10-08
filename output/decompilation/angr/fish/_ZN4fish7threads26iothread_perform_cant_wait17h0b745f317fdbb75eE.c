long long fish::threads::iothread_perform_cant_wait(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v2;  // rbx
    char v4;  // dl

    v0 = a0;
    v2 = fish::threads::borrow_io_thread_pool();
    v2 + 8.perform_inner(a0.new(), &g_14e30e0, 1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v2, v4 & 1);
}
