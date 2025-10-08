long long firecracker::api_server::request::vsock::parse_put_vsock(void* a0, unsigned long long a1, unsigned long long a2)
{
    char v0;  // [bp-0x168]
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    unsigned long long v3;  // [bp-0x148]
    void* v4;  // [bp-0x140]
    char v5;  // [bp-0x138], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0x130]
    unsigned long long v7;  // [bp-0x128]
    unsigned long long v8;  // [bp-0x120]
    char v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x108]
    int v11;  // [bp-0x100], Other Possible Types: char
    int v12;  // [bp-0xf0]
    char v13;  // [bp-0xe0], Other Possible Types: unsigned long long
    unsigned long long v14;  // [bp-0xd8]
    unsigned long long v15;  // [bp-0xd0]
    unsigned long long v16;  // [bp-0xc8]
    unsigned long long v17;  // [bp-0xc0]
    char v18;  // [bp-0xb8]
    unsigned long long v19;  // [bp-0xa8]
    unsigned long long v21;  // r12
    unsigned long long v22;  // r15
    unsigned long long v23;  // r14
    unsigned long long v24;  // rax
    unsigned long long v25;  // rax

    v21 = 1;
    g_7c4850.add(1);
    v2 = a1;
    v3 = a2;
    v4 = 0;
    serde_json::de::from_trait(&v13, &v2, a2);
    v5.inspect_err(&v13);
    v22 = v5;
    v23 = v6;
    v24 = v22;
    v25 = -(v24);
    if ((char)(((0 ^ v24) & (0 ^ -(v24))) >> 63))
    {
        *((char *)&a0[8]) = 4;
        *((unsigned long long *)&a0[16]) = v23;
    }
    else
    {
        memcpy(&v0, &v9, 16);
        v1 = v10;
        if (v8 == 0x8000000000000000)
        {
            v14 = v22;
            v15 = v23;
            v16 = v7;
            v17 = 0x8000000000000000;
            memcpy(&v18, &v0, 16);
            v19 = v1;
            v13 = 27;
            v25 = v11.new_sync(&v13);
        }
        else
        {
            g_7c4980.add(1);
            v14 = v22;
            v15 = v23;
            v17 = v8;
            memcpy(&v18, &v0, 16);
            v19 = v1;
            v13 = 27;
            v11.new_sync(&v13);
            v25 = v11.append_deprecation_message("PUT /vsock: vsock_id field is deprecated.Failed to set the requested seccomp filters on the API thread: API server started.shutdown request received, API server thread ending.API Server error on retrieving incoming request: API Server encountered an error on response: Total previous API call duration: src/firecracker/src/api_server/mod.rs", 41);
        }
        a0[24] = v12;
        a0[8] = v11;
        v21 = 0;
    }
    *((unsigned long long *)a0) = v21;
    return v25;
}
