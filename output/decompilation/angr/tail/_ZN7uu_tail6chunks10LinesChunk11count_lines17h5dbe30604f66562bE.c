void uu_tail::chunks::LinesChunk::count_lines(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]
    unsigned long long v5;  // rax
    unsigned long v6;  // rdx

    v5 = a0.get_buffer();
    v3 = a0->field_2010;
    v0 = v5;
    v1 = v5;
    v2 = v6 + v5;
    v5.count(v6 + v5, &v3);
    return;
}
