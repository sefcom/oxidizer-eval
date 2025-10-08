double just::lexer::Lexer::skip(long long a0, long long a1)
{
    int v0;  // [bp-0x60], Other Possible Types: char
    int v1;  // [bp-0x50]
    int v2;  // [bp-0x40]
    int v3;  // [bp-0x30]
    char v4;  // [bp-0x20]
    char v5;  // [bp-0x18]
    unsigned long v7;  // xmm0lq

    v0.advance(a1);
    if (v5 == 37)
    {
        v0.advance(a1);
        if (v5 == 37)
        {
            v0.advance(a1);
            if (v5 == 37)
            {
                v0.advance(a1);
                if (v5 == 37)
                {
                    a0->field_40[8] = 37;
                    return v7;
                }
            }
        }
    }
    *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v4);
    *((void*)&a0->field_30) = v3;
    *((void*)&a0->field_20) = v2;
    *((void*)&a0->field_10) = v1;
    *((void*)&a0->field_0) = v0;
    return (unsigned long long)v0;
}
