long long fish::env::environment::EnvStack::push(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x30]
    char v2;  // [bp-0x28], Other Possible Types: unsigned long long
    uint128_t v3;  // [bp-0x20]
    unsigned long long v5;  // rdi

    if (!a0->field_80)
    {
        v0 = &g_14d6750;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14d6760); /* do not return */
    }
    v0.lock(a0);
    v5 = v0;
    if (a1)
        v0.push_shadowing();
    else
        v0.push_nonshadowing();
    return core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
}
