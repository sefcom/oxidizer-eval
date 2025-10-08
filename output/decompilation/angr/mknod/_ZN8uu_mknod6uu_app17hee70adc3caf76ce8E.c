long long uu_mknod::uu_app(unsigned long long a0)
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
    char v13;  // [bp-0x2a0], Other Possible Types: unsigned long long
    unsigned long long v16;  // rdx

    v3.new(uucore::util_name(), v16);
    v8.version(&v3);
    uucore::format_usage(&v0, "{} [OPTION]... NAME TYPE [MAJOR MINOR]Mandatory arguments to long options are mandatory for short options too.\n-m, --mode=MODE    set file permission bits to MODE, not a=rw - umask\n\nBoth MAJOR and MINOR must be specified when TYPE is b, c, or u, and they\nm", 38);
    v3.override_usage(&v8, &v0);
    v8.after_help(&v3);
    v3.about(&v8);
    memcpy(&v8, &v3, 700);
    v11 = 549755814016 | v6;
    v12 = v7;
    v3.new("modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v0.short(&v3, 109);
    v3.long(&v0, "modei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNGESTRPIPENotFoundTimedOutENETDOWN\n       ", 4);
    v0.value_name(&v3, "MODEEADV", 4);
    v13.help(&v0, "set file permission bits to MODE, not a=rw - umaskname of the new filetype of the new file (b, c, u or p)majormajor file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is spec", 50);
    v3.arg(&v8, &v13);
    v8.new("name", 4);
    v0.value_name(&v8, "NAMEAnsi -- ", 4);
    v8.help(&v0, "name of the new filetype of the new file (b, c, u or p)majormajor file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security conte", 20);
    memcpy(&v0, &v8, 632);
    v1 = v9 | 1;
    v2 = *((int *)&v10);
    v13.value_hint(&v0);
    v8.arg(&v3, &v13);
    v3.new("typeCyan    TYPE\"`$\\MODEEADV", 4);
    v0.value_name(&v3, "TYPE\"`$\\MODEEADV", 4);
    v3.help(&v0, "type of the new file (b, c, u or p)majormajor file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must s", 35);
    memcpy(&v0, &v3, 632);
    v1 = v4 | 1;
    v2 = *((int *)&v5);
    v13.value_parser(&v0);
    v3.arg(&v8, &v13);
    v8.new("majormajor file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinv", 5);
    v0.value_name(&v8, "majormajor file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinv", 5);
    v8.help(&v0, "major file typeminorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid ", 15);
    v13.value_parser();
    v0.value_parser(&v8, &v13);
    v8.arg(&v3, &v0);
    v3.new("minorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 5);
    v0.value_name(&v3, "minorminor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 5);
    v3.help(&v0, "minor file typezset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 15);
    v13.value_parser();
    v0.value_parser(&v3, &v13);
    v3.arg(&v8, &v0);
    v8.new("zset SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 1);
    v0.short(&v8, 90);
    v8.help(&v0, "set SELinux security context of each created directory to the default typecontextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 74);
    v0.action(&v8);
    v8.arg(&v3, &v0);
    v3.new("contextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 7);
    v0.long(&v3, "contextCTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 7);
    v3.value_name(&v0, "CTXlike -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 3);
    v13 = 1;
    v0.value_parser(&v3, &v13);
    v3.num_args(&v0, 0, 1);
    memcpy(&v0, &v3, 632);
    v1 = 128 | v4;
    v2 = *((int *)&v5);
    v3.help(&v0, "like -Z, or if CTX is specified then set the SELinux or SMACK security context to CTXmode must specify only file permission bitsinvalid mode ()", 85);
    a0.arg(&v8, &v3);
    return a0;
}
