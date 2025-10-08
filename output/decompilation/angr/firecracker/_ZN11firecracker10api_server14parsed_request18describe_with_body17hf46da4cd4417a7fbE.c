void firecracker::api_server::parsed_request::describe_with_body(unsigned long long a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0xa1]
    char *v1;  // [bp-0xa0], Other Possible Types: char
    unsigned long long v2;  // [bp-0x98]
    char *v3;  // [bp-0x90]
    unsigned long long v4;  // [bp-0x88]
    char *v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    unsigned long long v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char *v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    void* v13;  // [bp-0x40]
    char v14;  // [bp-0x30]
    unsigned long long v16;  // rdx
    unsigned long long v17;  // rsi

    v0 = a1;
    v7 = a2;
    v8 = a3;
    core::str::converts::from_utf8(&v1, a4, a5);
    if (v1)
        v16 = 22;
    if (v1)
        v17 = "inconvertible to UTF-8 with body ";
    v14.to_vec(v17, v16);
    v1 = &v0;
    v2 = <micro_http::common::Method as core::fmt::Debug>::fmt;
    v3 = &v7;
    v4 = <&T as core::fmt::Debug>::fmt;
    v5 = &v14;
    v6 = <alloc::string::String as core::fmt::Debug>::fmt;
    v9 = &g_7a37e0;
    v10 = 3;
    v13 = 0;
    v11 = &v1;
    v12 = 3;
    a0.map_or_else(0, a2, &v9);
    core::ptr::drop_in_place<alloc::string::String>(&v14);
    return;
}
