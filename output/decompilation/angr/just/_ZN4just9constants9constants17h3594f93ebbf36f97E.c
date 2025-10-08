long long just::constants::constants()
{
    return std::sync::once_lock::OnceLock<T>::get_or_try_init();
}
