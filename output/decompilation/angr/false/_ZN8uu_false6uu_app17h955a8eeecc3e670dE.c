long long uu_false::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned long v1;  // [bp-0x574]
    unsigned int v2;  // [bp-0x56c]
    char v3;  // [bp-0x568]
    unsigned long long v4;  // [bp-0x2ac]
    unsigned int v5;  // [bp-0x2a4]
    char v6;  // [bp-0x2a0]
    unsigned long long v9;  // rdx

    v0.new(uucore::util_name(), v9);
    v3.version(&v0);
    v0.about(&v3);
    memcpy(&v3, &v0, 700);
    v4 = 0x28000000280000 | v1;
    v5 = v2;
    v0.new("helpNoneshim", 4);
    v6.long(&v0, "helpNoneshim", 4);
    v0.help(&v6, "Print help informationversionPrint version information", 22);
    v6.action(&v0, 5);
    v0.arg(&v3, &v6);
    v3.new("versionPrint version information", 7);
    v6.long(&v3, "versionPrint version information", 7);
    v3.help(&v6, "Print version information", 25);
    v6.action(&v3, 8);
    a0.arg(&v0, &v6);
    return a0;
}
