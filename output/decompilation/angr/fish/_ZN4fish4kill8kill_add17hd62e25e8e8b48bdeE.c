long long fish::kill::kill_add(void* a0)
{
    char v0;  // [bp-0x38]
    unsigned long long v3;  // rax
    char v4;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14dbea8);
    v3 + 8.add(a0);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
