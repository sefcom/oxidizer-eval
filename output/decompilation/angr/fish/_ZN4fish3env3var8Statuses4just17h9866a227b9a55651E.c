long long fish::env::var::Statuses::just(struct_0 *a0, unsigned int a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int *v3;  // rax

    v0 = v2;
    v3 = 4.alloc_impl(4, 0);
    if (!v3)
        alloc::alloc::handle_alloc_error(4, 4); /* do not return */
    *(v3) = a1;
    a0->field_18 = a1;
    a0->field_1c = 0;
    a0->field_0 = 1;
    a0->field_8 = v3;
    a0->field_10 = 1;
    return a0;
}
