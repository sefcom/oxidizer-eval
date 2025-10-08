long long just::parser::Parser::parse(unsigned long long a0, unsigned int a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, unsigned long long a6, unsigned long long a7, unsigned long long a8)
{
    void* v0;  // [bp-0xd8]
    void* v1;  // [bp-0xc8]
    int v2;  // [bp-0xc0], Other Possible Types: char
    unsigned long long v3;  // [bp-0xb0]
    int v4;  // [bp-0xa8]
    unsigned long long v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    unsigned long long v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x78]
    char v10;  // [bp-0x70]
    void* v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    uint128_t v13;  // [bp-0x50]
    void* v14;  // [bp-0x40]
    void* v15;  // [bp-0x30]
    unsigned int v16;  // [bp-0x28]

    v0 = 0;
    v1 = 0;
    v2.to_vec(a2, a3);
    v11 = 0;
    memcpy(&v10, &v0, 16);
    v16 = a1;
    v4 = v2;
    v5 = v3;
    v12 = a4;
    v13 = 0;
    v6 = a5;
    v7 = a6;
    v14 = 0;
    v15 = 0;
    v8 = a7;
    v9 = a8;
    return a0.parse_ast(&v4);
}
