char ruff_python_formatter::statement::stmt_assign::has_target_own_parentheses(unsigned int *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rax

    if (*(a0) == 30)
        return 1;
    v0 = v2 & 0xffffffffffffff00 | 1;
    return (char)ruff_python_formatter::expression::has_own_parentheses(a0, a1) != 2;
}
