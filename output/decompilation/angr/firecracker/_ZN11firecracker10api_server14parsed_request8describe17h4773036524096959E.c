long long firecracker::api_server::parsed_request::describe(unsigned long long a0, char a1, unsigned long long a2, unsigned long long a3, unsigned long long a4[3])
{
    char v0;  // [bp-0x89]
    char *v1;  // [bp-0x88]
    unsigned long long v2;  // [bp-0x80]
    char *v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    char *v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38]
    unsigned long long v14;  // rdx

    v0 = a1;
    v5 = a2;
    v6 = a3;
    if (a4 && !(char)a2.equal(a3, "/mmds", 5))
    {
        if (!(char)a2.equal(a3, "/cpu-config request on . To view the CPU template received by the API, configure log-level to DEBUG", 11) || (unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 4 && (char)log::__private_api::enabled())
            return (unsigned long long)firecracker::api_server::parsed_request::describe_with_body(a0, v0, a2, a3, a4[1], a4[2]);
        v1 = &v0;
        v2 = <micro_http::common::Method as core::fmt::Debug>::fmt;
        v3 = &v5;
        v4 = <&T as core::fmt::Debug>::fmt;
        v7 = &g_7a37b0;
        v8 = 3;
    }
    else
    {
        v1 = &v0;
        v2 = <micro_http::common::Method as core::fmt::Debug>::fmt;
        v3 = &v5;
        v4 = <&T as core::fmt::Debug>::fmt;
        v7 = &g_7a3790;
        v8 = 2;
    }
    v11 = 0;
    v9 = &v1;
    v10 = 2;
    return a0.map_or_else(0, v14, &v7);
}
