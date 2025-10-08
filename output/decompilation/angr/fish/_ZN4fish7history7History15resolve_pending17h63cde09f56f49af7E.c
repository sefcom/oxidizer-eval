long long fish::history::History::resolve_pending(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    struct_0 *v3;  // rax
    char v4;  // dl

    v0 = v2;
    v3 = a0.imp();
    v3->field_104 = 0;
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
