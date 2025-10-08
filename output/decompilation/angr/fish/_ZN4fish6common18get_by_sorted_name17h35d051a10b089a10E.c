long long fish::common::get_by_sorted_name(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]
    unsigned long v3;  // rdx

    v0 = a0;
    v1 = a1;
    if (((char)core::slice::<impl [T]>::binary_search_by_key(&v0) & 1))
    {
        return 0;
    }
    else if (v3 <= 94)
    {
        return &(&g_14da1c0)[24 * v3];
    }
    else
    {
        core::panicking::panic_bounds_check(95, 95, &g_14c10b8); /* do not return */
    }
}
