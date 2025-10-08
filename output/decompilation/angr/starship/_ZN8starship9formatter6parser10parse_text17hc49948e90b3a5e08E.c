long long starship::formatter::parser::parse_text(unsigned long long a0, unsigned long long a1)
{
    void* v0;  // [bp-0x60]
    void* v1;  // [bp-0x50]
    char v2;  // [bp-0x40]

    v2.into_inner(a1);
    v0 = 0;
    v1 = 0;
    return a0.collect(&v0);
}
