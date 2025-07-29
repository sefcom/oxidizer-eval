long long uu_tail::chunks::BytesChunk::fill(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long v4;  // rdx

    v0 = v2;
    if (a2.read(a1, 0x2000))
    {
        *((long long *)&a0->padding_1[7]) = v3.from();
        a0->field_10 = v3;
        *((unsigned long long *)&a0->field_0) = 1;
        return a0;
    }
    a1->field_2000 = v4;
    if (!v4)
    {
        *((uint128_t *)&a0->field_0) = 0;
        return a0;
    }
    *((unsigned long long *)&a0->padding_1[7]) = 1;
    a0->field_10 = v4;
    *((unsigned long long *)&a0->field_0) = 0;
    return a0;
}
