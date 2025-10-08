long long fish::parser::Parser::jobs(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]

    if (*(a0) >= 9223372036854775807)
    {
        v0 = *(a0);
        core::cell::panic_already_mutably_borrowed(&g_14de7c0); /* do not return */
    }
    *(a0) = v0 + 1;
    return a0 + 1;
}
