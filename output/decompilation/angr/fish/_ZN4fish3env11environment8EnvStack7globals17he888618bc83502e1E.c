long long fish::env::environment::EnvStack::globals()
{
    return std::sync::once_lock::OnceLock<T>::get_or_try_init();
}
