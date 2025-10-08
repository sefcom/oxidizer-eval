long long fish::parse_constants::SourceRange::end(unsigned int a0, unsigned long a1)
{
    if ((char)__CFADD__(a0, a1))
        core::option::expect_failed("Overflow", 8, &g_14dc9b0); /* do not return */
    0.unwrap(&g_14dc998);
    return a0 + a1;
}
