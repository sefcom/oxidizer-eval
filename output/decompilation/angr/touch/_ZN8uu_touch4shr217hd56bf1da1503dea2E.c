long long uu_touch::shr2(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long long v3;  // [bp-0x48]
    void* v4;  // [bp-0x40]
    unsigned long long v5;  // [bp-0x40]
    char v6;  // [bp-0x38]
    unsigned long v8;  // r15
    unsigned long long v9;  // rdx

    v8 = a2 - 2;
    ::0x5b2b90::core::str::<impl str>::split_at_checked(&v0, a1, a2, v8);
    if (!v0)
        core::str::slice_error_fail(a1, a2, 0, v8, &g_770390); /* do not return */
    v1 = a2.with_capacity_in(&g_7703a8);
    v2 = v9;
    v4 = 0;
    v1.append_elements(v5, *((long long *)&v6), &g_770288);
    v1.append_elements(v0, v3, &g_770288);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v1);
    return a0;
}
