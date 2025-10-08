long long fish::parser::Parser::libdata(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0->field_80 >= 9223372036854775807)
    {
        v0 = a0->field_80;
        core::cell::panic_already_mutably_borrowed(&g_14de7f0); /* do not return */
    }
    a0->field_80 = v0 + 1;
    return a0 + 1;
}
