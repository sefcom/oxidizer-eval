long long starship::modules::package::get_node_package_version(void* a0, unsigned long long a1[25], struct_1 *a2)
{
    char v0;  // [bp-0xa8]
    int v1;  // [bp-0x98], Other Possible Types: char
    unsigned long long v2;  // [bp-0x88]
    unsigned long long v3;  // [bp-0x80]
    void* v4;  // [bp-0x78], Other Possible Types: unsigned long long
    int v5;  // [bp-0x68]
    unsigned long long v6;  // [bp-0x60]
    unsigned long long v7;  // [bp-0x58]
    char v8;  // [bp-0x48]
    int v9;  // [bp-0x47]
    int v10;  // [bp-0x38]
    char v12[2];  // rax
    struct_0 *v13;  // rax

    v0.read_file_from_pwd(a1, "package.json.node-version.nvmrc!bunfig.toml!bun.lock!bun.lockbnode_modulesmlmlirereidune-projectjbuildjbuild-ignore.merlin_opamvia [$symbol($version )(\\($switch_indicator$switch_name\\) )]($style)*", 12);
    if ((char)(((0 ^ *((long long *)&v0)) & (0 ^ -(*((long long *)&v0)))) >> 63))
    {
        *((unsigned long long *)a0) = 0x8000000000000000;
        return a0;
    }
    v7 = *((long long *)&v1);
    *((int128_t *)&v5) = *((int128_t *)&v0);
    v2 = v6;
    v3 = v7;
    v4 = 0;
    serde_json::de::from_trait(&v0, &v2, (char)a2);
    if (v0 == 6)
    {
        core::ptr::drop_in_place<core::result::Result<serde_json::value::Value,serde_json::error::Error>>(&v0);
        *((unsigned long long *)a0) = 0x8000000000000000;
    }
    else
    {
        v10 = v1;
        *((int128_t *)&v9) = *((int128_t *)&(&v0)[1]);
        v8 = v0;
        if (!a2->field_40)
        {
            v12 = v8.get("privatev0.0.0-development.jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 7);
            if (!v12 || v12[0] != 1 || v12[1] != 1)
                goto LABEL_baedcf;
LABEL_baee2e:
            *((unsigned long long *)a0) = 0x8000000000000000;
            goto LABEL_baee31;
        }
        else
        {
LABEL_baedcf:
            v13 = v8.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
            if (!v13 || v13->field_0 != 3 || (char)v13->field_10.equal(v13->field_18, "nullbitssdayHeadsecsFAILv121armibhkscoptkitslepcmongrunr-nan'= {", 4))
                goto LABEL_baee2e;
            starship::modules::package::format_version(&v0, v13->field_10, v13->field_18, a2->field_30, a2->field_38);
            if (*((long long *)&v0) == 0x8000000000000000)
                goto LABEL_baee2e;
            v4 = *((long long *)&v1);
            memcpy(&v2, &v0, 16);
            if ((char)v3.equal(v4, "v0.0.0-development.jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 18) || (char)core::slice::<impl [T]>::starts_with(v3, v4, "v0.0.0-semanticprivatev0.0.0-development.jsoncjsr.jsoncpoetryattr:file:setup.cfggradle.properties(?m)^\\s*version\\s*=\\s*(?P<version>.*)build.gradle(?m)^version( |\\s*=\\s*)[\'\"](?P<version>[^\'\"]+)[\'\"]$(?m)version: \"(?P<version>[^\"]+)\"Error parsing pom.xml`:\n", 15))
            {
                v0.to_vec("semanticAddMatch", 8);
                *((long long *)&a0[16]) = *((long long *)&v1);
                *((int128_t *)a0) = *((int128_t *)&v0);
                core::ptr::drop_in_place<alloc::string::String>(&v2);
LABEL_baee31:
                core::ptr::drop_in_place<serde_json::value::Value>(&v8);
            }
            else
            {
                *((unsigned long long *)&a0[16]) = v4;
                *((int128_t *)a0) = *((int128_t *)&v2);
                core::ptr::drop_in_place<serde_json::value::Value>(&v8);
            }
        }
    }
    core::ptr::drop_in_place<alloc::string::String>(&(char)v5);
    return a0;
}
