long long fish::parser::Parser::jobs_mut(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax

    if (*(a0))
    {
        v0 = v2;
        core::cell::panic_already_borrowed(&g_14de7d8); /* do not return */
    }
    *(a0) = 18446744073709551615;
    return a0 + 1;
}
