long long uu_fold::uu_app(unsigned long long a0)
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
    unsigned int v9;  // [bp-0x2f0]
    char v10;  // [bp-0x2ec]
    unsigned long long v11;  // [bp-0x2ac]
    unsigned int v12;  // [bp-0x2a4]
    char v13;  // [bp-0x2a0]
    unsigned long long v16;  // rdx

    v8.new(uucore::util_name(), v16);
    v3.version(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...Writes each file (or standard input if no files are given)\nto standard output whilst breaking long linesbytescount using bytes rather than columns (meaning control characters such as newline are not treated specially)spacesbreak lin", 24);
    v8.override_usage(&v3, &v0);
    v3.about(&v8);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    v3.new("bytescount using bytes rather than columns (meaning control characters such as newline are not treated specially)spacesbreak lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold", 5);
    v0.long(&v3, "bytescount using bytes rather than columns (meaning control characters such as newline are not treated specially)spacesbreak lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold", 5);
    v3.short(&v0, 98);
    v0.help(&v3, "count using bytes rather than columns (meaning control characters such as newline are not treated specially)spacesbreak lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 108);
    v13.action(&v0, 2);
    v3.arg(&v8, &v13);
    v8.new("spacesbreak lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 6);
    v0.long(&v8, "spacesbreak lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 6);
    v8.short(&v0, 115);
    v0.help(&v8, "break lines at word boundaries rather than a hard cut-offwidthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 57);
    v13.action(&v0, 2);
    v8.arg(&v3, &v13);
    v3.new("widthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 5);
    v0.long(&v3, "widthset WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 5);
    v3.short(&v0, 119);
    v0.help(&v3, "set WIDTH as the maximum line width rather than 80WIDTHsrc/uu/fold/src/fold.rs", 50);
    v3.value_name(&v0);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 32;
    v2 = *((int *)&v5);
    v3.arg(&v8, &v0);
    v8.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 4;
    v2 = *((int *)&v10);
    v8.action(&v0, 1);
    v0.value_hint(&v8);
    a0.arg(&v3, &v0);
    return a0;
}
