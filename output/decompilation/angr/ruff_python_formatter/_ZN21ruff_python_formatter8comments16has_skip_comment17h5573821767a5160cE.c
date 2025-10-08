char ruff_python_formatter::comments::has_skip_comment(unsigned long long a0, unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    v0 = a0;
    v1 = a0 + a1 * 12;
    return v0.any(a2, a3);
}
