long long starship::modules::cc::is_cc_project(struct_0 *a0, unsigned long long a1)
{
    char v0;  // [bp-0x40], Other Possible Types: unsigned long long
    int v1;  // [bp-0x38]
    int v2;  // [bp-0x28]
    int v3;  // [bp-0x18]

    v0.try_begin_scan(a1);
    if (!v0)
        return 2;
    *((int128_t *)&v1) = *((int128_t *)&a0->padding_18);
    *((int128_t *)&v2) = *((int128_t *)((char *)&a0->field_20 + 8));
    *((int128_t *)&v3) = *((int128_t *)&(&a0->padding_0)[1]);
    return v0.is_match();
}
