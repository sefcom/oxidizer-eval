long long just::compile_error::CompileError::new(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    int v3;  // xmm1
    int v4;  // xmm2
    int v5;  // xmm3
    unsigned long long v6;  // rax

    v0 = v2;
    *((double *)&a0->field_0) = a2.new();
    v3 = a1->field_10;
    v4 = a1->field_20;
    v5 = a1->field_30;
    *((uint128_t *)&(&a0->field_0)[1]) = a1->field_0;
    *((void*)((char *)&a0->field_8 + 8)) = v3;
    *((void*)((char *)&a0->field_18 + 8)) = v4;
    *((void*)((char *)&a0->field_28 + 8)) = v5;
    v6 = a1->field_40;
    *((unsigned long long *)((char *)&a0->field_38 + 8)) = v6;
    return v6;
}
