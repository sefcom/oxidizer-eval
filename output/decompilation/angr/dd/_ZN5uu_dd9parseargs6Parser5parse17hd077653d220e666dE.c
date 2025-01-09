long long uu_dd::parseargs::Parser::parse::hd077653d220e666d(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [sp-0x1e8]
    int v1;  // [sp-0x1d8]
    char v2;  // [bp-0x1c0]
    char v3;  // [bp-0x1b8]
    char v4;  // [bp-0x1a8]
    char v5;  // [bp-0x198]
    unsigned long v6;  // [sp-0xe8], Other Possible Types: unsigned long long
    int v7;  // [sp-0xe0]
    int v8;  // [sp-0xd0]
    char v9;  // [bp-0xc0]
    unsigned long long v11;  // r14

    uu_dd::parseargs::Parser::read::h3585469891c58efd(&v2, a1, a2, a3);
    v11 = *((long long *)&v2);
    *((int128_t *)&v0) = *((int128_t *)&v3);
    *((int128_t *)&v1) = *((int128_t *)&v4);
    if (v11 == 2)
    {
        *((void*)((char *)&a0->field_8 + 8)) = v1;
        *((void*)&(&a0->field_0)[1]) = v0;
        a0->field_0 = 3;
        return a0;
    }
    memcpy(&v9, &v5, 176);
    v6 = v11;
    v7 = v0;
    v8 = v1;
    uu_dd::parseargs::Parser::validate::hd2b1e31453916e87(a0, &v6);
    return a0;
}
