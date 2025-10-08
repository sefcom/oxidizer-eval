long long fish::threads::iothread_port()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return *((int *)once_cell::sync::OnceCell<T>::get_or_try_init());
}
