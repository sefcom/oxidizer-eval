long long ruff_python_formatter::expression::expr_named::<impl ruff_python_formatter::expression::parentheses::NeedsParentheses for ruff_python_ast::generated::ExprNamed>::needs_parentheses(unsigned long a0)
{
    unsigned long v1;  // rax

    switch (a0)
    {
    case 2: case 4: case 5: case 7: case 8: case 9: case 10: case 17: case 39: case 40: case 41: case 60: case 84:
        return v1 & 0xffffffffffffff00 | 1;
    default:
        return 0;
    }
}
