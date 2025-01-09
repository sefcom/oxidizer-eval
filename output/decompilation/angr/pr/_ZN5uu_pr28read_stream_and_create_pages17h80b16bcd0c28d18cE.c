long long uu_pr::read_stream_and_create_pages::h80b16bcd0c28d18c(struct_0 *a0, struct_1 *a1, unsigned long a2)
{
    unsigned long long v0;  // [sp-0x140]
    void* v1;  // [sp-0x138]
    void* v2;  // [sp-0x118]
    int v3;  // [sp-0xf8]
    int v4;  // [sp-0xe8]
    int v5;  // [sp-0xd8]
    unsigned long long v6;  // [sp-0xc8]
    void* v7;  // [sp-0xc0]
    unsigned long long v8;  // [sp-0xb8]
    unsigned long long v9;  // [sp-0xb0]
    unsigned long long v10;  // [sp-0xa8]
    void* v11;  // [sp-0xa0]
    void* v12;  // [sp-0x80]
    void* v13;  // [sp-0x60]
    unsigned long long v14;  // [sp-0x58]
    char v15;  // [sp-0x50]
    int v16;  // [sp-0x48]
    unsigned long long v17;  // [sp-0x38]
    char v18;  // [sp-0x30]
    unsigned long long v20;  // r12
    unsigned long long v21;  // r13

    v20 = a0->field_130;
    v21 = 1;
    if (a0->field_d8 != 0x8000000000000000)
        v21 = a0->field_f8;
    v6 = a1->field_30;
    *((uint128_t *)&v5) = a1->field_20;
    *((uint128_t *)&v4) = a1->field_10;
    *((uint128_t *)&v3) = a1->field_0;
    v0 = 1;
    v1 = 0;
    v2 = 0;
    v7 = 0;
    v8 = v21;
    v9 = a2;
    v10 = uu_pr::lines_to_read_for_page::hb2ad53ca8343fd2c(a0);
    v11 = 0;
    v12 = 0;
    v13 = 0;
    v14 = v20;
    v15 = 0;
    v18 = 0;
    *((uint128_t *)&v16) = a0->field_0;
    v17 = v20;
    return alloc::boxed::Box$LT$T$GT$::new::hf465b4a863622154(&v0);
}
