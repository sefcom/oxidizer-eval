long long uu_tac::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned long v4;  // [bp-0x574]
    unsigned int v5;  // [bp-0x56c]
    char v6;  // [bp-0x568]
    unsigned int v7;  // [bp-0x2f0]
    char v8;  // [bp-0x2ec]
    unsigned long long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v6.new(uucore::util_name(), v14);
    v3.version(&v6);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...Write each file to standard output, last line first.beforeregexseparator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlin", 24);
    v6.override_usage(&v3, &v0);
    v3.about(&v6);
    memcpy(&v6, &v3, 700);
    v9 = 549755814016 | v4;
    v10 = v5;
    v3.new("beforeregexseparator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 6);
    v0.short(&v3, 98);
    v3.long(&v0, "beforeregexseparator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 6);
    v0.help(&v3, "attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 44);
    v11.action(&v0, 2);
    v3.arg(&v6, &v11);
    v6.new("regexseparator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 5);
    v0.short(&v6, 114);
    v6.long(&v0, "regexseparator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 5);
    v0.help(&v6, "interpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    v11.action(&v0, 2);
    v6.arg(&v3, &v11);
    v3.new("separator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 9);
    v0.short(&v3, 115);
    v3.long(&v0, "separator(uutils coreutils) 0.0.30attach the separator before instead of afterinterpret the sequence as a regular expressionuse STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 9);
    v0.help(&v3, "use STRING as the separator instead of newlineSTRINGsrc/uu/tac/src/tac.rs", 46);
    v11.value_name(&v0);
    v3.arg(&v6, &v11);
    v6.new("filemode{", 4);
    memcpy(&v0, &v6, 632);
    v1 = v7 | 4;
    v2 = *((int *)&v8);
    v6.action(&v0, 1);
    v0.value_hint(&v6);
    a0.arg(&v3, &v0);
    return a0;
}
