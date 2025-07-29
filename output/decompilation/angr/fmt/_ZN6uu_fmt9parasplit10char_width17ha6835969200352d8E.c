long long uu_fmt::parasplit::char_width(unsigned int a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0 < 160)
        return 1;
    v0 = 1;
    return (int)::0x4a4250::unicode_width::tables::lookup_width(a0);
}
