long long starship::modules::package::get_helm_package_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    unsigned long long v0;  // [bp-0x90]
    int v1;  // [bp-0x88]
    unsigned long v2;  // [bp-0x80]
    int v3;  // [bp-0x78]
    unsigned long long v4;  // [bp-0x70]
    unsigned long long v5;  // [bp-0x68]
    char v6;  // [bp-0x58], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x28], Other Possible Types: char
    unsigned long long v11;  // rdx
    struct_0 *v12;  // rax

    v6.read_file_from_pwd(a1, "Chart.yamlbold whiteon [$symbol$branch(:$topic)]($style) TRANSPLANTINGHISTEDITING\\([$state]($style)\\) ", 10);
    if ((char)(((0 ^ v6) & (0 ^ -(v6))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v11 = *((long long *)&v8);
    v5 = *((long long *)&v8);
    *((int128_t *)&v3) = *((int128_t *)&v6);
    v6.load_from_str(v4, v11);
    if (v6 == 0x8000000000000000)
    {
        memcpy(&v9, &v8, 16);
        if (v7 == 0x8000000000000000)
            goto LABEL_bafceb;
        v1 = v9;
        v0 = v7;
        if (v2)
        {
            v12 = (long long)v1.index("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
            if (v12->field_0 != 2)
                goto LABEL_bafd08;
            starship::modules::package::format_version(a0, v12->field_10, v12->field_18, a2[6], a2[7]);
            core::ptr::drop_in_place<alloc::vec::Vec<yaml_rust2::yaml::Yaml>>(&v0);
        }
        else
        {
LABEL_bafd08:
            *(a0) = 0x8000000000000000;
            core::ptr::drop_in_place<alloc::vec::Vec<yaml_rust2::yaml::Yaml>>(&v0);
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<alloc::vec::Vec<yaml_rust2::yaml::Yaml>,yaml_rust2::scanner::ScanError>>(&v6);
LABEL_bafceb:
        *(a0) = 0x8000000000000000;
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v3);
    return a0;
}
