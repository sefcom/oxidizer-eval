long long fish::threads::assert_is_main_thread()
{
    unsigned long long v1;  // rax
    unsigned long long *v2;  // rax

    v1 = std::thread::local::LocalKey<T>::with();
    v2 = std::sync::once_lock::OnceLock<T>::get();
    if (!v2)
    {
        fish::threads::main_thread_id::init_not_called(); /* do not return */
    }
    else if (v1 == *(v2))
    {
        return v2;
    }
    else
    {
        fish::threads::assert_is_main_thread::not_main_thread(); /* do not return */
    }
}
