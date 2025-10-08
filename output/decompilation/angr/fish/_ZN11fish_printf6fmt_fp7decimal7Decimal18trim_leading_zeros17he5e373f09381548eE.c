long long fish_printf::fmt_fp::decimal::Decimal::trim_leading_zeros(struct_0 *a0)
{
    unsigned int *v1;  // rax

    v1 = a0.get(0);
    if (!v1)
        return v1;
    while (!*(v1))
    {
        a0.pop_front();
        if ((char)_ccall(0, 27, (unsigned long long)(a0->field_20 - 1), 0, (unsigned long long)(char)(*(v1) < 0)))
            core::panicking::panic_const::panic_const_sub_overflow(&g_1517ff8); /* do not return */
        a0->field_20 = a0->field_20 - 1;
        v1 = a0.get(0);
        if (!v1)
            return v1;
    }
    return v1;
}
