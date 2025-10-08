double just::parser::Parser::forbid(long long a0, long long a1)
{
    unsigned int v0;  // [bp-0xe8]
    unsigned int v1;  // [bp-0xe5]
    unsigned int v2;  // [bp-0xe0]
    unsigned int v3;  // [bp-0xdd]
    int v4;  // [bp-0xd8], Other Possible Types: char
    int v5;  // [bp-0xc8]
    int v6;  // [bp-0xb8]
    int v7;  // [bp-0xa8]
    char v8;  // [bp-0x98]
    char v9;  // [bp-0x97], Other Possible Types: unsigned int
    unsigned int v10;  // [bp-0x94]
    char v11;  // [bp-0x90]
    char v12;  // [bp-0x8f]
    unsigned int v13;  // [bp-0x8c]
    int v14;  // [bp-0x88], Other Possible Types: char
    int v15;  // [bp-0x78]
    int v16;  // [bp-0x68]
    int v17;  // [bp-0x58]
    int v18;  // [bp-0x48]
    int v19;  // [bp-0x38]
    int v20;  // [bp-0x28]
    int v21;  // [bp-0x18]
    unsigned int v23;  // edx
    unsigned int v24;  // edx

    v4.next(a1);
    memcpy(&v14, &v4, 16);
    v15 = v5;
    v16 = v6;
    v17 = v7;
    v0 = *((int *)&v9);
    v1 = v10;
    if (v11 != 37)
    {
        v23 = *((int *)&v12);
        *((unsigned int *)&a0->field_48) = v13;
        *((unsigned int *)((char *)&a0->field_44 + 1)) = v23;
        *((void*)&a0->field_30) = v17;
        *((void*)&a0->field_20) = v16;
        *((void*)&a0->field_10) = v15;
        *((void*)&a0->field_0) = v14;
        v24 = v0;
        a0->field_41 = v1;
        *((unsigned int *)&(&a0->field_40)[1]) = v24;
        a0->field_40 = v8;
        *((char *)&a0->field_44) = v11;
        return (unsigned long long)v14;
    }
    v18 = v14;
    v19 = v15;
    v20 = v16;
    v21 = v17;
    v2 = v0;
    v3 = v1;
    if (v8 != 24)
    {
        *((char *)&a0->field_44) = 37;
        return (unsigned long long)v14;
    }
    memcpy(&v7, &v21, 16);
    v6 = v20;
    v5 = v19;
    v4 = v18;
    v8 = 24;
    v9 = v2;
    v10 = v3;
    just::parser::Parser::parse_recipe::{{closure}}(a0, &v4);
    return (unsigned long long)v18;
}
