long long just::parser::Parser::parse_string_literal(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xc1]
    int v2;  // [bp-0xb8]
    int v3;  // [bp-0xb1]
    char v4;  // [bp-0xa8]
    unsigned long v5;  // [bp-0xa1]
    unsigned long long v6;  // [bp-0x99]
    char v7;  // [bp-0x88]
    unsigned long v8;  // [bp-0x80]
    int v9;  // [bp-0x78]
    int v10;  // [bp-0x68]
    int v11;  // [bp-0x58]
    unsigned long v12;  // [bp-0x48]
    char v13;  // [bp-0x40]
    char v14;  // [bp-0x3f]
    unsigned long long v15;  // [bp-0x38]
    char v16;  // [bp-0x2f]
    char v17;  // [bp-0x1f]
    char v18;  // [bp-0x10]
    unsigned long long v20;  // rsi
    int v21;  // xmm0

    v7.parse_string_literal_token(a1);
    if (*((int *)&v7) != 1)
    {
        v6 = *((long long *)&v18);
        v21 = *((int128_t *)&v14);
        memcpy(&v4, &v17, 16);
        *((int128_t *)&v2) = *((int128_t *)&v16);
        v0 = v21;
        *((unsigned long *)&a0[32]) = v5;
        *((unsigned long long *)&a0[40]) = v6;
        a0[16] = v3;
        *((int128_t *)a0) = (int128_t)(&v0)[7];
        *((char *)&a0[72]) = 37;
        return v6;
    }
    v0 = *((long long *)&v14);
    v1 = v15;
    v20 = v0;
    *((unsigned long long *)&a0[72]) = v1;
    *((unsigned long long *)&a0[65]) = v20;
    *((unsigned long *)a0) = v8;
    a0[8] = v9;
    a0[24] = v10;
    a0[40] = v11;
    *((unsigned long *)&a0[56]) = v12;
    *((char *)&a0[64]) = v13;
    return v8;
}
