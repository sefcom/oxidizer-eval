long long fish::env::environment::EnvStack::remove(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    unsigned long long v0[12];  // [bp-0x38], Other Possible Types: char
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28]
    unsigned long v4;  // rbp

    v0.lock(a0);
    v4 = (unsigned int)v0[10].remove(v0[11], a1, a2, a3);
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    if (((unsigned int)v4 & 16777215) <= 65535 && (((char)v4 & 1) || a0->field_81 == 1))
        fish::env_dispatch::env_dispatch_var_change(a1, a2, a0);
    if (((unsigned short)v4 & 0x100))
        _ZN4fish3env11environment22UVARS_LOCALLY_MODIFIED17h7f7672bb64b2b548E.store(1);
    return (v4 & 4294967295) >> 16 & 4294967295;
}
