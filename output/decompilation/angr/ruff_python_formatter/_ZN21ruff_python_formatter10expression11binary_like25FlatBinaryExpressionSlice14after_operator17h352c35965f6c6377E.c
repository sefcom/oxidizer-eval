long long ruff_python_formatter::expression::binary_like::FlatBinaryExpressionSlice::after_operator(unsigned long a0, unsigned long long a1, unsigned long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // rdx
    unsigned long long v3;  // rax

    v2 = a2 + 1;
    if (a1 < v2)
    {
        v0 = v3;
        core::slice::index::slice_start_index_len_fail(v2, a1, &g_97d618); /* do not return */
    }
    return a0 + v2 * 32;
}
