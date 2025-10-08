long long fish_printf::fmt_fp::frexp()
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // xmm0lq
    unsigned int v4;  // ecx
    unsigned long v5;  // cc_ndep
    unsigned int v6;  // eax

    v0 = v2;
    v4 = (unsigned int)(v3 >> 52) & 2047;
    switch (v4)
    {
    case 2047:
        return 0;
    case 0:
        if (((char)((CmpF(v3, 0) & 69) >> 6) & 1) == 1 && !((char)_ccall(10, 0, (unsigned long long)(CmpF(v3, 0) & 69), 0, v5)))
            return 0;
        v6 = fish_printf::fmt_fp::frexp();
        if (((unsigned int)~(v6 ^ 0xffffffc0) & (v6 ^ v6 + -0x40)) < 0)
            core::panicking::panic_const::panic_const_sub_overflow(&g_1518178); /* do not return */
        return v6 - 64;
    default:
        return v4 - 1022;
    }
}
