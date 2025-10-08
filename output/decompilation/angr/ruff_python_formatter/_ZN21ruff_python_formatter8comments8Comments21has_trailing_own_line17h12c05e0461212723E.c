char ruff_python_formatter::comments::Comments::has_trailing_own_line(unsigned long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long long v3;  // rdx

    v0 = (unsigned long long)a1.into();
    v1 = v3;
    v0 = a0 + 16.trailing(&v0);
    v1 = v0 + v3 * 12;
    return v0.any();
}
