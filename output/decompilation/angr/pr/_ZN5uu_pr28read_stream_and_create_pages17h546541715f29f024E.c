long long uu_pr::read_stream_and_create_pages(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x118]
    void* v1;  // [bp-0x110]
    void* v2;  // [bp-0xf0]
    int v3;  // [bp-0xd0]
    int v4;  // [bp-0xc0]
    int v5;  // [bp-0xb0]
    unsigned long v6;  // [bp-0xa0]
    void* v7;  // [bp-0x98]
    unsigned long long v8;  // [bp-0x90]
    unsigned long long v9;  // [bp-0x88]
    unsigned long long v10;  // [bp-0x80]
    void* v11;  // [bp-0x78]
    void* v12;  // [bp-0x58]
    void* v13;  // [bp-0x38]
    unsigned long v14;  // [bp-0x30]
    char v15;  // [bp-0x28]
    int v16;  // [bp-0x20]
    unsigned long v17;  // [bp-0x10]
    char v18;  // [bp-0x8]
    unsigned long long v20;  // r10
    unsigned long long v21;  // r8

    v20 = 1;
    v21 = 1;
    if (!((char)(((0 ^ a0->field_d8) & (0 ^ -(a0->field_d8))) >> 63)))
        v21 = a0->field_f8;
    if (!((char)(((0 ^ a0->field_100) & (0 ^ -(a0->field_100))) >> 63)))
        v20 = a0->field_120;
    v0 = 1;
    v1 = 0;
    v2 = 0;
    *((uint128_t *)&v3) = a1->field_0;
    *((uint128_t *)&v4) = a1->field_10;
    *((uint128_t *)&v5) = a1->field_20;
    v6 = a1->field_30;
    v7 = 0;
    v8 = v21;
    v9 = a2;
    v10 = v20 * (a0->field_138 >> (a0->field_140 & 63));
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = a0->field_130;
    v15 = 0;
    v18 = 0;
    *((uint128_t *)&v16) = a0->field_0;
    v17 = a0->field_130;
    return v0.new();
}
