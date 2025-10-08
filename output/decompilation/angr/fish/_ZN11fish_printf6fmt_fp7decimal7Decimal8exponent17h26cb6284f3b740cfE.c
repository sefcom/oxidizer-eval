long long fish_printf::fmt_fp::decimal::Decimal::exponent(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v2;  // rax
    unsigned long v3;  // rbx
    unsigned long v4;  // cc_ndep
    unsigned int v5;  // edx
    unsigned long long v6;  // rax

    v0 = v2;
    if (!((char)a0.first() & 1))
        return 0;
    v3 = a0->field_20 * 9;
    if ((char)_ccall(0, 51, (unsigned long long)a0->field_20, 9, v4))
        core::panicking::panic_const::panic_const_mul_overflow(&g_1517f98); /* do not return */
    v6 = fish_printf::fmt_fp::log10u(v5);
    if (((unsigned int)~(v3 & 4294967295 ^ v6 & 4294967295) & ((unsigned int)v3 ^ (unsigned int)v3 + (unsigned int)v6)) < 0)
        core::panicking::panic_const::panic_const_add_overflow(&g_1517f98); /* do not return */
    return v3 + v6;
}
