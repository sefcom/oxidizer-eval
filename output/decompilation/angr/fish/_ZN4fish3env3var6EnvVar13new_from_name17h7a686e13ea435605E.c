long long fish::env::var::EnvVar::new_from_name(void* a0, unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    unsigned long long v0;  // [bp-0x38]
    struct_1 *v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x28]
    struct_1 *v4;  // rax

    v4 = 8.alloc_impl(24, 0);
    if (!v4)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v4->field_10 = a3->field_10;
    v4->field_0 = a3->field_0;
    v0 = 1;
    v1 = v4;
    v2 = 1;
    a0.new_from_name_vec(a1, a2, &v0);
    return a0;
}
