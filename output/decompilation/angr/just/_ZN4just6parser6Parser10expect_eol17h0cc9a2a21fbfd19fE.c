double just::parser::Parser::expect_eol(long long a0, long long a1)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    int v1;  // [bp-0x98]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    char v4;  // [bp-0x68], Other Possible Types: unsigned long long
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x5f]
    unsigned int v7;  // [bp-0x5c]
    int v8;  // [bp-0x58]
    int v9;  // [bp-0x48]
    int v10;  // [bp-0x38]
    int v11;  // [bp-0x28], Other Possible Types: char
    unsigned long long v12;  // [bp-0x18]
    unsigned long v14;  // xmm0lq

    v0.accept(a1, 16);
    if (v5 != 37)
    {
        v12 = v4;
        memcpy(&v11, &(char)v3, 16);
        v10 = v2;
        v9 = v1;
        v8 = v0;
        *((unsigned int *)&a0[76]) = v7;
        *((int *)&a0[73]) = *((int *)&v6);
        *((unsigned long long *)&a0[64]) = v12;
        a0[48] = v11;
        a0[32] = v10;
        a0[16] = v9;
        *(a0) = v8;
        *((char *)&a0[72]) = v5;
        return (unsigned long long)v8;
    }
    if (!a1.next_is(19))
    {
        v0.expect(a1, 20);
        if (v5 != 37)
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v4);
            a0[48] = v3;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v0;
            return (unsigned long long)v0;
        }
    }
    *((char *)&a0[72]) = 37;
    return v14;
}
