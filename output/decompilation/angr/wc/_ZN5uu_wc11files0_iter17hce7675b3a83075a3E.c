long long uu_wc::files0_iter(struct_1 *a0, unsigned int a1, struct_0 *a2)
{
    unsigned long v0;  // [bp-0x78]
    int v1;  // [bp-0x70]
    int v2;  // [bp-0x60]
    int v3;  // [bp-0x58]
    char v4;  // [bp-0x50]
    unsigned long v5;  // [bp-0x48]
    int v6;  // [bp-0x40], Other Possible Types: char
    char v7;  // [bp-0x30]
    char v8;  // [bp-0x20]
    int v10;  // xmm0
    unsigned long long v11;  // rax

    v6.with_capacity(0x2000, a1);
    memcpy(&v4, &v8, 16);
    *((int128_t *)&v2) = *((int128_t *)&v7);
    v1 = v6;
    v0 = a2->field_10;
    v10 = a2->field_0;
    a0->field_40 = v5;
    *((void*)&a0->field_30) = v3;
    a0->field_20 = (int128_t)(&v1)[8];
    *((void*)&a0->field_0) = v10;
    a0->field_10 = v0;
    v11 = (long long)v1;
    a0->field_18 = v11;
    a0->field_48 = 0;
    return v11;
}
