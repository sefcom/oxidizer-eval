long long firecracker::api_server::request::metrics::parse_put_metrics(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x108], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x100]
    unsigned long long v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    unsigned long long v4;  // [sp-0xe8]
    void* v5;  // [sp-0xe0]
    unsigned long long v6;  // [bp-0xe0]
    unsigned long long v7;  // [bp-0xd8]
    char v8;  // [bp-0x38]
    unsigned long long v10;  // r12
    unsigned long long v11;  // rax

    v10 = 1;
    g_7c47f0.add(1);
    v3 = a1;
    v4 = a2;
    v5 = 0;
    serde_json::de::from_trait(&v8, &v3, a2);
    v0.inspect_err(&v8);
    v11 = v1;
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        a0->field_8 = 4;
        a0->field_10 = v6;
    }
    else
    {
        v4 = v0;
        v6 = v11;
        v7 = v2;
        v3 = 6;
        v11 = a0->field_8.new_sync(&v3);
        v10 = 0;
    }
    a0->field_0 = v10;
    return v11;
}
