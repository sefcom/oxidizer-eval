long long starship::modules::package::get_jsr_package_version(unsigned long long *a0, unsigned long long a1, unsigned long long a2[8])
{
    char v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x90]
    char v3;  // [bp-0x88], Other Possible Types: unsigned long
    int v4;  // [bp-0x87]
    unsigned long long v5;  // [bp-0x80]
    char v6;  // [bp-0x78]
    int v7;  // [bp-0x68]
    unsigned long long v8;  // [bp-0x60]
    unsigned long long v9;  // [bp-0x58]
    int v10;  // [bp-0x50], Other Possible Types: unsigned short
    char v11;  // [bp-0x4e]
    void* v12;  // [bp-0x40]
    int v13;  // [bp-0x38]
    char v14;  // [bp-0x29]
    unsigned long long v16[2];  // rcx
    char v17;  // al
    int v18;  // xmm0
    struct_0 *v19;  // rax

    v3 = &g_11f5800;
    v5 = &g_11f5840;
    v0.find_map(&(char)v3, a1);
    if ((char)(((0 ^ v1) & (0 ^ -(v1))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v16 = *((long long *)&v0);
    v9 = v2;
    *((int128_t *)&v7) = *((int128_t *)&v1);
    if ((char)core::slice::<impl [T]>::ends_with(v16[0], v16[1], ".jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 6))
    {
        v10 = 257;
        v11 = 1;
        jsonc_parser::serde::parse_to_serde_value(&v0, v8, v9, &v10);
        v17 = v0;
        if (v0 == 7)
        {
            core::ptr::drop_in_place<core::result::Result<core::option::Option<serde_json::value::Value>,jsonc_parser::errors::ParseError>>(&v0);
            goto LABEL_baf04b;
        }
        else
        {
            memcpy(&v14, &v1, 16);
            *((int128_t *)&v13) = *((int128_t *)&(&v0)[1]);
            if (v0 == 6)
                goto LABEL_baf04b;
            memcpy(&v6, &v13, 16);
            v18 = (int128_t)v13;
LABEL_baf070:
            v4 = v18;
            v3 = v17;
            v19 = v3.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
            if (v19 && v19->field_0 == 3)
            {
                starship::modules::package::format_version(a0, v19->field_10, v19->field_18, a2[6], a2[7]);
                core::ptr::drop_in_place<serde_json::value::Value>(&v3);
            }
            else
            {
                *(a0) = 0x8000000000000000;
                core::ptr::drop_in_place<serde_json::value::Value>(&v3);
            }
        }
    }
    else
    {
        *((int128_t *)&v10) = (int128_t)(&v7)[8];
        v12 = 0;
        serde_json::de::from_trait(&v0, &(char)v10, (char)a2);
        v17 = v0;
        if (v0 == 6)
        {
            core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
        }
        else
        {
            v18 = *((int128_t *)&(&v0)[1]);
            memcpy(&v6, &v1, 16);
            goto LABEL_baf070;
        }
LABEL_baf04b:
        *(a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v7);
    return a0;
}
