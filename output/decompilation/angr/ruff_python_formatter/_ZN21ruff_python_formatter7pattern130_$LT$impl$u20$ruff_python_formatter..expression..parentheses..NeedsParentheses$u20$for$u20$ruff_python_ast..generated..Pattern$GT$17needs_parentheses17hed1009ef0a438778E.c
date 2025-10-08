void ruff_python_formatter::pattern::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::Pattern>::needs_parentheses(unsigned long long *a0)
{
    unsigned long long v1;  // rax

    v1 = 0x8000000000000000 ^ *(a0);
    if (v1 >= 8)
        v1 = 3;
    goto (long long)(g_487908[v1] + (char *)&g_487908[0]);
}
