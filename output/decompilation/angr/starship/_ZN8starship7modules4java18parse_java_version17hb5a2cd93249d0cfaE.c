long long starship::modules::java::parse_java_version(void* a0, unsigned long long a1, unsigned long long a2)
{
    unsigned long long v0;  // [bp-0xd0]
    char v1;  // [bp-0xc8]
    unsigned long long v2;  // [bp-0xb8]
    char v3;  // [bp-0xb0], Other Possible Types: unsigned long long
    char v4;  // [bp-0xa8]
    char v5;  // [bp-0xa0], Other Possible Types: unsigned long
    unsigned long long v6;  // [bp-0x98]
    int v7;  // [bp-0x90]
    int v8;  // [bp-0x80]
    unsigned long long v9;  // [bp-0x70]
    char v10;  // [bp-0x68]
    char v11;  // [bp-0x58]
    int v12;  // [bp-0x48]
    int v13;  // [bp-0x38]
    unsigned long long v14;  // [bp-0x28]

    v3.new("(?:JRE.*\\(|OpenJ9 )(?P<version>\\d+(?:\\.\\d+){0,2}).*, built onthreshold in [jobs] (symbol_threshold in [jobs] (number_threshold in [jobs] (`threshold` in [jobs] is deprecated . Please remove it and use `symbol_threshold` and `number_threshold`.Error in module `jobs`:\nsrc/modules/jobs.rs", 61);
    if (!v3)
    {
        core::ptr::drop_in_place<core::result::Result<regex::regex::string::Regex,regex::error::Error>>(&v3);
        *((unsigned long long *)a0) = 0x8000000000000000;
        return 0x8000000000000000;
    }
    v2 = v6;
    memcpy(&v1, &v4, 16);
    v0 = v3;
    v3.captures_at(&v0, a1, a2);
    if ((int)v3 == 2)
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v14 = v9;
        v13 = v8;
        v12 = v7;
        memcpy(&v11, &v5, 16);
        memcpy(&v10, &v3, 16);
        v3.to_vec(v10.index("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7), a2);
        *((unsigned long *)&a0[16]) = v5;
        *((int128_t *)a0) = *((int128_t *)&v3);
        core::ptr::drop_in_place<regex::regex::string::Captures>(&v10);
    }
    return core::ptr::drop_in_place<regex::regex::string::Regex>(&v0);
}
