long long firecracker::api_server::request::machine_configuration::parse_put_machine_config(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x1e0]
    unsigned long long v1;  // [bp-0x1d0]
    unsigned long long v2;  // [bp-0x1c8]
    unsigned long long v3;  // [bp-0x1c0]
    void* v4;  // [bp-0x1b8]
    int v5;  // [bp-0x1b0], Other Possible Types: char
    int v6;  // [bp-0x1a0]
    unsigned long long v7;  // [bp-0x190]
    unsigned long long v8;  // [bp-0x188]
    int v9;  // [bp-0x180]
    int v10;  // [bp-0x170]
    int v11;  // [bp-0x160]
    char v12;  // [bp-0x150]
    unsigned long long v13;  // [bp-0x140]
    char v14;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v15;  // [bp-0x130]
    int v16;  // [bp-0x128]
    int v17;  // [bp-0x118]
    int v18;  // [bp-0x108]
    char v19;  // [bp-0xf8]
    unsigned long long v20;  // [bp-0xe8]
    char v21;  // [bp-0xe0], Other Possible Types: unsigned long long
    char v22;  // [bp-0xd8]
    unsigned long long v23;  // [bp-0xc8]
    unsigned long long v25;  // r13
    unsigned long long v26;  // rax

    v25 = 1;
    g_7c47b0.add(1);
    v2 = a1;
    v3 = a2;
    v4 = 0;
    serde_json::de::from_trait(&v21, &v2, a2);
    v14.inspect_err(&v21);
    v26 = v15;
    if (v14 == 9223372036854775810)
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v8;
    }
    else
    {
        v13 = v20;
        memcpy(&v12, &v19, 16);
        v11 = v18;
        v10 = v17;
        v9 = v16;
        v7 = v14;
        v8 = v26;
        if (v14 == 9223372036854775809)
        {
            v0.from(&v7);
            v23 = v1;
            memcpy(&v22, &v0, 16);
            v21 = 35;
            v26 = v5.new_sync(&v21);
        }
        else
        {
            g_7c4980.add(1);
            v0.from(&v7);
            v23 = v1;
            memcpy(&v22, &v0, 16);
            v21 = 35;
            v5.new_sync(&v21);
            v26 = v5.append_deprecation_message("PUT /machine-config: cpu_template field is deprecated.", 54);
        }
        a0[24] = v6;
        a0[8] = v5;
        v25 = 0;
    }
    *((unsigned long long *)a0) = v25;
    return v26;
}
