long long fish::common::is_windows_subsystem_for_linux(char a0)
{
    char v1;  // al

    fish::threads::is_forked_child();
    v1 = *((char *)std::sync::once_lock::OnceLock<T>::get_or_try_init());
    if (*((char *)std::sync::once_lock::OnceLock<T>::get_or_try_init()) != 3)
        return *((char *)std::sync::once_lock::OnceLock<T>::get_or_try_init()) == a0 | !a0;
    return 0;
}
