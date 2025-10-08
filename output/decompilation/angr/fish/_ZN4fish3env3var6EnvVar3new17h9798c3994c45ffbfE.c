long long fish::env::var::EnvVar::new(unsigned long long a0, struct_0 *a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x30]
    struct_1 *v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    struct_1 *v4;  // rax

    v4 = 8.alloc_impl(24, 0);
    if (!v4)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v4->field_10 = a1->field_10;
    v4->field_0 = a1->field_0;
    v0 = 1;
    v1 = v4;
    v2 = 1;
    a0.new_vec(&v0, a2);
    return a0;
}
