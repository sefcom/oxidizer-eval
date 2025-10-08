char ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::has_format_spec_with_opposite_quote(unsigned long long a0[3], char a1, unsigned long long a2, char a3)
{
    char v0;  // [bp-0x2a]
    char v1;  // [bp-0x29]
    unsigned long v2;  // [bp-0x28]
    unsigned long long v3;  // [bp-0x20]
    unsigned long long v4;  // [bp-0x18]
    char *v5;  // [bp-0x10]
    char *v6;  // [bp-0x8]

    v0 = a1;
    v1 = a3;
    v2 = a0[1];
    v3 = a0[2] * 80 + a0[1];
    v4 = a2;
    v5 = &v1;
    v6 = &v0;
    return v2.any(&v4);
}
