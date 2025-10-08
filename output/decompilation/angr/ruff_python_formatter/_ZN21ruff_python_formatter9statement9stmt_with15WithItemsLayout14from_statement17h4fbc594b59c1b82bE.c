long long ruff_python_formatter::statement::stmt_with::WithItemsLayout::from_statement(struct_4 *a0, struct_6 *a1, struct_2 *a2, unsigned long a3)
{
    unsigned long long v0;  // [bp-0x58]
    char v1;  // [bp-0x54]
    int v2;  // [bp-0x53]
    unsigned long v3;  // [bp-0x50]
    unsigned int v4;  // [bp-0x44]
    unsigned long long v5;  // [bp-0x40]
    unsigned long v6;  // [bp-0x38]
    unsigned long long v8;  // rax
    struct_6 *v9;  // rsi
    struct_6 *v10;  // rsi
    unsigned long v11;  // r15
    struct_0 *v12;  // rbp
    unsigned long v13;  // r12
    unsigned long long v14;  // rdx
    unsigned long long v15;  // rax
    struct_6 *v16;  // rsi
    unsigned int v17;  // ecx

    if (a3)
    {
LABEL_7207c6:
        *((unsigned long long *)&a0->field_5[3]) = 5;
    }
    else
    {
        v8 = ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(a1, a2);
        if ((char)v8)
        {
            *((unsigned long long *)&a0->field_5[3]) = 4;
        }
        else
        {
            v9 = a1;
            v10 = v9;
            if (a1->field_10 == 1)
            {
                v11 = v9->field_8;
                v12 = a2->field_10;
                v13 = &v12->padding_0[16];
                v5 = 84;
                v6 = v11;
                v8 = v13.leading(&v5);
                if (v14)
                    goto LABEL_7207c6;
                v0 = 84;
                v3 = v11;
                v8 = v13.trailing(&(char)v0);
                if (v14)
                    goto LABEL_7207c6;
                v15 = v11.from();
                v8 = ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v15, v14, v12->field_60->field_8, v12->field_60->field_10, a2->field_0, a2->field_8);
                v10 = a1;
                if (!(v8 & 255))
                    goto LABEL_72088e;
                *((unsigned long long *)&a0->field_5[3]) = 0;
LABEL_720927:
                *((unsigned long *)&a0->field_5[11]) = v11;
            }
            else
            {
LABEL_72088e:
                v16 = v10;
                if ((a2->field_2c == 3 ? 9 <= a2->field_2d : 3 <= a2->field_2c))
                {
LABEL_7208a9:
                    v11 = v16->field_8;
                    v8 = 4;
                    if (v16->field_10 == 1)
                        v8 = (!*((long long *)(v11 + 88)) ? 1 : ((char)ruff_python_formatter::expression::can_omit_optional_parentheses(v11, a2) ^ 1) * 2 + 2);
                    *((unsigned long long *)&a0->field_5[3]) = v8;
                    goto LABEL_720927;
                }
                else
                {
                    ruff_python_formatter::statement::stmt_with::are_with_items_parenthesized(&(char)v0, v16, a2->field_0, a2->field_8);
                    v17 = v0;
                    v8 = v1;
                    if (v17 != 4)
                    {
                        *((unsigned int *)&a0->field_5[15]) = v4;
                        *((int128_t *)&a0->field_5[0]) = (int128_t)v2;
                        a0->field_0 = v17;
                        a0->field_4 = v8;
                        return v8;
                    }
                    v16 = a1;
                    if (((char)v8 & 1))
                        goto LABEL_7208a9;
                    *((unsigned long long *)&a0->field_5[3]) = 3;
                }
            }
        }
    }
    a0->field_0 = 4;
    return v8;
}
