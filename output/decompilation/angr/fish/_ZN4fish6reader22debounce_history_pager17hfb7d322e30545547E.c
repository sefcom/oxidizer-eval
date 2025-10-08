long long fish::reader::debounce_history_pager()
{
    return once_cell::race::once_box::OnceBox<T>::get_or_try_init();
}
