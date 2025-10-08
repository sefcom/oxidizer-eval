long long starship::formatter::string_formatter::StringFormatter::new(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    unsigned long long v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    int v3;  // [bp-0xb8], Other Possible Types: char
    unsigned long long v4;  // [bp-0xb0]
    unsigned long long v5;  // [bp-0xa8]
    char v6;  // [bp-0xa0]
    unsigned long v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    int v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x78]
    char v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x60]
    int v13;  // [bp-0x58], Other Possible Types: char
    unsigned long long v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x28]
    int v18;  // xmm0

    starship::formatter::parser::parse(&v3, a1, a2);
    if (!((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63)))
    {
        v0 = *((long long *)&v3);
        v1 = v4;
        v2 = v5;
        v15.get_variables(&v0);
        v3.into_iter(&v15);
        v11.collect(&v3);
        v16.get_style_variables(&v0);
        v3.into_iter(&v16);
        v13.collect(&v3);
        v5 = v2;
        v18 = *((int128_t *)&v0);
        v3 = v18;
        v8 = v12;
        memcpy(&v6, &v11, 16);
        v9 = v13;
        v10 = v14;
        *((unsigned long long *)&a0[64]) = v14;
        a0[48] = v13;
        *(a0) = v18;
        *((unsigned long *)&a0[32]) = v7;
        *((unsigned long long *)&a0[40]) = v8;
        *((int128_t *)&a0[16]) = *((int128_t *)&v5);
        return a0;
    }
    *((unsigned long long *)&a0[8]) = 0x8000000000000000;
    *((unsigned long long *)&a0[16]) = v4;
    *((unsigned long long *)a0) = 0x8000000000000000;
    return a0;
}
