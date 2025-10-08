long long fish::wait_handle::WaitHandleStore::new_with_capacity(unsigned long long a0, unsigned long long a1)
{
    if (!a1)
        core::option::unwrap_failed(&g_14e45b8); /* do not return */
    a0.new(a1);
    return a0;
}
