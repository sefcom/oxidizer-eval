long long ruff_python_formatter::comments::Comments::from_ast::collect_comments(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    void* v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    void* v5;  // [bp-0xd8]
    void* v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    int v8;  // [bp-0xc0], Other Possible Types: void*
    char *v9;  // [bp-0xb8]
    unsigned long long v10;  // [bp-0xb0]
    unsigned long long v11;  // [bp-0xa8]
    unsigned long long v12;  // [bp-0xa0]
    int v14;  // [bp-0x98]
    int v15;  // [bp-0x88]
    void* v16;  // [bp-0x70]
    unsigned long long v17;  // [bp-0x68]
    uint128_t v18;  // [bp-0x60]
    unsigned long long v19;  // [bp-0x50]
    void* v20;  // [bp-0x48]
    int v21;  // [bp-0x40]
    int v22;  // [bp-0x30]
    unsigned long long v23[3];  // [bp-0x20]
    unsigned long long v24;  // [bp-0x18]
    unsigned long long v25;  // [bp-0x10]

    if (a4[2])
    {
        v16 = 0;
        v17 = 4;
        v18 = 0;
        v19 = 8;
        v20 = 0;
        *((uint128_t *)&v21) = g_97c818;
        *((uint128_t *)&v22) = g_97c828;
        v23[0] = a4;
        v24 = a2;
        v25 = a3;
        v9 = &v16;
        v10 = &g_97d488;
        v11 = a2;
        v12 = a3;
        v6 = 0;
        v7 = 8;
        v8 = 0;
        v4 = 94;
        v0 = 0;
        v2 = a4[1];
        v3 = a4[1] + a4[2] * 8;
        v0.visit(a0, a1);
        memcpy(&(char)v14, &v21, 16);
        v15 = v22;
    }
    else
    {
        *((uint128_t *)&v15) = g_97c828;
        *((uint128_t *)&v14) = g_97c818;
    }
    v0 = 0;
    v1 = 4;
    *((uint128_t *)&v2) = 0;
    v4 = 8;
    v5 = 0;
    memcpy(&v6, &(char)v14, 16);
    v8 = v15;
    return v0.new(a4);
}
