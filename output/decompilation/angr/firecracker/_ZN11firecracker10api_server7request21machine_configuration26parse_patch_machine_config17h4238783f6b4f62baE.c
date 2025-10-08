long long firecracker::api_server::request::machine_configuration::parse_patch_machine_config(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x128], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x108]
    unsigned long long v5;  // [bp-0x100]
    int v6;  // [bp-0xf8], Other Possible Types: char
    int v7;  // [bp-0xe8]
    unsigned long long v8;  // [bp-0xd8]
    unsigned long long v9;  // [bp-0xd0]
    void* v10;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v11;  // [bp-0xc0]
    unsigned long long v13;  // rax
    unsigned long long v14;  // r15
    unsigned long long v15;  // r14
    unsigned long long v16;  // r12
    unsigned long long v17;  // rax

    g_7c4670.add(1);
    v8 = a1;
    v9 = a2;
    v10 = 0;
    serde_json::de::from_trait(&v0, &v8, a2);
    v13 = v3.inspect_err(&v0);
    v14 = v3;
    v15 = v4;
    if (v14 == 2)
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v15;
        *((unsigned long long *)a0) = 1;
        return v13;
    }
    v16 = v5;
    v0 = v14;
    v1 = v15;
    v2 = v16;
    if ((char)v0.is_empty())
        return firecracker::api_server::parsed_request::method_to_error(a0, 2);
    if ((0xff0000000000 & v16) == 0x60000000000)
    {
        v9 = v14;
        v10 = v15;
        v11 = v16;
        v8 = 35;
        v17 = v6.new_sync(&v8);
    }
    else
    {
        g_7c4980.add(1);
        v9 = v14;
        v10 = v15;
        v11 = v16;
        v8 = 35;
        v6.new_sync(&v8);
        v17 = v6.append_deprecation_message("PATCH /machine-config: cpu_template field is deprecated.", 56);
    }
    a0[24] = v7;
    a0[8] = v6;
    *((unsigned long long *)a0) = 0;
    return v17;
}
