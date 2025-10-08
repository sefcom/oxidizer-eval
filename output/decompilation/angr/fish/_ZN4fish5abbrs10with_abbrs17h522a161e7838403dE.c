long long fish::abbrs::with_abbrs(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v3[4];  // rax
    char v4;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v3 = v0.unwrap(&g_14c1828);
    fish::complete::Completer::complete_abbr::{{closure}}(a0, a1, v3[2], v3[3]);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v4 & 1);
}
