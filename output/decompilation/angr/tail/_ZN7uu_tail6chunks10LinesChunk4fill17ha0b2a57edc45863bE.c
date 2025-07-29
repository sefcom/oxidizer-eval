long long uu_tail::chunks::LinesChunk::fill(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15

    v0.fill(a1, a2);
    if ((v0 & 1))
    {
        *((int128_t *)&a0->field_8) = *((int128_t *)&v1);
        v4 = 1;
    }
    else
    {
        if ((v1 & 1))
        {
            v5 = *((long long *)&v2);
            a1->field_2008 = (unsigned long long)a1.count_lines();
            *((unsigned long long *)&a0->field_8) = 1;
            *((unsigned long long *)((char *)&a0[1].field_0 + 7)) = v5;
        }
        else
        {
            a1->field_2008 = 0;
            *((unsigned long long *)&a0->field_8) = 0;
        }
        v4 = 0;
    }
    a0->field_0 = v4;
    return a0;
}
