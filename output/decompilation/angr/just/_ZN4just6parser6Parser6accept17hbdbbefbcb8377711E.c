double just::parser::Parser::accept(long long a0, long long a1, long long a2)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    int v1;  // [bp-0x98]
    int v2;  // [bp-0x88]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    int v6;  // [bp-0x50]
    int v7;  // [bp-0x40]
    int v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x20]
    char v10;  // [bp-0x18]
    char v11;  // [bp-0x17]
    unsigned int v12;  // [bp-0x14]
    unsigned long v14;  // xmm0lq
    unsigned int v15;  // ecx

    if (a1.next_is(a2))
    {
        v5.advance(a1);
        memcpy(&v0, &v5, 16);
        v1 = v6;
        v2 = v7;
        v3 = v8;
        v4 = v9;
        if (v10 != 37)
        {
            v15 = *((int *)&v11);
            *((unsigned int *)&a0[76]) = v12;
            *((unsigned int *)&a0[73]) = v15;
            *((unsigned long long *)&a0[64]) = v4;
            a0[48] = v3;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v0;
            *((char *)&a0[72]) = v10;
            return (unsigned long long)v0;
        }
        *((unsigned long long *)&a0[64]) = v4;
        v14 = (unsigned long long)v0;
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v0;
    }
    else
    {
        *((char *)&a0[64]) = 37;
    }
    *((char *)&a0[72]) = 37;
    return v14;
}
