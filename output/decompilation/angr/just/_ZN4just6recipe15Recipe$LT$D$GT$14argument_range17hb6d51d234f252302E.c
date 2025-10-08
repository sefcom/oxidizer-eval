long long just::recipe::Recipe<D>::argument_range(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    v0 = v2;
    v3 = a1.fold(a2 * 208 + a1);
    v4 = a1.max_arguments(a2);
    a0->field_0 = v3;
    a0->field_8 = v4;
    a0->field_10 = 0;
    return v4;
}
