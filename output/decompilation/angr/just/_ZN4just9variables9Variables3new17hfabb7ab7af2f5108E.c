long long just::variables::Variables::new(struct_0 *a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long *v3;  // rax

    v0 = v2;
    v3 = 8.alloc_impl(8);
    if (!v3)
        alloc::alloc::handle_alloc_error(8, 8); /* do not return */
    *(v3) = a1;
    a0->field_0 = 1;
    a0->field_8 = v3;
    a0->field_10 = 1;
    return v3;
}
