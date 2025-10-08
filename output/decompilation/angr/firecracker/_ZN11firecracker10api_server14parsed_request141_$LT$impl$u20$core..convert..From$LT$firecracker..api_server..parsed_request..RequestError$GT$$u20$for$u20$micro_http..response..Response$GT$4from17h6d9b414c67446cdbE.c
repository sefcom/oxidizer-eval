long long firecracker::api_server::parsed_request::<impl core::convert::From<firecracker::api_server::parsed_request::RequestError> for micro_http::response::Response>::from(unsigned long long a0, char a1[2], unsigned long long a2)
{
    char v0[2];  // [bp-0x90]
    unsigned long long v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    unsigned long long v3;  // [bp-0x78]
    char *v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    void* v6;  // [bp-0x60]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x38]
    unsigned long v10;  // rsi

    *(&v0) = a1;
    v1 = <firecracker::api_server::parsed_request::RequestError as core::fmt::Display>::fmt;
    v2 = &g_430b60;
    v3 = 1;
    v6 = 0;
    v4 = &v0;
    v5 = 1;
    v8.map_or_else(0, a2, &v2);
    v7.json_fault_message(&v8);
    v10 = (a1[0] == 1 ? a1[1] : 3);
    a0.json_response((a1[0] == 1 ? a1[1] : 3), &v7);
    return core::ptr::drop_in_place<firecracker::api_server::parsed_request::RequestError>(a1);
}
