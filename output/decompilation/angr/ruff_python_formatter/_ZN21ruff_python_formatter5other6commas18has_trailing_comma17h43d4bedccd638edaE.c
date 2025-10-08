char ruff_python_formatter::other::commas::has_trailing_comma(unsigned int a0, unsigned int a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x44]
    char v1;  // [bp-0x3c]
    char v2;  // [bp-0x38]

    v2.new(a2, a3, a0, a1);
    v0.try_fold(&v2);
    return v1 == 11;
}
