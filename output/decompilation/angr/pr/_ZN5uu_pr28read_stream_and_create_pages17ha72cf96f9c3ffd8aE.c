long long uu_pr::read_stream_and_create_pages(struct_0 *a0, struct_1 *a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x140]
    void* v1;  // [bp-0x138]
    void* v2;  // [bp-0x118]
    int v3;  // [bp-0xf8]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    unsigned long v6;  // [bp-0xc8]
    void* v7;  // [bp-0xc0]
    unsigned long long v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xb0]
    unsigned long long v10;  // [bp-0xa8]
    void* v11;  // [bp-0xa0]
    void* v12;  // [bp-0x80]
    void* v13;  // [bp-0x60]
    unsigned long v14;  // [bp-0x58]
    char v15;  // [bp-0x50]
    int v16;  // [bp-0x48]
    unsigned long v17;  // [bp-0x38]
    char v18;  // [bp-0x30]
    unsigned long long v20;  // rax
    unsigned long long v21;  // rax

    v20 = uu_pr::get_start_line_number(a0);
    v21 = uu_pr::lines_to_read_for_page(a0);
    v6 = a1->field_30;
    *((uint128_t *)&v5) = a1->field_20;
    *((uint128_t *)&v4) = a1->field_10;
    *((uint128_t *)&v3) = a1->field_0;
    v0 = 1;
    v1 = 0;
    v2 = 0;
    v7 = 0;
    v8 = v20;
    v9 = a2;
    v10 = v21;
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
