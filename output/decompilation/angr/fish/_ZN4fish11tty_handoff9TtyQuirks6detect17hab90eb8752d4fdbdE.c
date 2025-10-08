long long fish::tty_handoff::TtyQuirks::detect(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0x20], Other Possible Types: unsigned int
    char v1;  // [bp-0x1c]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    fish::tty_handoff::get_iterm2_version(&v0, a0, a1);
    if (v0 == 1)
    {
        v3 = v1.lt();
        if ((char)v3)
            return v3 & 0xffffffffffffff00 | 1;
    }
    v4 = a0.starts_with(a1, "t", 5);
    if (!(char)v4)
        return (a0.starts_with(a1, "W", 8)) * 3;
    return v4 & 0xffffffffffffff00 | 2;
}
