long long fd::walk::WorkerState::new(struct_0 *a0, struct_1 *a1, void* a2)
{
    unsigned long long v0;  // [bp-0x48]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    char v3;  // [bp-0x30]
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v1 = 1;
    v2 = 1;
    v3 = 0;
    *((double *)&v0) = v1.new();
    v5 = v1.new();
    ::libc.so.0::memcpy(a0, a2, 504);
    *((uint128_t *)&(&a0->padding_0)[1]) = a1->field_0;
    v6 = a1->field_10;
    *((unsigned long long *)((char *)&a0->field_1f8 + 8)) = v6;
    a0->field_208 = v0;
    a0->field_210 = v5;
    return v6;
}
