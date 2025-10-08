long long ruff_python_formatter::statement::stmt_if::format_elif_else_clause(unsigned long long a0, struct_0 *a1, struct_3 *a2, unsigned long long a3, unsigned long long a4, char a5)
{
    struct_0 *v0;  // [bp-0x120]
    unsigned long v1;  // [bp-0x118]
    unsigned int v2;  // [bp-0x110]
    unsigned int v3;  // [bp-0x10c]
    unsigned long v4;  // [bp-0xe8]
    char *v5;  // [bp-0xe0]
    char *v6;  // [bp-0xd8]
    unsigned long long v8;  // [bp-0xd0]
    struct_0 *v9;  // [bp-0xc8]
    unsigned long long v10;  // [bp-0xc0]
    unsigned long long v11;  // [bp-0xb8]
    unsigned long long v12;  // [bp-0xb0]
    unsigned long long v13;  // [bp-0xa8]
    char *v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x98]
    unsigned long long v16;  // [bp-0x90]
    unsigned long long v17;  // [bp-0x88]
    struct_0 *v18;  // [bp-0x80]
    unsigned long long v19;  // [bp-0x78]
    unsigned long long v20;  // [bp-0x70]
    char v21;  // [bp-0x68]
    char *v22;  // [bp-0x60]
    unsigned long long v23;  // [bp-0x58]
    char *v24;  // [bp-0x50]
    unsigned long long v25;  // [bp-0x48]
    char *v26;  // [bp-0x40]
    unsigned long long v27;  // [bp-0x38]
    struct_4 *v29;  // rax
    unsigned long v30;  // rbx
    unsigned long long v31;  // r14
    unsigned long long v32;  // rdx
    unsigned int v33;  // ecx

    v0 = a1;
    v4 = &a1->padding_0[24];
    v29 = a2->field_8->field_30(a2->field_0);
    v29->field_10.inc_strong();
    v30 = v29->field_10;
    v1 = v30;
    v31 = v30.dangling(a1);
    v8 = 87;
    v9 = a1;
    v5 = &v0;
    v6 = &v4;
    v8 = 6;
    v9 = a1;
    v10 = v30 + 16.leading(&v8);
    v11 = v32;
    v12 = a3;
    v13 = a4;
    v14 = &v5;
    v15 = &g_97ee20;
    v16 = v31;
    v17 = v32;
    v18 = a1;
    v21 = a5;
    v19 = v16;
    v20 = v32;
    v33 = 0;
    if (*((char *)(a2->field_0.options(a2->field_8) + 12)) == 1)
    {
        v3 = v0->field_6c;
        v33 = 1;
    }
    v2 = v33;
    v22 = &v8;
    v23 = &g_97e140;
    v24 = &v18;
    v25 = &g_97e160;
    v26 = &v2;
    v27 = &g_97e810;
    a0.write_fmt(a2, &v22, 3);
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v1);
}
