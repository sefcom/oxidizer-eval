long long fish::color::Color::from_wstr(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned int v3;  // eax

    v0 = v2;
    v3 = a0.try_parse_special(a1);
    return (unsigned int)v3.or_else(a0, a1).or_else(a0, a1);
}
