long long just::lexer::Lexer::presume(struct_0 *a0, struct_1 *a1, unsigned int a2)
{
    unsigned int v0;  // [bp-0x94]
    char *v1;  // [bp-0x90]
    unsigned long long v2;  // [bp-0x88]
    char v3;  // [bp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x78]
    char *v5;  // [bp-0x70], Other Possible Types: char
    unsigned long long v6;  // [bp-0x68]
    void* v7;  // [bp-0x60], Other Possible Types: char
    int v8;  // [bp-0x50]
    char v9;  // [bp-0x40]
    char v10;  // [bp-0x38]
    char v11;  // [bp-0x30]
    unsigned long long v13;  // rax
    int v14;  // xmm0
    int v15;  // xmm1
    int v16;  // xmm2

    v0 = a2;
    if (a1->field_c0 != a2)
    {
        v1 = &v0;
        v2 = <char as core::fmt::Display>::fmt;
        v3 = &g_8303a8;
        v4 = 2;
        v7 = 0;
        v5 = &v1;
        v6 = 1;
        v11.map_or_else(0, a2, &v3);
        return a0.internal_error(a1, &v11);
    }
    v13 = v3.advance(a1);
    if (v10 != 37)
    {
        *((int128_t *)&a0->field_40[0]) = *((int128_t *)&v9);
        v14 = *((int128_t *)&v3);
        v15 = *((int128_t *)&v5);
        v16 = *((int128_t *)&v7);
        *((void*)&a0->field_30) = v8;
        *((void*)&a0->field_20) = v16;
        *((void*)&a0->field_10) = v15;
        *((void*)&a0->field_0) = v14;
        return v13;
    }
    a0->field_40[8] = 37;
    return v13;
}
