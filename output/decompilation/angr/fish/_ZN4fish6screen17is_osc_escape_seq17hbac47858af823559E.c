long long fish::screen::is_osc_escape_seq(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rdx

    v0 = v2;
    if (a1 < 3 || (int)a0.char_at(a1, 1) != 93)
        return 0;
    v3 = 3;
    while (true)
    {
        v4 = v3;
        if (*((int *)(a0 + v4 * 4 - 4)) == 92)
        {
            if (*((int *)(a0 + v4 * 4 - 8)) == 27)
                return 1;
        }
        else
        {
            if (*((int *)(a0 + v4 * 4 - 4)) == 7)
                return 1;
        }
        v3 = v4 + 1;
        if (2 - a1 + v4 + 1 == 3)
            return 0;
    }
}
