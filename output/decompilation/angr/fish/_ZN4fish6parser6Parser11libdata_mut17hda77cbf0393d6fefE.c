long long fish::parser::Parser::libdata_mut(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a0->field_80)
    {
        v0 = v2;
        core::cell::panic_already_borrowed(&g_14de808); /* do not return */
    }
    a0->field_80 = 18446744073709551615;
    return a0 + 1;
}
