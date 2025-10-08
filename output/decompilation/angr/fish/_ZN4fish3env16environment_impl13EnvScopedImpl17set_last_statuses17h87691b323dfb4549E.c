double fish::env::environment_impl::EnvScopedImpl::set_last_statuses(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    int v3;  // xmm0

    v0 = v2;
    core::ptr::drop_in_place<fish::env::var::Statuses>((long long)a0[24], (long long)a0[32]);
    v3 = a1[0];
    *((uint128_t *)&a0[40]) = a1[1];
    a0[24] = v3;
    return (unsigned long long)v3;
}
