long long starship::modules::package::get_rlang_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    int v0;  // [bp-0xe8]
    unsigned long long v1;  // [bp-0xe0]
    unsigned long long v2;  // [bp-0xd8]
    int v3;  // [bp-0xd0], Other Possible Types: char
    int v4;  // [bp-0xc0], Other Possible Types: char
    int v5;  // [bp-0xb0]
    int v6;  // [bp-0xa0]
    unsigned long long v7;  // [bp-0x90]
    char v8;  // [bp-0x88]
    int v9;  // [bp-0x68]
    int v10;  // [bp-0x58]
    int v11;  // [bp-0x48]
    int v12;  // [bp-0x38]
    unsigned long long v13;  // [bp-0x28]
    unsigned long long v15;  // rax

    v3.read_file_from_pwd(a1, "DESCRIPTION.Rproj.user", 11);
    if ((char)(((0 ^ *((long long *)&v3)) & (0 ^ -(*((long long *)&v3)))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    v2 = *((long long *)&v4);
    v0 = v3;
    v3.new("(?m)^Version:\\s*(?P<version>.*$)transition equivalence classes: could not initialize ThreadRng: index out of bounds: the len is >` not found before end of input as minute (a two digit integer)", 32);
    v8.unwrap(&v3, &g_11f5a18);
    v3.captures_at(&v8, v1, v2);
    if (*((int *)&v3) == 2)
    {
        *(a0) = 0x8000000000000000;
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v8);
    }
    else
    {
        v13 = v7;
        v12 = v6;
        v11 = v5;
        v10 = v4;
        v9 = v3;
        v15 = v9.index("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
        starship::modules::package::format_version(a0, v15, a2, a2[6], a2[7]);
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v9);
        core::ptr::drop_in_place<regex::regex::string::Regex>(&v8);
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v0);
    return a0;
}
