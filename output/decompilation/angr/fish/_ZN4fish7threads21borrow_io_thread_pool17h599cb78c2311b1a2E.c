long long fish::threads::borrow_io_thread_pool()
{
    char v0;  // [bp-0x20]
    unsigned long long v2;  // rax

    v2 = std::sync::once_lock::OnceLock<T>::get();
    if (!v2)
        core::option::unwrap_failed(&g_14e3070); /* do not return */
    v0.lock(v2);
    return v0.expect();
}
