void starship::modules::azure::load_azure_profile(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x90], Other Possible Types: unsigned long, unsigned long long
    unsigned int v1;  // [bp-0x90]
    char v2;  // [bp-0x88], Other Possible Types: unsigned long long
    unsigned long long v3;  // [bp-0x80]
    int v4;  // [bp-0x78]
    int v5;  // [bp-0x70]
    unsigned long long v6;  // [bp-0x60]
    int v7;  // [bp-0x58]
    unsigned long long v8;  // [bp-0x50]
    unsigned long long v9;  // [bp-0x48]
    unsigned long long v10;  // [bp-0x40]
    void* v11;  // [bp-0x38], Other Possible Types: unsigned long long
    unsigned long long v12;  // [bp-0x30]
    unsigned long long v13;  // [bp-0x28]
    unsigned long long v15;  // r14
    unsigned long long v16;  // r15
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rax
    unsigned long long v19;  // rdx
    int v20;  // xmm0
    int v21;  // xmm1

    std::fs::read_to_string(&v0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        core::ptr::drop_in_place<core::result::Result<alloc::string::String,std::io::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return;
    }
    *((int128_t *)&v7) = *((int128_t *)&v2);
    v6 = v0;
    v15 = (long long)v7;
    v16 = v8;
    v1 = 0;
    v18 = ::0xa7eb90::core::char::methods::encode_utf8_raw(65279, &v1, 4).strip_prefix_of(v17, (long long)v7, v16);
    if (!v18)
    {
        v19 = v16;
        if (!v18)
            goto LABEL_b854e0;
LABEL_b854df:
        v15 = v18;
    }
    else
    {
        v19 = v17;
        if (v18)
            goto LABEL_b854df;
LABEL_b854e0:
    }
    v9 = v15;
    v10 = v19;
    v11 = 0;
    serde_json::de::from_trait(&v1, &v9, v19);
    if (v0 == 0x8000000000000000)
    {
        core::ptr::drop_in_place<core::result::Result<starship::modules::azure::AzureProfile,serde_json::error::Error>>(&v1);
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 3)
        {
            v0 = &g_11f3c10;
            v2 = 1;
            v3 = 8;
            *((uint128_t *)&v4) = 0;
            v9 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
            v10 = 24;
            v11 = "starship::modules::azuresubscriptionazureProfile.jsonFailed to parse azure profile.";
            v12 = 24;
            v13 = log::__private_api::loc(&g_11f3c20);
            log::__private_api::log(&v0, 3, &v9);
        }
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v20 = *((int128_t *)&v0);
        v21 = *((int128_t *)&v3);
        a0[32] = v5;
        a0[16] = v21;
        *(a0) = v20;
    }
    core::ptr::drop_in_place<alloc::string::String>(&v6);
    return;
}
