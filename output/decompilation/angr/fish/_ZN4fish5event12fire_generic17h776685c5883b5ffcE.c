long long fish::event::fire_generic(void* a0, struct_1 *a1, struct_0 *a2)
{
    char v0;  // [bp-0x54]
    int v1;  // [bp-0x50]
    unsigned long long v2;  // [bp-0x48]
    unsigned long v3;  // [bp-0x40]
    int v4;  // [bp-0x38]
    unsigned long v5;  // [bp-0x28]
    unsigned int v6;  // [bp-0x20]
    int v7;  // [bp-0x1c]
    unsigned long long v8;  // [bp-0x10]
    unsigned long v9;  // [bp-0x8]

    *((uint128_t *)&v1) = a1->field_0;
    v3 = a1->field_10;
    v6 = 6;
    *((int128_t *)&v7) = *((int128_t *)&v0);
    v8 = v2;
    v9 = v3;
    *((uint128_t *)&v4) = a2->field_0;
    v5 = a2->field_10;
    return fish::event::fire(a0, &v4);
}
