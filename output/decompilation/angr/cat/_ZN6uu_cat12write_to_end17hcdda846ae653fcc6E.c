long long uu_cat::write_to_end(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x28]
    char v1;  // [bp-0x22]
    char v2;  // [bp-0x21]
    unsigned long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = v4;
    v1 = 10;
    v2 = 13;
    if (!((char)memchr::arch::generic::memchr::search_slice_with_raw(a0, a1, &v1, &v2) & 1))
    {
        a2.write_all(a0, a1).unwrap(&g_4eac90);
        return a1;
    }
    a2.write_all(0.index(v5, a0, a1, &g_4eaca8), a2).unwrap(&g_4eacc0);
    return v5;
}
