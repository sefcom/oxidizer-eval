long long starship::configs::shell::_::<impl serde_core::ser::Serialize for starship::configs::shell::ShellConfig>::serialize(void* a0, struct_0 *a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0x100]
    int v2;  // [bp-0xf8]
    unsigned long long v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    char v11;  // [bp-0x90]
    unsigned long long v12;  // [bp-0x88]
    int v13;  // [bp-0x80]
    int v14;  // [bp-0x70]
    int v15;  // [bp-0x60]
    char v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x40]
    int v18;  // [bp-0x38], Other Possible Types: char
    unsigned long long v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    int v22;  // xmm0

    (char)v0.serialize_struct();
    memcpy(&v18, &v1, 16);
    v19 = v3;
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        *((unsigned long long *)&a0[24]) = v19;
        a0[8] = v18;
        *((unsigned long long *)a0) = 9223372036854775814;
        return v19;
    }
    v17 = v8;
    memcpy(&v16, &v7, 16);
    v15 = v6;
    v14 = v5;
    v13 = v4;
    memcpy(&v10, &v18, 16);
    v12 = v19;
    v9 = *((long long *)&v0);
    (char)v0.serialize_field(&v9, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, a1);
    v21 = *((long long *)&v0);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v9, "bash_indicatorfish_indicatorzsh_indicatorpowershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 14, &a1->padding_0[16]);
        v21 = *((long long *)&v0);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v9, "fish_indicatorzsh_indicatorpowershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 14, &a1->padding_0[32]);
            v21 = *((long long *)&v0);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v9, "zsh_indicatorpowershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 13, &a1->padding_0[48]);
                v21 = *((long long *)&v0);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v9, "powershell_indicatorpwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 20, &a1->padding_0[64]);
                    v21 = *((long long *)&v0);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        if (a1->field_d0)
                            (char)v0.serialize_field(&v9, "pwsh_indicatorion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 14, &a1->field_d0);
                        else
                            (char)v0.end();
                        v21 = *((long long *)&v0);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v9, "ion_indicatortcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 13, &a1->padding_0[80]);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v9, "elvish_indicator<no description>", 16, &a1->padding_0[96]);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    (char)v0.serialize_field(&v9, "tcsh_indicatorxonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 14, &a1->padding_0[112]);
                                    v21 = *((long long *)&v0);
                                    if (*((long long *)&v0) == 9223372036854775813)
                                    {
                                        (char)v0.serialize_field(&v9, "nu_indicatorstruct ShellConfigShLvlConfigrepeatrepeat_offsetstruct ShLvlConfigSingularityConfigstruct SingularityConfigSolidityConfigstruct SolidityConfigSpackConfigstruct SpackConfig$schemacontinuation_promptscan_timeoutcommand_timeoutadd_newlinefollow_sy", 12, &a1->padding_0[128]);
                                        v21 = *((long long *)&v0);
                                        if (*((long long *)&v0) == 9223372036854775813)
                                        {
                                            (char)v0.serialize_field(&v9, "xonsh_indicatorcmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 15, &a1->padding_0[144]);
                                            v21 = *((long long *)&v0);
                                            if (*((long long *)&v0) == 9223372036854775813)
                                            {
                                                (char)v0.serialize_field(&v9, "cmd_indicatorunknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 13, &a1->padding_0[160]);
                                                v21 = *((long long *)&v0);
                                                if (*((long long *)&v0) == 9223372036854775813)
                                                {
                                                    (char)v0.serialize_field(&v9, "unknown_indicatorError in module `shlvl`:\nsrc/modules/shlvl.rs", 17, &a1->padding_0[176]);
                                                    v21 = *((long long *)&v0);
                                                    if (*((long long *)&v0) == 9223372036854775813)
                                                    {
                                                        (char)v0.serialize_field(&v9, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, &a1->padding_0[192]);
                                                        v21 = *((long long *)&v0);
                                                        if (*((long long *)&v0) == 9223372036854775813)
                                                        {
                                                            (char)v0.serialize_field(&v9, "disabled", 8, &a1[1].padding_0[8]);
                                                            v21 = *((long long *)&v0);
                                                            if (*((long long *)&v0) == 9223372036854775813)
                                                            {
                                                                v8 = v17;
                                                                memcpy(&v7, &v16, 16);
                                                                v6 = v15;
                                                                v22 = *((int128_t *)&v9);
                                                                memcpy(&v5, &v14, 16);
                                                                v4 = v13;
                                                                *((int128_t *)&v2) = *((int128_t *)&v11);
                                                                v0 = v22;
                                                                return a0.end(&(char)v0);
                                                            }
                                                        }
                                                    }
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }
                    }
                }
            }
        }
    }
    *((int128_t *)&a0[16]) = *((int128_t *)&v1);
    *((unsigned long long *)&a0[8]) = v21;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
}
