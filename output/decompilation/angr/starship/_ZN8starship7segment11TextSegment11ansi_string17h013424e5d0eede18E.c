long long starship::segment::TextSegment::ansi_string(struct_1 *a0, struct_0 *a1, void* a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rax
    unsigned long v4;  // rcx

    v0 = v2;
    if (a1->field_18 == 2)
    {
        v3 = a1->field_8;
        v4 = a1->field_10;
        a0->field_38 = 0;
        a0->field_30 = 0;
        *((unsigned long long *)&(&a0->field_38)[1]) = 90194313237;
    }
    else
    {
        a0->field_30.to_ansi_style(&a1->field_18, a2);
        v3 = a1->field_8;
        v4 = a1->field_10;
    }
    a0->field_0 = 0x8000000000000000;
    a0->field_8 = v3;
    a0->field_10 = v4;
    a0->field_18 = 9223372036854775810;
    return v3;
}
