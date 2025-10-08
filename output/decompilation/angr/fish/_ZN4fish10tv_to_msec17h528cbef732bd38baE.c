long long fish::tv_to_msec(unsigned long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // cc_ndep

    v0 = v2;
    if ((char)_ccall(0, 52, a0, 1000, v3))
    {
        core::panicking::panic_const::panic_const_mul_overflow(&g_149aa28); /* do not return */
    }
    else if (!((char)_ccall(0, 4, a0 * 1000, (a1 * 2361183241434822607 >> 71) + (a1 * 2361183241434822607 >> 127), v3)))
    {
        return a0 * 1000 + (a1 * 2361183241434822607 >> 71) + (a1 * 2361183241434822607 >> 127);
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_149aa40); /* do not return */
    }
}
