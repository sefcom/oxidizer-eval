long long fish::wgetopt::WGetopter::exchange(unsigned long long a0[16])
{
    unsigned long long v1;  // r15
    unsigned long long v2;  // rax
    unsigned long long v3;  // rdx
    unsigned long long v4;  // rcx
    unsigned long long v5;  // rcx

    v1 = a0[14];
    v2 = v1.index_mut(a0[13], a0[3], a0[4], &g_14e4a78);
    if (a0[15] < v1)
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e4a90); /* do not return */
    core::slice::<impl [T]>::rotate_left(v2, v3, a0[15] - v1);
    v4 = a0[13];
    v5 = v4 - a0[15];
    if (v4 < a0[15])
    {
        core::panicking::panic_const::panic_const_sub_overflow(&g_14e4aa8); /* do not return */
    }
    else if (!((char)__CFADD__(v5, a0[14])))
    {
        a0[14] = v5 + a0[14];
        a0[15] = v4;
        return v4;
    }
    else
    {
        core::panicking::panic_const::panic_const_add_overflow(&g_14e4ac0); /* do not return */
    }
}
