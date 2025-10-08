long long fish::function::get_props(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x38]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax
    char v5;  // dl

    if (!(char)fish::parser_keywords::parser_keywords_is_reserved(a0, a1))
    {
        v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
        v3 = v0.unwrap(&g_14d8ea0);
        v4 = v3 + 8.get_props(a0, a1);
        core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v3, v5 & 1);
        return v4;
    }
    return 0;
}
