long long fish::abbrs::abbrs_get_set()
{
    char v0;  // [bp-0x20]

    v0.lock(once_cell::sync::OnceCell<T>::get_or_try_init());
    return v0.unwrap(&g_14c1858);
}
