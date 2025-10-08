long long ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::between_operators(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    return a2.map_or().index(a3, a0, a1);
}
