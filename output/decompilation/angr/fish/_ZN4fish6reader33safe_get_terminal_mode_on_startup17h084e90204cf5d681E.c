long long fish::reader::safe_get_terminal_mode_on_startup()
{
    return once_cell::sync::OnceCell<T>::get();
}
