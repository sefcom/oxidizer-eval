long long starship::modules::package::get_cargo_version(unsigned long long *a0, unsigned long long a1[25], unsigned long long a2[8])
{
    unsigned long v1;  // [bp-0x1b8]
    unsigned long long v2;  // [bp-0x1b0]
    int v3;  // [bp-0x1a8]
    unsigned long long v4;  // [bp-0x1a0]
    unsigned long v5;  // [bp-0x198]
    unsigned long v6;  // [bp-0x190]
    unsigned long long v7;  // [bp-0x188]
    char v10;  // [bp-0x170], Other Possible Types: unsigned long long
    char v11;  // [bp-0x168], Other Possible Types: unsigned long long
    int v12;  // [bp-0x160]
    char v13;  // [bp-0x150]
    int v14;  // [bp-0x140]
    int v15;  // [bp-0x130]
    unsigned long long v16;  // [bp-0x120]
    int v17;  // [bp-0x118]
    int v18;  // [bp-0x108], Other Possible Types: char
    int v19;  // [bp-0xf8]
    int v20;  // [bp-0xe8]
    unsigned long long v21;  // [bp-0xd8]
    unsigned long long v22;  // [bp-0xc8]
    int v24;  // [bp-0xc0]
    int v25;  // [bp-0xb0]
    int v26;  // [bp-0xa0]
    int v27;  // [bp-0x90]
    unsigned long long v28;  // [bp-0x80]
    unsigned long long v35;  // rax
    unsigned long long v36[4];  // rax
    struct_0 *v37;  // rax
    unsigned long long v38;  // rcx
    unsigned long long v39;  // rax
    unsigned long long v40;  // rax
    unsigned long long v43;  // rsi
    unsigned long long v51;  // rdx
    unsigned long long v52;  // rsi
    unsigned long long v53;  // rax
    unsigned long long v54;  // rax

    v10.read_file_from_pwd(a1, "Cargo.toml", 10);
    if ((char)(((0 ^ v10) & (0 ^ -(v10))) >> 63))
    {
        *(a0) = 0x8000000000000000;
        return a0;
    }
    *((int128_t *)&v3) = *((int128_t *)&v11);
    v2 = v10;
    toml::de::from_str(&v10, (long long)v3, v4);
    if ((int)v10 == 2)
    {
        v17 = v12;
        memcpy(&v18, &v13, 16);
        v19 = v14;
        v20 = v15;
        v21 = v16;
        if (v11 != 0x8000000000000000)
        {
            v28 = v21;
            v27 = v20;
            v26 = v19;
            v25 = v18;
            v24 = v17;
            v22 = v11;
            v35 = v22.get("packagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsoss", 7, v21);
            if (v35)
            {
                v36 = v35.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
                if (v36)
                {
                    if (v36[0] == 0x8000000000000000)
                        goto LABEL_bb0d11;
                    v37 = v36.get("workspacegalaxy.ymlError in module `perl`:\nsrc/modules/perl.rs", 9);
                    if (v37)
                    {
                        v38 = 9223372036854775811;
                        if (v37->field_0 == 9223372036854775811 && v37->field_8)
                        {
                            v39 = v22.get("workspacegalaxy.ymlError in module `perl`:\nsrc/modules/perl.rs", 9, 9223372036854775811);
                            if (v39)
                            {
                                v40 = v39.get("packagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsoss", 7);
                                if (v40)
                                {
                                    v36 = v40.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
                                    goto LABEL_bb0cff;
                                }
                            }
                            else
                            {
                                v5 = a1[23];
                                v6 = a1[24];
                                v7 = 1;
                                v43 = 1;
                                v7 = 0;
                                if (!v5.advance_by(v43) && v5)
                                    v1 = v5.parent(v6);
                            }
                        }
                    }
                }
            }
            v53 = v22.get("workspacegalaxy.ymlError in module `perl`:\nsrc/modules/perl.rs", 9, v38);
            if (v53)
            {
                v54 = v53.get("packagebuncmakecoboldotnetelixirerlangfennelgolanghaskelljulianodejsocamlopapulumipurescriptquartorlangtypstvlangvagrantxmakebufguix_shellnix_shellcondamesonspackmemory_usageawsgcloudopenstackazuredirenvcrystalcmd_durationline_breakbatterycontainernetnsoss", 7);
                if (v54)
                {
                    v36 = v54.get("versionat [$time]($style) localtyptemplate.typt bold #0093A7[$user]($style) in vv.modvpkg.json.vpkg-lock.jsonV Vagrantfilevcsh [$symbol$repo]($style) xmake.luazigEmpty table keys are not supportedThis command can only index into TOML tables# Warning: This ", 7);
LABEL_bb0cff:
                    if (v36 && v36[0] == 0x8000000000000000)
                    {
LABEL_bb0d11:
                        v52 = v36[2];
                        v51 = v36[3];
                        starship::modules::package::format_version(a0, v52, v51, a2[6], a2[7]);
                        core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v22);
                        core::ptr::drop_in_place<alloc::string::String>(&v2);
                        return a0;
                    }
                }
            }
            *(a0) = 0x8000000000000000;
            core::ptr::drop_in_place<toml::map::Map<alloc::string::String,toml::value::Value>>(&v22);
            core::ptr::drop_in_place<alloc::string::String>(&v2);
            return a0;
        }
    }
    else
    {
        core::ptr::drop_in_place<core::result::Result<toml::map::Map<alloc::string::String,toml::value::Value>,toml::de::error::Error>>(&v10);
    }
    *(a0) = 0x8000000000000000;
    core::ptr::drop_in_place<alloc::string::String>(&v2);
    return a0;
}
