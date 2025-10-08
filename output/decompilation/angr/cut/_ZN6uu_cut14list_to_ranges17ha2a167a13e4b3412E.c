long long uu_cut::list_to_ranges(void* a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    char v0;  // [bp-0x28]
    char v1;  // [bp-0x20]
    char v2;  // [bp-0x18]
    int v4;  // xmm0

    if (!a3)
    {
        a0.from_list(a1, a2);
        return a0;
    }
    v0.from_list(a1, a2);
    if ((v0 & 1))
    {
        v4 = *((int128_t *)&v0);
        *((int128_t *)&a0[16]) = *((int128_t *)&v2);
        *(a0) = v4;
    }
    else
    {
        uu_cut::list_to_ranges::{{closure}}(a0 + 8, &v1);
        *((unsigned long long *)a0) = 0;
    }
    return a0;
}
