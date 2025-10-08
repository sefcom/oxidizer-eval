long long fish::reader::debounce_autosuggestions()
{
    return once_cell::race::once_box::OnceBox<T>::get_or_try_init();
}
