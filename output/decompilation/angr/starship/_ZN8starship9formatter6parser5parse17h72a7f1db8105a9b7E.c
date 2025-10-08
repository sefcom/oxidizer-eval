long long starship::formatter::parser::parse(void* a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0x298], Other Possible Types: char
    unsigned long v1;  // [bp-0x288], Other Possible Types: unsigned long long
    int v2;  // [bp-0x278]
    char v3;  // [bp-0x268]
    char v4;  // [bp-0x258]
    unsigned long long v5;  // [bp-0x248]
    char v6;  // [bp-0x240]
    unsigned long long v7;  // [bp-0x238]
    char v8;  // [bp-0x230]
    unsigned long long v9;  // [bp-0x220]
    char v10;  // [bp-0x218]
    char v11;  // [bp-0x128], Other Possible Types: unsigned long long
    int v12;  // [bp-0x120]
    char v13;  // [bp-0x110], Other Possible Types: unsigned long long
    char v14;  // [bp-0x108]
    char v15;  // [bp-0x100]
    char v16;  // [bp-0xf0]

    v11.parse(1, a1, a2);
    if (v11 != 2)
    {
        v1 = v13;
        v0 = v12;
        memcpy(&v10, &v14, 240);
        v7 = v11;
        memcpy(&v8, &v0, 16);
        v9 = v1;
        *((long long *)&a0[8]) = v7.new();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v5 = *((long long *)&v16);
    memcpy(&v4, &v15, 16);
    memcpy(&v3, &v13, 16);
    v2 = v12;
    v6 = 0;
    v0.collect(&v2);
    *((unsigned long *)&a0[16]) = v1;
    *(a0) = v0;
    return v1;
}
