long long fish::history::History::size(unsigned long long a0)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax
    char v3;  // dl

    v1 = a0.imp();
    v2 = v1 + 8.size();
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v3 & 1);
    return v2;
}
