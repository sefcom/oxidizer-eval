long long fish::builtins::test::test_expressions::TestParser::arg(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (a2 >= a1)
    {
        v0 = v2;
        core::panicking::panic_bounds_check(a2, a1, &g_14d4560); /* do not return */
    }
    return *((long long *)(a0 + a2 * 24 + 8));
}
