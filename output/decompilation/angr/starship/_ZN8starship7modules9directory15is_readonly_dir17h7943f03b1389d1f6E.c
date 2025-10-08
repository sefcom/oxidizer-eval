long long starship::modules::directory::is_readonly_dir(unsigned long long a0, unsigned long long a1)
{
    char v0;  // [bp-0xc8]
    unsigned long long v1;  // [bp-0xb8]
    char v2;  // [bp-0xa8], Other Possible Types: unsigned long long
    char v3;  // [bp-0xa0]
    unsigned long long v4;  // [bp-0x98]
    unsigned long long v5;  // [bp-0x90]
    unsigned long long v6;  // [bp-0x88]
    char *v7;  // [bp-0x80]
    unsigned long long v8;  // [bp-0x78]
    char *v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    unsigned long long v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    unsigned long long v14;  // [bp-0x48]
    unsigned long long v15;  // [bp-0x40]
    unsigned long long v16;  // [bp-0x38]
    unsigned long long v17;  // [bp-0x30]
    char *v18;  // [bp-0x28]
    unsigned long long v19;  // [bp-0x20]
    void* v20;  // [bp-0x18]

    v5 = a0;
    v6 = a1;
    starship::modules::utils::directory_nix::is_write_allowed(&v2, a0, a1);
    if ((char)(((0 ^ v2) & (0 ^ -(v2))) >> 63))
        return v3 ^ 1;
    v1 = v4;
    memcpy(&v0, &v2, 16);
    if ((unsigned long long)core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) >= 4)
    {
        v7 = &v5;
        v8 = <&T as core::fmt::Debug>::fmt;
        v9 = &v0;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v16 = &g_11f42e0;
        v17 = 2;
        v20 = 0;
        v18 = &v7;
        v19 = 2;
        v11 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v12 = 28;
        v13 = "starship::modules::directoryread_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs";
        v14 = 28;
        v15 = log::__private_api::loc(&g_11f4300);
        log::__private_api::log(&v16, 4, &v11);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v0);
    return 0;
}
