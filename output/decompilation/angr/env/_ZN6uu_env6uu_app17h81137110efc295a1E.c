long long uu_env::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xae0]
    unsigned long long v1;  // [bp-0xad8]
    unsigned long long v2;  // [bp-0xad0]
    char v3;  // [bp-0xac8]
    unsigned long long v4;  // [bp-0xac0]
    unsigned long long v5;  // [bp-0xab8]
    char v6;  // [bp-0xab0]
    unsigned int v7;  // [bp-0x7f4]
    unsigned long long v8;  // [bp-0x7f0]
    char v9;  // [bp-0x7e8]
    char v10;  // [bp-0x568]
    unsigned long long v11;  // [bp-0x558]
    unsigned int v12;  // [bp-0x2ac]
    char v13;  // [bp-0x2a8]
    char v14;  // [bp-0x298]
    int v15;  // [bp-0x298]
    int v16;  // [bp-0x298]
    int v17;  // [bp-0x298]
    int v18;  // [bp-0x298]
    unsigned long long v19;  // [bp-0x290]
    unsigned long long v20;  // [bp-0x288]

    v10.new("uu_env(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-si", 6);
    v6.version(&v10, "(uutils coreutils) 0.1.0env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSI", 24);
    uucore::mods::locale::get_message(&v9, "env-aboutenv-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signale", 9);
    v10.about(&v6, &v9);
    uucore::mods::locale::get_message(&v3, "env-usageenv-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-", 9);
    uucore::format_usage(&v9, v4, v5);
    v6.override_usage(&v10, &v9);
    uucore::mods::locale::get_message(&v9, "env-after-helpignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-", 14);
    v10.after_help(&v6, &v9);
    memcpy(&v6, &v10, 700);
    v7 = 160 | v12;
    v8 = 128 | *((long long *)&v13);
    v10.new("ignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-", 18);
    v9.short(&v10, 105);
    v10.long(&v9, "ignore-environmentenv-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-", 18);
    uucore::mods::locale::get_message(&v14, "env-help-ignore-environmentchdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput", 27);
    v9.help(&v10, &v14);
    v14.action(&v9, 2);
    v10.arg(&v6, &v14);
    v6.new("chdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.short(&v6, 67);
    v6.long(&v9, "chdirDIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.number_of_values(&v6, 1);
    v6.value_name(&v9, "DIRenv-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 3);
    v0 = 2;
    v20 = v2;
    *((unsigned long long *)&v18) = v0;
    v19 = v1;
    v9.value_parser(&v6, &(unsigned long long)v18);
    v6.value_hint(&v9, 4);
    uucore::mods::locale::get_message(&(unsigned long long)v18, "env-help-chdirenv-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 14);
    v9.help(&v6, &(unsigned long long)v18);
    v6.arg(&v10, &v9);
    v10.new("nullXCPUBOLDBlue", 4);
    v9.short(&v10, 48);
    v10.long(&v9, "nullXCPUBOLDBlue", 4);
    uucore::mods::locale::get_message(&(unsigned long long)v18, "env-help-nullenv-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13);
    v9.help(&v10, &(unsigned long long)v18);
    (unsigned long long)v18.action(&v9, 2);
    v10.arg(&v6, &(unsigned long long)v18);
    v6.new("fileTSTPsizei128", 4);
    v9.short(&v6, 102);
    v6.long(&v9, "fileTSTPsizei128", 4);
    v9.value_name(&v6, "PATHvarsTERMLANGtrue.ftlmainarg[", 4);
    v6.value_hint(&v9, 3);
    v20 = v2;
    *((int128_t *)&v15) = *((int128_t *)&v0);
    v9.value_parser(&v6, &(unsigned long long)v18);
    v6.action(&v9, 1);
    uucore::mods::locale::get_message(&(unsigned long long)v18, "env-help-fileunsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13);
    v9.help(&v6, &(unsigned long long)v18);
    v6.arg(&v10, &v9);
    v10.new("unsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.short(&v10, 117);
    v10.long(&v9, "unsetenv-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.value_name(&v10, "NAMETRAPKILLzeroAnsi -- ", 4);
    v10.action(&v9, 1);
    v20 = v2;
    *((int128_t *)&v16) = *((int128_t *)&v0);
    v9.value_parser(&v10, &(unsigned long long)v18);
    uucore::mods::locale::get_message(&v10, "env-help-unsetdebugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 14);
    (unsigned long long)v18.help(&v9, &v10);
    v10.arg(&v6, &(unsigned long long)v18);
    v6.new("debugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.short(&v6, 118);
    v6.long(&v9, "debugenv-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.action(&v6, 4);
    uucore::mods::locale::get_message(&v6, "env-help-debugsplit-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 14);
    (unsigned long long)v18.help(&v9, &v6);
    v6.arg(&v10, &(unsigned long long)v18);
    v10.new("split-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 12);
    v9.short(&v10, 83);
    v10.long(&v9, "split-stringSenv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 12);
    v9.value_name(&v10, "Senv-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 1);
    v10.action(&v9, 0);
    v20 = v2;
    *((int128_t *)&v17) = *((int128_t *)&v0);
    v9.value_parser(&v10, &(unsigned long long)v18);
    uucore::mods::locale::get_message(&v10, "env-help-split-stringargv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 21);
    (unsigned long long)v18.help(&v9, &v10);
    v10.arg(&v6, &(unsigned long long)v18);
    v6.new("argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v9.overrides_with(&v6, "argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v6.short(&v9, 97);
    v9.long(&v6, "argv0aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 5);
    v6.value_name(&v9, "aenv-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 1);
    v9.action(&v6, 0);
    v20 = v2;
    *((int128_t *)&v18) = *((int128_t *)&v0);
    v6.value_parser(&v9, &(unsigned long long)v18);
    uucore::mods::locale::get_message(&(unsigned long long)v18, "env-help-argv0ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 14);
    v9.help(&v6, &(unsigned long long)v18);
    v6.arg(&v10, &v9);
    v10.new("varsTERMLANGtrue.ftlmainarg[", 4);
    v9.action(&v10, 1);
    v11 = v2;
    memcpy(&v10, &v0, 16);
    (unsigned long long)v18.value_parser(&v9, &v10);
    v10.arg(&v6, &(unsigned long long)v18);
    v6.new("ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13);
    v9.long(&v6, "ignore-signalSIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 13);
    v6.value_name(&v9, "SIGenv-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 3);
    v9.action(&v6, 1);
    v6.value_parser(&v9, &v0);
    uucore::mods::locale::get_message(&(unsigned long long)v18, "env-help-ignore-signalenv-error-variable-name-issueenv-error-genericinput args:\n]: \n: ", 22);
    v9.help(&v6, &(unsigned long long)v18);
    a0.arg(&v10, &v9);
    ::0x4b2810::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return a0;
}
