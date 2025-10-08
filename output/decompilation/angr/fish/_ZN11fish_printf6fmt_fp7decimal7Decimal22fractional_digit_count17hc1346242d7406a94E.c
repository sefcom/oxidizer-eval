long long fish_printf::fmt_fp::decimal::Decimal::fractional_digit_count(unsigned int a0[9])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned int v3;  // 4100
    unsigned int v4;  // cc_dep1
    unsigned int v5;  // cc_dep2
    unsigned int v6;  // eax

    v0 = v2;
    v3 = a0[8];
    v4 = a0[6];
    v5 = v3;
    v6 = v4 - v3;
    if (((v4 ^ v3) & (v4 ^ v4 - v3)) < 0)
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_1517fb0); /* do not return */
    }
    else if ((char)_ccall(0, 27, (unsigned long long)(v6 - 1), 0, (unsigned long long)(char)(v4 < v5)))
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_1517fc8); /* do not return */
    }
    else if (!((char)_ccall(0, 51, (unsigned long long)(v6 - 1), 9, (unsigned long long)(char)(v4 < v5))))
    {
        return (v6 - 1) * 9;
    }
    else
    {
        core::panicking::panic_const::panic_const_mul_overflow(&g_1517fe0); /* do not return */
    }
}
