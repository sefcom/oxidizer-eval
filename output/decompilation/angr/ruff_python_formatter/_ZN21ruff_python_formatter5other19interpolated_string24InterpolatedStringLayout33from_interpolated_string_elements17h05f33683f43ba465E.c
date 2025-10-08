char ruff_python_formatter::other::interpolated_string::InterpolatedStringLayout::from_interpolated_string_elements(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0;
    v1 = a1 * 80 + a0;
    return v0.try_fold(a2, a3).eq(1);
}
