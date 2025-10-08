long long firecracker::api_server::parsed_request::ParsedRequest::success_response_with_mmds_value(void* a0, char *a1)
{
    unsigned long long v0;  // [bp-0x100]
    unsigned long long v1;  // [bp-0xf8]
    unsigned long long v2;  // [bp-0xf0]
    unsigned long long v3;  // [bp-0xe8]
    unsigned long long v4;  // [bp-0xe0]
    int v5;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v6;  // [bp-0xd0]
    unsigned long long v7;  // [bp-0xc8]
    char v8;  // [bp-0xb8]
    unsigned long long v9;  // [bp-0xa0]
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x90]
    uint128_t v12;  // [bp-0x88]

    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) >= 3)
    {
        v9 = &g_7a3690;
        v10 = 1;
        v11 = 8;
        v12 = 0;
        v0 = "firecracker::api_server::parsed_request";
        v1 = 39;
        v2 = "firecracker::api_server::parsed_request";
        v3 = 39;
        v4 = log::__private_api::loc(&g_7a36d0);
        log::__private_api::log_impl(&v9, 3, &v0);
    }
    v9.new(1, 1);
    if (*(a1))
    {
        serde_json::ser::to_vec(&v0, a1);
        if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
        {
            v6 = v1;
            v5 = 0x8000000000000000;
        }
        else
        {
            v7 = v2;
            *((int128_t *)&v5) = *((int128_t *)&v0);
        }
        v8.unwrap(&v5, &g_7a36e8);
    }
    else
    {
        v8.to_vec("{}The request was executed successfully. Status code: 204 No Content.", 2);
    }
    v9.set_body(&v8);
    return memcpy(a0, &v9, 144);
}
