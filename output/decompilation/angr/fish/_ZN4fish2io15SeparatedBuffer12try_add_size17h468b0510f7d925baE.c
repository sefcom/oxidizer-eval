long long fish::io::SeparatedBuffer::try_add_size(struct_0 *a0, unsigned long a1)
{
    unsigned long long v1;  // rsi
    unsigned long long v2;  // rax

    if (a0->field_28)
        return 0;
    v1 = a1 + a0->field_20;
    if ((char)__CFADD__(a1, a0->field_20))
        core::panicking::panic_const::panic_const_add_overflow(&g_14db6b0); /* do not return */
    v2 = a0->field_18;
    if (v1 <= v2 || !v2)
    {
        a0->field_20 = v1;
        return (v2 & 0xffffffffffffff00 | v1 <= v2 | !v2) & 0xffffffffffffff00 | 1;
    }
    a0.clear();
    a0->field_28 = 1;
    return 0;
}
