long long starship::modules::package::get_pyproject_version(unsigned long long *a0, unsigned long a1, unsigned long long a2[8])
{
    int v0;  // [bp-0x128]
    unsigned long long v1;  // [bp-0x120]
    unsigned long long v2;  // [bp-0x118]
    char v3;  // [bp-0x110], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x108]
    int v5;  // [bp-0x100], Other Possible Types: char
    char v6;  // [bp-0xf0]
    int v7;  // [bp-0xe0]
    int v8;  // [bp-0xd0]
    unsigned long long v9;  // [bp-0xc0]
    int v10;  // [bp-0xb8]
    int v11;  // [bp-0xa8], Other Possible Types: char
    int v12;  // [bp-0x98]
    int v13;  // [bp-0x88]
    unsigned long long v14;  // [bp-0x78]
    unsigned long long v15;  // [bp-0x68]
    int v16;  // [bp-0x60]
    int v17;  // [bp-0x50]
    int v18;  // [bp-0x40]
    int v19;  // [bp-0x30]
    unsigned long long v20;  // [bp-0x20]
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rdx
    unsigned long long v24;  // rax

    v3.read_file_from_pwd(a1, "pyproject.tomlPipfiletox.ini__init__.pyVIRTUAL_ENVpyenv via [${symbol}${pyenv_prefix}(${version} )(\\($virtualenv\\) )]($style)", 14);
    if ((char)(((0 ^ v3) & (0 ^ -(v3))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v22 = *((long long *)&v5);
    v2 = *((long long *)&v5);
    *((int128_t *)&v0) = *((int128_t *)&v3);
    toml::de::from_str(&v3, v1, v22);
    if (*((int *)&v3) == 2)
    {
        v10 = v5;
        memcpy(&v11, &v6, 16);
        v12 = v7;
        v13 = v8;
        v14 = v9;
        if (v4 == 0x8000000000000000)
            goto LABEL_baf389;
        v20 = v14;
        v19 = v13;
        v18 = v12;
        v17 = v11;
        v16 = v10;
        v15 = v4;
        v24 = starship::modules::package::get_pep621_version(&v15, a1, a2, v14).or_else(v23, &v15, &v15);
        if (v24)
            starship::modules::package::format_version(a0, v24, a2, a2[6], a2[7]);
        else
            *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v15);
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<toml::map::Map<alloc::string::String,toml::value::Value>,toml::de::error::Error>>(&v3);
LABEL_baf389:
        *(a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    return a0;
}
