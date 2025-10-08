long long ruff_python_formatter::other::commas::has_magic_trailing_comma(unsigned long long a0, unsigned long long a1, struct_0 *a2)
{
    if (!a2->field_37)
        return ruff_python_formatter::other::commas::has_trailing_comma(a0, a1, a2->field_0, a2->field_8);
    return 0;
}
