long long uu_yes::splice::maybe_unsupported::ha4b4a1ce58e22c87(unsigned int a0)
{
    unsigned long long v0;  // [sp-0x120]

    if (a0 <= 38)
    {
        v0 = 0x4000400200;
        if (((char)(*((char *)&v0 + ((a0 & 63) >> 3)) >> (char)(a0 & 63 & 7)) & 1))
            return 0;
    }
    return a0 * 0x100000000 | 2;
}
