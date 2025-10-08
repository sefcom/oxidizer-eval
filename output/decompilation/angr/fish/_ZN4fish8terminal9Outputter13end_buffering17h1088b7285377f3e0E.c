void fish::terminal::Outputter::end_buffering(struct_0 *a0)
{
    unsigned long long v0;  // [bp-0x30]
    unsigned long long v1;  // [bp-0x28]
    unsigned long long v2;  // [bp-0x20]
    uint128_t v3;  // [bp-0x18]

    if (!a0->field_18)
    {
        v0 = &g_14e2af8;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14e2b08); /* do not return */
    }
    a0->field_18 = a0->field_18 - 1;
    a0.maybe_flush();
    return;
}
