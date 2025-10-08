long long fish::history::History::populate_from_bash(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    char v4;  // dl

    v0 = v2;
    v3 = a0.imp();
    v3 + 8.populate_from_bash(a1);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
