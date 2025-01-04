long long uu_sort::custom_str_cmp::filter_char::hb7e01bdcc88eb25f(unsigned long a0, char a1, unsigned int a2)
{
    unsigned long long v0;  // [sp-0x120]
    unsigned long long v2;  // rax

    if (a2)
    {
        v2 = a0 - 48 & 4294967295;
        if ((unsigned int)v2 >= 10)
        {
            v2 = ((unsigned int)a0 & -33) - 65;
            if ((unsigned int)v2 >= 26)
            {
                v2 = 0;
                if ((unsigned int)a0 > 32)
                    return 0;
                v0 = 0x100003600;
                if (!((char)(*((char *)&v0 + ((a0 & 4294967295 & 63) >> 3)) >> (char)(a0 & 4294967295 & 63 & 7)) & 1))
                    return 0;
            }
        }
    }
    v2 = v2 | -0x100 | 1;
    if (a1)
    {
        v2 = v2 | -0x100 | (unsigned int)a0 - 32 < 95;
        return v2;
    }
    return v2;
}
