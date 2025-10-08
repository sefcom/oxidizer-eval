long long fish::color::Color::try_parse_special(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    v0 = v2;
    return 4 - ((char)fish::color::simple_icase_compare(a0, a1, "n", 6) < 1);
}
