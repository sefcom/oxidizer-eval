long long fish::history::History::items_at_indexes(unsigned int a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v1;  // rax
    char v2;  // dl

    v1 = a1.imp();
    a0.items_at_indexes(v1 + 8, a2, a3);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v2 & 1);
}
