long long fish::ast::Populator::spaces(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (a0->field_c8 < 0)
    {
        v0 = a0->field_c8;
        core::panicking::panic_const::panic_const_mul_overflow(&g_14c52a0); /* do not return */
    }
    return v0 * 2;
}
