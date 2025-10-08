long long uu_tsort::Graph::new(struct_0 *a0, unsigned long long a1[3])
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long long v4;  // r12
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx

    v0 = v2;
    v3 = a1[1];
    v4 = a1[2];
    v5 = std::thread::local::LocalKey<T>::with();
    a0->field_0 = a1[0];
    a0->field_8 = v3;
    a0->field_10 = v4;
    *((uint128_t *)&(&a0->field_10)[1]) = g_4eb278;
    *((uint128_t *)((char *)&a0->field_18 + 8)) = g_4eb288;
    *((unsigned long long *)((char *)&a0->field_28 + 8)) = v5;
    a0->field_38 = v6;
    return a0;
}
