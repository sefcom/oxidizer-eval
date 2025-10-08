long long ruff_python_formatter::comments::Comments::contains_comments(unsigned long long *a0, unsigned long long a1)
{
    unsigned long long *v0;  // [bp-0x20], Other Possible Types: unsigned long long
    char v1;  // [bp-0x18], Other Possible Types: unsigned long long
    char v2;  // [bp-0x18]
    unsigned long long v4;  // rax

    v0 = 61;
    v1 = a1;
    v4 = *(a0) + 64.get_inner(&v0);
    if (!v4)
    {
        v0 = a0;
        v1 = 0;
        a1.visit_source_order(&v0);
        return v2;
    }
    return v4 & 0xffffffffffffff00 | 1;
}
