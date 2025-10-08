long long ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::lowest_precedence(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    void* v2;  // [bp-0x8]
    char v4;  // al

    v0 = a0;
    v1 = a1 * 32 + a0;
    v2 = 0;
    v4 = v0.reduce();
    return (v4 == 13 ? 0 : v4);
}
