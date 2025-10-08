long long uu_tail::chunks::LinesChunk::from_chunk(struct_1 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    void* v3;  // r15
    char v4;  // bpl

    v0 = v2;
    v3 = a1->field_2008 - a2;
    if (a1->field_2008 < a2)
    {
        v4 = a1->field_2010;
        v3 = 0;
        memset(a0, 0, 0x2000);
        a0->field_2000 = 0;
    }
    else
    {
        a0.from_chunk(a1, a1.calculate_bytes_offset_from(a2));
        v4 = a1->field_2010;
    }
    a0->field_2008 = v3;
    a0->field_2010 = v4;
    return a0;
}
