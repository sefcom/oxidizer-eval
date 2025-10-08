long long fish::env::environment::EnvStack::set_one(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3, struct_0 *a4)
{
    unsigned long long v0;  // [bp-0x40]
    struct_1 *v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    struct_1 *v4;  // rax

    v4 = 8.alloc_impl(24, 0);
    if (!v4)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v4->field_10 = a4->field_10;
    v4->field_0 = a4->field_0;
    v0 = 1;
    v1 = v4;
    v2 = 1;
    return a0.set(a1, a2, a3, &v0);
}
