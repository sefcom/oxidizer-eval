long long ruff_python_formatter::comments::Comments::leading_dangling_trailing(unsigned long long a0[6], unsigned long a1, unsigned long long a2, unsigned long long a3)
{
    unsigned long long v0;  // [bp-0x20]
    unsigned long long v1;  // [bp-0x18]
    unsigned long long v3;  // rdx

    v0 = a2.into(a3);
    v1 = v3;
    return a0.leading_dangling_trailing(a1 + 16, &v0);
}
