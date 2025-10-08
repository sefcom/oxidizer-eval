long long starship::modules::package::get_meson_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    unsigned long long v0;  // [bp-0xf0]
    unsigned long long v1;  // [bp-0xe8]
    char v2;  // [bp-0xe0]
    char v3;  // [bp-0xd0]
    unsigned long long v4;  // [bp-0xc8]
    unsigned long long v5;  // [bp-0xc0]
    int v6;  // [bp-0xb8]
    unsigned long long v7;  // [bp-0xb0]
    int v8;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v9;  // [bp-0xa8]
    int v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    unsigned long long v12;  // [bp-0x78]
    int v13;  // [bp-0x68], Other Possible Types: char
    int v14;  // [bp-0x58], Other Possible Types: char
    int v15;  // [bp-0x48]
    int v16;  // [bp-0x38]
    char v17;  // [bp-0x28]
    unsigned long long v19;  // rax

    v13.read_file_from_pwd(a1, "meson.buildproject\\([^())]*,version:'(?P<version>[^']+)'[^())]*\\)(?m)^\\s*version\\s*:\\s*'(?P<version>[^']+)'(?m)^(.*/)*\\s*version\\s*:=\\s*.(?P<version>[\\d\\.]+)workspacegalaxy.ymlError in module `perl`:\nsrc/modules/perl.rs", 11);
    if ((char)(((0 ^ *((long long *)&v13)) & (0 ^ -(*((long long *)&v13)))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v8 = *((long long *)&v14);
    v6 = v13;
    v0 = v7;
    v1 = v9;
    v2 = 0;
    v3.collect(&v0);
    core::ptr::drop_in_place<alloc::string::String>(&(char)v6);
    v13.new("project\\([^())]*,version:'(?P<version>[^']+)'[^())]*\\)(?m)^\\s*version\\s*:\\s*'(?P<version>[^']+)'(?m)^(.*/)*\\s*version\\s*:=\\s*.(?P<version>[\\d\\.]+)workspacegalaxy.ymlError in module `perl`:\nsrc/modules/perl.rs", 54);
    v0.unwrap(&v13, &g_11f5910);
    v13.captures_at(&v0, v4, v5);
    if (*((int *)&v13) == 2)
    {
        *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v0);
    }
    else
    {
        v12 = *((long long *)&v17);
        v11 = v16;
        v10 = v15;
        v8 = v14;
        v6 = v13;
        v19 = (char)v6.index("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
        starship::modules::package::format_version(a0, v19, a2, a2[6], a2[7]);
        core::ptr::drop_in_place<regex::regex::string::Captures>(&(char)v6);
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v0);
    }
    core::ptr::drop_in_place<alloc::string::String>(&v3);
    return a0;
}
