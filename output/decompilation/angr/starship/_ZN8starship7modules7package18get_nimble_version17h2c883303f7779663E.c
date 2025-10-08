long long starship::modules::package::get_nimble_version(unsigned long long *a0, void* a1, unsigned long long a2[8])
{
    char v0;  // [bp-0xd0]
    int v1;  // [bp-0xc0], Other Possible Types: char
    char v2;  // [bp-0xb0]
    int v3;  // [bp-0x98]
    int v4;  // [bp-0x88], Other Possible Types: char
    unsigned long long v5;  // [bp-0x78]
    unsigned long long v6;  // [bp-0x70]
    unsigned long long v7;  // [bp-0x68]
    char v8;  // [bp-0x58]
    int v9;  // [bp-0x57]
    int v10;  // [bp-0x48]
    char v11;  // [bp-0x38]
    void* v12;  // [bp-0x28]
    struct_0 *v14;  // rax

    v0.try_begin_scan(a1);
    if (*((long long *)&v0))
    {
        v5 = *((long long *)&v2);
        memcpy(&v4, &v1, 16);
        *((int128_t *)&v3) = *((int128_t *)&v0);
        v6 = &g_11f59a0;
        v7 = 1;
        if ((char)(char)v3.is_match())
        {
            v0.exec_cmd(a1, "nimblenim.cfg", 6, &g_11f59b0, 2);
            if (*((long long *)&v0) != 0x8000000000000000)
            {
                memcpy(&v5, &v2, 16);
                v4 = v1;
                *((int128_t *)&v3) = *((int128_t *)&v0);
                memcpy(&v11, &v3, 16);
                v12 = 0;
                serde_json::de::from_trait(&v0, &v11, (char)a2);
                if (v0 == 6)
                {
                    core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
                    *(a0) = 0x8000000000000000;
                }
                else
                {
                    v10 = v1;
                    *((int128_t *)&v9) = *((int128_t *)&(&v0)[1]);
                    v8 = v0;
                    v14 = v8.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
                    if (v14 && v14->field_0 == 3)
                    {
                        starship::modules::package::format_version(a0, v14->field_10, v14->field_18, a2[6], a2[7]);
                        core::ptr::drop_in_place<serde_json::value::Value>(&v8);
                    }
                    else
                    {
                        *(a0) = 0x8000000000000000;
                        core::ptr::drop_in_place<serde_json::value::Value>(&v8);
                    }
                }
                core::ptr::drop_in_place<starship::utils::CommandOutput>(&(char)v3);
                return a0;
            }
        }
    }
    *(a0) = 0x8000000000000000;
    return a0;
}
