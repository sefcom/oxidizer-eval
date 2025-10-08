long long fish::parse_constants::SourceRange::contains_inclusive(unsigned int a0, unsigned int a1, unsigned long a2)
{
    unsigned long long v1;  // rax
    unsigned long long v2;  // rax

    if (a0.start() > a2)
        return 0;
    v1 = a0.start();
    if (a2 < v1)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dca10); /* do not return */
    v2 = a0.length(a1);
    return v2 & 0xffffffffffffff00 | a2 - v1 <= v2;
}
