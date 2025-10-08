long long fish::function::remove(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x40]
    char v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x28]
    unsigned long long v6;  // rbx
    char v7;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v6 = v0.unwrap(&g_14d8ed0);
    v6 + 8.remove(a0, a1);
    v0.to_vec(a0, a1);
    v3 = v1;
    memcpy(&v2, &v0, 16);
    v6 + 56.insert(&v2);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v6, v7 & 1);
}
