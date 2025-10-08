long long uu_sum::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x830]
    unsigned int v1;  // [bp-0x5b8]
    unsigned int v2;  // [bp-0x5b4]
    unsigned long v3;  // [bp-0x574]
    unsigned int v4;  // [bp-0x56c]
    char v5;  // [bp-0x568]
    unsigned int v6;  // [bp-0x2f0]
    unsigned int v7;  // [bp-0x2ec]
    char v8;  // [bp-0x2e8]
    unsigned long long v9;  // [bp-0x2c]
    unsigned int v10;  // [bp-0x24]
    unsigned long long v13;  // rdx

    v8.new(uucore::util_name(), v13);
    v0.version(&v8);
    uucore::format_usage(&v5, "{} [OPTION]... [FILE]...Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input.use the BSD sum algorithm, use 1K blocks (default)use System V sum algorithm, use 512 bytes blocks", 24);
    v8.override_usage(&v0, &v5);
    v0.about(&v8);
    memcpy(&v8, &v0, 700);
    v9 = 549755814016 | v3;
    v10 = v4;
    v0.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v5.action(&v0, 1);
    memcpy(&v0, &v5, 632);
    v1 = v6 | 4;
    v2 = v7;
    v5.value_hint(&v0);
    v0.arg(&v8, &v5);
    v8.new("r(uutils coreutils) 0.0.30{} [OPTION]... [FILE]...Checksum and count the blocks in a file.\n\nWith no FILE, or when FILE is -, read standard input.use the BSD sum algorithm, use 1K blocks (default)use System V sum algorithm, use 512 bytes blocks", 1);
    v5.short(&v8, 114);
    v8.help(&v5, "use the BSD sum algorithm, use 1K blocks (default)use System V sum algorithm, use 512 bytes blocks", 50);
    v5.action(&v8, 2);
    v8.arg(&v0, &v5);
    v0.new("sysv", 4);
    v5.short(&v0, 115);
    v0.long(&v5);
    v5.help(&v0, "use System V sum algorithm, use 512 bytes blocks", 48);
    v0.action(&v5, 2);
    a0.arg(&v8, &v0);
    return a0;
}
