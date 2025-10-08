long long starship::configs::status::_::<impl serde_core::ser::Serialize for starship::configs::status::StatusConfig>::serialize(void* a0, unsigned long long a1[5])
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
    unsigned long long v9;  // [bp-0xb0]
    char v10;  // [bp-0xa8]
    char v11;  // [bp-0xa0]
    unsigned long long v12;  // [bp-0x98]
    int v13;  // [bp-0x90]
    int v14;  // [bp-0x80]
    int v15;  // [bp-0x70]
    char v16;  // [bp-0x60]
    unsigned long long v17;  // [bp-0x50]
    int v18;  // [bp-0x48], Other Possible Types: char
    unsigned long long v19;  // [bp-0x38]
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
    (char)v0.serialize_field(&v9, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, &a1[1 + 1]);
    v21 = *((long long *)&v0);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v9, "symbolstyleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 6, &a1[1 + 3]);
        v21 = *((long long *)&v0);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v9, "success_symbolerror_symbolvicmd_symbolvimcmd_symbolvimcmd_visual_symbolvimcmd_replace_symbolvimcmd_replace_one_symbolstruct CharacterConfigCMakeConfigstruct CMakeConfigCmdDurationConfigshow_millisecondsshow_notificationsmin_time_to_notifynotification_timeo", 14, a1 + 2);
            v21 = *((long long *)&v0);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v9, "not_executable_symbolsigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTe", 21, &a1[2 + 2]);
                v21 = *((long long *)&v0);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v9, "not_found_symbolMatchRuleInvalidfloating point `", 16, &a1[2 + 4]);
                    v21 = *((long long *)&v0);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        (char)v0.serialize_field(&v9, "sigint_symbolsignal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct T", 13, &a1[3 + 1]);
                        v21 = *((long long *)&v0);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v9, "signal_symbolsuccess_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfi", 13, &a1[3 + 3]);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v9, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, a1 + 4);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    if (a1[0])
                                        (char)v0.serialize_field(&v9, "success_stylefailure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigti", 13, a1);
                                    else
                                        (char)v0.end();
                                    v21 = *((long long *)&v0);
                                    if (*((long long *)&v0) == 9223372036854775813)
                                    {
                                        if (a1[2])
                                            (char)v0.serialize_field(&v9, "failure_stylemap_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_", 13, &a1[2]);
                                        else
                                            (char)v0.end();
                                        v21 = *((long long *)&v0);
                                        if (*((long long *)&v0) == 9223372036854775813)
                                        {
                                            (char)v0.serialize_field(&v9, "map_symbolrecognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_time_offsetti", 10, &a1[5 + 1]);
                                            v21 = *((long long *)&v0);
                                            if (*((long long *)&v0) == 9223372036854775813)
                                            {
                                                (char)v0.serialize_field(&v9, "recognize_signal_codepipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_time_offsettime_rangest", 21, (char *)&a1[5 + 1] + 1);
                                                v21 = *((long long *)&v0);
                                                if (*((long long *)&v0) == 9223372036854775813)
                                                {
                                                    (char)v0.serialize_field(&v9, "pipestatuspipestatus variable is only available in pipestatus_format", 10, (char *)&a1[5 + 1] + 2);
                                                    v21 = *((long long *)&v0);
                                                    if (*((long long *)&v0) == 9223372036854775813)
                                                    {
                                                        (char)v0.serialize_field(&v9, "pipestatus_separatorpipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_time_offsettime_rangestruct TimeConfigTypstC", 20, &a1[4 + 2]);
                                                        v21 = *((long long *)&v0);
                                                        if (*((long long *)&v0) == 9223372036854775813)
                                                        {
                                                            (char)v0.serialize_field(&v9, "pipestatus_formatpipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_time_offsettime_rangestruct TimeConfigTypstConfigstruct TypstCon", 17, &a1[4 + 4]);
                                                            v21 = *((long long *)&v0);
                                                            if (*((long long *)&v0) == 9223372036854775813)
                                                            {
                                                                if (a1[4])
                                                                    (char)v0.serialize_field(&v9, "pipestatus_segment_formatstruct StatusConfigSudoConfigallow_windowsstruct SudoConfigSwiftConfigstruct SwiftConfigTerraformConfigstruct TerraformConfigTimeConfigtime_formatutc_time_offsettime_rangestruct TimeConfigTypstConfigstruct TypstConfigUsernameConfig", 25, &a1[4]);
                                                                else
                                                                    (char)v0.end();
                                                                v21 = *((long long *)&v0);
                                                                if (*((long long *)&v0) == 9223372036854775813)
                                                                {
                                                                    (char)v0.serialize_field(&v9, "disabled", 8, (char *)&a1[5 + 1] + 3);
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
        }
    }
    *((int128_t *)&a0[16]) = *((int128_t *)&v1);
    *((unsigned long long *)&a0[8]) = v21;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
}
