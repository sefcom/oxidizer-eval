long long fish::operation_context::OperationContext::empty(unsigned long long a0)
{
    a0.background(std::sync::once_lock::OnceLock<T>::get_or_try_init(), &g_14c7518, 0x80000);
    return a0;
}
