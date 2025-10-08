long long fish::env_dispatch::env_dispatch_var_change(unsigned long long a0, unsigned long long a1, unsigned int a2)
{
    unsigned long long v1;  // rax

    v1 = once_cell::sync::OnceCell<T>::get();
    if (!v1)
        return 0;
    return v1.dispatch(a0, a1, a2);
}
