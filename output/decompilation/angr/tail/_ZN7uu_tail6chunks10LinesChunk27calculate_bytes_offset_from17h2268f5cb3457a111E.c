long long uu_tail::chunks::LinesChunk::calculate_bytes_offset_from(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    char *v3;  // rax
    unsigned long v4;  // rdx
    char *v5;  // rcx
    char *v6;  // rcx
    unsigned long long v7;  // rbx
    unsigned long v8;  // rcx
    unsigned long v9;  // rdi

    v0 = v2;
    v3 = a0.get_buffer();
    if (!a1 || !v4)
        return 0;
    v5 = 0;
    while (true)
    {
        v6 = v5;
        v7 = a1;
        v8 = v6 + 1;
        if (v4 - 1 == v6)
            break;
        v9 = *((char *)(v3 + v6)) == a0->field_2010;
        a1 = v7 - v9;
        v5 = v8;
        if (v7 == v9)
            break;
    }
    return v6 + 1;
}
