long long fish::function::invalidate_path()
{
    char v0;  // [bp-0x30]
    unsigned long long v3;  // rbx
    char v4;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14d8f58);
    v3 + 8.retain();
    v3 + 104.clear();
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
