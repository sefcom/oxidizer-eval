long long firecracker::api_server::request::serial::parse_put_serial(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [sp-0xe8]
    void* v2;  // [sp-0xe0]
    unsigned long long v3;  // [bp-0xe0]
    void* v4;  // [bp-0xd8]
    char v5;  // [bp-0x38]
    unsigned long long v7;  // r12
    unsigned long long v8;  // rax

    v7 = 1;
    g_7c4870.add(1);
    v0 = a1;
    v1 = a2;
    v2 = 0;
    serde_json::de::from_trait(&v5, &v0, a2);
    v0.inspect_err(&v5);
    v8 = v1;
    if (v0 == 9223372036854775809)
    {
        a0->field_8 = 4;
        a0->field_10 = v3;
    }
    else
    {
        v1 = v0;
        v3 = v8;
        v4 = 0;
        v0 = 7;
        v8 = a0->field_8.new_sync(&v0);
        v7 = 0;
    }
    a0->field_0 = v7;
    return v8;
}
