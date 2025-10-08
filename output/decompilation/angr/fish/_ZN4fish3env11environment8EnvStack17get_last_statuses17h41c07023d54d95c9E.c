long long fish::env::environment::EnvStack::get_last_statuses(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0[7];  // [bp-0x50], Other Possible Types: char
    unsigned long long v1;  // [bp-0x48]
    char v2;  // [bp-0x40]
    int v3;  // [bp-0x38]
    int v4;  // [bp-0x20], Other Possible Types: char
    char v5;  // [bp-0x10]

    v0.lock(a1);
    *((uint128_t *)&v3) = v0[6];
    fish::builtins::fish_indent::fish_indent::{{closure}}(&v4, v0[4], v0[5]);
    a0->field_18 = (unsigned long long)v3;
    a0->field_10 = *((long long *)&v5);
    *((void*)&a0->field_0) = v4;
    core::ptr::drop_in_place<fish::env::environment_impl::EnvMutexGuard<fish::env::environment_impl::EnvStackImpl>>(v1, *((int *)&v2));
    return a0;
}
