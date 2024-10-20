long long uu_cut::list_to_ranges::hdb56e7e85e8f78cd(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x50]
    char v2;  // [bp-0x48]
    char v3;  // [bp-0x40]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    char v6;  // [bp-0x20]
    unsigned long long v9;  // r15

    if (!a3)
    {
        uucore::features::ranges::Range::from_list::h99d021a951e62274(a0, a1, a2, a3, a4, a5, *((long long *)&v0));
        return a0;
    }
    uucore::features::ranges::Range::from_list::h99d021a951e62274(&v1, a1, a2, a3, a4, a5, *((long long *)&v0));
    if (*((long long *)&v1))
    {
        *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v4);
        *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v2);
        a0->field_0 = 1;
        return a0;
    }
    v9 = *((long long *)&v3);
    uucore::features::ranges::complement::h42b3a4dff6339fe3(&v5, v9, *((long long *)&v4));
    if (*((long long *)&v2))
        __rust_dealloc(v9);
    *((long long *)((char *)&a0->field_8 + 8)) = *((long long *)&v6);
    *((int128_t *)&(&a0->field_0)[1]) = *((int128_t *)&v5);
    a0->field_0 = 0;
    return a0;
}
