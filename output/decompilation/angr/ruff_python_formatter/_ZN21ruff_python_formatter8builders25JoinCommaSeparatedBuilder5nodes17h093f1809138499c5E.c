long long ruff_python_formatter::builders::JoinCommaSeparatedBuilder::nodes(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    unsigned long long v5;  // rdx
    unsigned long long v6;  // rax

    v0 = a1.into_iter(a2);
    v1 = v5;
    if (!v0.next())
        return a0;
    do
    {
        v2 = v6.from();
        v3 = 0;
        a0.entry_with_line_separator(v6, &v2);
        v6 = v0.next();
    } while (v6);
    return a0;
}
