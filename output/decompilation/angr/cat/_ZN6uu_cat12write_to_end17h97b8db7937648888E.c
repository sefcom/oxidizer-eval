long long uu_cat::write_to_end(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1a]
    char v1;  // [bp-0x19]
    unsigned long long v3;  // rdx

    v0 = 10;
    v1 = 13;
    if (!memchr::arch::generic::memchr::search_slice_with_raw(a0, a1, &v0, &v1))
    {
        a2.write_all(a0, a1).unwrap(&g_572f08);
        return a1;
    }
    a2.write_all(v3.index(a0, a1, &g_572f20), a2).unwrap(&g_572f38);
    return v3;
}
