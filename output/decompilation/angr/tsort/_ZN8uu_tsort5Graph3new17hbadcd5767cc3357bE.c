long long uu_tsort::Graph::new(struct_1 *a0, struct_0 *a1)
{
    unsigned long v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    unsigned long long v3;  // rax
    int v4;  // xmm0
    unsigned long v5;  // rdx

    v0 = a1->field_10;
    v1.try_with();
    v3 = v1.expect();
    a0->field_10 = v0;
    *((void*)&a0->field_0) = v4;
    *((uint128_t *)&(&a0->field_10)[1]) = g_5761e0;
    *((uint128_t *)((char *)&a0->field_18 + 8)) = g_5761f0;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = v3;
    a0->field_38 = v5;
    return a0;
}
