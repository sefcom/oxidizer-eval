long long fish::input_common::apply_shift(unsigned long a0, char a1, unsigned int a2)
{
    unsigned int v1;  // eax
    unsigned int v2;  // ecx

    v1 = a0 >> 32;
    v2 = a0 >> 56;
    if (!((char)(a0 >> 48) & 1))
        return a0 & 4294967295 | (v1 | (unsigned int)(a0 >> 48) * 0x10000 | v2 * &g_1000000) * 0x100000000;
    if (!a2)
    {
        if (a1 == 1 && !26 <= (unsigned int)(a0 - 97))
            a2 = (unsigned int)a0 & 95;
        else
            return 0x110000;
    }
    return a2 | (v1 | v2 * &g_1000000) * 0x100000000;
}
