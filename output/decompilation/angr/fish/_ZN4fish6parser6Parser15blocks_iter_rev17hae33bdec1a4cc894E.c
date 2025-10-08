long long fish::parser::Parser::blocks_iter_rev(struct_0 *a0, unsigned long long a1[8])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a1[4] >= 9223372036854775807)
    {
        v0 = a1[4];
        core::cell::panic_already_mutably_borrowed(&g_14de6a0); /* do not return */
    }
    a1[4] = v0 + 1;
    v2 = a1[7];
    a0->field_0 = &a1[5];
    a0->field_8 = &a1[4];
    a0->field_10 = 0;
    a0->field_18 = v2;
    return a0;
}
