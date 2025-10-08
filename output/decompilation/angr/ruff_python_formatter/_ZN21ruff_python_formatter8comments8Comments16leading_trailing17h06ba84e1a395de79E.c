long long ruff_python_formatter::comments::Comments::leading_trailing(unsigned long long a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0x38], Other Possible Types: unsigned long long
    char v1;  // [bp-0x30]
    unsigned long long v2;  // [bp-0x18]
    char v3;  // [bp-0x10]

    v0.leading_dangling_trailing(a1, a2, a3);
    return a0.chain(v0, v0 + *((long long *)&v1) * 12, v2, *((long long *)&v3));
}
