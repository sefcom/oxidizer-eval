long long fish::io::fd_monitor()
{
    return once_cell::sync::OnceCell<T>::get_or_try_init();
}
