long long firecracker::api_server::request::actions::parse_put_actions(struct_0 *a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0xf8]
    char v1;  // [bp-0xf7]
    unsigned long long v2;  // [bp-0xf0]
    char v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    void* v6;  // [bp-0xc8]
    unsigned long long v8;  // r12
    unsigned long long v9;  // rax
    unsigned int v10;  // eax

    v8 = 1;
    g_7c4730.add(1);
    v4 = a1;
    v5 = a2;
    v6 = 0;
    serde_json::de::from_trait(&v3, &v4, a2);
    v0.inspect_err(&v3);
    if (v0 == 1)
    {
        v9 = v2;
        a0->field_8 = 4;
        a0->field_10 = v2;
    }
    else
    {
        v10 = v1;
        *((int *)&v4) = (!v10 ? 16 : (v10 == 1 ? 29 : 30));
        v9 = a0->field_8.new_sync(&v4);
        v8 = 0;
    }
    a0->field_0 = v8;
    return v9;
}
