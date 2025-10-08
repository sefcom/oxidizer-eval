long long starship::modules::haxe::get_haxerc_version(void* a0, unsigned long long a1[25])
{
    char v0;  // [bp-0x98]
    int v1;  // [bp-0x88], Other Possible Types: char
    int v2;  // [bp-0x78]
    unsigned long long v3;  // [bp-0x70]
    unsigned long long v4;  // [bp-0x68]
    char v5;  // [bp-0x58]
    int v6;  // [bp-0x57]
    int v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x38]
    unsigned long long v9;  // [bp-0x30]
    void* v10;  // [bp-0x28]
    char v12;  // dl
    struct_0 *v13;  // rax
    unsigned long long v14;  // r14
    unsigned long long v15;  // r15

    v0.read_file_from_pwd(a1, ".haxerchaxe_librariesbold fg:202helmfile.yamlChart.yamlbold whiteon [$symbol$branch(:$topic)]($style) TRANSPLANTINGHISTEDITING\\([$state]($style)\\) ", 7);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0;
    }
    v4 = *((long long *)&v1);
    *((int128_t *)&v2) = *((int128_t *)&v0);
    v8 = v3;
    v9 = v4;
    v10 = 0;
    serde_json::de::from_trait(&v0, &v8, v12);
    if (v0 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v7 = v1;
        *((int128_t *)&v6) = *((int128_t *)&(&v0)[1]);
        v5 = v0;
        v13 = v5.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
        if (v13 && v13->field_0 == 3)
        {
            v14 = v13->field_10;
            v15 = v13->field_18;
            if (47.is_contained_in(v14, v15) || 92.is_contained_in(v14, v15))
                goto LABEL_ba1167;
            v0.to_vec(v14, v15);
            *((long long *)&a0[16]) = *((long long *)&v1);
            *((int128_t *)a0) = *((int128_t *)&v0);
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
        else
        {
LABEL_ba1167:
            *((unsigned long long *)a0) = 0x8000000000000000;
            core::ptr::drop_in_place<serde_json::value::Value>(&v5);
        }
    }
    return (unsigned long long)core::ptr::drop_in_place<alloc::string::String>(&(char)v2);
}
