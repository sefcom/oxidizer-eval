long long uu_wc::files0_iter(struct_0 *a0, unsigned long long a1, unsigned int a2, struct_1 *a3)
{
    unsigned long v0;  // [bp-0x88]
    int v1;  // [bp-0x80]
    int v2;  // [bp-0x70]
    int v3;  // [bp-0x68]
    char v4;  // [bp-0x60]
    unsigned long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    int v7;  // [bp-0x48], Other Possible Types: char
    char v8;  // [bp-0x38]
    char v9;  // [bp-0x28]
    char v10;  // [bp-0x18]
    int v12;  // xmm0
    unsigned long long v13;  // rax

    v7.with_capacity(0x2000, a1, a2);
    v6 = *((long long *)&v10);
    memcpy(&v4, &v9, 16);
    *((int128_t *)&v2) = *((int128_t *)&v8);
    v1 = v7;
    v0 = a3->field_10;
    v12 = a3->field_0;
    a0->field_40 = v5;
    a0->field_48 = v6;
    *((void*)&a0->field_30) = v3;
    a0->field_20 = (int128_t)(&v1)[8];
    *((void*)&a0->field_0) = v12;
    a0->field_10 = v0;
    v13 = (long long)v1;
    a0->field_18 = v13;
    a0->field_50 = 0;
    return v13;
}
