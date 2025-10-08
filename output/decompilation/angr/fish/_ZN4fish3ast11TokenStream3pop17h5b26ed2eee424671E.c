long long fish::ast::TokenStream::pop(uint128_t *a0, unsigned long long a1[19])
{
    unsigned long long v1;  // rcx
    unsigned long long v2;  // rax

    v1 = a1[18];
    if (!v1)
    {
        a0.next_from_tok(a1);
        return a0;
    }
    v2 = a1[17];
    if (v2 > 1)
        core::panicking::panic_bounds_check(v2, 2, &g_14c5098); /* do not return */
    *(a0) = *((int128_t *)&a1[3 + 2 * v2]);
    a1[17] = v2 ^ 1;
    a1[18] = v1 - 1;
    return a0;
}
