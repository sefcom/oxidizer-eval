char fish::wildcard::has_prefix_match(unsigned long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x10]
    unsigned long long v1;  // [bp-0x8]

    if (a2 > a1)
        core::slice::index::slice_start_index_len_fail(a2, a1, &g_14e4d90); /* do not return */
    v0 = a2 * 56 + a0;
    v1 = a1 * 56 + a0;
    return v0.any();
}
