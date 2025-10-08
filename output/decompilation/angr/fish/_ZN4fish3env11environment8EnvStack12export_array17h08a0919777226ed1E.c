long long fish::env::environment::EnvStack::export_array(unsigned long long a0)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x18]
    char v2;  // [bp-0x10]
    unsigned long long v4;  // rax

    v0.lock(a0);
    v4 = v0.export_array();
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    return v4;
}
