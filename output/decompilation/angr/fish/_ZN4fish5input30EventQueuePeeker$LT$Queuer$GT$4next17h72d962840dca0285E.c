void fish::input::EventQueuePeeker<Queuer>::next(unsigned long long a0, struct_0 *a1)
{
    unsigned long long v0;  // [bp-0x78]
    unsigned long long v1;  // [bp-0x70]
    unsigned long long v2;  // [bp-0x68]
    uint128_t v3;  // [bp-0x60]
    char v4;  // [bp-0x48]
    unsigned long v6;  // rsi
    unsigned long v7;  // r14

    if (a1->field_28)
        core::panicking::panic("assertion failed: self.subidx == 0adding peeked matched char  with offset  within raw sequence of length  against raw escape sequence", 34, &g_14dab48); /* do not return */
    v6 = a1->field_10;
    v7 = a1->field_20;
    if (v7 > v6)
    {
        v0 = &g_14daaf0;
        v1 = 1;
        v2 = 8;
        v3 = 0;
        core::panicking::panic_fmt(&v0, &g_14dab00); /* do not return */
    }
    if (v7 == v6)
    {
        v4.readch(a1->field_18);
        a1.push(&v4, &g_14dab18);
        v6 = a1->field_10;
        v7 = a1->field_20;
    }
    if (v7 >= v6)
        core::panicking::panic_bounds_check(v7, v6, &g_14dab30); /* do not return */
    a0.clone(v7 * 48 + a1->field_8);
    a1->field_20 = v7 + 1;
    a1->field_28 = 0;
    return;
}
