long long uu_expand::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    unsigned int v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v3.version(&v8);
    v8.about(&v3);
    v3.after_help(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...do not convert tabs after non blanksN, LISThave tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\nfailed to write outputtab s", 24);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 584115552392 | v9;
    v7 = v10;
    v8.new("initialno-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v0.long(&v8, "initialno-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v8.short(&v0, 105);
    v0.help(&v8, "do not convert tabs after non blanksN, LISThave tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\nfailed to write outputtab size contains invalid cha", 36);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("tabskindAuto/", 4);
    v0.long(&v3, "tabskindAuto/", 4);
    v3.short(&v0, 116);
    v0.value_name(&v3);
    v3.action(&v0, 1);
    v0.help(&v3, "have tabs N characters apart, not 8 or use comma separated list of explicit tab positionsinterpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\nfailed to write outputtab size contains invalid character(s):  specifier not at start of numbe", 89);
    v3.arg(&v8, &v0);
    v8.new("no-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v0.long(&v8, "no-utf8FILES/+src/uu/expand/src/expand.rs", 7);
    v8.short(&v0, 85);
    v0.help(&v8, "interpret input file as 8-bit ASCII rather than UTF-8: : Is a directory\n\nfailed to write outputtab size contains invalid character(s):  specifier not at start of number:  specifier only allowed with the last valuetab stop is too large ", 53);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("FILES/+src/uu/expand/src/expand.rs", 5);
    v0.action(&v3, 1);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 4;
    v5 = v2;
    v0.value_hint(&v3);
    a0.arg(&v8, &v0);
    return a0;
}
