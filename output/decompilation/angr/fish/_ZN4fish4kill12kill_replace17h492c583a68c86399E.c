long long fish::kill::kill_replace(unsigned long long a0, unsigned long long a1, void* a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v3;  // rax
    char v4;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14dbec0);
    v3 + 8.replace(a0, a1, a2);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
