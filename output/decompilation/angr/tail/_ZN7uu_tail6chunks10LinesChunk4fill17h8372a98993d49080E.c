long long uu_tail::chunks::LinesChunk::fill(void* a0, struct_0 *a1, unsigned long long a2)
{
    char v0;  // [bp-0x40]
    int v1;  // [bp-0x38]
    char v2;  // [bp-0x28]
    unsigned long long v4;  // rax

    v0.fill(a1, a2);
    if (*((int *)&v0) == 1)
    {
        a0[8] = v1;
        v4 = 1;
    }
    else
    {
        if ((int)v1 == 1)
        {
            memcpy(&v2, &(char)v1, 16);
            a1->field_2008 = (unsigned long long)a1.count_lines();
            *((int128_t *)&a0[8]) = *((int128_t *)&v2);
        }
        else
        {
            a1->field_2008 = 0;
            *((unsigned long long *)&a0[8]) = 0;
        }
        v4 = 0;
    }
    *((unsigned long long *)a0) = v4;
    return v4;
}
