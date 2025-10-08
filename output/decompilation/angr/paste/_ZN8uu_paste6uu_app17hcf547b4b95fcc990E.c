long long uu_paste::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned long long v4;  // [bp-0x574]
    unsigned int v5;  // [bp-0x56c]
    char v6;  // [bp-0x568]
    unsigned long v7;  // [bp-0x2ac]
    unsigned int v8;  // [bp-0x2a4]
    char v9;  // [bp-0x2a0]
    unsigned int v10;  // [bp-0x28]
    unsigned int v11;  // [bp-0x24]
    unsigned long long v14;  // rdx

    v3.new(uucore::util_name(), v14);
    v6.version(&v3);
    v3.about(&v6);
    uucore::format_usage(&v0, "{} [OPTIONS] [FILE]...serialpaste one file at a time instead of in paralleldelimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 22);
    v6.override_usage(&v3, &v0);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | v7;
    v5 = v8;
    v6.new("serialpaste one file at a time instead of in paralleldelimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 6);
    v0.long(&v6, "serialpaste one file at a time instead of in paralleldelimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 6);
    v6.short(&v0, 115);
    v0.help(&v6, "paste one file at a time instead of in paralleldelimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 47);
    v9.action(&v0, 2);
    v6.arg(&v3, &v9);
    v3.new("delimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 10);
    v0.long(&v3, "delimitersreuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 10);
    v3.short(&v0, 100);
    v0.help(&v3, "reuse characters from LIST instead of TABs\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 42);
    v3.value_name(&v0, "LISTkindAuto/");
    v0.default_value(&v3, "\t-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ");
    memcpy(&v9, &v0, 632);
    v10 = 0x400 | v1;
    v11 = v2;
    v3.arg(&v6, &v9);
    v6.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    v0.value_name(&v6, "FILEchar");
    v6.action(&v0, 1);
    v0.default_value(&v6, "-zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ");
    v9.value_hint(&v0);
    v6.arg(&v3, &v9);
    v3.new("zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 15);
    v0.long(&v3, "zero-terminatedline delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 15);
    v3.short(&v0, 122);
    v0.help(&v3, "line delimiter is NUL, not newlinesrc/uu/paste/src/paste.rsdelimiter list ends with an unescaped backslash: ", 34);
    v3.action(&v0, 2);
    a0.arg(&v6, &v3);
    return a0;
}
