long long ruff_python_formatter::string::<impl ruff_formatter::Format<ruff_python_formatter::context::PyFormatContext> for ruff_python_ast::str_prefix::AnyStringPrefix>::fmt(unsigned int *a0, char a1[2], struct_2 *a2)
{
    char v0;  // [bp-0x28]
    unsigned long long v1;  // [bp-0x20]
    unsigned long long v2;  // [bp-0x18]
    unsigned long long v4;  // rdx

    if ((a1[1] < 2 | a1[0] != 3) == 1)
    {
        v1 = (unsigned long long)a1[0].as_str();
        v2 = v4;
        v0 = 4;
        a2->field_8->field_18(a2->field_0, &v0);
    }
    *(a0) = 4;
    return a0;
}
