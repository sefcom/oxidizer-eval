long long ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_leading_comment(struct_0 *a0, unsigned long long *a1, unsigned long long a2, struct_3 *a3)
{
    unsigned long v0;  // [bp-0x110]
    char *v1;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x100]
    struct_5 *v3;  // [bp-0xf8], Other Possible Types: char
    char *v4;  // [bp-0xf8]
    unsigned long long v5;  // [bp-0xf0]
    char v6;  // [bp-0xe8]
    unsigned long long v7;  // [bp-0xd8]
    struct_5 *v8;  // [bp-0xc8]
    unsigned long long v9;  // [bp-0xc0]
    unsigned long v10;  // [bp-0xb0]
    unsigned long v11;  // [bp-0xa8]
    char v12;  // [bp-0xa0]
    int v13;  // [bp-0x98], Other Possible Types: char
    unsigned long v14;  // [bp-0x88]
    unsigned long long v15;  // [bp-0x80]
    char v16;  // [bp-0x78]
    char v17;  // [bp-0x68]
    char v18;  // [bp-0x58]
    char v19;  // [bp-0x48]
    unsigned long long v20;  // [bp-0x38]
    struct_4 *v22;  // rax
    unsigned long long v23[2];  // rax
    unsigned long long v24;  // rdx

    v22 = a3->field_8->field_30(a3->field_0);
    v22->field_10.inc_strong();
    v0 = v22->field_10;
    v23 = a3->field_8->field_30(a3->field_0);
    v1 = (unsigned long long)a1.from();
    v2 = v24;
    v9 = v22->field_10 + 16.leading(&v1);
    v10 = v23[0];
    v11 = v23[1];
    v12 = 0;
    v1.next(&v9);
    if ((int)v1 == 4)
        core::option::expect_failed("Suppressed node to have leading commentscrates/ruff_python_formatter/src/verbatim.rs", 40, &g_97f870); /* do not return */
    v20 = v7;
    memcpy(&v19, &v6, 16);
    memcpy(&v18, &v3, 16);
    memcpy(&v17, &v1, 16);
    v1.unwrap_suppression_starts(&v17);
    memcpy(&v16, &v1, 16);
    v15 = 1;
    v8 = v3;
    v1 = &v15;
    v2 = &g_97cb70;
    v4 = &v8;
    v5 = &g_97cb30;
    v13.write_fmt(a3, &v1, 2);
    if (*((int *)&v13) == 4)
    {
        v3->field_8 = 1;
        ruff_python_formatter::verbatim::write_suppressed_statements(a0, v3, a1, v9, v24, a2, a3);
    }
    else
    {
        a0->field_10 = v14;
        *((void*)&a0->field_0) = v13;
    }
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v0);
}
