long long uu_tail::chunks::LinesChunk::from_chunk::h0d575bd9e799272f(struct_0 *a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x28]
    unsigned long v2;  // rax
    unsigned long long v3;  // r15
    void* v4;  // r15
    char v5;  // bpl

    v0 = v2;
    v3 = a1->field_2008;
    v4 = v3 - a2;
    if (v3 < a2)
    {
        v5 = a1->field_2010;
        v4 = 0;
        memset(a0, 0, 8200);
    }
    else
    {
        uu_tail::chunks::BytesChunk::from_chunk::hb8d3c435fa3c9517(a0, a1, uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::h5a04dadb518a126d(a1, a2, a2));
        v5 = a1->field_2010;
    }
    a0->field_2008 = v4;
    a0->field_2010 = v5;
    return a0;
}
