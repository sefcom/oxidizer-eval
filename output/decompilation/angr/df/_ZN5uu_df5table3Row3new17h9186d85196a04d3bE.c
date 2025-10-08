long long uu_df::table::Row::new(struct_0 *a0)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x48]
    int v4;  // [bp-0x38], Other Possible Types: char
    unsigned long long v5;  // [bp-0x28]
    unsigned long long v6;  // [bp-0x20]
    char v7;  // [bp-0x10]

    v6 = 0x8000000000000000;
    v0.to_vec("total%", 5);
    v3 = v1;
    v2 = v0;
    v0.to_vec("-total%", 1);
    v5 = v1;
    memcpy(&v4, &v0, 16);
    v0.to_vec("-total%", 1);
    *((unsigned long long *)&a0->field_80) = v1;
    *((void*)&a0->field_78) = v0;
    (&a0->field_90)[1] = *((long long *)&v7);
    *((int128_t *)((char *)&a0->field_80 + 8)) = *((int128_t *)&v6);
    a0->field_60 = v3;
    *((void*)&a0->field_50) = v2;
    *((void*)&(&a0->field_60)[1]) = v4;
    *((unsigned long long *)((char *)&a0->field_68 + 8)) = v5;
    a0->field_0 = 0;
    a0->field_10 = 0;
    a0->field_20 = 0;
    a0->field_30 = 0;
    a0->field_40 = 0;
    a0->field_98 = 0;
    a0->field_a8 = 0;
    return v5;
}
