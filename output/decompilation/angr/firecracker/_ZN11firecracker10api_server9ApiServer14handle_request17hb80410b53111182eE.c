long long firecracker::api_server::ApiServer::handle_request(void* a0, unsigned long long a1, unsigned long long a2, unsigned long long a3)
{
    int v0;  // [bp-0x168], Other Possible Types: char
    unsigned long long v1;  // [bp-0x158]
    unsigned long long v2;  // [bp-0x150]
    int v3;  // [bp-0x148], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x140]
    unsigned long long v5;  // [bp-0x138]
    unsigned long long v6;  // [bp-0x130]
    int v7;  // [bp-0x128], Other Possible Types: char *
    unsigned long long v8;  // [bp-0x120]
    unsigned long long v9;  // [bp-0x118]
    unsigned long long v10;  // [bp-0x108]
    unsigned long long v11;  // [bp-0x100]
    char *v12;  // [bp-0xf8], Other Possible Types: unsigned long long
    unsigned long long v13;  // [bp-0xf0]
    void* v14;  // [bp-0xe8], Other Possible Types: unsigned long long
    char *v15;  // [bp-0xd8]
    unsigned long long v16;  // [bp-0xd0]
    char v17;  // [bp-0xc8], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0xb8]
    int v19;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v20;  // [bp-0xa8]
    unsigned long long v21;  // [bp-0xa0]
    char *v22;  // [bp-0x98]
    char v23;  // [bp-0x98]
    unsigned long long v24;  // [bp-0x90]
    void* v25;  // [bp-0x88], Other Possible Types: unsigned long long
    char v26;  // [bp-0x3f]
    unsigned long long v28;  // rdx

    (char)v19.try_from(a2);
    if (*((int *)&v19) == 1)
    {
        memcpy(&v0, &v23, 16);
        v1 = v25;
        v2 = v21;
        *((int128_t *)&v3) = *((int128_t *)&v23);
        v5 = v1;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0))
        {
            v7 = &v2;
            v8 = <firecracker::api_server::parsed_request::RequestError as core::fmt::Debug>::fmt;
            v20 = &g_430b60;
            v21 = 1;
            v25 = 0;
            v22 = &v7;
            v24 = 1;
            v10 = "firecracker::api_server'' API request took ";
            v11 = 23;
            v12 = "firecracker::api_server'' API request took ";
            v13 = 23;
            v14 = log::__private_api::loc(&g_7a39e0);
            log::__private_api::log_impl(&v20, 1, &v10);
        }
        memcpy(&(char)v22, &(char)v3, 16);
        *((int128_t *)&v19) = *((int128_t *)&v2);
        return a0.from(&(char)v19, v28);
    }
    else
    {
        memcpy(&v0, &v21, 16);
        v1 = v24;
        v18 = v1;
        memcpy(&v17, &v21, 16);
        (char)v19.serve_vmm_action_request(a1, v25, a3);
        v17 = 0x8000000000000000;
        if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
        {
            core::ptr::drop_in_place<core::option::Option<alloc::string::String>>(&v0);
        }
        else
        {
            v9 = v1;
            v7 = v0;
            if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) > 1)
            {
                v15 = &(char)v7;
                v16 = <alloc::string::String as core::fmt::Display>::fmt;
                v10 = &g_430b60;
                v11 = 1;
                v14 = 0;
                v12 = &v15;
                v13 = 1;
                v2 = "firecracker::api_server'' API request took ";
                v3 = 23;
                v4 = "firecracker::api_server'' API request took ";
                v5 = 23;
                v6 = log::__private_api::loc(&g_7a39c8);
                log::__private_api::log_impl(&v10, 2, &v2);
            }
            v26 = 1;
            core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
        }
        memcpy(a0, &(char)v19, 144);
        return (unsigned long long)core::ptr::drop_in_place<firecracker::api_server::parsed_request::ParsingInfo>(&v17);
    }
}
