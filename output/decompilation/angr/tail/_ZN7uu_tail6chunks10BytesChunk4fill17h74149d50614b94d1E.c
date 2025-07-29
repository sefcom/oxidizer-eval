long long uu_tail::chunks::BytesChunk::fill(struct_0 *a0, struct_1 *a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rax
    unsigned long v5;  // rdx

    v0 = v2;
    if ((unsigned long long)a2.read(a3, a1))
    {
        v4 = v3.from();
        *((unsigned long long *)&a0->padding_1[7]) = v4;
        a0->field_10 = v3;
        *((unsigned long long *)&a0->field_0) = 1;
        return v4;
    }
    a1->field_2000 = v5;
    if (v5)
    {
        *((unsigned long long *)&a0->padding_1[7]) = 1;
        a0->field_10 = v5;
        *((unsigned long long *)&a0->field_0) = 0;
    }
    else
    {
        *((uint128_t *)&a0->field_0) = 0;
    }
    return 0;
}
