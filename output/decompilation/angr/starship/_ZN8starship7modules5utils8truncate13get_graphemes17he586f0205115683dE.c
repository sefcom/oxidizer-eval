void starship::modules::utils::truncate::get_graphemes(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    char v0;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xe8]
    unsigned long long v2;  // [bp-0xe0]
    void* v3;  // [bp-0xd8]
    void* v4;  // [bp-0xc8]
    void* v5;  // [bp-0xb8]
    void* v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    void* v8;  // [bp-0x98]
    char v9;  // [bp-0x90]
    unsigned int v10;  // [bp-0x8c]
    char v11;  // [bp-0x88]
    void* v12;  // [bp-0x80]
    void* v13;  // [bp-0x70]
    void* v14;  // [bp-0x60]
    unsigned long long v15;  // [bp-0x50]
    unsigned long long v16;  // [bp-0x48]
    void* v17;  // [bp-0x40]
    char v18;  // [bp-0x38]
    unsigned int v19;  // [bp-0x34]
    char v20;  // [bp-0x30]
    unsigned long long v21;  // [bp-0x28]
    unsigned long long v22;  // [bp-0x20]
    unsigned long long v23;  // [bp-0x18]

    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = 0;
    v7 = a2;
    v8 = 0;
    v9 = 2;
    v10 = 268566529;
    v11 = 16;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = a2;
    v16 = a2;
    v17 = 0;
    v18 = 2;
    v19 = 268566529;
    v20 = 16;
    v21 = a1;
    v22 = a2;
    v23 = a3;
    v0.collect(&v3);
    alloc::str::join_generic_copy(&v3, v1, v2, 1, 0);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v3);
    core::ptr::drop_in_place<alloc::vec::Vec<(&alloc::string::String,&toml::value::Value)>>(v0, v1);
    return;
}
