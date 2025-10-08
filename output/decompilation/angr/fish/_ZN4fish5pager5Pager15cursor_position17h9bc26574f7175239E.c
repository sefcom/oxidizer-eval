long long fish::pager::Pager::cursor_position(unsigned long long a0[32])
{
    unsigned long v1;  // rdx
    unsigned long long v2;  // rdx
    unsigned long long v3;  // rax
    unsigned long long v4;  // rcx
    unsigned long v5;  // cc_ndep

    g_14dc1d0[0].localize();
    v2 = v1 + a0[17];
    if ((char)__CFADD__(v1, a0[17]))
        core::panicking::panic_const::panic_const_add_overflow(&g_14dc680); /* do not return */
    v3 = a0[31];
    if (!v3)
        return v2;
    v4 = v2;
    if ((char)_ccall(4, 24, v4 + 1, 0, _ccall(20, v3, 0, v5)))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14dc698); /* do not return */
    }
    else if (v4 + 1 > v3)
    {
        return v3 - 1;
    }
    else
    {
        return v2;
    }
}
