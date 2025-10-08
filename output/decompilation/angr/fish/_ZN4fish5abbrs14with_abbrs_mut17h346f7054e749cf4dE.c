long long fish::abbrs::with_abbrs_mut(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    char v5;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14c1840);
    v4 = fish::builtins::abbr::abbr_erase::{{closure}}(a0, a1, a2, v3 + 8);
    core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5 & 1);
    return v4;
}
