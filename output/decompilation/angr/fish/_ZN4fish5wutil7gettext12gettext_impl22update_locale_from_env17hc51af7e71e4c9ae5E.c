long long fish::wutil::gettext::gettext_impl::update_locale_from_env(unsigned long long a0)
{
    char v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long v2;  // [bp-0x38]
    int v3;  // [bp-0x30], Other Possible Types: char
    char v4;  // [bp-0x20]
    void* v7;  // rbx
    char v8;  // dl

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    v7 = v0.unwrap(&g_14c1138);
    fish::wutil::gettext::gettext_impl::get_language_preferences_from_env(&v0, a0);
    v3.collect(v1, v1 + v2 * 24);
    core::ptr::drop_in_place<alloc::vec::Vec<f64>>((long long)v7[8], (long long)v7[16]);
    *((long long *)&v7[24]) = *((long long *)&v4);
    v7[8] = v3;
    core::ptr::drop_in_place<alloc::vec::Vec<alloc::string::String>>(&v0);
    return core::ptr::drop_in_place<std::sync::poison::mutex::MutexGuard<alloc::vec::Vec<fish::proc::Pid>>>(v7, v8 & 1);
}
