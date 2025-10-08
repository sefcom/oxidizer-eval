long long starship::modules::package::get_composer_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    int v0;  // [bp-0x88]
    unsigned long long v1;  // [bp-0x80]
    unsigned long long v2;  // [bp-0x78]
    char v3;  // [bp-0x70]
    int v4;  // [bp-0x60], Other Possible Types: char
    char v5;  // [bp-0x50]
    int v6;  // [bp-0x4f]
    int v7;  // [bp-0x40]
    unsigned long long v8;  // [bp-0x30]
    unsigned long long v9;  // [bp-0x28]
    void* v10;  // [bp-0x20]
    struct_0 *v12;  // rax

    v3.read_file_from_pwd(a1, "composer.json.php-version", 13);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v2 = *((long long *)&v4);
    *((int128_t *)&v0) = *((int128_t *)&v3);
    v8 = v1;
    v9 = v2;
    v10 = 0;
    serde_json::de::from_trait(&v3, &v8, (char)a2);
    if (v3 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v3);
        *(a0) = 0x8000000000000000;
    }
    else
    {
        v7 = v4;
        *((int128_t *)&v6) = *((int128_t *)&(&v3)[1]);
        v5 = v3;
        v12 = v5.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
        if (v12 && v12->field_0 == 3)
        {
            starship::modules::package::format_version(a0, v12->field_10, v12->field_18, a2[6], a2[7]);
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
        else
        {
            *(a0) = 0x8000000000000000;
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    return a0;
}
