long long ruff_python_formatter::statement::stmt_assign::should_inline_comments(unsigned int *a0, unsigned long a1, unsigned long a2, unsigned long long a3[2])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rax
    unsigned long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long long v7;  // rax
    unsigned long long v8;  // rax
    unsigned long long v9;  // rax

    v0 = v2;
    v3 = 0;
    switch (*(a0))
    {
    case 17:
        v9 = a0 + 2.needs_parentheses(&g_487a98[0], v5, a3);
        return v9 & 0xffffffffffffff00 | (char)v9 == 2;
    case 18:
        v8 = a0 + 2.needs_parentheses(&g_487a98[0], v5, a3);
        return v8 & 0xffffffffffffff00 | (char)v8 == 2;
    case 19:
        v7 = a0 + 2.needs_parentheses(&g_487a98[0], v5, a3);
        return v7 & 0xffffffffffffff00 | (char)v7 == 2;
    case 20:
        v6 = a0 + 2.needs_parentheses(&g_487a98[0], v5, a3);
        return v6 & 0xffffffffffffff00 | (char)v6 == 2;
    case 21: case 22: case 23: case 28:
        v3 = 1;
        goto LABEL_71c77f;
    default:
LABEL_71c77f:
        return v3;
    }
}
