long long starship::segment::Segment::from_text(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    void* v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    void* v2;  // [bp-0xb0]
    char v3;  // [bp-0xa8]
    unsigned long long v4;  // [bp-0xa0]
    unsigned long long v5;  // [bp-0x98]
    void* v6;  // [bp-0x90]
    unsigned long long v7;  // [bp-0x88]
    int v8;  // [bp-0x80]
    int v9;  // [bp-0x70]
    char v10;  // [bp-0x60]
    unsigned short v11;  // [bp-0x50]
    int v12;  // [bp-0x48], Other Possible Types: char
    int v13;  // [bp-0x38]
    char v14;  // [bp-0x28]

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v3.into(a2);
    v12.into_searcher(10, v4, v5);
    memcpy(&v10, &v14, 16);
    v9 = v13;
    v8 = v12;
    v6 = 0;
    v7 = v5;
    v11 = 1;
    v6.fold(&v0, a1);
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    return 0;
}
