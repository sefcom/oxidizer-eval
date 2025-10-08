long long just::function::get(unsigned long long a0, unsigned long long a1)
{
    unsigned long long v0;  // [bp-0x80]
    unsigned long long v1;  // [bp-0x78]
    char *v2;  // [bp-0x70]
    unsigned long long v3;  // [sp-0x68]
    char v4;  // [bp-0x60]
    unsigned long long v5;  // [bp-0x58]
    unsigned long long v6;  // [bp-0x50]
    unsigned long long v7;  // [bp-0x48]
    unsigned long long v8;  // [bp-0x40]
    char *v9;  // [bp-0x38]
    unsigned long long v10;  // [bp-0x30]
    void* v11;  // [bp-0x28]
    unsigned long long v13;  // rax
    unsigned long v14;  // rdx, Other Possible Types: unsigned long long
    unsigned long long v15;  // rax
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rbx

    v13 = "_dirunixbodyHashj".strip_suffix_of(4, a0, a1);
    if (v13)
    {
        v0 = v13;
        v1 = v14;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v15 = &g_82fd20;
        goto LABEL_6687eb;
    }
    else
    {
        v16 = "_dir_native_directory_nativeabsolute_pathappendblake3blake3_filecache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_".strip_suffix_of(11, a0, a1);
        if (v16)
        {
            v0 = v16;
            v1 = v14;
            v2 = &v0;
            v3 = <&T as core::fmt::Display>::fmt;
            v15 = &g_82fd40;
LABEL_6687eb:
            v7 = v15;
            v8 = 2;
            v11 = 0;
            v9 = &v2;
            v10 = 1;
            v4.map_or_else(0, v17, &v7);
        }
        else
        {
            v4.to_vec(a0, a1);
        }
    }
    v18 = 1;
    if (!(char)v5.equal(v6, "absolute_pathappendblake3blake3_filecache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryi", 13))
    {
        if ((char)v5.equal(v6, "appendblake3blake3_filecache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_dir", 6))
        {
            v18 = 4;
        }
        else if ((char)v5.equal(v6, "archread'::']", 4))
        {
            v18 = 0;
        }
        else if (!(char)v5.equal(v6, "blake3blake3_filecache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directory", 6) && !(char)v5.equal(v6, "blake3_filecache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvoca", 11))
        {
            if ((char)v5.equal(v6, "cache_directorycanonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_direct", 15))
            {
                v18 = 0;
            }
            else if (!(char)v5.equal(v6, "canonicalizecapitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_de", 12) && !(char)v5.equal(v6, "capitalizecleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust", 10))
            {
                if ((char)v5.equal(v6, "chooseSelect one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`commandRun an arbitrary command with the working directory, `.env`, overrides, and exports", 6))
                {
                    v18 = 4;
                }
                else if (!(char)v5.equal(v6, "cleanconfig_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executabl", 5))
                {
                    if ((char)v5.equal(v6, "config_directorysource_directory", 16))
                    {
                        v18 = 0;
                    }
                    else if ((char)v5.equal(v6, "config_local_directorydata_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejust", 22))
                    {
                        v18 = 0;
                    }
                    else if ((char)v5.equal(v6, "data_directorydata_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcas", 14))
                    {
                        v18 = 0;
                    }
                    else if ((char)v5.equal(v6, "data_local_directorydatetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcas", 20))
                    {
                        v18 = 0;
                    }
                    else if (!(char)v5.equal(v6, "datetime", 8) && !(char)v5.equal(v6, "datetime_utcencode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fil", 12) && !(char)v5.equal(v6, "encode_uri_componentenvenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_family", 20))
                    {
                        if ((char)v5.equal(v6, "envenv_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependqu", 3))
                        {
                            v18 = 2;
                        }
                        else if (!(char)v5.equal(v6, "env_varenv_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquote", 7))
                        {
                            if ((char)v5.equal(v6, "env_var_or_defaultexecutable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplace", 18))
                            {
                                v18 = 4;
                            }
                            else if (!(char)v5.equal(v6, "error: Justfile contains no recipes.Justfile contains no default recipe.Justfile contains no choosable recipes.Could not find source file for import.Failed to get homedirFormatted justfile differs from original.Dotenv file not foundFound multiple source files for module ``:  but takes  but takes at least  but takes at most Assert failed: Backtick failed for an unknown reasonBacktick failed with exit code Backtick was terminated by signal Backtick succeeded but `just` was interrupted by signal Backtick could not be run because just could not find the shell:\nBacktick could not be run because just could not run the shell:\nBacktick could not be run because of an IO error while launching the shell:\nBacktick succeeded but stdout was not utf8: Chooser `` invocation failed: Failed to read output from chooser `` failed: Failed to write to chooser `` in `` is circular` failed on line ` failed with exit code Failed to invoke  failed: Cygpath failed with exit code  while translating recipe `` shebang interpreter pathCygp", 5))
                            {
                                if ((char)v5.equal(v6, "executable_directoryextensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequi", 20))
                                {
                                    v18 = 0;
                                }
                                else if (!(char)v5.equal(v6, "extensionfile_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha2", 9) && !(char)v5.equal(v6, "file_namefile_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_", 9) && !(char)v5.equal(v6, "file_stemhome_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshout", 9))
                                {
                                    if ((char)v5.equal(v6, "home_directoryinvocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcas", 14))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "invocation_directoryinvocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakeca", 20))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "invocation_directory_nativeis_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_fi", 27))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "is_dependencyjust_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_ma", 13))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "joinuuid'\\''left\\(buenum|", 4))
                                    {
                                        v18 = 5;
                                    }
                                    else if ((char)v5.equal(v6, "just_executablejustfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_start", 15))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "just_pidnamepathstride: xidstart( ", 8))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, &g_469778, 8))
                                    {
                                        v18 = 0;
                                    }
                                    else if ((char)v5.equal(v6, "justfile_directorykebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matc", 18))
                                    {
                                        v18 = 0;
                                    }
                                    else if (!(char)v5.equal(v6, "kebabcaselowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseu", 9) && !(char)v5.equal(v6, "lowercamelcaselowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasew", 14) && !(char)v5.equal(v6, "lowercasemodule_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_ex", 9))
                                    {
                                        if ((char)v5.equal(v6, "module_directoryInterpolationEndRemote I/O error", 16))
                                        {
                                            v18 = 0;
                                        }
                                        else if ((char)v5.equal(v6, "module_fileosos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensionca", 11))
                                        {
                                            v18 = 0;
                                        }
                                        else if ((char)v5.equal(v6, &g_469220, 8))
                                        {
                                            v18 = 0;
                                        }
                                        else if ((char)v5.equal(v6, "osos_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglo", 2))
                                        {
                                            v18 = 0;
                                        }
                                        else if ((char)v5.equal(v6, "os_familypath_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfigloca", 9))
                                        {
                                            v18 = 0;
                                        }
                                        else if (!(char)v5.equal(v6, "parent_directory", 16) && !(char)v5.equal(v6, "path_existsprependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configl", 11))
                                        {
                                            if ((char)v5.equal(v6, "prependquotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataex", 7))
                                            {
                                                v18 = 4;
                                            }
                                            else if (!(char)v5.equal(v6, "quotereplacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutabl", 5) && !(char)v5.equal(v6, "read'::']", 4))
                                            {
                                                if ((char)v5.equal(v6, "replacereplace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWork", 7))
                                                {
                                                    v18 = 6;
                                                }
                                                else if ((char)v5.equal(v6, "replace_regexrequiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking dir", 13))
                                                {
                                                    v18 = 6;
                                                }
                                                else if (!(char)v5.equal(v6, "requiresemver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not", 7))
                                                {
                                                    if ((char)v5.equal(v6, "semver_matchessha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid ", 14))
                                                    {
                                                        v18 = 4;
                                                    }
                                                    else if (!(char)v5.equal(v6, "sha256sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 6) && !(char)v5.equal(v6, "sha256_fileshoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 11))
                                                    {
                                                        if ((char)v5.equal(v6, "shellInvoke <SHELL> to run recipesshell-argInvoke shell with <SHELL-ARG> as an argumentSHELL-COMMANDshell-commandCOMMANDInvoke <COMMAND> with the shell used to run recipe lines and backticksTEMPDIRJUST_TEMPDIRtempdirSave temporary files to <TEMPDIR>.TIMEST", 5))
                                                        {
                                                            v18 = 3;
                                                        }
                                                        else if (!(char)v5.equal(v6, "shoutykebabcaseshoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 15) && !(char)v5.equal(v6, "shoutysnakecasesnakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 15) && !(char)v5.equal(v6, "snakecasesource_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 9))
                                                        {
                                                            if ((char)v5.equal(v6, "source_directory", 16))
                                                            {
                                                                v18 = 0;
                                                            }
                                                            else if ((char)v5.equal(v6, "source_filestyletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 11))
                                                            {
                                                                v18 = 0;
                                                            }
                                                            else if (!(char)v5.equal(v6, "styletitlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 5) && !(char)v5.equal(v6, "titlecasetrim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 9) && !(char)v5.equal(v6, "trimf", 4) && !(char)v5.equal(v6, "trim_endseparateS", 8))
                                                            {
                                                                if ((char)v5.equal(v6, "trim_end_matchtrim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 14))
                                                                {
                                                                    v18 = 4;
                                                                }
                                                                else if ((char)v5.equal(v6, "trim_end_matches", 16))
                                                                {
                                                                    v18 = 4;
                                                                }
                                                                else if (!(char)v5.equal(v6, "trim_starttrim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 10))
                                                                {
                                                                    if ((char)v5.equal(v6, "trim_start_match", 16))
                                                                    {
                                                                        v18 = 4;
                                                                    }
                                                                    else if ((char)v5.equal(v6, "trim_start_matchesuppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 18))
                                                                    {
                                                                        v18 = 4;
                                                                    }
                                                                    else if (!(char)v5.equal(v6, "uppercamelcaseuppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 14) && !(char)v5.equal(v6, "uppercasewhichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 9))
                                                                    {
                                                                        if ((char)v5.equal(v6, "uuid'\\''left\\(buenum|", 4))
                                                                        {
                                                                            v18 = 0;
                                                                        }
                                                                        else if (!(char)v5.equal(v6, "whichwithout_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 5))
                                                                        {
                                                                            v18 = ((char)v5.equal(v6, "without_extensioncacheconfiglocal configlocal dataexecutableWorking directory is not valid unicode: ", 17) ? 1 : 7);
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
    }
    core::ptr::drop_in_place<alloc::string::String>(&v4);
    return v18;
}
