double fish::tinyexpr::find_builtin(long long a0, long long a1, long long a2)
{
    unsigned long long v0;  // [bp-0x18]
    unsigned long long v1;  // [bp-0x10]
    unsigned long v3;  // xmm0lq
    unsigned long v4;  // rdx
    int v5;  // xmm0

    v0 = a1;
    v1 = a2;
    if (((char)core::slice::<impl [T]>::binary_search_by_key(&v0) & 1))
    {
        *(a0) = 4;
        return v3;
    }
    else if (v4 < 32)
    {
        v5 = *((int128_t *)&(&g_14e3488)[4 * v4]);
        *((void*)a0) = v5;
        return (unsigned long long)v5;
    }
    else
    {
        core::panicking::panic_bounds_check(32, 32, &g_14e3878); /* do not return */
    }
}
