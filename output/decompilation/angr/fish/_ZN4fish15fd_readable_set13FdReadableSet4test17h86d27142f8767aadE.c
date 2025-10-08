long long fish::fd_readable_set::FdReadableSet::test(unsigned long long a0[3], unsigned int a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v4;  // rbx
    unsigned long long v5;  // rax
    unsigned long long v6;  // rdx

    v0 = v3;
    v1 = a1;
    v4 = a0[2];
    v5 = core::slice::<impl [T]>::binary_search_by_key(a0[1], v4, &v1);
    if (((char)v5 & 1))
    {
        return 0;
    }
    else if (v6 < v4)
    {
        return v5 & 0xffffffffffffff00 | (*((char *)(a0[1] + v6 * 8 + 6)) & 17);
    }
    else
    {
        core::panicking::panic_bounds_check(v6, v4, &g_14d8bd0); /* do not return */
    }
}
