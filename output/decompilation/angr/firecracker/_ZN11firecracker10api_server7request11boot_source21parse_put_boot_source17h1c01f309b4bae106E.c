long long firecracker::api_server::request::boot_source::parse_put_boot_source(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0x138]
    unsigned long long v1;  // [bp-0x130]
    void* v2;  // [bp-0x128]
    char v3;  // [bp-0x120], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x118]
    int v5;  // [bp-0x110]
    int v6;  // [bp-0x100]
    char v7;  // [bp-0xf0]
    unsigned long long v8;  // [bp-0xe0]
    char v9;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v10;  // [bp-0xd0]
    unsigned long long v11;  // [bp-0xc8]
    int v12;  // [bp-0xc0]
    int v13;  // [bp-0xb0]
    char v14;  // [bp-0xa0]
    unsigned long long v15;  // [bp-0x90]
    unsigned long long v17;  // r12
    unsigned long long v18;  // rax

    v17 = 1;
    g_7c4750.add(1);
    v0 = a1;
    v1 = a2;
    v2 = 0;
    serde_json::de::from_trait(&v9, &v0, a2);
    v3.inspect_err(&v9);
    v18 = v4;
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        a0->field_8 = 4;
        a0->field_10 = v11;
    }
    else
    {
        v15 = v8;
        memcpy(&v14, &v7, 16);
        v13 = v6;
        v12 = v5;
        v10 = v3;
        v11 = v18;
        v9 = 4;
        v18 = a0->field_8.new_sync(&v9);
        v17 = 0;
    }
    a0->field_0 = v17;
    return v18;
}
