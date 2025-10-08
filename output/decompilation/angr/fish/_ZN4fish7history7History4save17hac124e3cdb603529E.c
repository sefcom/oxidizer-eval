long long fish::history::History::save(unsigned long long a0)
{
    unsigned long long v1;  // rax
    char v2;  // dl

    v1 = a0.imp();
    v1 + 8.save(0);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v2 & 1);
}
