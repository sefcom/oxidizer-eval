long long uu_env::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0]
    char v2;  // [bp-0x830]
    unsigned int v3;  // [bp-0x574]
    unsigned long long v4;  // [bp-0x570]
    char v5;  // [bp-0x568]
    unsigned int v6;  // [bp-0x2ac]
    unsigned long v7;  // [bp-0x2a8]
    char v8;  // [bp-0x2a0]

    v5.new();
    v2.version(&v5);
    v5.about(&v2);
    uucore::format_usage(&v1, "{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]A mere - implies -i. If no COMMAND, print the resulting environment.ignore-environmentstart with an empty environmentchdirDIRchange working directory to DIRend each output line with a 0 byte rather than ", 53);
    v2.override_usage(&v5, &v1);
    v5.after_help(&v2);
    memcpy(&v2, &v5, 700);
    v3 = 160 | v6;
    v4 = 128 | v7;
    v5.new("ignore-environmentstart with an empty environmentchdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior ", 18);
    v1.short(&v5, 105);
    v5.long(&v1, "ignore-environmentstart with an empty environmentchdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior ", 18);
    v1.help(&v5, "start with an empty environmentchdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/o", 31);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("chdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from", 5);
    v1.short(&v2, 67);
    v2.long(&v1, "chdirDIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from", 5);
    v1.number_of_values(&v2, 1);
    v2.value_name(&v1, "DIRchange working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from the ", 3);
    v0 = 2;
    v1.value_parser(&v2, &v0);
    v2.value_hint(&v1, 4);
    v1.help(&v2, "change working directory to DIRend each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from the env", 31);
    v2.arg(&v5, &v1);
    v5.new("nullXCPUBOLDBlue", 4);
    v1.short(&v5, 48);
    v5.long(&v1, "nullXCPUBOLDBlue", 4);
    v1.help(&v5, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from the environmentdebugprint verbose info", 99);
    v8.action(&v1, 2);
    v5.arg(&v2, &v8);
    v2.new("fileTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v1.short(&v2, 102);
    v2.long(&v1, "fileTSTPi128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v1.value_name(&v2, "PATHvarsTERMtruemainarg[charSTOPTTIN", 4);
    v2.value_hint(&v1, 3);
    v1.value_parser(&v2, &v0);
    v2.action(&v1, 1);
    v1.help(&v2, "read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to p", 93);
    v2.arg(&v5, &v1);
    v5.new("unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the comma", 5);
    v1.short(&v5, 117);
    v5.long(&v1, "unsetremove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the comma", 5);
    v1.value_name(&v5, "NAMEAnsiTRAPKILL -- ", 4);
    v5.action(&v1, 1);
    v1.value_parser(&v5, &v0);
    v8.help(&v1, "remove variable from the environmentdebugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command be", 36);
    v5.arg(&v2, &v8);
    v2.new("debugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a ", 5);
    v1.short(&v2, 118);
    v2.long(&v1, "debugprint verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a ", 5);
    v1.action(&v2, 4);
    v8.help(&v1, "print verbose information for each processing stepsplit-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a defau", 50);
    v2.arg(&v5, &v8);
    v5.new("split-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset ", 12);
    v1.short(&v5, 83);
    v5.long(&v1, "split-stringSprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset ", 12);
    v1.value_name(&v5, "Sprocess and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of ", 1);
    v5.action(&v1, 0);
    v1.value_parser(&v5, &v0);
    v8.help(&v1, "process and split S into separate arguments; used to pass multiple arguments on shebang linesargv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of S", 93);
    v5.arg(&v2, &v8);
    v2.new("argv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or", 5);
    v1.overrides_with(&v2);
    v2.short(&v1, 97);
    v1.long(&v2, "argv0aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or", 5);
    v2.value_name(&v1, "aOverride the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or dire", 1);
    v1.action(&v2, 0);
    v2.value_parser(&v1, &v0);
    v1.help(&v2, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or direc", 124);
    v2.arg(&v5, &v1);
    v5.new("varsTERMtruemainarg[charSTOPTTIN", 4);
    v1.action(&v5, 1);
    v8.value_parser(&v1, &v0);
    v5.arg(&v2, &v8);
    v2.new("ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 13);
    v1.long(&v2, "ignore-signalSIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 13);
    v2.value_name(&v1, "SIGset handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 3);
    v1.action(&v2, 1);
    v2.value_parser(&v1, &v0);
    v1.help(&v2, "set handling of SIG signal(s) to do nothingvariable name issue (at ): Error: input args:\n]: \n: No such file or directory\nuse -[v]S to pass options in shebang lines", 43);
    a0.arg(&v5, &v1);
    return a0;
}
