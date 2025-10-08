long long fish::parse_util::Parentheses::opening(unsigned long long *a0)
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long v2;  // cc_op
    unsigned long v3;  // cc_dep1
    unsigned long v4;  // cc_dep2
    unsigned long v5;  // cc_ndep

    if ((char)_ccall(4, 24, *(a0) + 1, 0, _ccall(v2, v3, v4, v5)))
    {
        v0 = *(a0);
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd648); /* do not return */
    }
    return v0;
}
