long long ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::get_operator(unsigned long a0, unsigned long a1, unsigned long a2)
{
    if (a2 >= a1)
        return 0;
    return a0 + a2 * 32.unwrap_operator();
}
