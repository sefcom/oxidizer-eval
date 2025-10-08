long long fish::env_dispatch::env_dispatch_init(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    fish::env_dispatch::run_inits(a0);
    return once_cell::sync::OnceCell<T>::get_or_try_init();
}
