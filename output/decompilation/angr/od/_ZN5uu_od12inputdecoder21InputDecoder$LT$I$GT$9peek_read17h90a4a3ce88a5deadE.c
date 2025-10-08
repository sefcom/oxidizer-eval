long long uu_od::inputdecoder::InputDecoder<I>::peek_read(struct_2 *a0, struct_0 *a1)
{
    char v0;  // [bp-0x28]
    struct_0 *v1;  // [bp-0x20], Other Possible Types: unsigned long
    char v2;  // [bp-0x18]
    struct_0 *v4;  // r14
    unsigned long long v5;  // rax
    char v6;  // al
    unsigned long long v7;  // rax
    unsigned long long v8;  // rdx

    v4 = a1;
    v5 = v0.peek_read(a1->field_18, a1->field_8, a1->field_10, a1->field_20);
    if (*((int *)&v0) == 1)
    {
        v6 = 3;
        v7 = v5 & 0xffffffffffffff00 | 3;
        v4 = v1;
    }
    else
    {
        v8 = *((long long *)&v2);
        a1->field_28 = v1;
        a1->field_30 = v8;
        v7 = a1->field_38;
        a0->field_8 = v1;
        a0->field_10 = v8;
    }
    a0->field_0 = v4;
    a0->field_18 = v6;
    return v7;
}
