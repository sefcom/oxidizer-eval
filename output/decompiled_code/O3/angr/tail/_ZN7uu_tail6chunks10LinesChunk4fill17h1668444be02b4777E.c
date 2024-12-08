long long uu_tail::chunks::LinesChunk::fill::h1668444be02b4777(unsigned long long a0[2], struct_0 *a1, unsigned long long a2)
{
    unsigned long long v0[3];  // [bp-0x30]
    char v1;  // [bp-0x28]
    char v2;  // [bp-0x20]
    unsigned long long v4;  // rax
    unsigned long long v5;  // r15
    unsigned int v6;  // rsi
    unsigned int v7;  // rdx

    uu_tail::chunks::BytesChunk::fill::hb47cf781496e293b(v0, a1, a2);
    if (v0[0])
    {
        *((int128_t *)&a0[1]) = *((int128_t *)&v1);
        v4 = 1;
    }
    else
    {
        if (!*((long long *)&v1))
        {
            a1->field_2008 = 0;
            a0[1] = 0;
        }
        else
        {
            v5 = *((long long *)&v2);
            a1->field_2008 = uu_tail::chunks::LinesChunk::count_lines::ha6a6352d01cd8b5e(a1, v6, v7);
            a0[1] = 1;
            a0[1] = v5;
        }
        v4 = 0;
    }
    a0[0] = v4;
    return a0;
}
