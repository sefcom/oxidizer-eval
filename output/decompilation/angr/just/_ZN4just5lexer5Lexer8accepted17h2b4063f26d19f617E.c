double just::lexer::Lexer::accepted(long long a0, long long a1, long long a2)
{
    int v0;  // [bp-0x58], Other Possible Types: char
    int v1;  // [bp-0x48]
    int v2;  // [bp-0x38]
    int v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    char v5;  // [bp-0x10]
    unsigned long v7;  // xmm0lq
    unsigned long v8;  // xmm0lq

    if (a1->field_c0 != a2)
    {
        *((char *)a0) = 0;
        *((char *)&a0[72]) = 37;
        return v8;
    }
    v0.advance(a1);
    if (v5 != 37)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v4);
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v0;
        return (unsigned long long)v0;
    }
    *((char *)a0) = 1;
    *((char *)&a0[72]) = 37;
    return v7;
}
