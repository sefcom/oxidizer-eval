long long ruff_python_formatter::statement::suite::DocstringStmt::is_docstring_statement(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax
    unsigned long v7;  // rax

    if (a0->field_0 != 19)
    {
        return 0;
    }
    else if (!((char)(((0 ^ a0->field_8) & (0 ^ -(a0->field_8))) >> 63)))
    {
        v2 = v4;
        v0 = a0->field_8.iter();
        v1 = v5;
        v6 = v0.any(a1);
        return v6 & 0xffffffffffffff00 | (char)v6 ^ 1;
    }
    else
    {
        return v7 & 0xffffffffffffff00 | 1;
    }
}
