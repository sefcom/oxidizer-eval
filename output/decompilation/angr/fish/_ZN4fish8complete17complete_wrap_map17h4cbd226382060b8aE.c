long long fish::complete::complete_wrap_map()
{
    char v0;  // [bp-0x20]

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    return v0.unwrap();
}
