long long uu_tail::chunks::LinesChunk::from_chunk::h92082d78e298c7e3(struct_0 *a0, struct_0 *a1, unsigned long long a2)
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
        uu_tail::chunks::BytesChunk::from_chunk::hb6067992a01f279a(a0, a1, uu_tail::chunks::LinesChunk::calculate_bytes_offset_from::hf7157a0eade16c76(a1, a2));
        v5 = a1->field_2010;
    }
    a0->field_2008 = v4;
    a0->field_2010 = v5;
    return a0;
}
