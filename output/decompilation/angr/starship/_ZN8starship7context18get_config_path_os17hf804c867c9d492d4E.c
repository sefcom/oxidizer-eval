long long starship::context::get_config_path_os(void* a0)
{
    int v0;  // [bp-0x70], Other Possible Types: char
    unsigned long long v1;  // [bp-0x60]
    int v2;  // [bp-0x58]
    unsigned long long v3;  // [bp-0x50]
    unsigned long long v4;  // [bp-0x48]
    char v5;  // [bp-0x40]
    unsigned long long v6;  // [bp-0x38]
    unsigned long long v7;  // [bp-0x30]
    int v8;  // [bp-0x28], Other Possible Types: char
    char v9;  // [bp-0x18]
    unsigned long long v11;  // rax

    v0.get_env_os("STARSHIP_CONFIG.config/starship.toml--version(Get-Host | Select Version | Format-Table -HideTableHeaders | Out-String).trim()Failed to load config value: src/config.rs", 15);
    if (!((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63)))
    {
        *((unsigned long long *)&a0[16]) = v1;
        *(a0) = v0;
        return v1;
    }
    v0.drop_in_place<core::option::Option<gix_ref::FullName>>();
    v11 = starship::context::home_dir(&v0);
    if (*((long long *)&v0) != 0x8000000000000000)
    {
        v4 = v1;
        v2 = v0;
        v5.join(v3, v1, ".configstarship.tomlfrom_path_with_timeout workerfrom_path_with_timeout has timed-out!Building HashSets of directory files, folders and extensions took ", 7);
        v8.join(v6, v7, "starship.tomlfrom_path_with_timeout workerfrom_path_with_timeout has timed-out!Building HashSets of directory files, folders and extensions took ", 13);
        *((long long *)&a0[16]) = *((long long *)&v9);
        *(a0) = v8;
        core::ptr::drop_in_place<std::path::PathBuf>(&v5);
        return (unsigned long long)core::ptr::drop_in_place<std::path::PathBuf>(&(char)v2);
    }
    *((unsigned long long *)a0) = 0x8000000000000000;
    return v11;
}
