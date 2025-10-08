long long fish_printf::arg::Arg::as_char(char a0, unsigned long a1)
{
    if (a0 != 4 && a0 != 5)
        return 769;
    if (!a1 >> 32)
        return a1 * 0x100000000 | 0x400 | ((unsigned int)a1 ^ 0xd800) - 0x110000 < -0x10f800;
    return 1025;
}
