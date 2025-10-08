long long ruff_python_formatter::comments::visitor::collect_comments(struct_0 *a0, unsigned long long *a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    void* v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    void* v2;  // [bp-0x78]
    void* v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    void* v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x38]
    void* v9;  // [bp-0x30]
    char *v10;  // [bp-0x28]
    unsigned long long v11;  // [bp-0x20]
    unsigned long long v12;  // [bp-0x18]
    unsigned long long v13;  // [bp-0x10]
    unsigned long long v15;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v10 = &v0;
    v11 = &g_97d438;
    v12 = a2;
    v13 = a3;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v6 = 94;
    v3 = 0;
    v4 = a4;
    v5 = a4 + a5 * 8;
    v15 = ((0 ^ *(a1)) & (0 ^ -(*(a1)))) >> 63 & 255;
    v3.visit(v15, &a1[v15]);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
