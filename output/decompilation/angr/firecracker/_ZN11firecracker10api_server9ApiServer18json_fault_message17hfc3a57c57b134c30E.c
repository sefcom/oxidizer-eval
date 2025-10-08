void firecracker::api_server::ApiServer::json_fault_message(unsigned long long a0, unsigned long long a1[3])
{
    void* v0;  // [bp-0x98]
    void* v1;  // [bp-0x88]
    char v2;  // [bp-0x80]
    char v3;  // [bp-0x78]
    void* v4;  // [bp-0x68]
    char v5;  // [bp-0x60]
    char v6;  // [bp-0x48]

    v0 = 0;
    v1 = 0;
    v5.to_vec("fault_message", 13);
    v2.serialize(a1[1], a1[2]);
    v6.unwrap(&v2, &g_7a3a88);
    v2.insert(&v0, &v5, &v6);
    core::ptr::drop_in_place<core::option::Option<serde_json::value::Value>>(&v2);
    memcpy(&v3, &v0, 16);
    v4 = 0;
    v2 = 5;
    a0.spec_to_string(&v2);
    core::ptr::drop_in_place<serde_json::value::Value>(&v2);
    core::ptr::drop_in_place<alloc::string::String>(a1);
    return;
}
