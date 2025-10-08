long long bat::preprocessor::expand_tabs(unsigned long a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4)
{
    unsigned long long v0;  // [bp-0xf8]
    unsigned long long v1;  // [bp-0xf0]
    unsigned long long v2;  // [bp-0xe8]
    void* v3;  // [bp-0xe0]
    struct_0 *v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    char v6;  // [bp-0xb0]
    unsigned long long v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    unsigned long long v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    void* v11;  // [bp-0x60]
    unsigned int v12;  // [bp-0x50]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v15;  // r15
    unsigned long long v16;  // rdx

    v13 = v15;
    v1 = a2 * 2.with_capacity_in(1, 1, &g_acd180);
    v2 = v16;
    v3 = 0;
    v7 = a1;
    v0 = a2;
    v8 = a2;
    v9 = a1;
    v10 = a1 + a2;
    v11 = 0;
    v12 = 1114113;
    v5 = a1;
    v6.next(&v7);
    if (*((long long *)&v6) == 5)
    {
        v4->field_10 = 0;
        v4->field_0 = *((int128_t *)&v1);
        return 0;
    }
    goto (long long)(g_49c380[*((long long *)&v6)] + (char *)&g_49c380[0]);
}
