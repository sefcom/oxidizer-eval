long long firecracker::api_server::request::mmds::parse_patch_mmds(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x110]
    char v1;  // [bp-0x10f]
    unsigned int v2;  // [bp-0x10c]
    unsigned long long v3;  // [bp-0x108]
    char v4;  // [bp-0x100]
    unsigned long long v5;  // [bp-0xf0]
    unsigned long long v6;  // [bp-0xe8]
    void* v7;  // [bp-0xe0]
    char v8;  // [bp-0xd8], Other Possible Types: unsigned long long
    char v9;  // [bp-0xd0]
    unsigned int v10;  // [bp-0xcf]
    unsigned int v11;  // [bp-0xcc]
    unsigned long long v12;  // [bp-0xc8]
    char v13;  // [bp-0xc0]
    unsigned long long v15;  // r12
    unsigned long long v16;  // rax

    v15 = 1;
    g_7c4690.add(1);
    v5 = a1;
    v6 = a2;
    v7 = 0;
    serde_json::de::from_trait(&v8, &v5, a2);
    v0.inspect_err(&v8);
    if (v0 == 6)
    {
        v16 = v3;
        a0->field_8 = 4;
        a0->field_10 = v3;
    }
    else
    {
        v11 = v2;
        v10 = *((int *)&v1);
        memcpy(&v13, &v4, 16);
        v9 = v0;
        v12 = v3;
        v8 = 20;
        v16 = a0->field_8.new_sync(&v8);
        v15 = 0;
    }
    a0->field_0 = v15;
    return v16;
}
