long long ruff_python_formatter::statement::stmt_function_def::format_function_header(struct_0 *a0, struct_5 *a1, struct_2 *a2)
{
    char v0;  // [bp-0xb1]
    unsigned long v1;  // [bp-0xb0]
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long, unsigned long long
    unsigned long long v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x98]
    char v5;  // [bp-0x94]
    char *v6;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v7;  // [bp-0x88], Other Possible Types: unsigned long long
    char *v8;  // [bp-0x80], Other Possible Types: unsigned long
    char *v9;  // [bp-0x78], Other Possible Types: unsigned long long
    char *v10;  // [bp-0x70]
    unsigned long long v11;  // [bp-0x68]
    struct_2 *v12;  // [bp-0x60]
    unsigned long v13;  // [bp-0x58]
    int v14;  // [bp-0x50], Other Possible Types: char
    unsigned long v15;  // [bp-0x40]
    int v16;  // [bp-0x38], Other Possible Types: char
    char v17;  // [bp-0x28]
    struct_6 *v19;  // rax
    int v20;  // xmm0

    v12 = a2;
    v19 = a1->field_8->field_30(a1->field_0);
    v19->field_10.inc_strong();
    v1 = v19->field_10;
    if (a2->field_7c)
    {
        v2 = "asyncforcrates/ruff_python_formatter/src/other/comprehension.rscrates/ruff_python_formatter/src/other/identifier.rs";
        v3 = 5;
        v6 = &v2;
        v7 = &g_97c890;
        v8 = &v0;
        v9 = &g_97cbf0;
        v14.write_fmt(a1, &v6, 2);
        if (*((int *)&v14) == 4)
            goto LABEL_71ddc6;
        a0->field_10 = v15;
        v20 = v14;
    }
    else
    {
LABEL_71ddc6:
        v2 = "def->global\\crates/ruff_python_formatter/src/statement/stmt_if.rs";
        v3 = 3;
        v13 = &a2->padding_0[48];
        v6 = &v2;
        v7 = &g_97c890;
        v8 = &v0;
        v9 = &g_97cbf0;
        v10 = &v13;
        v11 = &g_97a988;
        v16.write_fmt(a1, &v6, 3);
        if (*((int *)&v16) != 4)
        {
            a0->field_10 = *((long long *)&v17);
            v20 = v16;
        }
        else if (a2->field_68)
        {
            v2 = a2->field_68;
            v6.fmt(&v3, a2->field_68, a1);
            if ((int)v6 == 4)
            {
                v6 = &a2->padding_0[88];
                v7 = &a2->padding_70;
                v8 = &v1;
                v9 = &v12;
                v2 = &v6;
                v3 = &g_97ed78;
                v4 = 0;
                v5 = 0;
                a0.fmt(&v2, a1);
                return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v1);
            }
            a0->field_10 = v8;
            v20 = *((int128_t *)&v6);
        }
        else
        {
            v6 = &a2->padding_0[88];
            v7 = &a2->padding_70;
            v8 = &v1;
            v9 = &v12;
            v2 = &v6;
            v3 = &g_97ed78;
            v4 = 0;
            v5 = 0;
            a0.fmt(&v2, a1);
            return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v1);
        }
    }
    *((void*)&a0->field_0) = v20;
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v1);
}
