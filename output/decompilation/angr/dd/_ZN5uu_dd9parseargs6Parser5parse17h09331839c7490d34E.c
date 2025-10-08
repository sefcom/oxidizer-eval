double uu_dd::parseargs::Parser::parse(long long a0, long long a1, long long a2)
{
    int v0;  // [bp-0x1e8]
    char v1;  // [bp-0x1d8]
    char v2;  // [bp-0x1c0], Other Possible Types: unsigned long long
    int v3;  // [bp-0x1b8]
    char v4;  // [bp-0x1a8]
    char v5;  // [bp-0x198]
    unsigned long long v6;  // [bp-0xe8]
    int v7;  // [bp-0xe0]
    char v8;  // [bp-0xd0]
    char v9;  // [bp-0xc0]

    v2.read(a1, a2);
    v0 = v3;
    memcpy(&v1, &v4, 16);
    if (v2 == 2)
    {
        *((int128_t *)((char *)&a0->field_8 + 8)) = *((int128_t *)&v1);
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 3;
    }
    else
    {
        memcpy(&v9, &v5, 176);
        v6 = v2;
        v7 = v0;
        memcpy(&v8, &v1, 16);
        a0.validate(&v6);
    }
    return (unsigned long long)v0;
}
