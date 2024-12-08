long long uu_pr::read_stream_and_create_pages::h5b9e8f59d5e02f30(struct_0 *a0, struct_1 *a1)
{
    unsigned long long v0;  // [sp-0x118]
    void* v1;  // [sp-0x110]
    void* v2;  // [sp-0xf0]
    int v3;  // [sp-0xd0]
    int v4;  // [sp-0xc0]
    int v5;  // [sp-0xb0]
    unsigned long long v6;  // [sp-0xa0]
    void* v7;  // [sp-0x98]
    unsigned long long v8;  // [sp-0x90]
    unsigned long long v9;  // [sp-0x88]
    unsigned long long v10;  // [sp-0x80]
    void* v11;  // [sp-0x78]
    void* v12;  // [sp-0x58]
    void* v13;  // [sp-0x38]
    unsigned long long v14;  // [sp-0x30]
    char v15;  // [sp-0x28]
    int v16;  // [sp-0x20]
    unsigned long long v17;  // [sp-0x10]
    char v18;  // [sp-0x8]
    unsigned long long v21;  // r10
    unsigned long long v22;  // r8
    unsigned long v25;  // rdx

    v21 = 1;
    v22 = 1;
    if (a0->field_d8 != 0x8000000000000000)
        v22 = a0->field_f8;
    if (a0->field_100 != 0x8000000000000000)
        v21 = a0->field_120;
    v0 = 1;
    v1 = 0;
    v2 = 0;
    *((uint128_t *)&v3) = a1->field_0;
    *((uint128_t *)&v4) = a1->field_10;
    *((uint128_t *)&v5) = a1->field_20;
    v6 = a1->field_30;
    v7 = 0;
    v8 = v22;
    v9 = v25;
    v10 = v21 * (a0->field_138 >> (a0->field_140 & 63));
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = a0->field_130;
    v15 = 0;
    v18 = 0;
    *((uint128_t *)&v16) = a0->field_0;
    v17 = v14;
    return alloc::boxed::Box$LT$T$GT$::new::h233e8cf0ef695a11(&v0);
}
