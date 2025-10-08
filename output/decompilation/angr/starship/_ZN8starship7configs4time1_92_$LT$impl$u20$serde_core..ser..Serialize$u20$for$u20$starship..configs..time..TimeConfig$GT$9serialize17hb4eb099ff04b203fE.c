long long starship::configs::time::_::<impl serde_core::ser::Serialize for starship::configs::time::TimeConfig>::serialize(void* a0, unsigned long long *a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    char v1;  // [bp-0x110]
    int v2;  // [bp-0x108]
    unsigned long long v3;  // [bp-0x100]
    int v4;  // [bp-0xf8]
    int v5;  // [bp-0xe8]
    int v6;  // [bp-0xd8]
    char v7;  // [bp-0xc8]
    unsigned long long v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8], Other Possible Types: char
    unsigned long long v10;  // [bp-0x98]
    unsigned long long v11;  // [bp-0x88]
    char v12;  // [bp-0x80]
    char v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    int v15;  // [bp-0x68]
    int v16;  // [bp-0x58]
    int v17;  // [bp-0x48]
    char v18;  // [bp-0x38]
    unsigned long long v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    int v22;  // xmm0

    (char)v0.serialize_struct();
    memcpy(&v9, &v1, 16);
    v10 = v3;
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[24]) = v10;
        a0[8] = v9;
        *((unsigned long long *)a0) = 9223372036854775814;
        return v10;
    }
    v19 = v8;
    memcpy(&v18, &v7, 16);
    v17 = v6;
    v16 = v5;
    v15 = v4;
    memcpy(&v12, &v9, 16);
    v14 = v10;
    v11 = *((long long *)&v0);
    (char)v0.serialize_field(&v11, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, a1 + 2);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v11, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, a1 + 4);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v11, "use_12hrNameLostbody_lenunixexecDirEntry, group=on line buginesekatakana", 8, a1 + 10);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                if (*(a1))
                {
                    (char)v0.serialize_field(&v11, "time_formatutc_time_offsettime_rangestruct TimeConfigTypstConfigstruct TypstConfigUsernameConfigstyle_rootstyle_usershow_alwaysstruct UsernameConfigVConfigstruct VConfigVagrantConfigstruct VagrantConfigVcshConfigstruct VcshConfigXMakeConfigstruct XMakeConf", 11, a1);
                    if (*((long long *)&v0) == 9223372036854775813)
                        goto LABEL_c3dfdc;
                }
                else
                {
                    (char)v0.end();
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
LABEL_c3dfdc:
                        (char)v0.serialize_field(&v11, "disabled", 8, (char *)&a1[10] + 1);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v11, "utc_time_offsettime_rangestruct TimeConfigTypstConfigstruct TypstConfigUsernameConfigstyle_rootstyle_usershow_alwaysstruct UsernameConfigVConfigstruct VConfigVagrantConfigstruct VagrantConfigVcshConfigstruct VcshConfigXMakeConfigstruct XMakeConfigZigConfig", 15, a1 + 6);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v11, "time_rangestruct TimeConfigTypstConfigstruct TypstConfigUsernameConfigstyle_rootstyle_usershow_alwaysstruct UsernameConfigVConfigstruct VConfigVagrantConfigstruct VagrantConfigVcshConfigstruct VcshConfigXMakeConfigstruct XMakeConfigZigConfigstruct FullConf", 10, a1 + 8);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    v8 = v19;
                                    memcpy(&v7, &v18, 16);
                                    v6 = v17;
                                    v22 = *((int128_t *)&v11);
                                    memcpy(&v5, &v16, 16);
                                    v4 = v15;
                                    *((int128_t *)&v2) = *((int128_t *)&v13);
                                    v0 = v22;
                                    return a0.end(&(char)v0);
                                }
                            }
                            *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                            *((unsigned long long *)&a0[8]) = v21;
                            *((unsigned long long *)a0) = 9223372036854775814;
                            return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v11);
                        }
                    }
                }
            }
        }
    }
    *((long long *)&a0[24]) = (long long)v2;
    *((int128_t *)&a0[8]) = (int128_t)v0;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v11);
}
