long long starship::configs::custom::_::<impl serde_core::ser::Serialize for starship::configs::custom::CustomConfig>::serialize(void* a0, struct_0 *a1)
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
    (char)v0.serialize_field(&v9, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, &a1->padding_0[96]);
    v21 = *((long long *)&v0);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v9, "symbolstyleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 6, &a1->padding_0[112]);
        v21 = *((long long *)&v0);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v9, "commandrequire_repodescriptionfilesextensionsdirectoriesuse_stdinignore_timeoutstruct CustomConfigDamlConfigstruct DamlConfigDartConfigstruct DartConfigDenoConfigstruct DenoConfigDirectoryConfigsubstitutionsfish_style_pwd_dir_lengthtruncation_symbolhome_sy", 7, &a1->padding_0[128]);
            v21 = *((long long *)&v0);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v9, &a1->padding_0[176]);
                v21 = *((long long *)&v0);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v9, "require_repodescriptionfilesextensionsdirectoriesuse_stdinignore_timeoutstruct CustomConfigDamlConfigstruct DamlConfigDartConfigstruct DartConfigDenoConfigstruct DenoConfigDirectoryConfigsubstitutionsfish_style_pwd_dir_lengthtruncation_symbolhome_symboluse", 12, &a1->padding_c8[8]);
                    v21 = *((long long *)&v0);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        (char)v0.serialize_field(&v9, "shellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 5, a1);
                        v21 = *((long long *)&v0);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v9, "descriptionfilesextensionsdirectoriesuse_stdinignore_timeoutstruct CustomConfigDamlConfigstruct DamlConfigDartConfigstruct DartConfigDenoConfigstruct DenoConfigDirectoryConfigsubstitutionsfish_style_pwd_dir_lengthtruncation_symbolhome_symboluse_os_path_sep", 11, &a1->padding_0[144]);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v9, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, &a1->padding_0[160]);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    (char)v0.serialize_field(&v9, "disabled", 8, &a1->padding_c8[9]);
                                    v21 = *((long long *)&v0);
                                    if (*((long long *)&v0) == 9223372036854775813)
                                    {
                                        (char)v0.serialize_field(&v9, "detect_filesdetect_foldersBunConfigstruct CcConfigCharacterConfigsuccess_symbolerror_symbolvicmd_symbolvimcmd_symbolvimcmd_visual_symbolvimcmd_replace_symbolvimcmd_replace_one_symbolstruct CharacterConfigCMakeConfigstruct CMakeConfigCmdDurationConfigshow_m", 12, &a1->padding_0[24]);
                                        v21 = *((long long *)&v0);
                                        if (*((long long *)&v0) == 9223372036854775813)
                                        {
                                            (char)v0.serialize_field(&v9, "detect_extensionsdetect_filesdetect_foldersBunConfigstruct CcConfigCharacterConfigsuccess_symbolerror_symbolvicmd_symbolvimcmd_symbolvimcmd_visual_symbolvimcmd_replace_symbolvimcmd_replace_one_symbolstruct CharacterConfigCMakeConfigstruct CMakeConfigCmdDur", 17, &a1->padding_0[48]);
                                            v21 = *((long long *)&v0);
                                            if (*((long long *)&v0) == 9223372036854775813)
                                            {
                                                (char)v0.serialize_field(&v9, "detect_foldersBunConfigstruct CcConfigCharacterConfigsuccess_symbolerror_symbolvicmd_symbolvimcmd_symbolvimcmd_visual_symbolvimcmd_replace_symbolvimcmd_replace_one_symbolstruct CharacterConfigCMakeConfigstruct CMakeConfigCmdDurationConfigshow_millisecondss", 14, &a1->padding_0[72]);
                                                v21 = *((long long *)&v0);
                                                if (*((long long *)&v0) == 9223372036854775813)
                                                {
                                                    if (a1->field_c0)
                                                        (char)v0.serialize_field(&v9, "osshellcharacterformatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 2, &a1->field_c0);
                                                    else
                                                        (char)v0.end();
                                                    v21 = *((long long *)&v0);
                                                    if (*((long long *)&v0) == 9223372036854775813)
                                                    {
                                                        if (a1->field_d4 != 2)
                                                            (char)v0.serialize_field(&v9, &a1->field_d4);
                                                        else
                                                            (char)v0.end();
                                                        v21 = *((long long *)&v0);
                                                        if (*((long long *)&v0) == 9223372036854775813)
                                                        {
                                                            (char)v0.serialize_field(&v9, "ignore_timeoutstruct CustomConfigDamlConfigstruct DamlConfigDartConfigstruct DartConfigDenoConfigstruct DenoConfigDirectoryConfigsubstitutionsfish_style_pwd_dir_lengthtruncation_symbolhome_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgn", 14, &a1->padding_c8[10]);
                                                            v21 = *((long long *)&v0);
                                                            if (*((long long *)&v0) == 9223372036854775813)
                                                            {
                                                                (char)v0.serialize_field(&v9, "unsafe_no_escapesymbol_threshold", 16, &a1->padding_c8[11]);
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
    *((int128_t *)&a0[16]) = *((int128_t *)&v1);
    *((unsigned long long *)&a0[8]) = v21;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
}
