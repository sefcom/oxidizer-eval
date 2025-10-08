long long fish::input::InputMappingSet::add1(void* a0, unsigned long long a1[3], unsigned int a2, struct_0 *a3, unsigned long long a4[3], void* a5, char a6)
{
    unsigned long long v0;  // [bp-0x48]
    struct_1 *v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    struct_1 *v3;  // rax

    v3 = 8.alloc_impl(24, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 24); /* do not return */
    v3->field_10 = a3->field_10;
    v3->field_0 = a3->field_0;
    v0 = 1;
    v1 = v3;
    v2 = 1;
    return a0.add(a1, a2, &v0, a4, a5, a6);
}
