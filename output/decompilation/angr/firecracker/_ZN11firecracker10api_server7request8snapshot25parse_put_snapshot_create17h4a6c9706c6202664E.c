long long firecracker::api_server::request::snapshot::parse_put_snapshot_create(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xf0]
    int v2;  // [bp-0xe8]
    char v3;  // [bp-0xd8]
    unsigned long long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    unsigned long long v6;  // [bp-0xb8]
    void* v7;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v8;  // [bp-0xa8]
    char v9;  // [bp-0x98]
    unsigned long long v10;  // [bp-0x88]

    v5 = a1;
    v6 = a2;
    v7 = 0;
    serde_json::de::from_trait(&v0, &v5, a2);
    if (!((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63)))
    {
        v10 = v4;
        memcpy(&v9, &v3, 16);
        v8 = v2;
        v6 = v0;
        v7 = v1;
        v5 = 8;
        a0->field_8.new_sync(&v5);
        a0->field_0 = 0;
        return 0;
    }
    a0->field_8 = 4;
    a0->field_10 = v1;
    a0->field_0 = 1;
    return 1;
}
