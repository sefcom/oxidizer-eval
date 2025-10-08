long long ruff_python_formatter::FormatNodeRule::fmt(struct_1 *a0, unsigned long a1, unsigned int a2[18], struct_4 *a3)
{
    char *v0;  // [bp-0xb8], Other Possible Types: unsigned long long
    char v1;  // [bp-0xb0], Other Possible Types: unsigned long long
    char *v2;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v3;  // [bp-0xa0]
    unsigned int v4;  // [bp-0x98]
    char v5;  // [bp-0x98]
    unsigned int v6;  // [bp-0x94]
    unsigned long v7;  // [bp-0x88]
    unsigned long v8;  // [bp-0x80]
    unsigned int v9;  // [bp-0x78]
    unsigned int v10;  // [bp-0x74]
    unsigned long long v11;  // [bp-0x70]
    unsigned long long v12;  // [bp-0x68]
    char v13;  // [bp-0x60]
    unsigned long long v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    struct_5 *v17;  // rax
    unsigned long long v18;  // rdx
    unsigned long long v19;  // rax
    struct_0 *v20;  // rax
    unsigned long long v21;  // rsi
    unsigned int v22;  // eax
    int v23;  // xmm0

    v17 = a3->field_8->field_30(a3->field_0);
    v17->field_10.inc_strong();
    v8 = v17->field_10;
    a2.from();
    v13.leading_dangling_trailing(v17->field_10, 19, v18);
    v19 = a3->field_8->field_30(a3->field_0);
    if (!a0.is_suppressed(v14, *((long long *)&v15), v19))
    {
        memcpy(&v1, &v13, 16);
        v0 = 1;
        v5.fmt(&v0, a3);
        if (v4 == 4)
        {
            v20 = a3->field_0.options(a3->field_8);
            if (v20->field_c == 1)
            {
                v6 = a2[16].start(a2[17]);
                v4 = 1;
                v0.fmt(&(char)v6, a3);
                if ((int)v0 != 4)
                    goto LABEL_72c5ff;
            }
            v0.fmt_fields(v21, a2, a3);
            if ((int)v0 == 4)
            {
                v22 = 0;
                if (v20->field_c)
                {
                    v10 = a2[16].end(a2[17]);
                    v22 = 1;
                }
                v9 = v22;
                v11 = v14;
                v12 = *((long long *)&v15);
                v0 = &v9;
                v1 = &g_97e810;
                v2 = &v11;
                v3 = &g_97d5a8;
                v5.write_fmt(a3, &v0, 2);
                goto LABEL_72c5ef;
            }
            else
            {
LABEL_72c5ff:
                a0->field_10 = v2;
                v23 = *((int128_t *)&v0);
            }
        }
        else
        {
LABEL_72c5ef:
            a0->field_10 = v7;
            v23 = *((int128_t *)&v4);
        }
        *((void*)&a0->field_0) = v23;
    }
    else
    {
        v0 = ruff_python_formatter::verbatim::suppressed_node(19, v18);
        v1 = v18;
        a0.fmt(&v0, a3);
    }
    return core::ptr::drop_in_place<ruff_python_formatter::comments::Comments>(&v8);
}
