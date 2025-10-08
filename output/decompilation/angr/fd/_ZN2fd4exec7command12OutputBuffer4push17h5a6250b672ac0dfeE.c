long long fd::exec::command::OutputBuffer::push(unsigned long long a0, struct_1 *a1, struct_0 *a2)
{
    int v0;  // [bp-0x38]
    unsigned long v1;  // [bp-0x28]
    int v2;  // [bp-0x20]
    unsigned long v3;  // [bp-0x10]

    v1 = a1->field_10;
    *((uint128_t *)&v0) = a1->field_0;
    *((uint128_t *)&v2) = a2->field_0;
    v3 = a2->field_10;
    return a0.push(&v0);
}
