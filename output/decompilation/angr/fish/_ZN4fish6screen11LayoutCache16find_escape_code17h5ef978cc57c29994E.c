long long fish::screen::LayoutCache::find_escape_code(unsigned long long a0[3], unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x28]
    unsigned long long v2;  // rax
    unsigned long long v3;  // r14
    unsigned long long v4;  // r12
    unsigned long v5;  // rdx
    unsigned long v6;  // rdx

    v0 = v2;
    v3 = a0[1];
    v4 = a0[2];
    if (!((char)core::slice::<impl [T]>::binary_search_by(v3, v4, a1, a2) & 1))
        return a2;
    if (!v5)
        return 0;
    v6 = v5 - 1;
    if (v6 >= v4)
    {
        core::panicking::panic_bounds_check(v6, v4, &g_14e1e10); /* do not return */
    }
    else if ((char)fish::wcstringutil::string_prefixes_string(*((long long *)(v3 + v6 * 24 + 8)), *((long long *)(v3 + v6 * 24 + 16)), a1, a2))
    {
        return *((long long *)(v3 + v6 * 24 + 16));
    }
    return 0;
}
