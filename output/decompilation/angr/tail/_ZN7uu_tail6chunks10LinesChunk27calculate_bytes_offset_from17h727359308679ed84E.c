long long uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long v3;  // rdx
    char *v4;  // rax
    void* v5;  // r14
    char *v6;  // rax
    unsigned long long v7;  // rbx
    unsigned long long v8;  // r14
    unsigned long v9;  // r14
    char *v10;  // rax
    unsigned long v11;  // r12

    v0 = a0.get_buffer();
    v1 = v3 + v0;
    if (!a1 || !v0.next())
        return 0;
    v5 = 0;
    while (true)
    {
        v6 = v4;
        v7 = a1;
        v8 = v5;
        v9 = v8 + 1;
        v10 = v0.next();
        if (!v10)
            return v8 + 1;
        v11 = *(v6) == a0->field_2010;
        v5 = v9;
        a1 = v7 - v11;
        v4 = v10;
        if (v7 == v11)
            return v8 + 1;
    }
}
