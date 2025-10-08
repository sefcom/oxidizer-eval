long long bat::syntax_mapping::SyntaxMapping::insert(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, struct_0 *a4)
{
    int v0;  // [bp-0xe8], Other Possible Types: char
    int v1;  // [bp-0xd8]
    int v2;  // [bp-0xc8], Other Possible Types: char
    int v3;  // [bp-0xb8]
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0x90], Other Possible Types: unsigned long long
    int v6;  // [bp-0x88], Other Possible Types: char
    int v7;  // [bp-0x78]
    int v8;  // [bp-0x68], Other Possible Types: char
    int v9;  // [bp-0x58]
    char v10;  // [bp-0x48]
    int v11;  // [bp-0x30]
    unsigned long v12;  // [bp-0x20]

    bat::syntax_mapping::make_glob_matcher(&v5, a2, a3);
    memcpy(&v0, &v6, 16);
    v1 = v7;
    memcpy(&v2, &v8, 16);
    v3 = v9;
    memcpy(&v4, &v10, 16);
    if (!((char)(((0 ^ v5) & (0 ^ -(v5))) >> 63)))
    {
        memcpy(&v10, &v4, 16);
        memcpy(&v9, &v3, 16);
        v8 = v2;
        v7 = v1;
        v6 = v0;
        *((uint128_t *)&v11) = a4->field_0;
        v12 = a4->field_10;
        a1.push(&v5);
        *((char *)a0) = 13;
        return a0;
    }
    *((int128_t *)&a0[64]) = *((int128_t *)&v4);
    a0[48] = v3;
    a0[32] = v2;
    a0[16] = v1;
    *(a0) = v0;
    return a0;
}
