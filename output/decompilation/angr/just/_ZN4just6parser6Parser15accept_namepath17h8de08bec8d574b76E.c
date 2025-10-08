double just::parser::Parser::accept_namepath(long long a0, long long a1)
{
    int v0;  // [bp-0xa8]
    int v1;  // [bp-0x98], Other Possible Types: unsigned long long
    int v2;  // [bp-0x88], Other Possible Types: char
    int v3;  // [bp-0x78], Other Possible Types: char
    unsigned long long v4;  // [bp-0x68]
    int v5;  // [bp-0x60], Other Possible Types: char
    int v6;  // [bp-0x50], Other Possible Types: char
    char v7;  // [bp-0x40]
    char v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x20]
    char v10;  // [bp-0x18]
    char v11;  // [bp-0x17]
    char v12;  // [bp-0x14]
    int v14;  // xmm0
    unsigned long v15;  // xmm0lq

    if (a1.next_is(24))
    {
        v5.parse_namepath(a1);
        if (v10 != 37)
        {
            v4 = v9;
            memcpy(&v3, &v8, 16);
            memcpy(&v2, &v7, 16);
            v1 = v6;
            v0 = v5;
            *((int *)&a0[76]) = *((int *)&v12);
            *((int *)&a0[73]) = *((int *)&v11);
            *((unsigned long long *)&a0[64]) = v4;
            a0[48] = v3;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v0;
            *((char *)&a0[72]) = v10;
            return (unsigned long long)v0;
        }
        v1 = *((long long *)&v6);
        v14 = v5;
        v15 = (unsigned long long)v14;
        v0 = v14;
        *((long long *)&a0[16]) = *((long long *)&v6);
        *(a0) = v0;
    }
    else
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    *((char *)&a0[72]) = 37;
    return v15;
}
