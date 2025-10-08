long long fish::parse_util::Parentheses::command(unsigned long long a0[3])
{
    unsigned long long v0;  // [bp-0x8]
    unsigned long long v2;  // rax
    unsigned long v3;  // cc_op
    unsigned long v4;  // cc_dep1
    unsigned long v5;  // cc_dep2
    unsigned long v6;  // cc_ndep

    v0 = v2;
    if ((char)_ccall(4, 24, a0[0] + 1, 0, _ccall(v3, v4, v5, v6)))
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14dd678); /* do not return */
    }
    else if (a0[1] >= a0[2])
    {
        return a0[0] + 1;
    }
    else
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14dd690); /* do not return */
    }
}
