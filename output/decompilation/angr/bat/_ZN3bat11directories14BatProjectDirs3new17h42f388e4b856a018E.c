void bat::directories::BatProjectDirs::new(void* a0)
{
    int v0;  // [bp-0xa8], Other Possible Types: char
    char v1;  // [bp-0xa0], Other Possible Types: unsigned long long
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long
    unsigned long v4;  // [bp-0x88]
    unsigned long long v5;  // [bp-0x80]
    int v6;  // [bp-0x78], Other Possible Types: unsigned long long, unsigned long
    unsigned long long v7;  // [bp-0x78]
    unsigned long long v8;  // [bp-0x68]
    int v9;  // [bp-0x58], Other Possible Types: char
    unsigned long long v10;  // [bp-0x48]
    unsigned long long v11;  // [bp-0x40]
    char v12;  // [bp-0x38]
    char v13;  // [bp-0x28]
    unsigned long long v14;  // [bp-0x18]

    etcetera::base_strategy::choose_native_strategy(&v0);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        v0.drop_in_place<core::result::Result<etcetera::base_strategy::xdg::Xdg,etcetera::HomeDirError>>();
        *((unsigned long long *)a0) = 0x8000000000000000;
        return;
    }
    memcpy(&v12, &v1, 16);
    v11 = *((long long *)&v0);
    std::env::var_os(&v0, "BAT_CACHE_PATHBAT_CONFIG_DIRCould not get home directorysrc/bin/bat/directories.rssrc/bin/bat/main.rs", 14);
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        v7 = 0x8000000000000000;
LABEL_7ad45c:
        v0.cache_dir(&v11);
        v9.join(v1, v2, "batA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-", 3);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    else
    {
        memcpy(&v7, &v0, 16);
        v8 = v2;
        if (v6 == 0x8000000000000000)
            goto LABEL_7ad45c;
        v10 = v8;
        v9 = v6;
    }
    std::env::var_os(&v0, "BAT_CONFIG_DIRCould not get home directorysrc/bin/bat/directories.rssrc/bin/bat/main.rs", 14);
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        v6 = 0x8000000000000000;
LABEL_7ad4e4:
        v0.config_dir(&v11);
        v13.join(v1, v2, "batA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-", 3);
        core::ptr::drop_in_place<std::path::PathBuf>(&v0);
    }
    else
    {
        memcpy(&v7, &v0, 16);
        v8 = v2;
        if (v6 == 0x8000000000000000)
            goto LABEL_7ad4e4;
        v14 = v8;
        memcpy(&v13, &v7, 16);
    }
    v2 = v10;
    v0 = v9;
    v5 = v14;
    memcpy(&v3, &v13, 16);
    *(a0) = v9;
    *((unsigned long *)&a0[32]) = v4;
    *((unsigned long long *)&a0[40]) = v5;
    *((unsigned long long *)&a0[16]) = v2;
    *((unsigned long *)&a0[24]) = v3;
    core::ptr::drop_in_place<etcetera::base_strategy::xdg::Xdg>(&v11);
    return;
}
