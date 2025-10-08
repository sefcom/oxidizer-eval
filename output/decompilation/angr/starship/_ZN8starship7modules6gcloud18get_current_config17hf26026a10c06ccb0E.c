long long starship::modules::gcloud::get_current_config(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0xd8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xd0]
    char *v2;  // [bp-0xc8], Other Possible Types: unsigned long long
    int v3;  // [bp-0xc0], Other Possible Types: unsigned long long
    void* v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    int v6;  // [bp-0xa8]
    unsigned long long v7;  // [bp-0xa0]
    unsigned long long v8;  // [bp-0x98]
    int v9;  // [bp-0x88], Other Possible Types: char
    unsigned long long v10;  // [bp-0x78]
    char *v11;  // [bp-0x68]
    unsigned long long v12;  // [bp-0x60]
    unsigned long long v13;  // [bp-0x58]
    char v14;  // [bp-0x50]
    unsigned long long v15;  // [bp-0x48]
    unsigned long long v16;  // [bp-0x40]
    char v17;  // [bp-0x38]
    unsigned long long v19;  // rdx

    starship::modules::gcloud::get_config_dir(&(char)v0, a1);
    if ((char)(((0 ^ v0) & (0 ^ -(v0))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v8 = v2;
    *((int128_t *)&v6) = *((int128_t *)&v0);
    starship::modules::gcloud::get_active_config(&(char)v0, v7, v2);
    if (v0 == 0x8000000000000000)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v10 = v2;
        memcpy(&v9, &(char)v0, 16);
        v14.join(v7, v2, "configurationsCLOUDSDK_CONFIGCLOUDSDK_ACTIVE_CONFIG_NAMEactive_configError in module `gcloud`: \nsrc/modules/gcloud.rs", 14);
        v11 = &v9;
        v12 = <alloc::string::String as core::fmt::Display>::fmt;
        v0 = &g_11f4788;
        v1 = 1;
        v4 = 0;
        v2 = &v11;
        v3 = 1;
        v17.map_or_else(0, v19, &v0);
        v11.join(v15, v16, &v17);
        core::ptr::drop_in_place<std::path::PathBuf>(&v14);
        v2 = v10;
        v0 = v9;
        v5 = v13;
        *((int128_t *)&v3) = *((int128_t *)&v11);
        *(a0) = v9;
        *((unsigned long long *)&a0[32]) = 0;
        *((unsigned long long *)&a0[40]) = v5;
        *((unsigned long long *)&a0[16]) = v2;
        *((unsigned long long *)&a0[24]) = v3;
    }
    return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&(char)v6);
}
