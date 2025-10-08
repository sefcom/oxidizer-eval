long long starship::configs::directory::_::<impl serde_core::ser::Serialize for starship::configs::directory::DirectoryConfig>::serialize(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x108], Other Possible Types: char
    char v1;  // [bp-0x100]
    int v2;  // [bp-0xf8]
    unsigned long v3;  // [bp-0xf0]
    int v4;  // [bp-0xe8]
    int v5;  // [bp-0xd8]
    int v6;  // [bp-0xc8]
    char v7;  // [bp-0xb8]
    unsigned long long v8;  // [bp-0xa8]
    unsigned long long v9;  // [bp-0xa0]
    char v10;  // [bp-0x98]
    char v11;  // [bp-0x90]
    unsigned long v12;  // [bp-0x88]
    int v13;  // [bp-0x80]
    int v14;  // [bp-0x70]
    int v15;  // [bp-0x60]
    char v16;  // [bp-0x50]
    unsigned long long v17;  // [bp-0x40]
    int v18;  // [bp-0x38], Other Possible Types: char
    unsigned long v19;  // [bp-0x28]
    unsigned long long v21;  // rax
    int v22;  // xmm0

    (char)v0.serialize_struct();
    memcpy(&v18, &v1, 16);
    v19 = v3;
    if (*((long long *)&v0) == 0x8000000000000000)
    {
        *((unsigned long *)&a0[24]) = v19;
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
    (char)v0.serialize_field(&v9, "truncation_lengthignore_basedetect_env_varsstruct CondaConfigContainerConfigstruct ContainerConfigCrystalConfigstruct CrystalConfigCustomConfigcommandrequire_repodescriptionfilesextensionsdirectoriesuse_stdinignore_timeoutstruct CustomConfigDamlConfigstruc", 17, a1 + 184);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v9, "truncate_to_repoObject is remoteReadFileContents", 16, a1 + 232);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v9, "substitutionsfish_style_pwd_dir_lengthtruncation_symbolhome_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotn", 13, a1);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v9, "fish_style_pwd_dir_lengthtruncation_symbolhome_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotnetConfigheuri", 25, a1 + 192);
                v21 = *((long long *)&v0);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v9, "use_logical_path returned error SpawnChildExitedInvalidSignature", 16, a1 + 233);
                    v21 = *((long long *)&v0);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        (char)v0.serialize_field(&v9, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, a1 + 72);
                        v21 = *((long long *)&v0);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v9, "repo_root_formatGitMetricsConfigRustupNotWorkingInvalidErrorNameparent_directory", 16, a1 + 88);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v9, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, a1 + 104);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    (char)v0.serialize_field(&v9, "repo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs", 15, a1 + 200);
                                    v21 = *((long long *)&v0);
                                    if (*((long long *)&v0) == 9223372036854775813)
                                    {
                                        (char)v0.serialize_field(&v9, "before_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs", 22, a1 + 216);
                                        v21 = *((long long *)&v0);
                                        if (*((long long *)&v0) == 9223372036854775813)
                                        {
                                            (char)v0.serialize_field(&v9, "disabled", 8, a1 + 234);
                                            v21 = *((long long *)&v0);
                                            if (*((long long *)&v0) == 9223372036854775813)
                                            {
                                                (char)v0.serialize_field(&v9, "read_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs", 9, a1 + 120);
                                                v21 = *((long long *)&v0);
                                                if (*((long long *)&v0) == 9223372036854775813)
                                                {
                                                    (char)v0.serialize_field(&v9, "read_only_stylerepo_root_stylebefore_repo_root_stylerepo_rootread_onlyFailed to determine read only status of directory '': --jsonsrc/modules/direnv.rs", 15, a1 + 136);
                                                    v21 = *((long long *)&v0);
                                                    if (*((long long *)&v0) == 9223372036854775813)
                                                    {
                                                        (char)v0.serialize_field(&v9, "truncation_symbolhome_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotnetConfigheuristicstruct DotnetConfigEl", 17, a1 + 152);
                                                        v21 = *((long long *)&v0);
                                                        if (*((long long *)&v0) == 9223372036854775813)
                                                        {
                                                            (char)v0.serialize_field(&v9, "home_symboluse_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotnetConfigheuristicstruct DotnetConfigElixirConfigstruct ", 11, a1 + 168);
                                                            v21 = *((long long *)&v0);
                                                            if (*((long long *)&v0) == 9223372036854775813)
                                                            {
                                                                (char)v0.serialize_field(&v9, "use_os_path_sepstruct DirectoryConfigDirenvConfigallowed_msgnot_allowed_msgdenied_msgloaded_msgunloaded_msgstruct DirenvConfigDockerContextConfigonly_with_filesstruct DockerContextConfigDotnetConfigheuristicstruct DotnetConfigElixirConfigstruct ElixirConfi", 15, a1 + 235);
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
                *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                *((unsigned long long *)&a0[8]) = v21;
                *((unsigned long long *)a0) = 9223372036854775814;
                return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
            }
        }
    }
    *((long long *)&a0[24]) = (long long)v2;
    *((int128_t *)&a0[8]) = (int128_t)v0;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
}
