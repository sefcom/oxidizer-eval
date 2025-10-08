long long fish::env::environment::EnvStack::set_last_statuses(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x28], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x20]
    char v2;  // [bp-0x18]

    v0.lock(a0);
    v0.set_last_statuses(a1);
    return core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
}
