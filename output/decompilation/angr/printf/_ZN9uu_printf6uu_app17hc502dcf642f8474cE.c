long long uu_printf::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0x848]
    char v1;  // [bp-0x830]
    char v2;  // [bp-0x574], Other Possible Types: unsigned long long
    char v3;  // [bp-0x570]
    unsigned int v4;  // [bp-0x56c]
    char v5;  // [bp-0x568]
    unsigned int v6;  // [bp-0x2ac]
    unsigned long long v7;  // [bp-0x2a8]
    unsigned int v8;  // [bp-0x2a4]
    char v9;  // [bp-0x2a0]
    unsigned long long v12;  // rdx

    v1.new(uucore::util_name(), v12);
    memcpy(&v5, &v1, 700);
    v6 = *((int *)&v2) | 2;
    v7 = *((long long *)&v3);
    v1.version(&v5);
    v5.about(&v1);
    v1.after_help(&v5);
    uucore::format_usage(&v9, "{} FORMAT [ARGUMENT]...\n{} OPTIONPrint help informationversionPrint version informationFORMAT", 33);
    v5.override_usage(&v1, &v9);
    memcpy(&v1, &v5, 700);
    v2 = 0x28000000280000 | *((long long *)&v6);
    v4 = v8;
    v5.new("helpNoneshim", 4);
    v9.long(&v5, "helpNoneshim", 4);
    v5.help(&v9, "Print help informationversionPrint version informationFORMAT", 22);
    v9.action(&v5, 5);
    v5.arg(&v1, &v9);
    v1.new("versionPrint version informationFORMAT", 7);
    v9.long(&v1, "versionPrint version informationFORMAT", 7);
    v1.help(&v9, "Print version informationFORMAT", 25);
    v9.action(&v1, 8);
    v1.arg(&v5, &v9);
    v5.new("FORMAT", 6);
    v0 = 2;
    v9.value_parser(&v5, &v0);
    v5.arg(&v1, &v9);
    v1.new("ARGUMENT", 8);
    v9.action(&v1, 1);
    v1.value_parser(&v9, &v0);
    a0.arg(&v5, &v1);
    return a0;
}
