long long fish_printf::fmt_fp::decimal::Decimal::push_front(struct_0 *a0, unsigned long long a1)
{
    unsigned int v1;  // eax
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep

    a0.push_front(a1);
    v1 = a0->field_20;
    if ((char)_ccall(0, 23, (unsigned long long)(v1 + 1), 0, _ccall(v2, v3, v4, v5)))
        core::panicking::panic_const::panic_const_add_overflow(&g_1517e60); /* do not return */
    a0->field_20 = v1 + 1;
    return v1 + 1;
}
