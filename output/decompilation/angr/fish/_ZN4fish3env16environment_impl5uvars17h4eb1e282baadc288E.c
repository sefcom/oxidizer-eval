long long fish::env::environment_impl::uvars()
{
    char v0;  // [bp-0x20]

    v0.lock(std::sync::once_lock::OnceLock<T>::get_or_try_init());
    return v0.unwrap();
}
