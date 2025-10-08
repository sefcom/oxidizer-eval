long long ruff_python_formatter::statement::stmt_assign::should_non_inlineable_use_best_fit(unsigned int *a0, unsigned int a1, unsigned long a2, void* a3)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rax
    unsigned long long v6;  // rax

    v0 = v2;
    switch (*(a0))
    {
    case 26:
        v6 = a0 + 2.needs_parentheses(a1, a2, a3);
        return v6 & 0xffffffffffffff00 | (char)v6 == 2;
    case 25:
        v5 = a0 + 2.needs_parentheses(a1, a2, a3);
        return v5 & 0xffffffffffffff00 | (char)v5 == 2;
    case 16:
        v4 = a0 + 2.needs_parentheses(a1, a2, a3);
        return v4 & 0xffffffffffffff00 | (char)v4 == 2;
    default:
        return 0;
    }
}
