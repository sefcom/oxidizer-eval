long long ruff_python_formatter::comments::map::MultiMap<K,V>::dangling(unsigned long long a0[6], unsigned long long a1)
{
    void* v1;  // rax
    unsigned long v2;  // rsi
    unsigned long v3;  // rdi

    v1 = a0 + 1.get_inner(a1);
    if (!v1)
    {
        return 4;
    }
    else if ((int)v1[16])
    {
        v2 = (int)v1[24] - 1;
        if ((int)v1[24] < 1)
            v2 = (int)v1[20] - 1;
        return (int)v1[20] - 1.index(v2, a0[1], a0[2], &g_97cf10);
    }
    else
    {
        v3 = (long long)v1[24] + 1;
        if (v3 >= a0[5])
            core::panicking::panic_bounds_check(v3, a0[5], &g_97cf28); /* do not return */
        return *((long long *)(a0[4] + v3 * 24 + 8));
    }
}
