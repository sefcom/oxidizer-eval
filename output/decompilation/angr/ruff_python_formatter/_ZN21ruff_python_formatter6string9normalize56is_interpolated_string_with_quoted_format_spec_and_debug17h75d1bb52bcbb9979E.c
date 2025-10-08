char ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug(unsigned long long a0, unsigned long a1, char a2, unsigned long long a3)
{
    char v0;  // [bp-0x11]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v2;  // [bp-0x8]

    v0 = a2;
    v1 = a0;
    v2 = a1 * 80 + a0;
    return v1.try_fold(&v0, a3).eq(1);
}
