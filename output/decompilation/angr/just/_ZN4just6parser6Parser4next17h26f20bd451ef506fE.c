double just::parser::Parser::next(long long a0, long long a1)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    char v2;  // [bp-0xc0]
    char v3;  // [bp-0xb8]
    char v4;  // [bp-0xb0]
    char v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    char v7;  // [bp-0x98]
    char v8;  // [bp-0x90]
    char v9;  // [bp-0x88]
    char v10;  // [bp-0x80]
    char v11;  // [bp-0x7f]
    unsigned int v12;  // [bp-0x7c]
    int v13;  // [bp-0x78]
    unsigned long long v15;  // rdx
    int v16;  // xmm1
    int v17;  // xmm2
    int v18;  // xmm3
    int v19;  // xmm4
    int v20;  // xmm0
    int v21;  // xmm1
    int v22;  // xmm2

    v0 = a1.rest();
    v1 = v15;
    v2.try_fold(&v0);
    if (v10 != 37)
    {
        v20 = *((int128_t *)&v2);
        v21 = *((int128_t *)&v4);
        v22 = *((int128_t *)&v6);
        *((int128_t *)&a0[48]) = *((int128_t *)&v8);
        a0[32] = v22;
        a0[16] = v21;
        *(a0) = v20;
        *((int *)&a0[65]) = *((int *)&v11);
        *((unsigned int *)&a0[68]) = v12;
        *((char *)&a0[64]) = v10;
        *((char *)&a0[72]) = 37;
        return (unsigned long long)v20;
    }
    v2.internal_error(a1);
    v16 = *((int128_t *)&v3);
    v17 = *((int128_t *)&v5);
    v18 = *((int128_t *)&v7);
    v19 = *((int128_t *)&v9);
    a0[64] = v13;
    a0[48] = v19;
    a0[32] = v18;
    a0[16] = v17;
    *(a0) = v16;
    return (unsigned long long)v13;
}
