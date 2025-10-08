long long fish::env::environment::EnvStack::get_last_status(unsigned long long a0)
{
    struct_0 *v0;  // [bp-0x20], Other Possible Types: char
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]

    v0.lock(a0);
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    return v0->field_30;
}
