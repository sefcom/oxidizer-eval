double fd::extract_command(long long a0, long long a1, char a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long v1;  // [bp-0x48]
    int v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x30]
    int v4;  // [bp-0x28]
    unsigned long v5;  // [bp-0x18]
    unsigned long long v7;  // r14
    unsigned long long v8;  // rax
    unsigned long v9;  // xmm0lq
    int v10;  // xmm0

    v7 = 0x8000000000000000;
    v8 = a1->field_160;
    a1->field_160 = 0x8000000000000000;
    if ((char)(((0 ^ v8) & (0 ^ -(v8))) >> 63))
    {
        v8 = 9223372036854775809;
    }
    else
    {
        v5 = *((long long *)((char *)&a1->field_168 + 8));
        v9 = *((int128_t *)&(&a1->field_160)[1]);
        *((int128_t *)&v4) = *((int128_t *)&(&a1->field_160)[1]);
    }
    v3 = v8;
    v0.or_else(&v3, *((int *)&a1->padding_180[100]), a2);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((unsigned long *)&a0[8]) = v1;
        v7 = 9223372036854775809;
    }
    else if (v0 != 9223372036854775809)
    {
        v10 = *((int128_t *)&v0);
        a0[16] = v2;
        *(a0) = v10;
        return (unsigned long long)v10;
    }
    *((unsigned long long *)a0) = v7;
    return v9;
}
