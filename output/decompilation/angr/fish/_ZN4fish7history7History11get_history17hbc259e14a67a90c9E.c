long long fish::history::History::get_history(unsigned int a0, unsigned long long a1)
{
    unsigned long long v1;  // rax
    char v2;  // dl

    v1 = a1.imp();
    a0.get_history(v1 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v1, v2 & 1);
    return a0;
}
