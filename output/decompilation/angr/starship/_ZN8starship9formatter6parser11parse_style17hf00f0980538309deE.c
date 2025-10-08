long long starship::formatter::parser::parse_style(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x48]

    v0.into_inner(a1);
    return a0.collect(&v0);
}
