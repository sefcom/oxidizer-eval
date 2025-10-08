long long bat::line_range::LineRanges::from(struct_1 *a0, struct_0 *a1)
{
    char v0;  // [bp-0xc8], Other Possible Types: unsigned long long
    void* v1;  // [bp-0xb0]
    void* v2;  // [bp-0x78]
    unsigned long v3;  // [bp-0x40]
    unsigned long v5;  // r13
    char v6;  // al
    unsigned long long v7;  // rax
    unsigned long v8;  // rdx

    v5 = a1->field_0[1];
    v6 = v5.reduce(*((long long *)&a1->field_8) * 32 + v5);
    v1 = 0;
    v2 = 0;
    v3 = v5;
    itertools::minmax::minmax_impl(&v0, &v1);
    if (!v0)
    {
LABEL_83caf9:
        v7 = v0;
    }
    else if ((unsigned int)v0 == 1)
    {
        goto LABEL_83caf9;
    }
    a0->field_10 = *((long long *)&a1->field_8);
    *((unsigned long long [2])&a0->field_0) = a1->field_0;
    a0->field_18 = -((v6 & 1) < 1) | v8;
    a0->field_20 = v7;
    a0->field_28 = v0;
    return a0;
}
