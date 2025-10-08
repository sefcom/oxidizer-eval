long long fish::parser::Block::scope_block(struct_0 *a0, char a1)
{
    char v0;  // [bp-0x41]
    unsigned long long v1;  // [bp-0x40]
    unsigned long long v2;  // [bp-0x38]
    unsigned long long v3;  // [bp-0x30]
    uint128_t v4;  // [bp-0x28]

    v0 = a1;
    if (!v0.slice_contains(&g_a1e937, 3))
    {
        v1 = &g_14de4d0;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_14de4e0); /* do not return */
    }
    a0->field_14 = v0;
    a0->field_15 = 0;
    a0->field_0 = 0;
    a0->field_10 = 0;
    return a0;
}
