double ruff_python_formatter::format_node(long long a0, long long a1, long long a2, long long a3, long long a4, long long a5)
{
    unsigned long v0;  // [bp-0xe0]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    unsigned short v5;  // [bp-0xb8]
    unsigned short v6;  // [bp-0xb0]
    char v7;  // [bp-0xae]
    int v8;  // [bp-0xac]
    char v9;  // [bp-0x9c]
    char *v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    char v12;  // [bp-0x88]
    char v13;  // [bp-0x80]
    unsigned long long v14;  // [bp-0x70]
    int v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    int v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long v20;  // r14
    unsigned long long v21;  // rdx
    unsigned long long v22;  // rax
    unsigned long long v23;  // rax
    int v24;  // xmm0

    v20 = a1 + 72;
    v22 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(v20.into(), v21, a3, a4, a2);
    *((uint128_t *)&v8) = *(a5);
    v1 = a3;
    v2 = a4;
    v3 = v22;
    v4 = a1;
    v5 = 0x100;
    v6 = 0;
    v9 = 2;
    v7 = 2;
    v0 = v20;
    v10 = &v0;
    v11 = &g_97f528;
    ruff_formatter::format(&v12, &v1, &v10);
    v23 = *((long long *)&v12);
    memcpy(&v1, &v13, 16);
    v3 = v14;
    if (!((char)(((0 ^ v23) & (0 ^ -(v23))) >> 63)))
    {
        *((long long *)&a0->field_40) = *((long long *)&v18);
        *((void*)&a0->field_30) = v17;
        *((void*)&a0->field_20) = v16;
        *((void*)&a0->field_18) = v15;
    }
    *((unsigned long long *)((char *)&a0->field_8 + 8)) = v3;
    v24 = *((int128_t *)&v1);
    *((void*)&(&a0->field_0)[1]) = v24;
    a0->field_0 = v23;
    return (unsigned long long)v24;
}
