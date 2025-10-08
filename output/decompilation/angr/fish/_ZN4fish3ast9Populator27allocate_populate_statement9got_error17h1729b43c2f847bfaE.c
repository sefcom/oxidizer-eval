long long fish::ast::Populator::allocate_populate_statement::got_error(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (a1->field_d9)
        return fish::ast::Populator::allocate_populate_statement::new_decorated_statement(a0, a1);
    v0 = &g_14c56b8;
    v1 = 1;
    v2 = 8;
    v3 = 0;
    core::panicking::panic_fmt(&v0, &g_14c56c8); /* do not return */
}
