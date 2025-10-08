char ruff_python_formatter::expression::CallChainLayout::from_expression(unsigned long long a0, struct struct_0 *a1[6], unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    unsigned long v0;  // [bp-0x38]
    unsigned int v1;  // [bp-0x34]
    unsigned long v3;  // rax
    struct struct_0 *v4[6];  // 4096
    struct struct_0 *v5[6];  // r13
    unsigned int *v6;  // rdi
    unsigned long v7;  // r13
    struct struct_0 *v8[6];  // rdx

    v0 = v3;
    v1 = 0;
    v4 = a1;
    while (true)
    {
        v5 = v4;
        switch (a0)
        {
        case 16: case 26:
            v6 = v5[0];
            break;
        case 25:
            v7 = &v5[5];
            if ((char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(v7.from(), v8, a2, a3, a4, a5))
            {
                v1 += 1;
                return (v1 < 2) + 1;
            }
            v6 = *((long long *)v7);
            if (*(v6) == 16 || *(v6) == 26)
            {
                v1 += 1;
                break;
            }
        default:
            v1 += (int)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0, v5, a2, a3, a4, a5);
            return (v1 < 2) + 1;
        }
        a0 = v6.from();
        v4 = v8;
        if ((char)ruff_python_formatter::expression::parentheses::is_expression_parenthesized(a0, v4, a2, a3, a4, a5))
            return (v1 < 2) + 1;
    }
}
