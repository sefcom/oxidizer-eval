long long ruff_python_formatter::statement::suite::DocstringStmt::try_from_statement(unsigned long long a0[2], char a1, struct_0 *a2)
{
    unsigned long long v0[2];  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rbx

    if (a1 == 2 && a2->field_33 == 2)
        return a0;
    if (a0[0] != 9223372036854775827)
        return a0;
    v1 = v3;
    v0[0] = a0;
    if (!(char)a0[1].is_docstring_statement(a2))
        return a0;
    return a0;
}
