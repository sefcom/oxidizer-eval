double just::parser::Parser::accepted(long long a0, long long a1, long long a2)
{
    unsigned int v0;  // [bp-0xa0]
    unsigned int v1;  // [bp-0x9d]
    int v2;  // [bp-0x98], Other Possible Types: char
    int v3;  // [bp-0x88]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x68]
    char v6;  // [bp-0x58]
    char v7;  // [bp-0x57]
    unsigned int v8;  // [bp-0x54]
    char v9;  // [bp-0x50]
    char v10;  // [bp-0x4f]
    unsigned int v11;  // [bp-0x4c]
    int v12;  // [bp-0x48]
    int v13;  // [bp-0x38]
    int v14;  // [bp-0x28], Other Possible Types: char
    char v15;  // [bp-0x18]
    unsigned long v17;  // xmm0lq

    v2.accept(a1, a2);
    if (v9 != 37)
    {
        memcpy(&v15, &v5, 16);
        memcpy(&v14, &v4, 16);
        v13 = v3;
        v12 = v2;
        v0 = *((int *)&v7);
        v1 = v8;
        *((unsigned int *)&a0[76]) = v11;
        *((int *)&a0[73]) = *((int *)&v10);
        *((int128_t *)&a0[48]) = *((int128_t *)&v15);
        a0[32] = v14;
        a0[16] = v13;
        *(a0) = v12;
        *((unsigned int *)&a0[65]) = v0;
        *((unsigned int *)&a0[68]) = v1;
        *((char *)&a0[64]) = v6;
        *((char *)&a0[72]) = v9;
        return (unsigned long long)v12;
    }
    *((char *)a0) = v6 != 37;
    *((char *)&a0[72]) = v9;
    return v17;
}
