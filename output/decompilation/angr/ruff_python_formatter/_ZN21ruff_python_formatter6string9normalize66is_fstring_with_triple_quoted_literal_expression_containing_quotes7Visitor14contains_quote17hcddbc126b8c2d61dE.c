char ruff_python_formatter::string::normalize::is_fstring_with_triple_quoted_literal_expression_containing_quotes::Visitor::contains_quote(unsigned long long a0[2], unsigned int a1, unsigned int a2, char a3)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax
    char v4;  // cl

    v1 = a1.from(a2);
    v3 = v1.get(v2, a0[0], a0[1]);
    if (!v3)
        core::str::slice_error_fail(a0[0], a0[1], v1, v2, &g_97f808); /* do not return */
    v4 = !(a3 & 1);
    return (!(a3 & 1)) * 5 + 34.is_contained_in(v3, a2);
}
