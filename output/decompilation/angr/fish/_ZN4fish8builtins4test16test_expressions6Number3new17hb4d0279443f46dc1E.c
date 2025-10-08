long long fish::builtins::test::test_expressions::Number::new(unsigned long a0)
{
    unsigned long long v0;  // [bp-0x40]
    unsigned long long v1;  // [bp-0x38]
    unsigned long long v2;  // [bp-0x30]
    unsigned long long v3;  // [bp-0x28]
    uint128_t v4;  // [bp-0x20]
    unsigned long long v6;  // xmm0lq

    v0 = v6;
    if (!(char)core::ops::range::RangeBounds::contains())
    {
        v1 = &g_14d4538;
        v2 = 1;
        v3 = 8;
        v4 = 0;
        core::panicking::panic_fmt(&v1, &g_14d4548); /* do not return */
    }
    return a0;
}
