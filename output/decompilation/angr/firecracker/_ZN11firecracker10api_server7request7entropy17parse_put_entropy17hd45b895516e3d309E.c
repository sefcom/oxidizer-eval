long long firecracker::api_server::request::entropy::parse_put_entropy(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x100], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf8]
    int v2;  // [bp-0xf0]
    int v3;  // [bp-0xe0]
    char v4;  // [bp-0xd0]
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    void* v7;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v8;  // [bp-0xa8]
    int v9;  // [bp-0x98]
    char v10;  // [bp-0x88]

    v5 = a1;
    v6 = a2;
    v7 = 0;
    serde_json::de::from_trait(&v0, &v5, a2);
    if (v0 != 4)
    {
        memcpy(&v10, &v4, 16);
        v9 = v3;
        v8 = v2;
        v6 = v0;
        v7 = v1;
        v5 = 28;
        a0->field_8.new_sync(&v5);
        a0->field_0 = 0;
        return 0;
    }
    a0->field_8 = 4;
    a0->field_10 = v1;
    a0->field_0 = 1;
    return 1;
}
