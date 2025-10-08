long long starship::configs::hg_state::_::<impl serde_core::ser::Serialize for starship::configs::hg_state::HgStateConfig>::serialize(void* a0, unsigned long long a1)
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
    (char)v0.serialize_field(&v9, "mergeshowUntrackedFilesrenamesstatusgix::status::tree_index::producergix::status::index_worktree::producerGIT_DIR", 5, a1);
    if (*((long long *)&v0) == 9223372036854775813)
    {
        (char)v0.serialize_field(&v9, "rebaserevertcherry_pickbisectamam_or_rebasestruct GitStateConfigGitStatusConfigup_to_dateuse_git_executablestruct GitStatusConfigGleamConfigstruct GleamConfignot_capable_stylestruct GoConfigGradleConfigstruct GradleConfigGuixShellConfigstruct GuixShellConf", 6, a1 + 16);
        if (*((long long *)&v0) == 9223372036854775813)
        {
            (char)v0.serialize_field(&v9, "updateshelvegraftstruct HgStateConfigHostnameConfigtrim_ataliasesstruct HostnameConfigJavaConfigstruct JavaConfigJobsConfigstruct JobsConfigJuliaConfigstruct JuliaConfigKotlinConfigkotlin_binarystruct KotlinConfigcontext_aliasesuser_aliasesstruct Kubernete", 6, a1 + 32);
            if (*((long long *)&v0) == 9223372036854775813)
            {
                (char)v0.serialize_field(&v9, "bisectamam_or_rebasestruct GitStateConfigGitStatusConfigup_to_dateuse_git_executablestruct GitStatusConfigGleamConfigstruct GleamConfignot_capable_stylestruct GoConfigGradleConfigstruct GradleConfigGuixShellConfigstruct GuixShellConfigHaskellConfigstruct H", 6, a1 + 48);
                if (*((long long *)&v0) == 9223372036854775813)
                {
                    (char)v0.serialize_field(&v9, "shelvegraftstruct HgStateConfigHostnameConfigtrim_ataliasesstruct HostnameConfigJavaConfigstruct JavaConfigJobsConfigstruct JobsConfigJuliaConfigstruct JuliaConfigKotlinConfigkotlin_binarystruct KotlinConfigcontext_aliasesuser_aliasesstruct KubernetesConfi", 6, a1 + 64);
                    if (*((long long *)&v0) == 9223372036854775813)
                    {
                        (char)v0.serialize_field(&v9, "graftstruct HgStateConfigHostnameConfigtrim_ataliasesstruct HostnameConfigJavaConfigstruct JavaConfigJobsConfigstruct JobsConfigJuliaConfigstruct JuliaConfigKotlinConfigkotlin_binarystruct KotlinConfigcontext_aliasesuser_aliasesstruct KubernetesConfigKuber", 5, a1 + 80);
                        if (*((long long *)&v0) == 9223372036854775813)
                        {
                            (char)v0.serialize_field(&v9, "transplantjournalhistedit-stateSSH_CONNECTIONError in module `hostname`:\nsrc/modules/hostname.rs", 10, a1 + 96);
                            v21 = *((long long *)&v0);
                            if (*((long long *)&v0) == 9223372036854775813)
                            {
                                (char)v0.serialize_field(&v9, "histedit", 8, a1 + 112);
                                v21 = *((long long *)&v0);
                                if (*((long long *)&v0) == 9223372036854775813)
                                {
                                    (char)v0.serialize_field(&v9, "styleprofileCould not find Subscriptions in azureProfile.jsonError in module `azure`:\nsrc/modules/azure.rs", 5, a1 + 128);
                                    v21 = *((long long *)&v0);
                                    if (*((long long *)&v0) == 9223372036854775813)
                                    {
                                        (char)v0.serialize_field(&v9, "formatright_formatGiven module '' not found in config fileGiven config entry '' is not a moduleGiven config key '' must exist in config file' must be in 'boolean' format", 6, a1 + 144);
                                        v21 = *((long long *)&v0);
                                        if (*((long long *)&v0) == 9223372036854775813)
                                        {
                                            (char)v0.serialize_field(&v9, "disabled", 8, a1 + 160);
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
                            *((int128_t *)&a0[16]) = *((int128_t *)&v1);
                            *((unsigned long long *)&a0[8]) = v21;
                            *((unsigned long long *)a0) = 9223372036854775814;
                            return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
                        }
                    }
                }
            }
        }
    }
    *((long long *)&a0[24]) = (long long)v2;
    *((int128_t *)&a0[8]) = (int128_t)v0;
    *((unsigned long long *)a0) = 9223372036854775814;
    return (unsigned long long)core::ptr::drop_in_place<toml::value::ValueSerializeMap>(&v9);
}
