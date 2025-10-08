long long fish_printf::fmt_fp::trailing_decimal_zeros(unsigned int a0)
{
    unsigned long v0;  // [bp-0x8]
    unsigned int v2;  // ecx
    unsigned int v3;  // esi
    unsigned int v4;  // eax

    if (!a0)
    {
        return 9;
    }
    else if ((a0 * 3435973837 >> 1 | a0 * 0x80000000) <= 429496729)
    {
        v2 = 1;
        while (true)
        {
            v3 = a0;
            if (((unsigned int)(v3 / 10) * 3435973837 >> 1 | (unsigned int)(v3 / 10) * 0x80000000) > 429496729)
                return v2;
            v4 = v2 - 1;
            if (((unsigned int)~(v4 ^ 2) & (v4 ^ v4 + 2)) < 0)
            {
                v0 = v4 + 2;
                core::panicking::panic_const::panic_const_add_overflow(&g_1518190); /* do not return */
            }
            a0 = v3 / 100;
            v2 += 2;
            if ((a0 * 3435973837 >> 1 | a0 * 0x80000000) >= 429496730)
                return v4 + 2;
        }
    }
    else
    {
        return 0;
    }
}
