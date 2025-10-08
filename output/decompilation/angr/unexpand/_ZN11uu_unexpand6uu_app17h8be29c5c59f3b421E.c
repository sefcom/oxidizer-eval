long long uu_unexpand::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    char v5;  // [bp-0x5b4]
    unsigned long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v3.version(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...Convert blanks in each `FILE` to tabs, writing to standard output.\nWith no `FILE`, or when `FILE` is `-`, read standard input.convert all blanks, instead of just initial blanksconvert only leading sequences of blanks (overrides -a)u", 24);
    v8.override_usage(&v3, &v0);
    v3.about(&v8);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    v3.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 4;
    v2 = *((int *)&v5);
    v3.action(&v0, 1);
    v0.value_hint(&v3);
    v3.arg(&v8, &v0);
    v8.new("allfirst-onlyno-utf8--first-only--all-a--tabs=", 3);
    v0.short(&v8, 97);
    v8.long(&v0, "allfirst-onlyno-utf8--first-only--all-a--tabs=", 3);
    v0.help(&v8, "convert all blanks, instead of just initial blanksconvert only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather th", 50);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("first-onlyno-utf8--first-only--all-a--tabs=", 10);
    v0.long(&v3, "first-onlyno-utf8--first-only--all-a--tabs=", 10);
    v3.help(&v0, "convert only leading sequences of blanks (overrides -a)use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t : \ntab size contains invalid character(s", 55);
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("tabskindAuto/", 4);
    v0.short(&v8, 116);
    v8.long(&v0, "tabskindAuto/", 4);
    v0.help(&v8, "use comma separated LIST of tab positions or have tabs N characters apart instead of 8 (enables -a)N, LISTinterpret input file as 8-bit ASCII rather than UTF-8\t : \ntab size contains invalid character(s): ", 99);
    v8.action(&v0, 1);
    v0.value_name(&v8);
    v8.arg(&v3, &v0);
    v3.new("no-utf8--first-only--all-a--tabs=", 7);
    v0.short(&v3, 85);
    v3.long(&v0, "no-utf8--first-only--all-a--tabs=", 7);
    v0.help(&v3, "interpret input file as 8-bit ASCII rather than UTF-8\t : \ntab size contains invalid character(s): ", 53);
    v3.action(&v0, 2);
    a0.arg(&v8, &v3);
    return a0;
}
