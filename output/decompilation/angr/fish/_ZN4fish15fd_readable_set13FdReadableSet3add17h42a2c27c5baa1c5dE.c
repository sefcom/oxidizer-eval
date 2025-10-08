long long fish::fd_readable_set::FdReadableSet::add(unsigned long long a0[3], unsigned int a1)
{
    unsigned long v0;  // [bp-0x18]
    unsigned int v1;  // [bp-0x14]
    unsigned long v3;  // rax
    unsigned long long v4;  // rax
    unsigned long long v5;  // rdx

    v0 = v3;
    v1 = a1;
    if (a1 < 0)
        return v3;
    v4 = core::slice::<impl [T]>::binary_search_by_key(a0[1], a0[2], &v1);
    if (!((char)v4 & 1))
        return v4;
    return a0.insert(v5, 0x100000000 | a1);
}
