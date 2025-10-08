long long uu_sort::custom_str_cmp::filter_char(unsigned int a0, char a1, unsigned int a2)
{
    unsigned long long v0;  // [bp-0x120]
    unsigned long v2;  // rax

    if (a2)
    {
        v2 = a0 - 48;
        if ((unsigned int)v2 >= 10)
        {
            v2 = (a0 & 2097119) - 65;
            if ((unsigned int)v2 >= 26)
            {
                v2 = 0;
                if (a0 > 32)
                    return 0;
                v0 = 0x100003600;
                if (!(*((char *)&v0 + ((a0 & 63) >> 3)) >> ((char)a0 & 63 & 7) & 1))
                    return 0;
            }
        }
    }
    if (!a1)
        return v2 & 0xffffffffffffff00 | 1;
    return (v2 & 0xffffffffffffff00 | 1) & 0xffffffffffffff00 | a0 < 128 & a0 != 127 & 32 <= a0;
}
