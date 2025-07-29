long long uu_tail::chunks::BytesChunk::from_chunk(struct_0 *a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x2028]
    void* v1;  // [bp-0x1028]
    void* v3;  // r13
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v1 = 0;
    v3 = a1->field_2000 - a2;
    if (a1->field_2000 > a2)
    {
        memset(&v0, 0, 0x2000);
        v4 = a1.get_buffer_with(a2);
        core::slice::<impl [T]>::copy_from_slice(v5.index_mut(&v0, 0x2000, &g_637730), v5, v4, v5, &g_637748);
        memcpy(a0, &v0, 0x2000);
    }
    else
    {
        v3 = 0;
        memset(a0, 0, 0x2000);
    }
    a0->field_2000 = v3;
    return a0;
}
