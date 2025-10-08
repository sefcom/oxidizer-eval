long long fish::parser::Parser::block_with_id(struct_0 *a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0->field_20 >= 9223372036854775807)
    {
        v0 = a0->field_20;
        core::cell::panic_already_mutably_borrowed(&g_14de778); /* do not return */
    }
    a0->field_20 = v0 + 1;
    return a0 + 1.map(&a0->field_20, a1);
}
