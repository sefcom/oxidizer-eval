long long ruff_python_formatter::expression::binary_like::BinaryLike::flatten::rec(void* a0, struct_0 **a1, unsigned long long a2, unsigned long long a3, unsigned long long a4)
{
    unsigned long long v0;  // [bp-0x50]
    unsigned long v1;  // [bp-0x48]
    unsigned long long v3;  // rbx
    unsigned int *v4;  // r13
    unsigned long long v6;  // rax
    struct_0 *v7;  // r15
    unsigned long long v8;  // rdx
    unsigned long long v9;  // rax
    unsigned long long v10;  // rcx
    unsigned long v11;  // r8
    unsigned long v12;  // rbp
    unsigned long long v13;  // rax
    struct_0 *v14;  // r15
    unsigned long long v15;  // rdx
    unsigned long long v16;  // rax
    unsigned long long v17;  // rcx
    unsigned long v18;  // r8
    unsigned long v19;  // rbp
    unsigned long long v20;  // rax
    struct_0 *v21;  // r15
    unsigned long long v22;  // rdx
    unsigned long long v24;  // rax
    unsigned long long v25;  // rcx
    unsigned long v26;  // r8
    unsigned long v27;  // rbp

    v3 = *((long long *)a0);
    v4 = (long long)a0[8];
    switch (*(v4))
    {
    case 0:
        v20 = v4.from();
        v21 = *(a1);
        if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v20, v22, v21->field_60->field_8, v21->field_60->field_10, a2, a3))
        {
            if (v3)
            {
                v0 = 27;
                v1 = v4 + 2;
                v24 = v21->padding_0[16].leading(&v0);
                if ((unsigned int)v3 == 1)
                {
LABEL_706e41:
                    v0 = 27;
                    v25 = v21->padding_0[16].trailing(&v0);
                    break;
                }
                else
                {
                    v25 = (long long)a0[16];
                    v26 = (long long)a0[24];
                    break;
                }
            }
            else
            {
                v24 = (long long)a0[16];
                v27 = (long long)a0[24];
                goto LABEL_706e41;
            }
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(v1, v24, v27, v25, v26, a1, a2, a3, a4);
        }
        break;
    case 2:
        v13 = v4.from();
        v14 = *(a1);
        if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v13, v15, v14->field_60->field_8, v14->field_60->field_10, a2, a3))
        {
            if (v3)
            {
                v0 = 29;
                v1 = v4 + 2;
                v16 = v14->padding_0[16].leading(&v0);
                if ((unsigned int)v3 == 1)
                {
LABEL_706e12:
                    v0 = 29;
                    v17 = v14->padding_0[16].trailing(&v0);
                }
                else
                {
                    v17 = (long long)a0[16];
                    v18 = (long long)a0[24];
                }
            }
            else
            {
                v16 = (long long)a0[16];
                v19 = (long long)a0[24];
                goto LABEL_706e12;
            }
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(v1, v16, v19, v17, v18, a1, a2, a3, a4);
        }
        break;
    case 15:
        v6 = v4.from();
        v7 = *(a1);
        if (!(char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v6, v8, v7->field_60->field_8, v7->field_60->field_10, a2, a3))
        {
            if (v3)
            {
                v0 = 42;
                v1 = v4 + 2;
                v9 = v7->padding_0[16].leading(&v0);
                if ((unsigned int)v3 == 1)
                {
LABEL_706e70:
                    v0 = 42;
                    v10 = v7->padding_0[16].trailing(&v0);
                }
                else
                {
                    v10 = (long long)a0[16];
                    v11 = (long long)a0[24];
                }
            }
            else
            {
                v9 = (long long)a0[16];
                v12 = (long long)a0[24];
                goto LABEL_706e70;
            }
            return ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(v1, v9, v12, v10, v11, a1, a2, a3, a4);
        }
        break;
    default:
        return a4.push(a0);
    }
}
