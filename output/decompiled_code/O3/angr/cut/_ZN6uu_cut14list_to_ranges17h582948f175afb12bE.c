long long uu_cut::list_to_ranges::h582948f175afb12b(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned int a3)
{
    int v0;  // [sp-0x48]
    unsigned long long v1;  // [sp-0x38]
    char v2;  // [bp-0x30]
    char v3;  // [bp-0x28]
    char v4;  // [bp-0x18]
    unsigned long long v6;  // rax

    if (!a3)
    {
        uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(a0, a1, a2);
        return a0;
    }
    uucore::features::ranges::Range::from_list::hf67be8a5ce4e6c04(&v2, a1, a2);
    if (*((long long *)&v2))
    {
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v4);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v3);
        v6 = 1;
    }
    else
    {
        v1 = *((long long *)&v4);
        *((int128_t *)&v0) = *((int128_t *)&v3);
        uu_cut::list_to_ranges::_$u7b$$u7b$closure$u7d$$u7d$::h500d2b69098a6b6e(&(&a0->field_0)[1], &v0);
        v6 = 0;
    }
    a0->field_0 = v6;
    return a0;
}
