long long starship::modules::pulumi::find_package_file(unsigned long long *a0, unsigned long long a1, unsigned long long a2)
{
    int v0;  // [bp-0xc8], Other Possible Types: void*
    void* v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xc0]
    int v3;  // [bp-0xb8], Other Possible Types: void*
    void* v4;  // [bp-0xb8]
    unsigned long long v5;  // [bp-0xb0]
    void* v6;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x98]
    int v8;  // [bp-0x98]
    unsigned long long v9;  // [bp-0x90]
    char *v10;  // [bp-0x88], Other Possible Types: unsigned long long
    int v11;  // [bp-0x80], Other Possible Types: unsigned long long
    void* v12;  // [bp-0x78]
    struct_0 *v13;  // [bp-0x60]
    char *v14;  // [bp-0x58], Other Possible Types: unsigned long long
    char v15;  // [bp-0x50], Other Possible Types: unsigned long long
    unsigned long v16;  // [bp-0x48]
    unsigned long long v17;  // [bp-0x40]
    unsigned long long v18;  // [bp-0x38]
    unsigned long long v20;  // 4096
    unsigned long long v21;  // rbx
    unsigned long long v22;  // r12
    unsigned long long v23;  // rbp
    int v24;  // xmm0
    unsigned long long v25;  // rdx

    v20 = a2;
    do
    {
        v21 = a1;
        v22 = v20;
        v23 = v21.parent(v22);
        v17 = v21;
        v18 = v22;
        if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) > 4)
        {
            v14 = &v17;
            v15 = <&T as core::fmt::Debug>::fmt;
            v7 = &g_11f5bc0;
            v9 = 1;
            v12 = 0;
            v10 = &v14;
            v11 = 1;
            v1 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
            v2 = 25;
            v4 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
            v5 = 25;
            v6 = log::__private_api::loc(&g_11f5bf8);
            log::__private_api::log(&v7, 5, &v1);
        }
        std::fs::read_dir(&v7, v17, v18);
        if ((char)v9 == 2)
        {
            core::ptr::drop_in_place<core::result::Result<std::fs::ReadDir,std::io::error::Error>>(&v7);
            *(a0) = 0x8000000000000000;
            return 0x8000000000000000;
        }
        v14 = v7;
        v15 = v9;
        v7.try_fold(&v14);
        if (v7)
        {
            v6 = v12;
            v24 = *((int128_t *)&v7);
            *((int128_t *)&v3) = *((int128_t *)&v10);
            v0 = v24;
        }
        else
        {
            v1 = 0;
            core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::sync::mpsc::RecvTimeoutError>>(&v7);
        }
        v14.drop_in_place<core::iter::adapters::filter_map::FilterMap<std::fs::ReadDir,core::result::Result<std::fs::DirEntry,std::io::error::Error>::ok>>();
        if (v1)
        {
            v12 = v6;
            memcpy(&v10, &v4, 16);
            *((int128_t *)&v8) = *((int128_t *)&v1);
            v14.path(&(unsigned long long)v8);
            v13->field_10 = v16;
            v13->field_0 = *((int128_t *)&v14);
            return (unsigned long long)core::ptr::drop_in_place<std::fs::DirEntry>(&(unsigned long long)v8);
        }
        core::ptr::drop_in_place<core::result::Result<std::fs::DirEntry,std::sync::mpsc::RecvTimeoutError>>(&v1);
        v20 = v25;
        a1 = v23;
    } while (a1);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) < 5)
    {
        *(a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v7 = &g_11f5bd0;
    v9 = 1;
    v10 = 8;
    *((uint128_t *)&v11) = 0;
    v0 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
    v2 = 25;
    v3 = "starship::modules::pulumistackLooking for package file in Did not find a Pulumi package fileFound project name: Trying to read workspace_file: Read workspace_file: Parsed  into yaml-workspace.json";
    v5 = 25;
    v6 = log::__private_api::loc(&g_11f5be0);
    log::__private_api::log(&v7, 5, &v0);
    *(a0) = 0x8000000000000000;
    return 0x8000000000000000;
}
