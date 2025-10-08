double just::parser::Parser::expect(long long a0, long long a1, long long a2)
{
    unsigned int v0;  // [bp-0x108]
    unsigned int v1;  // [bp-0x105]
    char v2;  // [bp-0x100]
    char v3;  // [bp-0xf8]
    char v4;  // [bp-0xf0]
    char v5;  // [bp-0xe8]
    char v6;  // [bp-0xe0]
    char v7;  // [bp-0xd8]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc8]
    char v10;  // [bp-0xc0]
    char v11;  // [bp-0xbf]
    unsigned int v12;  // [bp-0xbc]
    char v13;  // [bp-0xb8]
    char v14;  // [bp-0xb7]
    unsigned int v15;  // [bp-0xb4]
    int v16;  // [bp-0xa8], Other Possible Types: char
    int v17;  // [bp-0x98], Other Possible Types: char
    int v18;  // [bp-0x88], Other Possible Types: char
    int v19;  // [bp-0x78], Other Possible Types: char
    int v21;  // xmm0
    int v22;  // xmm1
    int v23;  // xmm2
    int v24;  // xmm3
    int v25;  // xmm4
    unsigned int v26;  // edx
    unsigned int v27;  // edx

    v2.accept(a1, a2);
    memcpy(&v16, &v2, 16);
    memcpy(&v17, &v4, 16);
    memcpy(&v18, &v6, 16);
    memcpy(&v19, &v8, 16);
    v0 = *((int *)&v11);
    v1 = v12;
    if (v13 != 37)
    {
        v26 = *((int *)&v14);
        *((unsigned int *)&a0->field_40[12]) = v15;
        *((unsigned int *)&a0->field_40[9]) = v26;
        *((void*)&a0->field_30) = v19;
        *((void*)&a0->field_20) = v18;
        *((void*)&a0->field_10) = v17;
        *((void*)&a0->field_0) = v16;
        v27 = v0;
        *((unsigned int *)&a0->field_40[4]) = v1;
        *((unsigned int *)&a0->field_40[1]) = v27;
        a0->field_40[0] = v10;
        a0->field_40[8] = v13;
        return (unsigned long long)v16;
    }
    else if (v10 == 37)
    {
        v2.unexpected_token(a1);
        v21 = *((int128_t *)&v13);
        v22 = *((int128_t *)&v3);
        v23 = *((int128_t *)&v5);
        v24 = *((int128_t *)&v7);
        v25 = *((int128_t *)&v9);
        *((void*)&a0->field_40[0]) = v21;
        *((void*)&a0->field_30) = v25;
        *((void*)&a0->field_20) = v24;
        *((void*)&a0->field_10) = v23;
        *((void*)&a0->field_0) = v22;
        return (unsigned long long)v21;
    }
    else
    {
        *((void*)&a0->field_30) = v19;
        *((void*)&a0->field_20) = v18;
        *((void*)&a0->field_10) = v17;
        *((void*)&a0->field_0) = v16;
        *((unsigned int *)&a0->field_40[1]) = v0;
        *((unsigned int *)&a0->field_40[4]) = v1;
        a0->field_40[0] = v10;
        a0->field_40[8] = 37;
        return (unsigned long long)v16;
    }
}
