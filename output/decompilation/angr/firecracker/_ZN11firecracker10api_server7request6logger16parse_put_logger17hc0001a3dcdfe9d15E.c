long long firecracker::api_server::request::logger::parse_put_logger(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x140]
    int v2;  // [bp-0x138]
    char v3;  // [bp-0x128]
    unsigned long long v4;  // [bp-0x118]
    unsigned long long v5;  // [bp-0x110]
    unsigned long long v6;  // [bp-0x108]
    void* v7;  // [sp-0x100]
    unsigned long long v8;  // [bp-0x100]
    int v9;  // [bp-0xf8]
    char v10;  // [bp-0xe8]
    unsigned long long v11;  // [bp-0xd8]
    char v12;  // [bp-0x58]
    unsigned long long v14;  // r12
    unsigned long long v15;  // rax

    v14 = 1;
    g_7c4790.add(1);
    v5 = a1;
    v6 = a2;
    v7 = 0;
    serde_json::de::from_trait(&v12, &v5, a2);
    v0.inspect_err(&v12);
    v15 = v1;
    if (v0 == 9223372036854775809)
    {
        a0->field_8 = 4;
        a0->field_10 = v8;
    }
    else
    {
        v11 = v4;
        memcpy(&v10, &v3, 16);
        v9 = v2;
        v6 = v0;
        v8 = v15;
        v5 = 5;
        v15 = a0->field_8.new_sync(&v5);
        v14 = 0;
    }
    a0->field_0 = v14;
    return v15;
}
